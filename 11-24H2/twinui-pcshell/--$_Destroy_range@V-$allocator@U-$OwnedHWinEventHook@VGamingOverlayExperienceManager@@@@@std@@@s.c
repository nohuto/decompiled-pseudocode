/*
 * XREFs of ??$_Destroy_range@V?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@std@@YAXPEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAU1@AEAV?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@0@@Z @ 0x180342F78
 * Callers:
 *     ??$_Emplace_reallocate@AEAPEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@?$vector@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@V?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@std@@AEAAPEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAU2@AEAPEAUHWINEVENTHOOK__@@$$QEAPEAVGamingOverlayExperienceManager@@@Z @ 0x180343100 (--$_Emplace_reallocate@AEAPEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@-$vector@U-$.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180343A48 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CB_KUTargetWindowContext@GamingOverlayExperien.c)
 *     ??$_Uninitialized_move@PEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@V?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@std@@YAPEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAU1@0PEAU1@AEAV?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@0@@Z @ 0x1803445B4 (--$_Uninitialized_move@PEAU-$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@V-$allocator@.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18034795C (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CB_KUTargetWindowContext@Gaming.c)
 *     ??1TargetWindowContext@GamingOverlayExperienceManager@@QEAA@XZ @ 0x180347EA4 (--1TargetWindowContext@GamingOverlayExperienceManager@@QEAA@XZ.c)
 *     ?WndProc@GamingOverlayExperienceManager@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x18035E5C0 (-WndProc@GamingOverlayExperienceManager@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 *     _std::vector_OwnedHWinEventHook_GamingOverlayExperienceManager__std::allocator_OwnedHWinEventHook_GamingOverlayExperienceManager_____::_Emplace_reallocate_HWINEVENTHOOK_____&_GamingOverlayExperienceManager____::_1_::catch$1 @ 0x1806E1DA3 (_std--vector_OwnedHWinEventHook_GamingOverlayExperienceManager__std--allocator_OwnedHWinEventHoo.c)
 * Callees:
 *     ??1?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAA@XZ @ 0x1803477F8 (--1-$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<OwnedHWinEventHook<GamingOverlayExperienceManager>>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = OwnedHWinEventHook<GamingOverlayExperienceManager>::~OwnedHWinEventHook<GamingOverlayExperienceManager>(v3);
      v3 += 8LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
