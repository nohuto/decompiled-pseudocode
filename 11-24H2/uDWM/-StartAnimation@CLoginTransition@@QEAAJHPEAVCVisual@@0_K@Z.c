/*
 * XREFs of ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18003F738
 * Callers:
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x180092EB0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 * Callees:
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180015CB8 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180020554 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x1800205B0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x1800207E4 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180025C04 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180026FB0 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180026FE0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180027EF8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Create@CContainerVisual@@SAJPEAPEAV1@@Z @ 0x18003DF7C (-Create@CContainerVisual@@SAJPEAPEAV1@@Z.c)
 *     ?StopAnimation@CLoginTransition@@QEAAJXZ @ 0x18003FDB8 (-StopAnimation@CLoginTransition@@QEAAJXZ.c)
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x18003FDE4 (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x18003FFA0 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetTransitionStoryboardAndTarget@CAnimatedTransitionVisual@@QEAAXHH@Z @ 0x18004615C (-SetTransitionStoryboardAndTarget@CAnimatedTransitionVisual@@QEAAXHH@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x180046174 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x180046894 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x180047140 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x18004CB88 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180053BC4 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180053C14 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180053D00 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ??$wnf_publish_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@AEBK@Z @ 0x18008361C (--$wnf_publish_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@AEBK@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x1800865C8 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180087274 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x18009522C (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A1838 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLoginTransition::StartAnimation(
        CLoginTransition *this,
        int a2,
        struct CVisual *a3,
        struct CVisual *a4,
        unsigned __int64 a5)
{
  int v9; // r8d
  int started; // edi
  int v11; // esi
  struct CBaseImageProxy ***v12; // rbx
  __int64 v13; // rcx
  struct CBaseImageProxy ***v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rcx
  struct CVisual **v17; // r12
  CBaseObject *v18; // rcx
  unsigned int v19; // ecx
  CAnimationEngine *v20; // r15
  int v22; // r8d
  int v23; // edx
  int v24; // r8d
  int v25; // edx
  int v26; // r13d
  int v27; // edx
  int v28; // eax
  int v29; // eax
  CVisual *v30; // rax
  CContainerVisual *RenderTargetRootVisualForDesktop; // rax
  struct CBaseImageProxy **v32; // rdx
  unsigned int v33; // ecx
  unsigned int v34; // r8d
  _QWORD *v35; // r9
  struct CBaseImageProxy **v36; // r10
  __int64 v37; // rcx
  int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // eax
  int v41; // [rsp+20h] [rbp-61h]
  struct CAnimationEngine *v42; // [rsp+30h] [rbp-51h]
  int v43; // [rsp+38h] [rbp-49h] BYREF
  CVisual *v44; // [rsp+40h] [rbp-41h] BYREF
  void *v45[2]; // [rsp+48h] [rbp-39h] BYREF
  unsigned int v46; // [rsp+5Ch] [rbp-25h]
  unsigned int v47; // [rsp+60h] [rbp-21h]
  struct tagRECT v48; // [rsp+68h] [rbp-19h] BYREF
  struct tagPOINT v49; // [rsp+78h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]

  v44 = a4;
  v43 = a2;
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)v45, 0LL, 0);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&UdwmLoginTransition_Start,
      v9,
      1,
      (__int64)&v49);
  *((_QWORD *)this + 10) = a5;
  *((_DWORD *)this + 18) = a2;
  v42 = CDesktopManager::AcquireAnimationEngine();
  if ( !v42 )
  {
    started = -2147024882;
    v11 = -2147024882;
    v19 = 45;
    v20 = 0LL;
    goto LABEL_24;
  }
  started = CLoginTransition::StopAnimation(this);
  v11 = started;
  if ( started < 0 )
  {
    v19 = 48;
    goto LABEL_23;
  }
  *((_QWORD *)this + 4) = a3;
  if ( a3 )
    CMILRefCountBase::AddRef(a3);
  *((_QWORD *)this + 5) = a4;
  if ( a4 )
    CMILRefCountBase::AddRef(a4);
  v12 = (struct CBaseImageProxy ***)((char *)this + 8);
  v13 = *((_QWORD *)this + 1);
  if ( v13 )
  {
    CBaseObject::Release((CBaseObject *)(v13 + 8));
    *v12 = 0LL;
  }
  v14 = (struct CBaseImageProxy ***)((char *)this + 16);
  v15 = *((_QWORD *)this + 2);
  if ( v15 )
  {
    CBaseObject::Release((CBaseObject *)(v15 + 8));
    *v14 = 0LL;
  }
  v16 = *((_QWORD *)this + 3);
  if ( v16 )
  {
    CBaseObject::Release((CBaseObject *)(v16 + 8));
    *((_QWORD *)this + 3) = 0LL;
  }
  v17 = (struct CVisual **)((char *)this + 48);
  v18 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v18 )
  {
    CBaseObject::Release(v18);
    *v17 = 0LL;
  }
  started = CContainerVisual::Create((struct CContainerVisual **)this + 6);
  v11 = started;
  if ( started < 0 )
  {
    v19 = 66;
    goto LABEL_23;
  }
  started = CAnimatedTransitionVisual::Create((struct CAnimatedTransitionVisual **)this + 1);
  v11 = started;
  if ( started < 0 )
  {
    v19 = 67;
    goto LABEL_23;
  }
  started = CAnimatedTransitionVisual::Create((struct CAnimatedTransitionVisual **)this + 2);
  v11 = started;
  if ( started < 0 )
  {
    v19 = 68;
    goto LABEL_23;
  }
  v49.x = -32000;
  v49.y = -32000;
  CVisual::SetOffset((struct tagPOINT *)a3, &v49);
  CVisual::SetOffset((struct tagPOINT *)v44, &v49);
  v48 = 0LL;
  v48 = *(struct tagRECT *)((char *)CDesktopManager::s_pDesktopManagerInstance + 396);
  started = CAnimatedTransitionVisual::SetVisual(*v12, a3, 1, &v48);
  v11 = started;
  if ( started < 0 )
  {
    v19 = 82;
    goto LABEL_23;
  }
  started = CAnimatedTransitionVisual::SetVisual(*v14, v44, 0, &v48);
  v11 = started;
  if ( started < 0 )
  {
    v19 = 83;
LABEL_23:
    v20 = v42;
    goto LABEL_24;
  }
  started = CAnimatedTransitionVisual::ProcessSnapshotOnVisual((CAnimatedTransitionVisual *)*v12, a3, &v48);
  v11 = started;
  if ( started < 0 )
  {
    v19 = 90;
    goto LABEL_23;
  }
  v22 = 0;
  if ( v48.bottom - v48.top >= 0 )
    v22 = v48.bottom - v48.top;
  v23 = 0;
  if ( v48.right - v48.left >= 0 )
    v23 = v48.right - v48.left;
  CVisual::SetSize((CVisual *)(*v12 + 1), v23, v22);
  v24 = 0;
  if ( v48.bottom - v48.top >= 0 )
    v24 = v48.bottom - v48.top;
  v25 = 0;
  if ( v48.right - v48.left >= 0 )
    v25 = v48.right - v48.left;
  CVisual::SetSize((CVisual *)(*v14 + 1), v25, v24);
  v26 = v43;
  CAnimatedTransitionVisual::SetTransitionStoryboardAndTarget((CAnimatedTransitionVisual *)*v12, v43, 2);
  CAnimatedTransitionVisual::SetTransitionStoryboardAndTarget((CAnimatedTransitionVisual *)*v14, v27, 1);
  CAnimatedTransitionVisual::SetBeginRect((CAnimatedTransitionVisual *)*v12, &v48);
  CAnimatedTransitionVisual::SetBeginRect((CAnimatedTransitionVisual *)*v14, &v48);
  CAnimatedTransitionVisual::SetEndRect((CAnimatedTransitionVisual *)*v12, &v48);
  CAnimatedTransitionVisual::SetEndRect((CAnimatedTransitionVisual *)*v14, &v48);
  CAnimatedTransitionVisual::SetBeginAlpha((CAnimatedTransitionVisual *)*v14, 0.0);
  v28 = v48.right - v48.left;
  if ( v48.right - v48.left < 0 )
    v28 = 0;
  LODWORD(v44) = v28;
  v29 = v48.bottom - v48.top;
  if ( v48.bottom - v48.top < 0 )
    v29 = 0;
  HIDWORD(v44) = v29;
  v30 = v44;
  (*v14)[113] = v44;
  (*v12)[113] = v30;
  RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(
                                       *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                                       *((_QWORD *)this + 10));
  started = CContainerVisual::AddChild(RenderTargetRootVisualForDesktop, *v17);
  v11 = started;
  if ( started < 0 )
  {
    v19 = 111;
    goto LABEL_23;
  }
  started = CContainerVisual::AddChild(
              *v17,
              (struct CVisual *)((unsigned __int64)(*v12 + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)*v12 >> 64)));
  v11 = started;
  if ( started < 0 )
  {
    v19 = 112;
    goto LABEL_23;
  }
  started = CContainerVisual::AddChild(
              *v17,
              (struct CVisual *)((unsigned __int64)(*v14 + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)*v14 >> 64)));
  v11 = started;
  if ( started < 0 )
  {
    v19 = 113;
    goto LABEL_23;
  }
  started = CVisual::MoveToFront(*v17, 0);
  v11 = started;
  if ( started < 0 )
  {
    v19 = 116;
    goto LABEL_23;
  }
  v32 = *v12;
  v44 = (CVisual *)*v12;
  v33 = v47 + 1;
  if ( v47 + 1 < v47 )
  {
    v11 = -2147024362;
    started = -2147024362;
    v40 = 179;
    goto LABEL_65;
  }
  v34 = v46;
  if ( v33 > v46 )
  {
    v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v45, 8, 1, &v44);
    started = v11;
    if ( v11 >= 0 )
    {
      v33 = v47;
      v34 = v46;
      v35 = v45[0];
      goto LABEL_47;
    }
    v40 = 190;
LABEL_65:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, v40, 0LL);
    v19 = 118;
    goto LABEL_63;
  }
  v35 = v45[0];
  *((_QWORD *)v45[0] + v47) = v32;
  v47 = v33;
LABEL_47:
  v36 = *v14;
  v44 = (CVisual *)*v14;
  if ( v33 + 1 < v33 )
  {
    v11 = -2147024362;
    started = -2147024362;
    v39 = 179;
LABEL_62:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, v39, 0LL);
    v19 = 119;
LABEL_63:
    v20 = v42;
    goto LABEL_24;
  }
  if ( v33 + 1 > v34 )
  {
    v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v45, 8, 1, &v44);
    started = v11;
    if ( v11 >= 0 )
      goto LABEL_50;
    v39 = 190;
    goto LABEL_62;
  }
  v35[v33] = v36;
  v47 = v33 + 1;
LABEL_50:
  v20 = v42;
  started = CAnimationEngine::RegisterForAnimationCompleteNotification(v42, this);
  v11 = started;
  if ( started < 0 )
  {
    v19 = 123;
  }
  else
  {
    started = CAnimationEngine::ScheduleStartAnimation(v42, v26);
    v11 = started;
    if ( started < 0 )
    {
      v19 = 126;
    }
    else
    {
      started = CDesktopManager::PostStartAnimations(CDesktopManager::s_pDesktopManagerInstance);
      v11 = started;
      if ( started >= 0 )
      {
        v43 = (v26 != 55) + 1;
        v38 = wil::wnf_publish_nothrow<unsigned long>(v37, &v43);
        if ( v38 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x84,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\logintransition.cpp",
            (const char *)(unsigned int)v38,
            v41);
        *((_BYTE *)this + 68) = 1;
        goto LABEL_56;
      }
      v19 = 130;
    }
  }
LABEL_24:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, v19, 0LL);
  CLoginTransition::_CleanupAnimation(this);
  if ( v20 )
LABEL_56:
    CAnimationEngine::Release(v20);
  DynArrayImpl<0>::~DynArrayImpl<0>(v45);
  return (unsigned int)started;
}
