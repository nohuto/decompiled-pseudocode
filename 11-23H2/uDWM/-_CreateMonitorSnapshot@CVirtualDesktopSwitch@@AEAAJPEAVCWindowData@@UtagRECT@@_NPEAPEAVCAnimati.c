/*
 * XREFs of ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DD1E8
 * Callers:
 *     ?OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800DBB90 (-OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_WindowEnumCallback@CVirtualDesktopSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E2F70 (-_WindowEnumCallback@CVirtualDesktopSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard.c)
 * Callees:
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x1800164E0 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18004DAFC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x180054C9C (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180055584 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180055AB4 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
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
  struct CAnimatedTransitionVisual *v11; // rsi
  unsigned int v12; // edi
  struct CVisual *RootVisualForDesktop; // r14
  __int64 v14; // rax
  __int64 v15; // rbx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rax
  CCachedVisualImageProxy **v19; // rcx
  unsigned int v21; // [rsp+20h] [rbp-68h]
  struct CAnimatedTransitionVisual *v22; // [rsp+30h] [rbp-58h] BYREF
  __int64 v23; // [rsp+38h] [rbp-50h]
  unsigned __int64 v24[9]; // [rsp+40h] [rbp-48h] BYREF

  v5 = a3->right - a3->left;
  if ( v5 < 0 )
    v5 = 0;
  v22 = 0LL;
  LODWORD(v23) = v5;
  v8 = a3->bottom - a3->top;
  if ( v8 < 0 )
    v8 = 0;
  v11 = 0LL;
  HIDWORD(v23) = v8;
  if ( !(unsigned int)GetDesktopID(1LL, v24) )
  {
    v12 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      -2147467259,
      0x1234u);
    return v12;
  }
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                           v24[0]);
  v14 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          160LL);
  v24[1] = v14;
  if ( v14 )
  {
    v15 = CAnimationComponent::CAnimationComponent(v14, 0LL, *((_DWORD *)a2 + 170) & 0xFFF, 1, (__int64)this);
    if ( v15 )
    {
      v16 = CAnimatedTransitionVisual::Create(&v22);
      v12 = v16;
      if ( v16 < 0 )
      {
        v21 = 4670;
LABEL_11:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v16, v21);
LABEL_20:
        v11 = v22;
        goto LABEL_21;
      }
      v11 = v22;
      v17 = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)v22, RootVisualForDesktop, 1, a3);
      v12 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v17, 0x123Fu);
LABEL_21:
        CBaseObject::Release((CBaseObject *)v15);
        goto LABEL_23;
      }
      *((_DWORD *)v11 + 184) = *((_DWORD *)this + 18);
      v18 = v23;
      *((_DWORD *)v11 + 185) = 1;
      *((_QWORD *)v11 + 118) = 0LL;
      *((_QWORD *)v11 + 119) = v18;
      *(_QWORD *)(v15 + 40) = v11;
      _InterlockedAdd((volatile signed __int32 *)v11 + 4, 1u);
      *(struct tagRECT *)(v15 + 88) = *a3;
      if ( a4 )
      {
        v19 = *(CCachedVisualImageProxy ***)(v15 + 40);
        *(_BYTE *)(v15 + 67) = 1;
        v16 = CAnimatedTransitionVisual::ProcessSnapshotOnVisual(v19, RootVisualForDesktop, a3);
        v12 = v16;
        if ( v16 < 0 )
        {
          v21 = 4683;
          goto LABEL_11;
        }
        v16 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                + 6)
                                                              + 24LL)
                                                + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                     + 6)
                                                                   + 24LL));
        v12 = v16;
        if ( v16 < 0 )
        {
          v21 = 4684;
          goto LABEL_11;
        }
      }
      *a5 = (struct CAnimationComponent *)v15;
      _InterlockedAdd((volatile signed __int32 *)(v15 + 8), 1u);
      goto LABEL_20;
    }
  }
  v12 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, -2147024882, 0x123Cu);
LABEL_23:
  if ( v11 )
    CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v11 + 8));
  return v12;
}
