/*
 * XREFs of ?lock@?$weak_ptr@VSystemCursorService2@@@std@@QEBA?AV?$shared_ptr@VSystemCursorService2@@@2@XZ @ 0x1800584E8
 * Callers:
 *     ?TryFindResumableAnimationTarget@ShellGesturesProcessor@@AEAA?AV?$weak_ptr@VGestureHandler@@@std@@PEAUHitTestInfo@@PEAUHitTestResult@@@Z @ 0x180025980 (-TryFindResumableAnimationTarget@ShellGesturesProcessor@@AEAA-AV-$weak_ptr@VGestureHandler@@@std.c)
 *     ?OnClientDisconnected@ShellGesturesProcessor@@QEAAXPEAVDragManagerClientProxy@@@Z @ 0x1800286D0 (-OnClientDisconnected@ShellGesturesProcessor@@QEAAXPEAVDragManagerClientProxy@@@Z.c)
 *     ?AttachCursorVisualToShellRoot@SystemCursor2@@QEAAJXZ @ 0x1800F797C (-AttachCursorVisualToShellRoot@SystemCursor2@@QEAAJXZ.c)
 *     ?Cleanup@CustomCursorApplication2@@QEAAXXZ @ 0x1800F7C28 (-Cleanup@CustomCursorApplication2@@QEAAXXZ.c)
 *     ?CreateCursorVisual@SystemCursor2@@AEAAJXZ @ 0x1800F8030 (-CreateCursorVisual@SystemCursor2@@AEAAJXZ.c)
 *     ?SetEffectiveVisibility@SystemCursor2@@AEAAJ_N@Z @ 0x1800F94F4 (-SetEffectiveVisibility@SystemCursor2@@AEAAJ_N@Z.c)
 *     ?SetOrientationAngle@SystemCursor2@@QEAAJM@Z @ 0x1800F959C (-SetOrientationAngle@SystemCursor2@@QEAAJM@Z.c)
 *     ?SetShape@SystemCursor2@@QEAAJ_K_N@Z @ 0x1800F9688 (-SetShape@SystemCursor2@@QEAAJ_K_N@Z.c)
 *     ?SetShellMagnification@SystemCursor2@@QEAAJM@Z @ 0x1800F9918 (-SetShellMagnification@SystemCursor2@@QEAAJM@Z.c)
 *     ?PopulateGestureHandler@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@W4InputType@@AEAV?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@Z @ 0x180157EC0 (-PopulateGestureHandler@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@W4InputType@@AEAV-$vec.c)
 *     ?StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z @ 0x1801586E8 (-StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ??$_Construct_from_weak@VSystemCursorService2@@@?$_Ptr_base@VSystemCursorService2@@@std@@IEAA_NAEBV?$weak_ptr@VSystemCursorService2@@@1@@Z @ 0x180058514 (--$_Construct_from_weak@VSystemCursorService2@@@-$_Ptr_base@VSystemCursorService2@@@std@@IEAA_NA.c)
 */

__int64 __fastcall std::weak_ptr<SystemCursorService2>::lock(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r10

  *a2 = 0LL;
  a2[1] = 0LL;
  std::_Ptr_base<SystemCursorService2>::_Construct_from_weak<SystemCursorService2>(a2, a1);
  return v2;
}
