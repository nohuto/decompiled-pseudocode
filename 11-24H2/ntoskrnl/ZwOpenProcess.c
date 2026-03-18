/*
 * XREFs of ZwOpenProcess @ 0x1406A68D0
 * Callers:
 *     DifZwOpenProcessWrapper @ 0x140642500 (DifZwOpenProcessWrapper.c)
 *     BiLogFileOwnerProcess @ 0x14069777C (BiLogFileOwnerProcess.c)
 *     EtwpNotifyProcessTracingChange @ 0x1407AA578 (EtwpNotifyProcessTracingChange.c)
 *     SepRmLsaConnectRequest @ 0x140A52AA4 (SepRmLsaConnectRequest.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenProcess(
        PHANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PCLIENT_ID ClientId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, *(_QWORD *)&DesiredAccess);
}
