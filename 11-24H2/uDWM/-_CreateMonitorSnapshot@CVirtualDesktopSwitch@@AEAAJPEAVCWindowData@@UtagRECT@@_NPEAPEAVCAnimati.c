/*
 * XREFs of ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800D49BC
 * Callers:
 *     ?OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800D3780 (-OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_WindowEnumCallback@CVirtualDesktopSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D8F70 (-_WindowEnumCallback@CVirtualDesktopSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard.c)
 * Callees:
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180015CB8 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18003340C (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x18003EF80 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x18003FFA0 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x180042850 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?SetTransitionStoryboardAndTarget@CAnimatedTransitionVisual@@QEAAXHH@Z @ 0x18004615C (-SetTransitionStoryboardAndTarget@CAnimatedTransitionVisual@@QEAAXHH@Z.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x18004CB88 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z @ 0x18008BDF0 (-SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CVirtualDesktopSwitch::_CreateMonitorSnapshot(
        CVirtualDesktopSwitch *this,
        struct CWindowData *a2,
        struct tagRECT *a3,
        char a4,
        struct CAnimationComponent **a5)
{
  int v5; // eax
  int v8; // eax
  CAnimatedTransitionVisual *v11; // rsi
  unsigned int v12; // ebx
  struct CVisual *RootVisualForDesktop; // r14
  LPVOID v14; // rax
  __int64 v15; // rdi
  int v16; // eax
  int v17; // eax
  __int64 v18; // rax
  CCachedVisualImageProxy **v19; // rcx
  int v20; // eax
  int v21; // eax
  unsigned __int64 v23; // [rsp+30h] [rbp-58h] BYREF
  CAnimatedTransitionVisual *v24; // [rsp+38h] [rbp-50h] BYREF
  __int64 v25; // [rsp+40h] [rbp-48h]
  LPVOID v26; // [rsp+48h] [rbp-40h]

  v5 = a3->right - a3->left;
  if ( v5 < 0 )
    v5 = 0;
  v24 = 0LL;
  LODWORD(v25) = v5;
  v8 = a3->bottom - a3->top;
  v23 = 0LL;
  if ( v8 < 0 )
    v8 = 0;
  HIDWORD(v25) = v8;
  v11 = 0LL;
  if ( !(unsigned int)GetDesktopID(1LL, &v23) )
  {
    v12 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      -2147467259,
      0x125Du,
      0LL);
    return v12;
  }
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                           v23);
  v14 = DefaultHeap::AllocClear(0xA0uLL);
  v26 = v14;
  if ( v14 )
  {
    v15 = CAnimationComponent::CAnimationComponent((__int64)v14, 0LL, *((_DWORD *)a2 + 186) & 0xFFF, 1, (__int64)this);
    if ( v15 )
    {
      v16 = CAnimatedTransitionVisual::Create(&v24);
      v11 = v24;
      v12 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
          1LL,
          v16,
          0x1267u,
          0LL);
        goto LABEL_19;
      }
      v17 = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)v24, RootVisualForDesktop, 1, a3);
      v12 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
          1LL,
          v17,
          0x1268u,
          0LL);
        goto LABEL_19;
      }
      CAnimatedTransitionVisual::SetTransitionStoryboardAndTarget(v11, *((_DWORD *)this + 18), 1);
      v18 = v25;
      *((_QWORD *)v11 + 112) = 0LL;
      *((_QWORD *)v11 + 113) = v18;
      CAnimationComponent::SetTransitionVisual((CAnimationComponent *)v15, v11);
      *(struct tagRECT *)(v15 + 88) = *a3;
      if ( a4 )
      {
        v19 = *(CCachedVisualImageProxy ***)(v15 + 40);
        *(_BYTE *)(v15 + 67) = 1;
        v20 = CAnimatedTransitionVisual::ProcessSnapshotOnVisual(v19, RootVisualForDesktop, a3);
        v12 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
            1LL,
            v20,
            0x1274u,
            0LL);
          goto LABEL_19;
        }
        v21 = CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
        v12 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
            1LL,
            v21,
            0x1275u,
            0LL);
LABEL_19:
          CBaseObject::Release((CBaseObject *)v15);
          goto LABEL_21;
        }
      }
      *a5 = (struct CAnimationComponent *)v15;
      CMILRefCountBase::AddRef((CMILRefCountBase *)v15);
      goto LABEL_19;
    }
  }
  v12 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
    1LL,
    -2147024882,
    0x1265u,
    0LL);
LABEL_21:
  if ( v11 )
    CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v11 + 8));
  return v12;
}
