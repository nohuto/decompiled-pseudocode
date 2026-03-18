/*
 * XREFs of MiPersistPage @ 0x140670158
 * Callers:
 *     MiMarkFileOnlyPfnBad @ 0x14066FCB4 (MiMarkFileOnlyPfnBad.c)
 *     MiPurgeFileOnlyPfn @ 0x1406703DC (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14040FDB8 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPersistVa @ 0x1406701A8 (MiPersistVa.c)
 */

void __fastcall MiPersistPage(__int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int8 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( !byte_140E2D900 )
  {
    v1 = MiMapPageInHyperSpaceWorker(a1, &v2, 0x80000000);
    MiPersistVa(v1);
    MiUnmapPageInHyperSpaceWorker(v1, v2, 0x80000000);
  }
}
