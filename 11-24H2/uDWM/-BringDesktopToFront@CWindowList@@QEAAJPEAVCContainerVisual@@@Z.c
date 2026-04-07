/*
 * XREFs of ?BringDesktopToFront@CWindowList@@QEAAJPEAVCContainerVisual@@@Z @ 0x18008FB6C
 * Callers:
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x1800834A0 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x180089ED0 (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x180092EB0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 * Callees:
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x18002047C (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x1800207E4 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?GetIterator@VisualCollection@@QEAA?AVVisualCollectionIterator@@XZ @ 0x180021010 (-GetIterator@VisualCollection@@QEAA-AVVisualCollectionIterator@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x180062FC0 (-MoveNext@VisualCollectionIterator@@QEAA_NXZ.c)
 *     ?ForceRender@CCompositor@@QEAAJXZ @ 0x1800664FC (-ForceRender@CCompositor@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowList::BringDesktopToFront(CWindowList *this, struct CContainerVisual *a2)
{
  struct CContainerVisual *v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+3Ch] [rbp-1Ch]

  VisualCollection::GetIterator(*((_QWORD *)this + 10) + 144LL, (__int64)&v10);
  while ( VisualCollectionIterator::MoveNext((VisualCollectionIterator *)&v10) )
  {
    v4 = *(struct CContainerVisual **)(*(_QWORD *)(v10 + 8) + 8LL * v11);
    if ( v4 != a2 )
      (*(void (__fastcall **)(struct CContainerVisual *))(*(_QWORD *)v4 + 88LL))(v4);
  }
  (*(void (__fastcall **)(struct CContainerVisual *))(*(_QWORD *)a2 + 88LL))(a2);
  v5 = CVisual::MoveToFront(a2, 0);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x727u, 0LL);
  }
  else
  {
    v7 = CWindowList::MoveTransitionAndTouchVisualToFront(this);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x728u, 0LL);
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 48LL))(*((_QWORD *)this + 10));
      v6 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x729u, 0LL);
      else
        CCompositor::ForceRender(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
    }
  }
  return v6;
}
