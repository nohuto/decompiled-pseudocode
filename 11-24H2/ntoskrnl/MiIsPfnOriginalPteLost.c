/*
 * XREFs of MiIsPfnOriginalPteLost @ 0x14039D8FC
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x1402281F4 (MiStoreWriteModifiedPages.c)
 *     MiGatherPagefilePages @ 0x14039C8C8 (MiGatherPagefilePages.c)
 *     MiWriteCompletePfn @ 0x14039D574 (MiWriteCompletePfn.c)
 *     MiWritePageFileHash @ 0x14039E350 (MiWritePageFileHash.c)
 * Callees:
 *     MiCanPfnOriginalPteBeLost @ 0x14039E1D0 (MiCanPfnOriginalPteBeLost.c)
 */

__int64 __fastcall MiIsPfnOriginalPteLost(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 34) & 0x10) != 0 )
    return MiCanPfnOriginalPteBeLost(a1);
  else
    return 0LL;
}
