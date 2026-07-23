/*
 * XREFs of MiPersistPage @ 0x14067CAF8
 * Callers:
 *     MiMarkFileOnlyPfnBad @ 0x14067C654 (MiMarkFileOnlyPfnBad.c)
 *     MiPurgeFileOnlyPfn @ 0x14067CD7C (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402EEA94 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPersistVa @ 0x14067CB48 (MiPersistVa.c)
 */

void __fastcall MiPersistPage(__int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int8 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( !byte_140E2DC80 )
  {
    v1 = MiMapPageInHyperSpaceWorker(a1, &v2, 0x80000000);
    MiPersistVa(v1);
    MiUnmapPageInHyperSpaceWorker(v1, v2, 0x80000000);
  }
}
