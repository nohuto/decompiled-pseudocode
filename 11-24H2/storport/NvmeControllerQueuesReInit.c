/*
 * XREFs of NvmeControllerQueuesReInit @ 0x1400F3974
 * Callers:
 *     NvmeControllerPowerUp @ 0x1400F2E00 (NvmeControllerPowerUp.c)
 *     NvmeControllerReinitialize @ 0x1400F3C7C (NvmeControllerReinitialize.c)
 *     NvmeControllerResetRecovery @ 0x140137858 (NvmeControllerResetRecovery.c)
 * Callees:
 *     NvmeCompletionQueueReInit @ 0x1400EA424 (NvmeCompletionQueueReInit.c)
 *     NvmeSubmissionQueueReInit @ 0x1400FA18C (NvmeSubmissionQueueReInit.c)
 */

void *__fastcall NvmeControllerQueuesReInit(__int64 a1)
{
  void *result; // rax
  unsigned int v3; // edi
  unsigned int v4; // esi

  NvmeSubmissionQueueReInit(a1, *(_QWORD *)(a1 + 712));
  result = NvmeCompletionQueueReInit(a1, *(_QWORD *)(a1 + 856));
  v3 = 0;
  v4 = 0;
  if ( *(_WORD *)(a1 + 22) )
  {
    do
    {
      NvmeSubmissionQueueReInit(a1, *(_QWORD *)(a1 + 728) + 192LL * v4);
      result = (void *)*(unsigned __int16 *)(a1 + 22);
      ++v4;
    }
    while ( v4 < (unsigned int)result );
  }
  if ( *(_WORD *)(a1 + 26) )
  {
    do
    {
      NvmeCompletionQueueReInit(a1, *(_QWORD *)(a1 + 864) + ((unsigned __int64)v3 << 7));
      result = (void *)*(unsigned __int16 *)(a1 + 26);
      ++v3;
    }
    while ( v3 < (unsigned int)result );
  }
  return result;
}
