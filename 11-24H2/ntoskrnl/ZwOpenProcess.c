/*
 * XREFs of ZwOpenProcess @ 0x1406A7870
 * Callers:
 *     DifZwOpenProcessWrapper @ 0x140640AC0 (DifZwOpenProcessWrapper.c)
 *     BiLogFileOwnerProcess @ 0x1406987FC (BiLogFileOwnerProcess.c)
 *     EtwpNotifyProcessTracingChange @ 0x1407AA6B8 (EtwpNotifyProcessTracingChange.c)
 *     SepRmLsaConnectRequest @ 0x140A4AAF4 (SepRmLsaConnectRequest.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenProcess(
        PHANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PCLIENT_ID ClientId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
