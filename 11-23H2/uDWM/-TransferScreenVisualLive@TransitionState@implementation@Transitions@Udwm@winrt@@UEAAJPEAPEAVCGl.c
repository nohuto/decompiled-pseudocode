/*
 * XREFs of ?TransferScreenVisualLive@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x180102EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18001DF78 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18004DAFC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180055584 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180055AB4 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180055EE4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18009E810 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ??1?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800B6F64 (--1-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x180100384 (--$_Emplace_reallocate@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-$com.c)
 *     wil::details::lambda_call__lambda_e5362848fe0381a2024b7815ced62145___::_lambda_call__lambda_e5362848fe0381a2024b7815ced62145___ @ 0x180100AAC (wil--details--lambda_call__lambda_e5362848fe0381a2024b7815ced62145___--_lambda_call__lambda_e536.c)
 *     ??4?$com_ptr_t@VCRenderDataVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderDataVisual@@@Z @ 0x180100C44 (--4-$com_ptr_t@VCRenderDataVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderDataV.c)
 *     ?GetRootRenderDataVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV?$com_ptr_t@VCGlobalTimeTrackVisual@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180101AD4 (-GetRootRenderDataVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV-$com_p.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall winrt::Udwm::Transitions::implementation::TransitionState::TransferScreenVisualLive(
        winrt::Udwm::Transitions::implementation::TransitionState *this,
        struct CGlobalTimeTrackVisual **a2,
        struct CAnimatedTransitionVisual **a3)
{
  int RootRenderDataVisual; // eax
  unsigned int v6; // ebx
  int v7; // edx
  int v8; // r8d
  int v9; // eax
  int v10; // r15d
  int v11; // eax
  int v12; // r12d
  volatile signed __int32 *RootVisualForDesktop; // rax
  struct CVisual *v14; // rbx
  int v15; // eax
  int v16; // edi
  CAnimatedTransitionVisual *v17; // rdi
  int v18; // eax
  int v19; // esi
  unsigned __int64 v20; // rsi
  int v21; // eax
  int v22; // eax
  int v23; // r15d
  volatile signed __int32 *v24; // r15
  volatile signed __int32 *v25; // rsi
  int inserted; // eax
  int v27; // r12d
  volatile signed __int32 **v29; // rdx
  CBaseObject *v30; // rcx
  int v31; // [rsp+20h] [rbp-49h]
  CAnimatedTransitionVisual *v32; // [rsp+30h] [rbp-39h] BYREF
  CBaseObject *v33; // [rsp+38h] [rbp-31h] BYREF
  CBaseObject *v34; // [rsp+40h] [rbp-29h] BYREF
  CBaseObject *v35; // [rsp+48h] [rbp-21h] BYREF
  _DWORD v36[2]; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int64 v37; // [rsp+58h] [rbp-11h] BYREF
  struct CGlobalTimeTrackVisual **v38; // [rsp+60h] [rbp-9h]
  winrt::Udwm::Transitions::implementation::TransitionState *v39; // [rsp+68h] [rbp-1h] BYREF
  char v40; // [rsp+70h] [rbp+7h]
  struct tagRECT v41; // [rsp+78h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v38 = a2;
  v39 = this;
  v40 = 1;
  v35 = 0LL;
  RootRenderDataVisual = winrt::Udwm::Transitions::implementation::TransitionState::GetRootRenderDataVisual(
                           (__int64)this,
                           &v35);
  v6 = RootRenderDataVisual;
  if ( RootRenderDataVisual < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEA,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
      (const char *)(unsigned int)RootRenderDataVisual);
LABEL_23:
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v35);
    wil::details::lambda_call__lambda_e5362848fe0381a2024b7815ced62145___::_lambda_call__lambda_e5362848fe0381a2024b7815ced62145___((__int64)&v39);
    return v6;
  }
  v41.left = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 97);
  v7 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 99);
  v41.right = v7 + v41.left;
  v41.top = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 98);
  v8 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 100);
  v41.bottom = v8 + v41.top;
  v9 = v7;
  if ( v7 < 0 )
    v9 = 0;
  LODWORD(v34) = v9;
  v10 = 0;
  if ( v7 >= 0 )
    v10 = v7;
  v11 = v8;
  if ( v8 < 0 )
    v11 = 0;
  HIDWORD(v34) = v11;
  v12 = 0;
  if ( v8 >= 0 )
    v12 = v8;
  GetDesktopID(1LL, &v37);
  RootVisualForDesktop = (volatile signed __int32 *)CWindowList::GetRootVisualForDesktop(
                                                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                                                      v37);
  v14 = (struct CVisual *)RootVisualForDesktop;
  v33 = (CBaseObject *)RootVisualForDesktop;
  if ( RootVisualForDesktop )
  {
    _InterlockedIncrement(RootVisualForDesktop + 2);
    v14 = v33;
  }
  v32 = 0LL;
  v15 = CAnimatedTransitionVisual::Create(&v32);
  v16 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF7,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
      (const char *)(unsigned int)v15);
    wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v32);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v33);
    v6 = v16;
    goto LABEL_23;
  }
  v17 = v32;
  v18 = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)v32, v14, 0, &v41);
  v19 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF8,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
      (const char *)(unsigned int)v18);
    wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v32);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v33);
    v6 = v19;
    goto LABEL_23;
  }
  CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)v17, &v41);
  *(struct tagRECT *)((char *)v17 + 872) = v41;
  v20 = (unsigned __int64)v17 + 8;
  v21 = *((_DWORD *)v17 + 24);
  if ( (v21 & 0x1000) == 0 )
  {
    *((_DWORD *)v17 + 24) = v21 | 0x1000;
    CVisual::PropagateDirtyChildren((CAnimatedTransitionVisual *)((char *)v17 + 8));
  }
  v36[0] = v10;
  v36[1] = v12;
  v22 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v20 + 104LL))((__int64)v17 + 8, v36);
  v23 = v22;
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFB,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
      (const char *)(unsigned int)v22);
    wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v32);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v33);
    v6 = v23;
    goto LABEL_23;
  }
  *((_QWORD *)v17 + 119) = v34;
  CVisual::SetInterpolationMode((unsigned int *)v17 + 2, 1u);
  v24 = (volatile signed __int32 *)(v20 & -(__int64)(v17 != 0LL));
  v25 = (volatile signed __int32 *)v35;
  inserted = VisualCollection::InsertRelative((CBaseObject *)((char *)v35 + 32), (unsigned __int64)v24, 0LL, 0, v31);
  v27 = inserted;
  if ( inserted < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFE,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
      (const char *)(unsigned int)inserted);
    wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v32);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v33);
    v6 = v27;
    goto LABEL_23;
  }
  wil::com_ptr_t<CRenderDataVisual,wil::err_returncode_policy>::operator=((CBaseObject **)this + 6, v25);
  v35 = 0LL;
  *v38 = (struct CGlobalTimeTrackVisual *)v25;
  v34 = (CBaseObject *)v24;
  if ( v24 )
  {
    _InterlockedIncrement(v24 + 2);
    v14 = v33;
    v17 = v32;
  }
  v29 = (volatile signed __int32 **)*((_QWORD *)this + 8);
  if ( v29 == *((volatile signed __int32 ***)this + 9) )
  {
    std::vector<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>(
      (const char *)this + 56,
      (__int64)v29,
      (__int64 *)&v34);
    v30 = v34;
  }
  else
  {
    v30 = 0LL;
    *v29 = v24;
    *((_QWORD *)this + 8) += 8LL;
  }
  if ( v30 )
    CBaseObject::Release(v30);
  *a3 = v17;
  if ( v14 )
    CBaseObject::Release(v14);
  return 0LL;
}
