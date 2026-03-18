/*
 * XREFs of MiReadyLargeAwePageForFree @ 0x1406771E8
 * Callers:
 *     MiFreePhysicalPageChain @ 0x1404B3ADC (MiFreePhysicalPageChain.c)
 *     MiFreeAwePagesFromMdl @ 0x140676914 (MiFreeAwePagesFromMdl.c)
 * Callees:
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     MiClearAweLargePageMetadata @ 0x140676080 (MiClearAweLargePageMetadata.c)
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
