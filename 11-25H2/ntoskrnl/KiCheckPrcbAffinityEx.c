/*
 * XREFs of KiCheckPrcbAffinityEx @ 0x140201CF0
 * Callers:
 *     ?KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z @ 0x140201B78 (-KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z.c)
 *     KiQueueReadyThread @ 0x14032F910 (KiQueueReadyThread.c)
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x140355570 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 *     KiCpuPartitionCheckDpcEnqueue @ 0x1404F8988 (KiCpuPartitionCheckDpcEnqueue.c)
 * Callees:
 *     <none>
 */

char __fastcall KiCheckPrcbAffinityEx(_WORD *a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(unsigned __int8 *)(a2 + 208);
  if ( (unsigned __int16)v2 >= *a1 )
    return 0;
  else
    return (*(_QWORD *)&a1[4 * v2 + 4] >> *(_BYTE *)(a2 + 209)) & 1;
}
