/*
 * XREFs of ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x180054FEC
 * Callers:
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x18002E360 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 * Callees:
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002D59C (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?StopAnimation@CLoginTransition@@QEAAJXZ @ 0x18002DB6C (-StopAnimation@CLoginTransition@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180036F9C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18003CC40 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180045AEC (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x18004F93C (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180050D7C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x180054C9C (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180055584 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180055AB4 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x180055D1C (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180055EA8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180055EE4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x18005608C (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x1800560C0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x1800561B0 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x1800566A0 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180058438 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180058514 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A14C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLoginTransition::StartAnimation(
        CLoginTransition *this,
        int a2,
        struct CVisual *a3,
        struct CVisual *a4,
        unsigned __int64 a5)
{
  int inserted; // edi
  int v10; // esi
  CAnimatedTransitionVisual **v11; // r15
  __int64 v12; // rcx
  CAnimatedTransitionVisual **v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 *v16; // r13
  CBaseObject *v17; // rcx
  CAnimatedTransitionVisual *v18; // r8
  int v19; // eax
  int v20; // eax
  CAnimatedTransitionVisual *v21; // r8
  int v22; // eax
  int v23; // eax
  CAnimatedTransitionVisual *v24; // rax
  int v25; // r12d
  CAnimatedTransitionVisual *v26; // rax
  CAnimatedTransitionVisual *v27; // rax
  CVisual *v28; // rcx
  int v29; // eax
  CAnimatedTransitionVisual *v30; // rax
  CVisual *v31; // rcx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  __int64 v35; // rax
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  CAnimatedTransitionVisual *v37; // r8
  unsigned int v38; // edx
  CAnimationEngine *v39; // r15
  int v40; // eax
  unsigned int v42; // ecx
  unsigned int v43; // eax
  int v44; // [rsp+20h] [rbp-71h]
  int v45; // [rsp+20h] [rbp-71h]
  int v46; // [rsp+20h] [rbp-71h]
  struct CAnimationEngine *v47; // [rsp+30h] [rbp-61h]
  int v48; // [rsp+38h] [rbp-59h] BYREF
  CVisual *v49; // [rsp+40h] [rbp-51h] BYREF
  struct tagPOINT v50; // [rsp+48h] [rbp-49h] BYREF
  __int128 v51; // [rsp+50h] [rbp-41h] BYREF
  __int64 v52; // [rsp+60h] [rbp-31h]
  unsigned int v53; // [rsp+68h] [rbp-29h]
  struct tagRECT v54; // [rsp+70h] [rbp-21h] BYREF
  bool v55[8]; // [rsp+80h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+57h]

  v49 = a4;
  v48 = a2;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (__int64)&UdwmLoginTransition_Start,
      (__int64)a3,
      1LL,
      (__int64)v55);
  *((_QWORD *)this + 10) = a5;
  *((_DWORD *)this + 18) = a2;
  v47 = CDesktopManager::AcquireAnimationEngine();
  if ( !v47 )
  {
    inserted = -2147024882;
    v10 = -2147024882;
    v42 = 46;
    v39 = 0LL;
    goto LABEL_53;
  }
  inserted = CLoginTransition::StopAnimation(this);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v42 = 49;
LABEL_61:
    v39 = v47;
    goto LABEL_53;
  }
  *((_QWORD *)this + 4) = a3;
  if ( a3 )
    _InterlockedAdd((volatile signed __int32 *)a3 + 2, 1u);
  *((_QWORD *)this + 5) = a4;
  if ( a4 )
    _InterlockedAdd((volatile signed __int32 *)a4 + 2, 1u);
  v11 = (CAnimatedTransitionVisual **)((char *)this + 8);
  v12 = *((_QWORD *)this + 1);
  if ( v12 )
  {
    CBaseObject::Release((CBaseObject *)(v12 + 8));
    *v11 = 0LL;
  }
  v13 = (CAnimatedTransitionVisual **)((char *)this + 16);
  v14 = *((_QWORD *)this + 2);
  if ( v14 )
  {
    CBaseObject::Release((CBaseObject *)(v14 + 8));
    *v13 = 0LL;
  }
  v15 = *((_QWORD *)this + 3);
  if ( v15 )
  {
    CBaseObject::Release((CBaseObject *)(v15 + 8));
    *((_QWORD *)this + 3) = 0LL;
  }
  v16 = (unsigned __int64 *)((char *)this + 48);
  v17 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v17 )
  {
    CBaseObject::Release(v17);
    *v16 = 0LL;
  }
  inserted = CVisual::Create((struct CVisual **)this + 6);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v42 = 67;
    goto LABEL_61;
  }
  inserted = CAnimatedTransitionVisual::Create((struct CAnimatedTransitionVisual **)this + 1);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v42 = 68;
    goto LABEL_61;
  }
  inserted = CAnimatedTransitionVisual::Create((struct CAnimatedTransitionVisual **)this + 2);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v42 = 69;
    goto LABEL_61;
  }
  v50.x = -32000;
  v50.y = -32000;
  CVisual::SetOffset(a3, &v50);
  CVisual::SetOffset(v49, &v50);
  v54 = *(struct tagRECT *)((char *)CDesktopManager::s_pDesktopManagerInstance + 404);
  inserted = CAnimatedTransitionVisual::SetVisual(*v11, a3, 1, &v54);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v42 = 83;
    goto LABEL_61;
  }
  inserted = CAnimatedTransitionVisual::SetVisual(*v13, v49, 0, &v54);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v42 = 84;
    goto LABEL_61;
  }
  inserted = CAnimatedTransitionVisual::ProcessSnapshotOnVisual((CCachedVisualImageProxy **)*v11, a3, &v54);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v42 = 91;
    goto LABEL_61;
  }
  v18 = *v11;
  v19 = 0;
  if ( v54.right - v54.left >= 0 )
    v19 = v54.right - v54.left;
  LODWORD(v49) = v19;
  v20 = 0;
  if ( v54.bottom - v54.top >= 0 )
    v20 = v54.bottom - v54.top;
  HIDWORD(v49) = v20;
  (*(void (__fastcall **)(__int64, CVisual **))(*((_QWORD *)v18 + 1) + 104LL))((__int64)v18 + 8, &v49);
  v21 = *v13;
  v22 = 0;
  if ( v54.right - v54.left >= 0 )
    v22 = v54.right - v54.left;
  *(_DWORD *)v55 = v22;
  v23 = 0;
  if ( v54.bottom - v54.top >= 0 )
    v23 = v54.bottom - v54.top;
  *(_DWORD *)&v55[4] = v23;
  (*(void (__fastcall **)(__int64, bool *))(*((_QWORD *)v21 + 1) + 104LL))((__int64)v21 + 8, v55);
  v24 = *v11;
  v25 = v48;
  *((_DWORD *)v24 + 184) = v48;
  *((_DWORD *)v24 + 185) = 2;
  v26 = *v13;
  *((_DWORD *)v26 + 184) = v25;
  *((_DWORD *)v26 + 185) = 1;
  CAnimatedTransitionVisual::SetBeginRect(*v11, &v54);
  CAnimatedTransitionVisual::SetBeginRect(*v13, &v54);
  v27 = *v11;
  *(struct tagRECT *)((char *)v27 + 872) = v54;
  v28 = (CAnimatedTransitionVisual *)((char *)v27 + 8);
  v29 = *((_DWORD *)v27 + 24);
  if ( (v29 & 0x1000) == 0 )
  {
    *((_DWORD *)v28 + 22) = v29 | 0x1000;
    CVisual::PropagateDirtyChildren(v28);
  }
  v30 = *v13;
  *(struct tagRECT *)((char *)v30 + 872) = v54;
  v31 = (CAnimatedTransitionVisual *)((char *)v30 + 8);
  v32 = *((_DWORD *)v30 + 24);
  if ( (v32 & 0x1000) == 0 )
  {
    *((_DWORD *)v31 + 22) = v32 | 0x1000;
    CVisual::PropagateDirtyChildren(v31);
  }
  CAnimatedTransitionVisual::SetBeginAlpha(*v13, 0.0);
  v33 = v54.right - v54.left;
  if ( v54.right - v54.left < 0 )
    v33 = 0;
  *(_DWORD *)v55 = v33;
  v34 = v54.bottom - v54.top;
  if ( v54.bottom - v54.top < 0 )
    v34 = 0;
  *(_DWORD *)&v55[4] = v34;
  v35 = *(_QWORD *)v55;
  *((_QWORD *)*v13 + 119) = *(_QWORD *)v55;
  *((_QWORD *)*v11 + 119) = v35;
  RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(
                                       *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                                       *((_QWORD *)this + 10));
  inserted = VisualCollection::InsertRelative(
               (struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32),
               *v16,
               0LL,
               0,
               v44);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v42 = 112;
    goto LABEL_61;
  }
  inserted = VisualCollection::InsertRelative(
               (VisualCollection *)(*v16 + 32),
               ((unsigned __int64)*v11 + 8) & -(__int64)(*v11 != 0LL),
               0LL,
               0,
               v45);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v42 = 113;
    goto LABEL_61;
  }
  inserted = VisualCollection::InsertRelative(
               (VisualCollection *)(*v16 + 32),
               ((unsigned __int64)*v13 + 8) & -(__int64)(*v13 != 0LL),
               0LL,
               0,
               v46);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v42 = 114;
    goto LABEL_61;
  }
  inserted = CVisual::MoveToFront((CVisual *)*v16, 0);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v42 = 117;
    goto LABEL_61;
  }
  *(_QWORD *)v55 = *v11;
  inserted = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v51, 8, 1, v55);
  if ( inserted < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0xC0u, 0LL);
    v10 = inserted;
    v42 = 119;
LABEL_73:
    v39 = v47;
    goto LABEL_53;
  }
  v37 = *v13;
  *(_QWORD *)v55 = *v13;
  v38 = v53 + 1;
  if ( v53 + 1 < v53 )
  {
    inserted = -2147024362;
    v10 = -2147024362;
    v43 = 181;
    goto LABEL_72;
  }
  if ( v38 <= HIDWORD(v52) )
  {
    *(_QWORD *)(v51 + 8LL * v53) = v37;
    v53 = v38;
    goto LABEL_47;
  }
  v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v51, 8, 1, v55);
  inserted = v10;
  if ( v10 < 0 )
  {
    v43 = 192;
LABEL_72:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, v43, 0LL);
    v42 = 120;
    goto LABEL_73;
  }
LABEL_47:
  v39 = v47;
  inserted = CAnimationEngine::RegisterForAnimationCompleteNotification(v47, this);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v42 = 124;
  }
  else
  {
    inserted = CAnimationEngine::ScheduleStartAnimation(v47, v25);
    v10 = inserted;
    if ( inserted < 0 )
    {
      v42 = 127;
    }
    else
    {
      inserted = CDesktopManager::PostStartAnimations(CDesktopManager::s_pDesktopManagerInstance);
      v10 = inserted;
      if ( inserted >= 0 )
      {
        v48 = (v25 != 55) + 1;
        v40 = RtlPublishWnfStateData(WNF_IMSN_LOGIN_TRANSITION, 0LL, &v48, 4LL) | 0x10000000;
        if ( v40 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x85,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\logintransition.cpp",
            (const char *)(unsigned int)v40,
            0);
        *((_BYTE *)this + 68) = 1;
        goto LABEL_54;
      }
      v42 = 131;
    }
  }
LABEL_53:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v42, 0LL);
  CLoginTransition::_CleanupAnimation(this);
  if ( v39 )
LABEL_54:
    CAnimationEngine::Release(v39);
  DynArrayImpl<0>::~DynArrayImpl<0>(&v51);
  return (unsigned int)inserted;
}
