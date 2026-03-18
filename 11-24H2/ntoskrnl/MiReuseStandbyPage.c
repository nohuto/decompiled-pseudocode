/*
 * XREFs of MiReuseStandbyPage @ 0x140442E50
 * Callers:
 *     MiTradePage @ 0x14022B650 (MiTradePage.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14023C31C (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiLockLeafPage @ 0x1402E8100 (MiLockLeafPage.c)
 *     MiSwapNumaStandbyPage @ 0x14039474C (MiSwapNumaStandbyPage.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140442B00 (MiHandleSpecialPurposeMemoryCachedFault.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MiRestoreTransitionPte @ 0x140271094 (MiRestoreTransitionPte.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402F6568 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiClearPfnReuseFields @ 0x1403A1D30 (MiClearPfnReuseFields.c)
 */

_BOOL8 __fastcall MiReuseStandbyPage(ULONG_PTR BugCheckParameter2)
{
  char v2; // bl
  int v4; // [rsp+38h] [rbp+10h]

  v2 = MiUnlinkPageFromListEx(BugCheckParameter2, 4);
  MiRestoreTransitionPte(BugCheckParameter2, 0);
  v4 = *(_DWORD *)(BugCheckParameter2 + 32);
  BYTE2(v4) = BYTE2(v4) & 0xF8 | 5;
  *(_DWORD *)(BugCheckParameter2 + 32) = v4;
  MiClearPfnReuseFields(BugCheckParameter2);
  *(_QWORD *)(BugCheckParameter2 + 16) = CLFS_LSN_NULL_EXT;
  MiSetOriginalPtePfnFromFreeList((__int64 *)(BugCheckParameter2 + 16));
  *(_QWORD *)BugCheckParameter2 = 0LL;
  return (v2 & 3) == 0;
}
