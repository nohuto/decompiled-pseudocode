/*
 * XREFs of KiCheckPrcbAffinityEx @ 0x1403B44C0
 * Callers:
 *     KiQueueReadyThread @ 0x140295020 (KiQueueReadyThread.c)
 *     ?KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z @ 0x1403B4344 (-KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z.c)
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x1403CAED4 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 *     KiCpuPartitionCheckDpcEnqueue @ 0x1404FADB8 (KiCpuPartitionCheckDpcEnqueue.c)
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
