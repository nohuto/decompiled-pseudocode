/*
 * XREFs of MiReadyLargeAwePageForFree @ 0x140682A08
 * Callers:
 *     MiFreePhysicalPageChain @ 0x1403CCA3C (MiFreePhysicalPageChain.c)
 *     MiFreeAwePagesFromMdl @ 0x140682134 (MiFreeAwePagesFromMdl.c)
 * Callees:
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiClearAweLargePageMetadata @ 0x1406818A0 (MiClearAweLargePageMetadata.c)
 */

__int64 __fastcall MiReadyLargeAwePageForFree(__int64 a1)
{
  unsigned __int8 v2; // bl

  v2 = MiLockPageInline(a1);
  MiClearAweLargePageMetadata(a1);
  *(_QWORD *)(a1 + 24) = (*(_QWORD *)(a1 + 24) + 1LL) ^ (*(_QWORD *)(a1 + 24) ^ (*(_QWORD *)(a1 + 24) + 1LL)) & 0xC000000000000000uLL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return MiUnlockPage(a1, v2);
}
