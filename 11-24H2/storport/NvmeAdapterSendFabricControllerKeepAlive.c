/*
 * XREFs of NvmeAdapterSendFabricControllerKeepAlive @ 0x1400E7564
 * Callers:
 *     NvmeAdapterNvmeControllerKeepAliveWork @ 0x1400E4AA0 (NvmeAdapterNvmeControllerKeepAliveWork.c)
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x1400A9028 (StorEtwNvmeControllerEvent.c)
 *     NvmeAdapterProcessControllerQueueRequestAsync @ 0x1400E631C (NvmeAdapterProcessControllerQueueRequestAsync.c)
 */

__int64 __fastcall NvmeAdapterSendFabricControllerKeepAlive(__int64 a1)
{
  int v2; // edi

  *(_BYTE *)(*(_QWORD *)(a1 + 536) + 3LL) = 0;
  v2 = NvmeAdapterProcessControllerQueueRequestAsync(
         *(_QWORD *)(a1 + 712),
         *(_QWORD *)(a1 + 536),
         1,
         1,
         1,
         0LL,
         0LL,
         0,
         (__int64)NvmeAdapterCompleteFabricControllerKeepAlive,
         0LL);
  if ( v2 < 0 )
    StorEtwNvmeControllerEvent(
      a1,
      1,
      3,
      (__int64)L"Keep Alive send failure",
      (void *)&word_140150F48,
      0,
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
  else
    StorEtwNvmeControllerEvent(
      a1,
      1,
      4,
      (__int64)L"Keep Alive sent",
      L"KeepAliveTimeout msecs",
      *(_DWORD *)(a1 + 1076),
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
  return (unsigned int)v2;
}
