/*
 * XREFs of MiPersistPage @ 0x14067B918
 * Callers:
 *     MiMarkFileOnlyPfnBad @ 0x14067B474 (MiMarkFileOnlyPfnBad.c)
 *     MiPurgeFileOnlyPfn @ 0x14067BB9C (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14021F1A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140266854 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPersistVa @ 0x14067B968 (MiPersistVa.c)
 */

void __fastcall MiPersistPage(__int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int8 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( !byte_140E2DB40 )
  {
    v1 = MiMapPageInHyperSpaceWorker(a1, &v2, 0x80000000LL);
    MiPersistVa(v1);
    MiUnmapPageInHyperSpaceWorker(v1, v2, 0x80000000);
  }
}
