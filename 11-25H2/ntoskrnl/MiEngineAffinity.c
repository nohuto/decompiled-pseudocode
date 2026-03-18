/*
 * XREFs of MiEngineAffinity @ 0x14020D884
 * Callers:
 *     MiFindBestZeroingProcessor @ 0x14020E844 (MiFindBestZeroingProcessor.c)
 *     MiMoveZeroThreadsToOtherCores @ 0x140480B04 (MiMoveZeroThreadsToOtherCores.c)
 *     MiInsertNewZeroThread @ 0x1406844D0 (MiInsertNewZeroThread.c)
 *     MiInitializeZeroEngineCurrentPassDpcAffinity @ 0x140688294 (MiInitializeZeroEngineCurrentPassDpcAffinity.c)
 * Callees:
 *     <none>
 */

void **__fastcall MiEngineAffinity(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 36) )
    return &qword_140E2D898;
  else
    return *(void ***)(384LL * *(unsigned int *)(*(_QWORD *)(a1 + 176) + 56LL) + qword_140E2D8B8 + 376);
}
