/*
 * XREFs of NvmeControllerSubmissionQueueQuiesce @ 0x1400F5990
 * Callers:
 *     NvmeAdapterCompleteAllRequestsForSurpriseRemove @ 0x1400CD54C (NvmeAdapterCompleteAllRequestsForSurpriseRemove.c)
 *     NvmeAdapterNvmeControllerRebuildAssociationWork @ 0x1400E4E20 (NvmeAdapterNvmeControllerRebuildAssociationWork.c)
 *     NvmeAdapterStopFabricNvmeControllerOperations @ 0x1400E884C (NvmeAdapterStopFabricNvmeControllerOperations.c)
 *     NvmeControllerResetRecovery @ 0x140137858 (NvmeControllerResetRecovery.c)
 *     NvmeAdapterStopDeviceIrp @ 0x14019C384 (NvmeAdapterStopDeviceIrp.c)
 * Callees:
 *     StorDelayExecution @ 0x14002AE80 (StorDelayExecution.c)
 *     StorEtwNvmeControllerEvent @ 0x1400A9028 (StorEtwNvmeControllerEvent.c)
 */

__int64 __fastcall NvmeControllerSubmissionQueueQuiesce(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int v3; // esi
  int v4; // r14d
  __int64 v5; // rbp
  char v6; // si
  int v7; // esi

  v2 = 0;
  v3 = 0;
  if ( *(_WORD *)(a1 + 22) )
  {
    while ( 2 )
    {
      v4 = 0;
      v5 = 192LL * v3;
      while ( *(_DWORD *)(*(_QWORD *)(a1 + 728) + v5 + 128) || *(_DWORD *)(*(_QWORD *)(a1 + 728) + v5 + 156) )
      {
        StorDelayExecution(0x3E8u);
        if ( (unsigned int)++v4 >= 0x7D0 )
        {
          v6 = v3 + 1;
LABEL_13:
          v2 = -1073741643;
          StorEtwNvmeControllerEvent(
            a1,
            1,
            3,
            (__int64)L"Controller submission queue quiesce timeout",
            L"QueueId",
            v6,
            &word_140150F48,
            0,
            &word_140150F48,
            0,
            &word_140150F48,
            0,
            (void *)&word_140150F48,
            0,
            (void *)&word_140150F48,
            0,
            (void *)&word_140150F48,
            0,
            (void *)&word_140150F48,
            0);
          *(_DWORD *)(*(_QWORD *)(a1 + 1288) + 48LL) |= 2u;
          return v2;
        }
      }
      if ( ++v3 < *(unsigned __int16 *)(a1 + 22) )
        continue;
      break;
    }
  }
  v7 = 0;
  while ( *(_DWORD *)(*(_QWORD *)(a1 + 712) + 128LL) )
  {
    StorDelayExecution(0x3E8u);
    if ( (unsigned int)++v7 >= 0x7D0 )
    {
      v6 = 0;
      goto LABEL_13;
    }
  }
  return v2;
}
