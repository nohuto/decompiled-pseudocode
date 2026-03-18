/*
 * XREFs of WdmlibInit @ 0x14022C5C0
 * Callers:
 *     DpiPdoAddPdo @ 0x1403C8AA0 (DpiPdoAddPdo.c)
 *     DpiGdoCreateGdiObjects @ 0x1403F7D4C (DpiGdoCreateGdiObjects.c)
 *     WdmlibIoCreateDeviceSecure @ 0x14040E03C (WdmlibIoCreateDeviceSecure.c)
 * Callees:
 *     <none>
 */

PVOID WdmlibInit()
{
  PVOID result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"IoCreateDeviceSecure");
  PfnIoCreateDeviceSecure = (__int64)MmGetSystemRoutineAddress(&DestinationString);
  if ( !PfnIoCreateDeviceSecure )
    PfnIoCreateDeviceSecure = (__int64)IoDevObjCreateDeviceSecure;
  RtlInitUnicodeString(&DestinationString, L"IoValidateDeviceIoControlAccess");
  result = MmGetSystemRoutineAddress(&DestinationString);
  WdmlibInitialized = 1;
  return result;
}
