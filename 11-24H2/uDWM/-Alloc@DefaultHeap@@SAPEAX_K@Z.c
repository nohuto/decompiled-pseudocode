/*
 * XREFs of ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180094F30
 * Callers:
 *     ?HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z @ 0x18002EAB4 (-HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z.c)
 *     ?SetTitle@CWindowData@@QEAAJPEAGH@Z @ 0x1800553D0 (-SetTitle@CWindowData@@QEAAJPEAGH@Z.c)
 *     ?PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x1800943DC (-PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@.c)
 *     ?HrAlloc@@YAJ_KPEAPEAX@Z @ 0x180094EE8 (-HrAlloc@@YAJ_KPEAPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180095474 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z @ 0x180099114 (-SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z.c)
 *     ?AllocTableData@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1800B5770 (-AllocTableData@-$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@CAPEA.c)
 *     ?HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x1800B6B10 (-HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 *     ?LoadFeedbackString@CContactManager@@IEAAPEAGPEAUHINSTANCE__@@HPEAH@Z @ 0x1800B6E30 (-LoadFeedbackString@CContactManager@@IEAAPEAGPEAUHINSTANCE__@@HPEAH@Z.c)
 *     ?ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ @ 0x1800BA5E0 (-ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800F4990 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x1800F49F0 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall DefaultHeap::Alloc(SIZE_T a1)
{
  return HeapAlloc(g_hProcessHeap, 0, a1);
}
