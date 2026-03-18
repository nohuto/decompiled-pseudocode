/*
 * XREFs of MiEngineAffinity @ 0x1404716E0
 * Callers:
 *     MiFindBestZeroingProcessor @ 0x140209DE8 (MiFindBestZeroingProcessor.c)
 *     MiMoveZeroThreadsToOtherCores @ 0x140471550 (MiMoveZeroThreadsToOtherCores.c)
 *     MiInsertNewZeroThread @ 0x14068F930 (MiInsertNewZeroThread.c)
 *     MiInitializeZeroEngineCurrentPassDpcAffinity @ 0x1406936F4 (MiInitializeZeroEngineCurrentPassDpcAffinity.c)
 * Callees:
 *     <none>
 */

void **__fastcall MiEngineAffinity(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 36) )
    return &Src;
  else
    return *(void ***)(384LL * *(unsigned int *)(*(_QWORD *)(a1 + 176) + 56LL) + qword_140E2DAF8 + 376);
}
