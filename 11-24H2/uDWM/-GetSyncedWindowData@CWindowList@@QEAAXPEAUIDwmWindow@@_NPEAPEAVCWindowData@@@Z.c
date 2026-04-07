/*
 * XREFs of ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093CB4
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180008B44 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?TextChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180055280 (-TextChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180061124 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x180081F80 (-OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800823A0 (-HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180082BF0 (-ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180082D10 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ActivationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180083AC0 (-ActivationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180084010 (-ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18008BF80 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18008FC80 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18008FE50 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800929E0 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800935E0 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SetExcludeFromDDA@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x1800938F0 (-SetExcludeFromDDA@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 *     ?SetPassiveUpdateMode@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x1800939B0 (-SetPassiveUpdateMode@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180093C5C (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?v_ShouldIncludeInSnapshot@CVirtualDesktopThumbnail@@MEAA_NPEAVCWindowData@@@Z @ 0x1800BC750 (-v_ShouldIncludeInSnapshot@CVirtualDesktopThumbnail@@MEAA_NPEAVCWindowData@@@Z.c)
 *     ?AccentPolicyChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800EDCF0 (-AccentPolicyChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800EDF10 (-AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?BlurBehindChange@CWindowList@@UEAAJPEAUIDwmWindow@@PEBU_DWM_BLURBEHIND@@@Z @ 0x1800EE260 (-BlurBehindChange@CWindowList@@UEAAJPEAUIDwmWindow@@PEBU_DWM_BLURBEHIND@@@Z.c)
 *     ?CaptureWindow@CWindowList@@UEAAJPEAUIDwmWindow@@MHHHH_KPEAW4DXGI_FORMAT@@PEAPEAX@Z @ 0x1800EE470 (-CaptureWindow@CWindowList@@UEAAJPEAUIDwmWindow@@MHHHH_KPEAW4DXGI_FORMAT@@PEAPEAX@Z.c)
 *     ?ClientGlassChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800EE700 (-ClientGlassChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800EE790 (-ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x1800EE880 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?ContentProtectionChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800EEB10 (-ContentProtectionChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CreateWindowTarget@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX@Z @ 0x1800EEDB0 (-CreateWindowTarget@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX@Z.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x1800EEF10 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 *     ?DestroyWindowTarget@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800EF2E0 (-DestroyWindowTarget@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DisallowPeekChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800EF3A0 (-DisallowPeekChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ForceActiveWindowAppearanceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800EF500 (-ForceActiveWindowAppearanceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800EF5C0 (-ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800EF6B0 (-ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800EF7D0 (-ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?FrameMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800EF8E0 (-FrameMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800EF9A0 (-FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800EFAD0 (-GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?GhostChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800F0630 (-GhostChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?IsCursorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800F0840 (-IsCursorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800F0910 (-IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800F0B80 (-IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?LivePreviewExcludeChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800F0DD0 (-LivePreviewExcludeChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800F0E70 (-MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnDisableMoveSizeFeedbackChanged@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800F11B0 (-OnDisableMoveSizeFeedbackChanged@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?RegisterIndirectSwapchainRenderTargetForWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX_NU_LUID@@@Z @ 0x1800F1BD0 (-RegisterIndirectSwapchainRenderTargetForWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX_NU_LUID@@.c)
 *     ?SetCornerStyle@CWindowList@@UEAAJPEAUIDwmWindow@@W4CORNER_STYLE@@@Z @ 0x1800F2E00 (-SetCornerStyle@CWindowList@@UEAAJPEAUIDwmWindow@@W4CORNER_STYLE@@@Z.c)
 *     ?SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x1800F2E90 (-SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 *     ?SetPartColor@CWindowList@@UEAAJPEAUIDwmWindow@@PEBUNCPART_COLOR@@@Z @ 0x1800F3100 (-SetPartColor@CWindowList@@UEAAJPEAUIDwmWindow@@PEBUNCPART_COLOR@@@Z.c)
 *     ?SetRemoteAppPolicy@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWM_REMOTEAPP_POLICY@@@Z @ 0x1800F31D0 (-SetRemoteAppPolicy@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWM_REMOTEAPP_POLICY@@@Z.c)
 *     ?SetResizeCompSyncObject@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX@Z @ 0x1800F3290 (-SetResizeCompSyncObject@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX@Z.c)
 *     ?SetSystemBackdropType@CWindowList@@UEAAJPEAUIDwmWindow@@W4SYSTEMBACKDROP_TYPE@@@Z @ 0x1800F3330 (-SetSystemBackdropType@CWindowList@@UEAAJPEAUIDwmWindow@@W4SYSTEMBACKDROP_TYPE@@@Z.c)
 *     ?SetUseDarkModeColors@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x1800F33C0 (-SetUseDarkModeColors@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 *     ?ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800F3460 (-ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?TransitionsForceDisabledChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800F3840 (-TransitionsForceDisabledChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UnregisterIndirectSwapchainRenderTargetFromWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEA_N@Z @ 0x1800F3900 (-UnregisterIndirectSwapchainRenderTargetFromWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEA_N@Z.c)
 *     ?WindowMinimizing@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800F3AA0 (-WindowMinimizing@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?WindowTransitionChange@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x1800F3B20 (-WindowTransitionChange@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2.c)
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x1800F3C10 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?ZorderBandChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800F40F0 (-ZorderBandChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ??0CWindowData@@QEAA@XZ @ 0x1800077FC (--0CWindowData@@QEAA@XZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180093D98 (-SyncWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009AFF8 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CWindowList::GetSyncedWindowData(
        CWindowList *this,
        struct IDwmWindow *a2,
        char a3,
        struct CWindowData **a4)
{
  CWindowData *v8; // rbx
  CWindowData *v9; // rax
  const char *v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v8 = (CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( !v8 && (!a3 || (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2)) )
  {
    v9 = (CWindowData *)DefaultHeap::AllocClear(0x3A0uLL);
    if ( v9 )
      v8 = CWindowData::CWindowData(v9);
    else
      v8 = 0LL;
    if ( !v8 )
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        (void *)0x96D,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        v10);
    *((_QWORD *)v8 + 3) = a2;
    (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v8);
    *((_QWORD *)v8 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
    CWindowList::SyncWindowData(this, a2, v8);
  }
  *a4 = v8;
}
