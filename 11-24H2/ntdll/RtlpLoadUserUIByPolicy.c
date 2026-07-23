/*
 * XREFs of RtlpLoadUserUIByPolicy @ 0x1800C9BA0
 * Callers:
 *     <none>
 * Callees:
 *     GetGlobalizationUserModelType @ 0x180014FA8 (GetGlobalizationUserModelType.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x180015500 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlOpenCurrentUser @ 0x180017270 (RtlOpenCurrentUser.c)
 *     RtlpMuiRegCreateLanguageList @ 0x1800CA3B0 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMuiRegGrowLanguageList @ 0x1800CA450 (RtlpMuiRegGrowLanguageList.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1800CB894 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1800CBBD4 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtOpenKey @ 0x180160290 (NtOpenKey.c)
 */

__int64 __fastcall RtlpLoadUserUIByPolicy(void *a1, __int64 a2, __int64 *a3)
{
  size_t v6; // rax
  int v7; // ebx
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
  unsigned __int8 v23; // [rsp+A8h] [rbp+28h] BYREF
  __int16 v24; // [rsp+B8h] [rbp+38h] BYREF

  Handle = 0LL;
  KeyHandle = 0LL;
  v23 = 0;
  v24 = 0;
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
          v7 = -1073741595;
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
    v7 = v14;
    if ( v14 < 0 )
      goto LABEL_8;
    ObjectAttributes.RootDirectory = Handle;
  }
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v19;
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v7 < 0 )
    goto LABEL_8;
  v7 = RtlpLoadPolicyLanguageSpec(KeyHandle, a2, &v23, &v24);
  if ( v7 )
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
        v7 = -1073741801;
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
      v7 = -1073741801;
      goto LABEL_8;
    }
  }
  *(_WORD *)(*(_QWORD *)(v9 + 24) + 6LL * *(unsigned __int16 *)(v9 + 4)) = v23;
  *(_WORD *)(*(_QWORD *)(*a3 + 24) + 6LL * (unsigned __int16)(*(_WORD *)(*a3 + 4))++ + 4) = v24;
LABEL_8:
  if ( KeyHandle )
  {
    NtClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v7;
}
