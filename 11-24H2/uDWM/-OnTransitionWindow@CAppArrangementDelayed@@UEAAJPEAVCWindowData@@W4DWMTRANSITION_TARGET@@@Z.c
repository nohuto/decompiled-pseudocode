/*
 * XREFs of ?OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800D35F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x18003EF80 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x18004CB88 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x180050A28 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180053BC4 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180053C14 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800BC0C8 (-GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CAppArrangementDelayed::OnTransitionWindow(struct CStoryboard *a1, __int64 a2, int a3)
{
  CBaseObject *v3; // rdi
  int v6; // eax
  CAnimatedTransitionVisual **v7; // rbx
  const struct tagRECT *v8; // rbp
  int DesktopThumbnail; // eax
  int v10; // eax
  CMILRefCountBase *v12; // [rsp+40h] [rbp-18h] BYREF
  CBaseObject *v13; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( (a3 & 0x20000000) != 0 && (a3 & 0xFFFu) - 38 <= 1 )
  {
    v6 = CTransitionVisualController::CreateDesktopAnimationComponent(
           *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
           (struct CWindowData *)a2,
           2,
           (const struct tagRECT *)(a2 + 748),
           1,
           1,
           a1,
           &v12);
    v7 = (CAnimatedTransitionVisual **)v12;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v6, 0xEC3u, 0LL);
    }
    else
    {
      v8 = (const struct tagRECT *)(a2 + 764);
      CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v12 + 5), v8);
      CAnimatedTransitionVisual::SetEndRect(v7[5], v8);
      DesktopThumbnail = CDesktopThumbnail::GetDesktopThumbnail(&v13);
      if ( DesktopThumbnail < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
          1LL,
          DesktopThumbnail,
          0xEC6u,
          0LL);
        v3 = v13;
      }
      else
      {
        v3 = v13;
        CAnimatedTransitionVisual::ProcessSnapshotOnVisual((CCachedVisualImageProxy **)v7[5], v13, v8);
        v10 = CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
            1LL,
            v10,
            0xEC9u,
            0LL);
        }
        else
        {
          *((_QWORD *)a1 + 23) = v7;
          CMILRefCountBase::AddRef((CMILRefCountBase *)v7);
        }
      }
    }
    if ( v3 )
      CBaseObject::Release(v3);
    if ( v7 )
      CBaseObject::Release((CBaseObject *)v7);
  }
  return 0LL;
}
