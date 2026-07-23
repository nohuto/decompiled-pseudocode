/*
 * XREFs of MiReadyLargeAwePageForFree @ 0x140683BF8
 * Callers:
 *     MiFreePhysicalPageChain @ 0x140266C0C (MiFreePhysicalPageChain.c)
 *     MiFreeAwePagesFromMdl @ 0x140683324 (MiFreeAwePagesFromMdl.c)
 * Callees:
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiClearAweLargePageMetadata @ 0x140682A90 (MiClearAweLargePageMetadata.c)
 */

__int64 __fastcall MiReadyLargeAwePageForFree(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v5; // bl

  v5 = MiLockPageInline(a1, a2, a3, a4);
  MiClearAweLargePageMetadata(a1);
  *(_QWORD *)(a1 + 24) = (*(_QWORD *)(a1 + 24) + 1LL) ^ (*(_QWORD *)(a1 + 24) ^ (*(_QWORD *)(a1 + 24) + 1LL)) & 0xC000000000000000uLL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return MiUnlockPage(a1, v5);
}
