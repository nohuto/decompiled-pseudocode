/*
 * XREFs of ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x1800177D0
 * Callers:
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x180005904 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 *     ??1CDesktopThumbnailCVIVisual@@MEAA@XZ @ 0x180005B9C (--1CDesktopThumbnailCVIVisual@@MEAA@XZ.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x180009C74 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x18000CB80 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180015A38 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180019294 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x1800199A0 (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18002D918 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ??1CRenderDataVisual@@MEAA@XZ @ 0x1800370D4 (--1CRenderDataVisual@@MEAA@XZ.c)
 *     ??_GCCanvasVisual@@MEAAPEAXI@Z @ 0x1800389B0 (--_GCCanvasVisual@@MEAAPEAXI@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180039A20 (--1CVisual@@MEAA@XZ.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x180053CA0 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x1800B7EA4 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ @ 0x1800C7418 (-_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800C75A0 (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?Stop@CScreenRotation@@QEAAX_N0@Z @ 0x1800D7C74 (-Stop@CScreenRotation@@QEAAX_N0@Z.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@HW4StagedBackgroundPolicy@1@@Z @ 0x1800EC420 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 *     ?Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180100FF8 (-Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180016EF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall VisualCollection::RemoveAll(VisualCollection *this)
{
  unsigned int v2; // esi
  __int64 v4; // r14
  int v5; // eax
  unsigned int v6; // ebp
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // eax

  v2 = 0;
  if ( *((_DWORD *)this + 10) )
  {
    ++*((_DWORD *)this + 12);
    do
    {
      v4 = 8LL * v2;
      v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v4 + *((_QWORD *)this + 2)) + 80LL))(
             *(_QWORD *)(v4 + *((_QWORD *)this + 2)),
             0LL);
      v6 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x14Du, 0LL);
        return v6;
      }
      v7 = *(_QWORD *)(v4 + *((_QWORD *)this + 2));
      if ( v7 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 8), 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64, __int64))v7)(v7, 1LL);
        *(_QWORD *)(v4 + *((_QWORD *)this + 2)) = 0LL;
      }
      ++v2;
    }
    while ( v2 < *((_DWORD *)this + 10) );
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 72LL))(*((_QWORD *)this + 1));
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v8 + 16) + 16LL) + 384LL))(
           *(_QWORD *)(*(_QWORD *)(v8 + 16) + 16LL),
           *(unsigned int *)(*(_QWORD *)(v8 + 16) + 24LL));
    v2 = v9;
    if ( v9 >= 0 )
      goto LABEL_2;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x152u, 0LL);
  }
  else
  {
LABEL_2:
    *((_DWORD *)this + 10) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 16, 8u);
  }
  return v2;
}
