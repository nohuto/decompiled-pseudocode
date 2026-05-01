/*
 * XREFs of ??$_Uninitialized_move@PEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@V?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@std@@YAPEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAU1@0PEAU1@AEAV?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@0@@Z @ 0x1803445B4
 * Callers:
 *     ??$_Emplace_reallocate@AEAPEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@?$vector@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@V?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@std@@AEAAPEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAU2@AEAPEAUHWINEVENTHOOK__@@$$QEAPEAVGamingOverlayExperienceManager@@@Z @ 0x180343100 (--$_Emplace_reallocate@AEAPEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@-$vector@U-$.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@std@@YAXPEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAU1@AEAV?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@0@@Z @ 0x180342F78 (--$_Destroy_range@V-$allocator@U-$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@s.c)
 */

_QWORD *__fastcall std::_Uninitialized_move<OwnedHWinEventHook<GamingOverlayExperienceManager> *,std::allocator<OwnedHWinEventHook<GamingOverlayExperienceManager>>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  while ( a1 != a2 )
  {
    *a3++ = *a1;
    *a1++ = 0LL;
  }
  std::_Destroy_range<std::allocator<OwnedHWinEventHook<GamingOverlayExperienceManager>>>((__int64)a3, (__int64)a3);
  return a3;
}
