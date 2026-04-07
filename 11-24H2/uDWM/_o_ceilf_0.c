/*
 * XREFs of _o_ceilf_0 @ 0x18009C450
 * Callers:
 *     ?RoundToNearestInt@@YAHM@Z @ 0x180017F60 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?CreateTextBrush@CDWriteText@@IEAAJPEAPEAUICompositionBrush@Composition@UI@Windows@@@Z @ 0x1800352FC (-CreateTextBrush@CDWriteText@@IEAAJPEAPEAUICompositionBrush@Composition@UI@Windows@@@Z.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180052CAC (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180052E98 (-OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1800B3670 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@.c)
 *     ?GetStillZoneFromOffset@MagnifierExperienceHelper@@AEBA?AUtagRECT@@AEBUtagPOINT@@0@Z @ 0x1800C950C (-GetStillZoneFromOffset@MagnifierExperienceHelper@@AEBA-AUtagRECT@@AEBUtagPOINT@@0@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl o_ceilf_0(float X)
{
  return ceilf(X);
}
