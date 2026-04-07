/*
 * XREFs of ?OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800DB9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x180054C9C (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180055EE4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800B6238 (-GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800EA690 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 */

__int64 __fastcall CAppArrangementDelayed::OnTransitionWindow(struct CStoryboard *a1, __int64 a2, int a3)
{
  int v5; // eax
  CBaseObject *v6; // rbx
  const struct tagRECT *v7; // rdi
  __int64 v8; // rax
  CVisual *v9; // rcx
  int v10; // eax
  int DesktopThumbnail; // eax
  const struct tagRECT *v12; // r8
  CBaseObject *v13; // rdi
  int v14; // eax
  CBaseObject *v16; // [rsp+40h] [rbp-18h] BYREF
  CBaseObject *v17; // [rsp+78h] [rbp+20h] BYREF

  v17 = 0LL;
  v16 = 0LL;
  if ( (a3 & 0x20000000) == 0 || (a3 & 0xFFFu) - 38 > 1 )
    return 0LL;
  v5 = CTransitionVisualController::CreateDesktopAnimationComponent(
         *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
         (struct CWindowData *)a2,
         2,
         (const struct tagRECT *)(a2 + 684),
         1,
         1,
         a1,
         &v16);
  if ( v5 >= 0 )
  {
    v7 = (const struct tagRECT *)(a2 + 700);
    v6 = v16;
    CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v16 + 5), v7);
    v8 = *((_QWORD *)v6 + 5);
    v9 = (CVisual *)(v8 + 8);
    *(struct tagRECT *)(v8 + 872) = *v7;
    v10 = *(_DWORD *)(v8 + 96);
    if ( (v10 & 0x1000) == 0 )
    {
      *((_DWORD *)v9 + 22) = v10 | 0x1000;
      CVisual::PropagateDirtyChildren(v9);
    }
    DesktopThumbnail = CDesktopThumbnail::GetDesktopThumbnail(&v17);
    if ( DesktopThumbnail >= 0 )
    {
      v12 = v7;
      v13 = v17;
      CAnimatedTransitionVisual::ProcessSnapshotOnVisual(*((CCachedVisualImageProxy ***)v6 + 5), v17, v12);
      v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                            + 24LL)
                                              + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                   + 6)
                                                                 + 24LL));
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v14, 0xEA0u);
        goto LABEL_13;
      }
      *((_QWORD *)a1 + 23) = v6;
      _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
      v6 = v16;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
        1LL,
        DesktopThumbnail,
        0xE9Du);
    }
    v13 = v17;
LABEL_13:
    if ( v13 )
      CBaseObject::Release(v13);
    goto LABEL_15;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v5, 0xE9Au);
  v6 = v16;
LABEL_15:
  if ( v6 )
    CBaseObject::Release(v6);
  return 0LL;
}
