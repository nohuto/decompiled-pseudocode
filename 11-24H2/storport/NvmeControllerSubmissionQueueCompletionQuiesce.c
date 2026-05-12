/*
 * XREFs of NvmeControllerSubmissionQueueCompletionQuiesce @ 0x1400F56D0
 * Callers:
 *     NvmeAdapterNvmeControllerRebuildAssociationWork @ 0x1400E4E20 (NvmeAdapterNvmeControllerRebuildAssociationWork.c)
 *     NvmeAdapterStopFabricNvmeControllerOperations @ 0x1400E884C (NvmeAdapterStopFabricNvmeControllerOperations.c)
 * Callees:
 *     StorDelayExecution @ 0x14002AE80 (StorDelayExecution.c)
 *     StorEtwNvmeControllerEvent @ 0x1400A9028 (StorEtwNvmeControllerEvent.c)
 */

__int64 __fastcall NvmeControllerSubmissionQueueCompletionQuiesce(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int v3; // esi
  int v4; // ebp
  int v5; // esi
  char v6; // si

  v2 = 0;
  v3 = 0;
  if ( *(_WORD *)(a1 + 22) )
  {
    while ( 2 )
    {
      v4 = 0;
      while ( *(_WORD *)(*(_QWORD *)(a1 + 728) + 192LL * v3 + 152) )
      {
        StorDelayExecution(0x3E8u);
        if ( (unsigned int)++v4 >= 0x7D0 )
        {
          v6 = v3 + 1;
LABEL_12:
          v2 = -1073741643;
          StorEtwNvmeControllerEvent(
            a1,
            1,
            3,
            (__int64)L"Controller submission queue completion quiesce timeout",
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
          return v2;
        }
      }
      if ( ++v3 < *(unsigned __int16 *)(a1 + 22) )
        continue;
      break;
    }
  }
  v5 = 0;
  while ( *(_WORD *)(*(_QWORD *)(a1 + 712) + 152LL) )
  {
    StorDelayExecution(0x3E8u);
    if ( (unsigned int)++v5 >= 0x7D0 )
    {
      v6 = 0;
      goto LABEL_12;
    }
  }
  return v2;
}
