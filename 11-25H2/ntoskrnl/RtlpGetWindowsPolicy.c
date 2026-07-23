/*
 * XREFs of RtlpGetWindowsPolicy @ 0x1406EE9B8
 * Callers:
 *     RtlpMuiRegLoadLicInformation @ 0x1404C0FC4 (RtlpMuiRegLoadLicInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     ZwQueryLicenseValue @ 0x14069DD40 (ZwQueryLicenseValue.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall RtlpGetWindowsPolicy(PCWSTR SourceString, PULONG Type, PULONG ResultDataSize, _QWORD *a4)
{
  void *Pool2; // rbx
  NTSTATUS result; // eax
  NTSTATUS v9; // edi
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF

  Pool2 = 0LL;
  ValueName = 0LL;
  if ( !Type || !ResultDataSize || !a4 || !SourceString )
    return -1073741811;
  RtlInitUnicodeString(&ValueName, SourceString);
  result = ZwQueryLicenseValue(&ValueName, Type, 0LL, 0, ResultDataSize);
  if ( result >= 0 )
  {
    if ( !*ResultDataSize )
    {
      *a4 = 0LL;
      return result;
    }
LABEL_7:
    if ( !*ResultDataSize )
      return -1073741801;
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return -1073741801;
    goto LABEL_9;
  }
  if ( result == -1073741789 )
    goto LABEL_7;
LABEL_9:
  result = ZwQueryLicenseValue(&ValueName, Type, Pool2, *ResultDataSize, ResultDataSize);
  v9 = result;
  if ( result < 0 )
  {
    if ( Pool2 )
    {
      ExFreePoolWithTag(Pool2, 0);
      return v9;
    }
  }
  else
  {
    *a4 = Pool2;
  }
  return result;
}
