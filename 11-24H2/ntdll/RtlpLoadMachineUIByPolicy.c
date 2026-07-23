/*
 * XREFs of RtlpLoadMachineUIByPolicy @ 0x180101BA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLoadPolicyLanguageSpec @ 0x180015500 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegCreateLanguageList @ 0x1800CA3B0 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMuiRegGrowLanguageList @ 0x1800CA450 (RtlpMuiRegGrowLanguageList.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtOpenKey @ 0x180160290 (NtOpenKey.c)
 */

__int64 __fastcall RtlpLoadMachineUIByPolicy(HANDLE a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rsi
  size_t v5; // rax
  int v6; // ebx
  __int64 v8; // r8
  __int64 LanguageList; // rax
  HANDLE KeyHandle; // [rsp+20h] [rbp-50h] BYREF
  __int128 v11; // [rsp+28h] [rbp-48h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int8 v13; // [rsp+A8h] [rbp+38h] BYREF
  __int16 v14; // [rsp+B8h] [rbp+48h] BYREF

  KeyHandle = 0LL;
  v13 = 0;
  v4 = a2;
  v14 = 0;
  v11 = 0LL;
  if ( !a2 || !a3 )
  {
    v6 = -1073741811;
    goto LABEL_7;
  }
  if ( a1 )
  {
LABEL_11:
    v6 = RtlpLoadPolicyLanguageSpec(a1, a2, &v13, &v14);
    if ( v6 )
      goto LABEL_7;
    v8 = *a3;
    if ( *a3 )
    {
      if ( *(_WORD *)(v8 + 4) < *(_WORD *)(v8 + 6) )
        goto LABEL_15;
      LanguageList = RtlpMuiRegGrowLanguageList(*a3);
    }
    else
    {
      LanguageList = (__int64)RtlpMuiRegCreateLanguageList(1, 1, v4);
    }
    *a3 = LanguageList;
    v8 = LanguageList;
    if ( !LanguageList )
    {
      v6 = -1073741801;
      goto LABEL_7;
    }
LABEL_15:
    *(_WORD *)(*(_QWORD *)(v8 + 24) + 6LL * *(unsigned __int16 *)(v8 + 4)) = v13;
    *(_WORD *)(*(_QWORD *)(*a3 + 24) + 6LL * (unsigned __int16)(*(_WORD *)(*a3 + 4))++ + 4) = v14;
    goto LABEL_7;
  }
  DWORD1(v11) = 0;
  *((_QWORD *)&v11 + 1) = L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings";
  v5 = 2 * wcslen(L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  ObjectAttributes.RootDirectory = 0LL;
  if ( v5 >= 0xFFFE )
    LOWORD(v5) = -4;
  LOWORD(v11) = v5;
  WORD1(v11) = v5 + 2;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v11;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v6 >= 0 )
  {
    a1 = KeyHandle;
    a2 = v4;
    goto LABEL_11;
  }
LABEL_7:
  if ( KeyHandle )
    NtClose(KeyHandle);
  return (unsigned int)v6;
}
