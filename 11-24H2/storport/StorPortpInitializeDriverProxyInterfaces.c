/*
 * XREFs of StorPortpInitializeDriverProxyInterfaces @ 0x1401193D4
 * Callers:
 *     DllInitialize @ 0x1400A3C90 (DllInitialize.c)
 * Callees:
 *     <none>
 */

PVOID StorPortpInitializeDriverProxyInterfaces()
{
  PVOID result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"IoGetDriverProxyFeatures");
  result = MmGetSystemRoutineAddress(&DestinationString);
  GetDriverProxyFeatures = (__int64 (__fastcall *)(_QWORD, _QWORD))result;
  if ( result )
  {
    RtlInitUnicodeString(&DestinationString, L"IoCreateDriverProxyExtension");
    CreateDriverProxyExt = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
    RtlInitUnicodeString(&DestinationString, L"IoRegisterDriverProxyEndpoints");
    RegisterDrvrPxyEndpoints = (__int64)MmGetSystemRoutineAddress(&DestinationString);
    RtlInitUnicodeString(&DestinationString, L"IoGetDriverProxyEndpointWrapper");
    result = MmGetSystemRoutineAddress(&DestinationString);
    GetDrvrPxyWrapper = (__int64 (__fastcall *)(_QWORD, _QWORD))result;
  }
  return result;
}
