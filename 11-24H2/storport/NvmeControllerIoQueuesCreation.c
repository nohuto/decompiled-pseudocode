/*
 * XREFs of NvmeControllerIoQueuesCreation @ 0x1400F1200
 * Callers:
 *     NvmeControllerInitPhase2 @ 0x1400EFCD4 (NvmeControllerInitPhase2.c)
 * Callees:
 *     NvmeControllerIoCompletionQueueCreate @ 0x1400F0D94 (NvmeControllerIoCompletionQueueCreate.c)
 *     NvmeControllerIoSubmissionQueueCreate @ 0x1400F1EC8 (NvmeControllerIoSubmissionQueueCreate.c)
 */

__int64 __fastcall NvmeControllerIoQueuesCreation(__int64 a1, char a2)
{
  __int64 result; // rax
  __int64 v5; // rdx

  result = NvmeControllerIoCompletionQueueCreate(a1, a2);
  if ( (int)result >= 0 )
  {
    LOBYTE(v5) = a2;
    result = NvmeControllerIoSubmissionQueueCreate(a1, v5);
    if ( (int)result < 0 )
      *(_DWORD *)(a1 + 1192) = 22;
  }
  else
  {
    *(_DWORD *)(a1 + 1192) = 23;
  }
  return result;
}
