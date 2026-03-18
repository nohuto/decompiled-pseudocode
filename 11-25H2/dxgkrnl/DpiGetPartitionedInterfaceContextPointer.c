/*
 * XREFs of DpiGetPartitionedInterfaceContextPointer @ 0x140247FAC
 * Callers:
 *     DpiFdoHandleQueryFlexibleIovInterface @ 0x140247460 (DpiFdoHandleQueryFlexibleIovInterface.c)
 *     DpiFdoHandleQueryPartitioningDeviceInterface @ 0x140247690 (DpiFdoHandleQueryPartitioningDeviceInterface.c)
 *     DpiFdoHandleQuerySrIovInterface @ 0x140247820 (DpiFdoHandleQuerySrIovInterface.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetPartitionedInterfaceContextPointer(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 UnicodeSubstring; // rax
  __int64 v6; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\GPUPARAV");
  LOBYTE(v4) = 1;
  UnicodeSubstring = RtlFindUnicodeSubstring(a2, &DestinationString, v4);
  v6 = a1 + 5512;
  if ( UnicodeSubstring )
    return a1 + 5544;
  return v6;
}
