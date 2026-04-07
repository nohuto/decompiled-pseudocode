/*
 * XREFs of ?TransferScreenVisualLive@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800EA580
 * Callers:
 *     <none>
 * Callees:
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180015CB8 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180021728 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180021E28 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180025C04 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18003340C (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x18003FFA0 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18004A36C (-Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004C778 (--1-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180053BC4 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180053C14 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ??4?$com_ptr_t@VCVisualGroupProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisualGroupProxy@@@Z @ 0x180064144 (--4-$com_ptr_t@VCVisualGroupProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisualGroup.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x18009522C (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ??$?0VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@1@@Z @ 0x1800E7AA4 (--$-0VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@X@-$com_ptr_t@VCVisual@@Uerr_return.c)
 *     ?GetRootRenderDataVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV?$com_ptr_t@VCGlobalTimeTrackVisual@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800E9364 (-GetRootRenderDataVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV-$com_p.c)
 *     ?push_back@?$vector@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800EAF38 (-push_back@-$vector@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall winrt::Udwm::Transitions::implementation::TransitionState::TransferScreenVisualLive(
        CBaseObject **this,
        struct CGlobalTimeTrackVisual **a2,
        struct CAnimatedTransitionVisual **a3)
{
  int RootRenderDataVisual; // eax
  unsigned int v7; // ebx
  int v9; // edx
  int v10; // r8d
  int v11; // eax
  int v12; // r14d
  int v13; // eax
  int v14; // r13d
  CBaseObject *RootVisualForDesktop; // rax
  struct CVisual *v16; // rbx
  int v17; // eax
  unsigned int v18; // edi
  struct CVisual *v19; // rdx
  CAnimatedTransitionVisual *v20; // rbx
  int v21; // eax
  CMILRefCountBase *v22; // rdi
  int v23; // eax
  unsigned int v24; // r14d
  CAnimatedTransitionVisual *v25; // [rsp+20h] [rbp-50h] BYREF
  CContainerVisual *v26; // [rsp+28h] [rbp-48h] BYREF
  CMILRefCountBase *v27; // [rsp+30h] [rbp-40h] BYREF
  CBaseObject *v28; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v29[2]; // [rsp+40h] [rbp-30h] BYREF
  char v30; // [rsp+50h] [rbp-20h]
  struct tagRECT v31; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v29[1] = (unsigned __int64)this;
  v30 = 1;
  v26 = 0LL;
  RootRenderDataVisual = winrt::Udwm::Transitions::implementation::TransitionState::GetRootRenderDataVisual(
                           (__int64)this,
                           &v26);
  v7 = RootRenderDataVisual;
  if ( RootRenderDataVisual < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDC,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.transitionstate.cpp",
      (const char *)(unsigned int)RootRenderDataVisual);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v26);
    winrt::Udwm::Transitions::implementation::TransitionState::Complete((winrt::Udwm::Transitions::implementation::TransitionState *)this);
    return v7;
  }
  v31.left = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 95);
  v9 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 97);
  v31.right = v9 + v31.left;
  v31.top = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 96);
  v10 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 98);
  v31.bottom = v10 + v31.top;
  v11 = v9;
  if ( v9 < 0 )
    v11 = 0;
  LODWORD(v27) = v11;
  v12 = 0;
  if ( v9 >= 0 )
    v12 = v9;
  v13 = v10;
  if ( v10 < 0 )
    v13 = 0;
  HIDWORD(v27) = v13;
  v14 = 0;
  if ( v10 >= 0 )
    v14 = v10;
  v29[0] = 0LL;
  GetDesktopID(1LL, v29);
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                           v29[0]);
  v16 = RootVisualForDesktop;
  v28 = RootVisualForDesktop;
  if ( RootVisualForDesktop )
    CMILRefCountBase::AddRef(RootVisualForDesktop);
  v25 = 0LL;
  v17 = CAnimatedTransitionVisual::Create(&v25);
  v18 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE9,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.transitionstate.cpp",
      (const char *)(unsigned int)v17);
    wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v25);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v28);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v26);
    winrt::Udwm::Transitions::implementation::TransitionState::Complete((winrt::Udwm::Transitions::implementation::TransitionState *)this);
    return v18;
  }
  v19 = v16;
  v20 = v25;
  v21 = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)v25, v19, 0, &v31);
  v18 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEA,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.transitionstate.cpp",
      (const char *)(unsigned int)v21);
    wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v25);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v28);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v26);
    winrt::Udwm::Transitions::implementation::TransitionState::Complete((winrt::Udwm::Transitions::implementation::TransitionState *)this);
    return v18;
  }
  CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)v20, &v31);
  CAnimatedTransitionVisual::SetEndRect(v20, &v31);
  CVisual::SetSize((CAnimatedTransitionVisual *)((char *)v20 + 8), v12, v14);
  *((_QWORD *)v20 + 113) = v27;
  CVisual::SetInterpolationMode((__int64 *)v20 + 1, 1);
  v22 = v26;
  v23 = CContainerVisual::AddChild(
          v26,
          (struct CVisual *)(((unsigned __int64)v20 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)v20 >> 64)));
  v24 = v23;
  if ( v23 >= 0 )
  {
    wil::com_ptr_t<CVisualGroupProxy,wil::err_returncode_policy>::operator=(this + 6, v22);
    v26 = 0LL;
    *a2 = v22;
    wil::com_ptr_t<CVisual,wil::err_returncode_policy>::com_ptr_t<CVisual,wil::err_returncode_policy>(&v27, &v25);
    std::vector<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>::push_back(this + 7, &v27);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v27);
    v25 = 0LL;
    *a3 = v20;
    wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v25);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v28);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v26);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF0,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.transitionstate.cpp",
      (const char *)(unsigned int)v23);
    wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v25);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v28);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v26);
    winrt::Udwm::Transitions::implementation::TransitionState::Complete((winrt::Udwm::Transitions::implementation::TransitionState *)this);
    return v24;
  }
}
