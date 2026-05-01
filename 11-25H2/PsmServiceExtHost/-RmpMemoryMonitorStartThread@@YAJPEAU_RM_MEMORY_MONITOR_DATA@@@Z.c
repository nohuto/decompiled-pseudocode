/*
 * XREFs of ?RmpMemoryMonitorStartThread@@YAJPEAU_RM_MEMORY_MONITOR_DATA@@@Z @ 0x1800462C8
 * Callers:
 *     ?RmpPartitionStart@@YAJPEAU_RM_PARTITION@@PEAX_K@Z @ 0x180046924 (-RmpPartitionStart@@YAJPEAU_RM_PARTITION@@PEAX_K@Z.c)
 * Callees:
 *     ?RmpSystemGetHighCommitEvent@@YAJPEAU_RM_PARTITION@@PEAPEAX@Z @ 0x180046320 (-RmpSystemGetHighCommitEvent@@YAJPEAU_RM_PARTITION@@PEAPEAX@Z.c)
 */

__int64 __fastcall RmpMemoryMonitorStartThread(struct _RM_MEMORY_MONITOR_DATA *lpParameter)
{
  HANDLE Thread; // rax

  RmpSystemGetHighCommitEvent(*(struct _RM_PARTITION **)lpParameter, (void **)lpParameter + 1);
  Thread = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)RmpMemoryMonitorWorker, lpParameter, 0, 0LL);
  *((_QWORD *)lpParameter + 7) = Thread;
  return Thread == 0LL ? 0xC0000001 : 0;
}
