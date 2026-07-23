/*
 * XREFs of RtlpLoadUserUIByPolicy @ 0x180088B20
 * Callers:
 *     <none>
 * Callees:
 *     RtlOpenCurrentUser @ 0x18005D890 (RtlOpenCurrentUser.c)
 *     RtlpMuiRegGrowLanguageList @ 0x180088948 (RtlpMuiRegGrowLanguageList.c)
 *     RtlpMuiRegCreateLanguageList @ 0x180089780 (RtlpMuiRegCreateLanguageList.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x18008A784 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x18008AAA4 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     GetGlobalizationUserModelType @ 0x18008C6B8 (GetGlobalizationUserModelType.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x18008CC10 (RtlpLoadPolicyLanguageSpec.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 */

__int64 __fastcall RtlpLoadUserUIByPolicy(void *a1, __int64 a2, __int64 *a3)
{
  size_t v6; // rax
  NTSTATUS PolicyLanguageSpec; // ebx
  __int64 v9; // r8
  __int64 LanguageList; // rax
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  NTSTATUS v14; // eax
  __int64 v15; // rax
  int v16; // [rsp+20h] [rbp-60h] BYREF
  HANDLE KeyHandle; // [rsp+28h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+30h] [rbp-50h] BYREF
  _WORD v19[2]; // [rsp+38h] [rbp-48h] BYREF
  int v20; // [rsp+3Ch] [rbp-44h]
  const wchar_t *v21; // [rsp+40h] [rbp-40h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF

  Handle = 0LL;
  KeyHandle = 0LL;
  if ( !a2 || !a3 )
    return 3221225485LL;
  v20 = 0;
  v21 = L"Software\\Policies\\Microsoft\\Control Panel\\Desktop";
  v6 = 2 * wcslen(L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
  if ( v6 >= 0xFFFE )
    LOWORD(v6) = -4;
  v19[0] = v6;
  v19[1] = v6 + 2;
  if ( a1 )
  {
    ObjectAttributes.RootDirectory = a1;
  }
  else
  {
    v11 = GetGlobalizationUserModelType() - 1;
    if ( v11 )
    {
      v13 = v11 - 1;
      if ( v13 )
      {
        if ( v13 != 1 )
        {
          PolicyLanguageSpec = -1073741595;
          goto LABEL_8;
        }
        v16 = 0;
        v14 = OpenGlobalizationUserSettingsKey_ForMua(0x2000000LL, v12, &Handle, &v16);
      }
      else
      {
        v14 = OpenGlobalizationUserSettingsKey_ForSingleUserModel(0x2000000u, &Handle);
      }
    }
    else
    {
      v14 = RtlOpenCurrentUser(0x2000000u, &Handle);
    }
    PolicyLanguageSpec = v14;
    if ( v14 < 0 )
      goto LABEL_8;
    ObjectAttributes.RootDirectory = Handle;
  }
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v19;
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  PolicyLanguageSpec = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( PolicyLanguageSpec < 0 )
    goto LABEL_8;
  PolicyLanguageSpec = RtlpLoadPolicyLanguageSpec(KeyHandle);
  if ( PolicyLanguageSpec )
    goto LABEL_8;
  v9 = *a3;
  if ( *a3 )
  {
    if ( *(_WORD *)(v9 + 4) >= *(_WORD *)(v9 + 6) )
    {
      v15 = RtlpMuiRegGrowLanguageList(*a3);
      *a3 = v15;
      v9 = v15;
      if ( !v15 )
      {
        PolicyLanguageSpec = -1073741801;
        goto LABEL_8;
      }
    }
  }
  else
  {
    LanguageList = RtlpMuiRegCreateLanguageList(1LL, 0LL, a2);
    *a3 = LanguageList;
    v9 = LanguageList;
    if ( !LanguageList )
    {
      PolicyLanguageSpec = -1073741801;
      goto LABEL_8;
    }
  }
  *(_WORD *)(*(_QWORD *)(v9 + 24) + 6LL * *(unsigned __int16 *)(v9 + 4)) = 0;
  *(_WORD *)(*(_QWORD *)(*a3 + 24) + 6LL * (unsigned __int16)(*(_WORD *)(*a3 + 4))++ + 4) = 0;
LABEL_8:
  if ( KeyHandle )
  {
    NtClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)PolicyLanguageSpec;
}
