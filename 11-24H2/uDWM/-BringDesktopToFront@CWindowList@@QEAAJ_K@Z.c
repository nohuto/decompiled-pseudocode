/*
 * XREFs of ?BringDesktopToFront@CWindowList@@QEAAJ_K@Z @ 0x1800EE328
 * Callers:
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x1800834A0 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x180089ED0 (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x180092EB0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 * Callees:
 *     ?RemoveSelfFromParent@CVisual@@QEAAJXZ @ 0x18001D834 (-RemoveSelfFromParent@CVisual@@QEAAJXZ.c)
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x18002047C (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K_N@Z @ 0x1800205F4 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K_N@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x1800207E4 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?GetIterator@VisualCollection@@QEAA?AVVisualCollectionIterator@@XZ @ 0x180021010 (-GetIterator@VisualCollection@@QEAA-AVVisualCollectionIterator@@XZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180025C04 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x180047140 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z.c)
 *     ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x180062FC0 (-MoveNext@VisualCollectionIterator@@QEAA_NXZ.c)
 *     ?ForceRender@CCompositor@@QEAAJXZ @ 0x1800664FC (-ForceRender@CCompositor@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowList::BringDesktopToFront(CContainerVisual ***this, unsigned __int64 a2)
{
  CVisual *RenderTargetRootVisualForDesktop; // rsi
  CVisual *v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+3Ch] [rbp-1Ch]

  RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop((CWindowList *)this, a2);
  VisualCollection::GetIterator((__int64)(this[10] + 18), (__int64)&v11);
  while ( VisualCollectionIterator::MoveNext((VisualCollectionIterator *)&v11) )
  {
    v5 = *(CVisual **)(*(_QWORD *)(v11 + 8) + 8LL * v12);
    if ( v5 != RenderTargetRootVisualForDesktop )
      (*(void (__fastcall **)(CVisual *))(*(_QWORD *)v5 + 88LL))(v5);
  }
  (*(void (__fastcall **)(CVisual *))(*(_QWORD *)RenderTargetRootVisualForDesktop + 88LL))(RenderTargetRootVisualForDesktop);
  v6 = CVisual::MoveToFront(RenderTargetRootVisualForDesktop, 0);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x748u, 0LL);
  }
  else
  {
    v8 = CWindowList::MoveTransitionAndTouchVisualToFront((CWindowList *)this);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x749u, 0LL);
    }
    else
    {
      CWindowList::GetOverlayRootVisualForDesktop((CWindowList *)this, a2, 1);
      CVisual::RemoveSelfFromParent(this[11]);
      CContainerVisual::AddChild(RenderTargetRootVisualForDesktop, (struct CVisual *)this[11]);
      v9 = (*((__int64 (__fastcall **)(CContainerVisual **))*this[10] + 6))(this[10]);
      v7 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x751u, 0LL);
      else
        CCompositor::ForceRender(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
    }
  }
  return v7;
}
