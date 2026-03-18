/*
 * XREFs of EtwpNotifyProcessTracingChange @ 0x1407AA578
 * Callers:
 *     EtwpUpdateProcessTracingCallback @ 0x1407AA720 (EtwpUpdateProcessTracingCallback.c)
 * Callees:
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwOpenProcess @ 0x1406A68D0 (ZwOpenProcess.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall EtwpNotifyProcessTracingChange(void *a1)
{
  int updated; // ebx
  CLIENT_ID ClientId; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE ProcessHandle; // [rsp+90h] [rbp+10h] BYREF

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ProcessHandle = 0LL;
  ClientId.UniqueThread = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ClientId.UniqueProcess = a1;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.Attributes = 512;
  updated = ZwOpenProcess(&ProcessHandle, 0, &ObjectAttributes, &ClientId);
  if ( updated >= 0 )
    updated = ZwUpdateWnfStateData((__int64)&WNF_ETW_UMGL_TRACING_CHANGE, 0LL);
  if ( ProcessHandle )
    ZwClose(ProcessHandle);
  return (unsigned int)updated;
}
