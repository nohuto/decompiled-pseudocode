/*
 * XREFs of MiIsPfnOriginalPteLost @ 0x1402FABFC
 * Callers:
 *     MiGatherPagefilePages @ 0x1402F9BC8 (MiGatherPagefilePages.c)
 *     MiWriteCompletePfn @ 0x1402FA874 (MiWriteCompletePfn.c)
 *     MiStoreWriteModifiedPages @ 0x1402FB3F4 (MiStoreWriteModifiedPages.c)
 *     MiWritePageFileHash @ 0x140426540 (MiWritePageFileHash.c)
 * Callees:
 *     MiCanPfnOriginalPteBeLost @ 0x1402EE318 (MiCanPfnOriginalPteBeLost.c)
 */

__int64 __fastcall MiIsPfnOriginalPteLost(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 34) & 0x10) != 0 )
    return MiCanPfnOriginalPteBeLost(a1);
  else
    return 0LL;
}
