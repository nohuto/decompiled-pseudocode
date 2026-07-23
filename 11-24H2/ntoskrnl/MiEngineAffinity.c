/*
 * XREFs of MiEngineAffinity @ 0x14046C2B0
 * Callers:
 *     MiFindBestZeroingProcessor @ 0x1403313C8 (MiFindBestZeroingProcessor.c)
 *     MiMoveZeroThreadsToOtherCores @ 0x14046C120 (MiMoveZeroThreadsToOtherCores.c)
 *     MiInsertNewZeroThread @ 0x140690A00 (MiInsertNewZeroThread.c)
 *     MiInitializeZeroEngineCurrentPassDpcAffinity @ 0x1406947C4 (MiInitializeZeroEngineCurrentPassDpcAffinity.c)
 * Callees:
 *     <none>
 */

void **__fastcall MiEngineAffinity(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 36) )
    return &Src;
  else
    return *(void ***)(384LL * *(unsigned int *)(*(_QWORD *)(a1 + 176) + 56LL) + qword_140E2DC38 + 376);
}
