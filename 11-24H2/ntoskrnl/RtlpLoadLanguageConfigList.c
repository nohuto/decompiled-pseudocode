/*
 * XREFs of RtlpLoadLanguageConfigList @ 0x14082BE20
 * Callers:
 *     RtlpMuiRegLoadRegistryInfo @ 0x14082D794 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     LdrpOpenKey @ 0x140784064 (LdrpOpenKey.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x14082BF64 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegCreateLanguageConfigList @ 0x14082C6A4 (RtlpMuiRegCreateLanguageConfigList.c)
 *     RtlpPopulateLanguageConfigList @ 0x14082D8F0 (RtlpPopulateLanguageConfigList.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpLoadLanguageConfigList(__int64 a1, __int64 *a2, __int64 a3)
{
  void *v5; // rsi
  __int64 v6; // r8
  int PolicyLanguageSpec; // ebx
  __int64 v8; // r8
  NTSTATUS v9; // eax
  void *v10; // rcx
  __int64 LanguageConfigList; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+48h] BYREF

  Handle = 0LL;
  v5 = 0LL;
  DestinationString = 0LL;
  if ( a2 && a3 )
  {
    v5 = (void *)*a2;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
    if ( LdrpOpenKey(&DestinationString, 0LL, v6, &Handle) >= 0 )
    {
      PolicyLanguageSpec = RtlpLoadPolicyLanguageSpec(Handle);
      if ( PolicyLanguageSpec >= 0 )
        goto LABEL_12;
      NtClose(Handle);
      Handle = 0LL;
    }
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
    v9 = LdrpOpenKey(&DestinationString, 0LL, v8, &Handle);
    if ( v9 >= 0 )
    {
      PolicyLanguageSpec = RtlpPopulateLanguageConfigList(Handle, a2, a3);
    }
    else
    {
      PolicyLanguageSpec = 0;
      if ( v9 != -1073741772 )
        PolicyLanguageSpec = v9;
    }
  }
  else
  {
    PolicyLanguageSpec = -1073741811;
  }
LABEL_12:
  if ( Handle )
    NtClose(Handle);
  if ( PolicyLanguageSpec >= 0 )
  {
    if ( !*a2 )
    {
      LanguageConfigList = RtlpMuiRegCreateLanguageConfigList(1LL);
      *a2 = LanguageConfigList;
      if ( !LanguageConfigList )
      {
        PolicyLanguageSpec = -1073741801;
LABEL_22:
        *a2 = (__int64)v5;
      }
    }
  }
  else if ( a2 )
  {
    v10 = (void *)*a2;
    if ( (void *)*a2 != v5 )
    {
      if ( v10 )
        ExFreePoolWithTag(v10, 0);
      goto LABEL_22;
    }
  }
  return (unsigned int)PolicyLanguageSpec;
}
