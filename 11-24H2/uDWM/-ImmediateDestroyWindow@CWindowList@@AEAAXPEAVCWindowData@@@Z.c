/*
 * XREFs of ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001BC68
 * Callers:
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001A304 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18008FC80 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?UnregisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x18001BF88 (-UnregisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ??1CWindowData@@QEAA@XZ @ 0x18001BFE4 (--1CWindowData@@QEAA@XZ.c)
 *     ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001C0D4 (-ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ForceDisconnectClientNode@CWindowData@@QEAAXXZ @ 0x18001C258 (-ForceDisconnectClientNode@CWindowData@@QEAAXXZ.c)
 *     ?RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z @ 0x18001C2F4 (-RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z.c)
 *     ?WindowDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x18001C3C0 (-WindowDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18001C3FC (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18001C608 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x18001CE24 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 *     ?WindowDestroyed@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x18001D074 (-WindowDestroyed@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?OnWindowDestroy@CAnimationScheduler@@QEAAXPEBVCWindowData@@@Z @ 0x18001D110 (-OnWindowDestroy@CAnimationScheduler@@QEAAXPEBVCWindowData@@@Z.c)
 *     ?RemoveSelfFromParent@CVisual@@QEAAJXZ @ 0x18001D834 (-RemoveSelfFromParent@CVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@?$DynArray@PEBVCStoryboard@@$0A@@@QEAAHAEBQEBVCStoryboard@@@Z @ 0x18004E3F0 (-Remove@-$DynArray@PEBVCStoryboard@@$0A@@@QEAAHAEBQEBVCStoryboard@@@Z.c)
 *     ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z @ 0x180061894 (-UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z.c)
 *     ?SetWindowData@CTopLevelWindow3D@@QEAAXPEAVCWindowData@@@Z @ 0x18006C2A8 (-SetWindowData@CTopLevelWindow3D@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?OnWindowDestroyed@CSecondaryWindowRepresentation@@QEAAXPEAVCWindowData@@@Z @ 0x180099D40 (-OnWindowDestroyed@CSecondaryWindowRepresentation@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?OnHostWindowDying@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800F14D8 (-OnHostWindowDying@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnProxyWindowDying@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800F1570 (-OnProxyWindowDying@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CWindowList::ImmediateDestroyWindow(CWindowList *this, struct CWindowData *a2)
{
  bool v4; // r8
  CBaseObject *v5; // rcx
  int v6; // eax
  CDesktopManager *v7; // rsi
  CAnimationScheduler *v8; // rcx
  CTransitionVisualController *v9; // rcx
  unsigned int i; // ebp
  __int64 v11; // rax
  CVisual *v12; // rcx
  CVisual *v13; // rcx
  CBaseObject *v14; // rcx
  CTopLevelWindow3D *v15; // rcx
  CBaseObject *v16; // rcx
  __int64 v17; // rcx
  CBaseObject *v18; // rcx
  struct CWindowData *v19; // [rsp+48h] [rbp+10h] BYREF

  v19 = a2;
  if ( (*((_BYTE *)a2 + 738) & 2) != 0 )
    DynArray<CStoryboard const *,0>::Remove((char *)this + 496, &v19);
  while ( *((_DWORD *)a2 + 140) )
    CWindowList::UnregisterThumbnail(this, **((struct CThumbnailData ***)a2 + 67));
  while ( *((_DWORD *)a2 + 148) )
    CWindowList::UnregisterThumbnail(this, **((struct CThumbnailData ***)a2 + 71));
  CWindowList::SetOwner(this, a2, 0LL);
  while ( *((_DWORD *)a2 + 130) )
    CSecondaryWindowRepresentation::OnWindowDestroyed(**((CSecondaryWindowRepresentation ***)a2 + 62), a2);
  CWindowData::ClearSnapshot(a2, 0, v4, 0);
  v5 = (CBaseObject *)*((_QWORD *)a2 + 61);
  if ( v5 )
  {
    CBaseObject::Release(v5);
    *((_QWORD *)a2 + 61) = 0LL;
  }
  while ( 1 )
  {
    v6 = *((_DWORD *)a2 + 158);
    if ( !v6 )
      break;
    CWindowList::SetOwner(this, *(struct CWindowData **)(*((_QWORD *)a2 + 76) + 8LL * (unsigned int)(v6 - 1)), 0LL);
  }
  CLivePreview::OnWindowShowHide(*((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 57), a2, 0LL, 1);
  v7 = CDesktopManager::s_pDesktopManagerInstance;
  v8 = (CAnimationScheduler *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
  if ( v8 )
  {
    CAnimationScheduler::OnWindowDestroy(v8, a2);
    v7 = CDesktopManager::s_pDesktopManagerInstance;
  }
  v9 = (CTransitionVisualController *)*((_QWORD *)v7 + 24);
  if ( v9 )
  {
    CTransitionVisualController::RemoveTLWClone(v9, *((const struct CTopLevelWindow **)a2 + 55), 0, 1);
    v7 = CDesktopManager::s_pDesktopManagerInstance;
  }
  for ( i = 0; i < *((_DWORD *)v7 + 320); ++i )
  {
    v17 = *(_QWORD *)(*((_QWORD *)v7 + 157) + 8LL * i);
    (*(void (__fastcall **)(__int64, struct CWindowData *))(*(_QWORD *)v17 + 200LL))(v17, a2);
  }
  v11 = *((_QWORD *)a2 + 80);
  if ( v11 )
  {
    *(_QWORD *)(v11 + 272) = 0LL;
    v18 = (CBaseObject *)*((_QWORD *)a2 + 80);
    if ( v18 )
    {
      CBaseObject::Release(v18);
      *((_QWORD *)a2 + 80) = 0LL;
    }
  }
  v12 = (CVisual *)*((_QWORD *)a2 + 56);
  if ( v12 )
  {
    CVisual::RemoveSelfFromParent(v12);
    v15 = (CTopLevelWindow3D *)*((_QWORD *)a2 + 56);
    if ( v15 )
      CTopLevelWindow3D::SetWindowData(v15, 0LL);
    v16 = (CBaseObject *)*((_QWORD *)a2 + 56);
    if ( v16 )
    {
      CBaseObject::Release(v16);
      *((_QWORD *)a2 + 56) = 0LL;
    }
  }
  v13 = (CVisual *)*((_QWORD *)a2 + 55);
  if ( v13 )
  {
    CVisual::RemoveSelfFromParent(v13);
    v13 = (CVisual *)*((_QWORD *)a2 + 55);
    if ( v13 )
    {
      CBaseObject::Release(v13);
      *((_QWORD *)a2 + 55) = 0LL;
    }
  }
  if ( *((_QWORD *)a2 + 82) )
    CWindowList::OnProxyWindowDying(v13, a2);
  if ( *((_QWORD *)a2 + 81) )
    CWindowList::OnHostWindowDying(this, a2);
  CWindowList::ShowProjectionBorder(this, a2, 0);
  CWindowData::ForceDisconnectClientNode(a2);
  CImmersiveIconicBitmapRegistry::WindowDestroyed(
    *((CImmersiveIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 29),
    a2);
  CIconicBitmapRegistry::WindowDestroyed(
    *((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 28),
    a2);
  v14 = (CBaseObject *)*((_QWORD *)a2 + 53);
  if ( v14 )
  {
    CBaseObject::Release(v14);
    *((_QWORD *)a2 + 53) = 0LL;
  }
  CWindowList::UnregisterAccentState(this, a2);
  CWindowData::~CWindowData(a2);
  DefaultHeap::Free(a2);
}
