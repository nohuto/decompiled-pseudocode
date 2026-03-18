/*
 * XREFs of MiReuseStandbyPage @ 0x1404C2648
 * Callers:
 *     MiLockLeafPage @ 0x14033B770 (MiLockLeafPage.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14033F5DC (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiTradePage @ 0x140341930 (MiTradePage.c)
 *     MiSwapNumaStandbyPage @ 0x1403B905C (MiSwapNumaStandbyPage.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1404C22F8 (MiHandleSpecialPurposeMemoryCachedFault.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14022BEA4 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiRestoreTransitionPte @ 0x14024EBD8 (MiRestoreTransitionPte.c)
 *     MiClearPfnReuseFields @ 0x1402C4CC0 (MiClearPfnReuseFields.c)
 */

_BOOL8 __fastcall MiReuseStandbyPage(ULONG_PTR a1)
{
  char v2; // bl
  int v4; // [rsp+38h] [rbp+10h]

  v2 = MiUnlinkPageFromListEx(a1, 4);
  MiRestoreTransitionPte(a1, 0);
  v4 = *(_DWORD *)(a1 + 32);
  BYTE2(v4) = BYTE2(v4) & 0xF8 | 5;
  *(_DWORD *)(a1 + 32) = v4;
  MiClearPfnReuseFields(a1);
  *(_QWORD *)(a1 + 16) = CLFS_LSN_NULL_EXT;
  MiSetOriginalPtePfnFromFreeList((__int64 *)(a1 + 16));
  *(_QWORD *)a1 = 0LL;
  return (v2 & 3) == 0;
}
