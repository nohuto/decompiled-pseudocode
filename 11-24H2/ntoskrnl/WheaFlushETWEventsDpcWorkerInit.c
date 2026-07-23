/*
 * XREFs of WheaFlushETWEventsDpcWorkerInit @ 0x14065C6A4
 * Callers:
 *     WheapEtwEnableCallback @ 0x1407C87E0 (WheapEtwEnableCallback.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 (__fastcall *WheaFlushETWEventsDpcWorkerInit())()
{
  __int64 (__fastcall *result)(); // rax

  memset_0(&WheapDispatchPtr.DeviceObjectExtension, 0, 0x70uLL);
  LODWORD(WheapDispatchPtr.DeviceObjectExtension) = 275;
  unk_140EF7CC0 = &WheapDispatchPtr.DeviceObjectExtension;
  unk_140EF7CB8 = WheaFlushETWEventsDpcRoutine;
  stru_140EF7CE0.WorkerRoutine = (void (__fastcall *)(void *))WheaFlushETWEventsWorkerRoutine;
  result = WheapProcessWaitingETWEvents;
  qword_140EF7D08 = (__int64)WheapProcessWaitingETWEvents;
  unk_140EF7CD8 = 0LL;
  *((_QWORD *)&WheapDispatchPtr.Reserved + 1) = 0LL;
  stru_140EF7CE0.Parameter = &WheapDispatchPtr.DeviceObjectExtension;
  stru_140EF7CE0.List.Flink = 0LL;
  dword_140EF7D00 = 0;
  WheaFlushETWEventsInitialized = 1;
  return result;
}
