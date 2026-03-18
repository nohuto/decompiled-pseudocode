/*
 * XREFs of MiIsPfnOriginalPteLost @ 0x14020D7D0
 * Callers:
 *     MiWriteCompletePfn @ 0x14020D42C (MiWriteCompletePfn.c)
 *     MiWritePageFileHash @ 0x140226C80 (MiWritePageFileHash.c)
 *     MiStoreWriteModifiedPages @ 0x1402CA294 (MiStoreWriteModifiedPages.c)
 *     MiGatherPagefilePages @ 0x1403C0730 (MiGatherPagefilePages.c)
 * Callees:
 *     MiCanPfnOriginalPteBeLost @ 0x140388D44 (MiCanPfnOriginalPteBeLost.c)
 */

__int64 __fastcall MiIsPfnOriginalPteLost(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 34) & 0x10) != 0 )
    return MiCanPfnOriginalPteBeLost();
  else
    return 0LL;
}
