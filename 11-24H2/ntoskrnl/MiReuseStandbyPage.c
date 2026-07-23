/*
 * XREFs of MiReuseStandbyPage @ 0x14043BE20
 * Callers:
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x140204044 (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiTradePage @ 0x1402FEF60 (MiTradePage.c)
 *     MiLockLeafPage @ 0x140349740 (MiLockLeafPage.c)
 *     MiSwapNumaStandbyPage @ 0x1403F7A6C (MiSwapNumaStandbyPage.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x14043BAD0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 * Callees:
 *     MiClearPfnReuseFields @ 0x140218960 (MiClearPfnReuseFields.c)
 *     MiRestoreTransitionPte @ 0x140226624 (MiRestoreTransitionPte.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14033E678 (MiSetOriginalPtePfnFromFreeList.c)
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
