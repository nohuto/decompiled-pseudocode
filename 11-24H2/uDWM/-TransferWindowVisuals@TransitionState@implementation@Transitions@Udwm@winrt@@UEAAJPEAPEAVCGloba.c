/*
 * XREFs of ?TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@AEAV?$vector@PEAVCAnimatedTransitionVisual@@V?$allocator@PEAVCAnimatedTransitionVisual@@@std@@@std@@@Z @ 0x1800EA890
 * Callers:
 *     <none>
 * Callees:
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180015CB8 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180021728 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180021E28 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180025C04 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x18003FFA0 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x1800405C0 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180043FD0 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18004A36C (-Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004C778 (--1-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@AEBQEAVCWindowData@@@?$vector@PEAVCWindowData@@V?$allocator@PEAVCWindowData@@@std@@@std@@AEAAPEAPEAVCWindowData@@QEAPEAV2@AEBQEAV2@@Z @ 0x18004D430 (--$_Emplace_reallocate@AEBQEAVCWindowData@@@-$vector@PEAVCWindowData@@V-$allocator@PEAVCWindowDa.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180053BC4 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180053C14 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ??4?$com_ptr_t@VCVisualGroupProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisualGroupProxy@@@Z @ 0x180064144 (--4-$com_ptr_t@VCVisualGroupProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisualGroup.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?GetRootRenderDataVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV?$com_ptr_t@VCGlobalTimeTrackVisual@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800E9364 (-GetRootRenderDataVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV-$com_p.c)
 *     ?IsVisibleWindow@TransitionState@implementation@Transitions@Udwm@winrt@@AEAA_NPEAVCWindowData@@@Z @ 0x1800E98DC (-IsVisibleWindow@TransitionState@implementation@Transitions@Udwm@winrt@@AEAA_NPEAVCWindowData@@@.c)
 *     ?push_back@?$vector@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800EAF38 (-push_back@-$vector@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall winrt::Udwm::Transitions::implementation::TransitionState::TransferWindowVisuals(
        CBaseObject **this,
        CContainerVisual **a2,
        __int64 a3)
{
  CContainerVisual **v4; // rdi
  int RootRenderDataVisual; // eax
  unsigned int v7; // ebx
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  winrt::Udwm::Transitions::implementation::TransitionState *v10; // rcx
  struct _LIST_ENTRY *v11; // r12
  CContainerVisual *v12; // r13
  struct _LIST_ENTRY *i; // r14
  CBaseObject *Blink; // rbx
  int v15; // eax
  unsigned int v16; // edi
  struct CVisual *v17; // rdx
  CAnimatedTransitionVisual *v18; // rbx
  int v19; // eax
  int v20; // eax
  CAnimatedTransitionVisual **v21; // rdx
  CContainerVisual *v22; // [rsp+30h] [rbp-39h] BYREF
  CAnimatedTransitionVisual *v23; // [rsp+38h] [rbp-31h] BYREF
  CBaseObject *v24; // [rsp+40h] [rbp-29h] BYREF
  CBaseObject *v25; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int64 v26; // [rsp+50h] [rbp-19h] BYREF
  CContainerVisual **v27; // [rsp+58h] [rbp-11h]
  CBaseObject **v28; // [rsp+60h] [rbp-9h]
  char v29; // [rsp+68h] [rbp-1h]
  struct tagRECT v30; // [rsp+70h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v4 = a2;
  v27 = a2;
  v28 = this;
  v29 = 1;
  v22 = 0LL;
  RootRenderDataVisual = winrt::Udwm::Transitions::implementation::TransitionState::GetRootRenderDataVisual(
                           (__int64)this,
                           &v22);
  v7 = RootRenderDataVisual;
  if ( RootRenderDataVisual >= 0 )
  {
    v26 = 0LL;
    GetDesktopID(1LL, &v26);
    WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                             v26);
    v11 = WindowListForDesktop;
    v12 = v22;
    if ( WindowListForDesktop )
    {
      for ( i = WindowListForDesktop->Flink; i != v11; i = i->Flink )
      {
        if ( winrt::Udwm::Transitions::implementation::TransitionState::IsVisibleWindow(v10, (struct CWindowData *)i) )
        {
          Blink = (CBaseObject *)i[27].Blink;
          v25 = Blink;
          if ( Blink )
            CMILRefCountBase::AddRef(Blink);
          CTopLevelWindow::GetActualWindowRect(Blink, &v30, 0, 0, 0);
          v23 = 0LL;
          v15 = CAnimatedTransitionVisual::Create(&v23);
          v16 = v15;
          if ( v15 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x7A,
              (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.transitionstate.cpp",
              (const char *)(unsigned int)v15);
            wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v23);
            wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v25);
            wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v22);
            winrt::Udwm::Transitions::implementation::TransitionState::Complete((winrt::Udwm::Transitions::implementation::TransitionState *)this);
            return v16;
          }
          v17 = Blink;
          v18 = v23;
          v19 = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)v23, v17, 1, 0LL);
          v16 = v19;
          if ( v19 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x7C,
              (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.transitionstate.cpp",
              (const char *)(unsigned int)v19);
            wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v23);
            wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v25);
            wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v22);
            winrt::Udwm::Transitions::implementation::TransitionState::Complete((winrt::Udwm::Transitions::implementation::TransitionState *)this);
            return v16;
          }
          CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)v18, &v30);
          CAnimatedTransitionVisual::SetEndRect(v18, &v30);
          CVisual::SetInterpolationMode((__int64 *)v18 + 1, 1);
          v20 = CContainerVisual::AddChild(
                  v12,
                  (struct CVisual *)(((unsigned __int64)v18 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)v18 >> 64)));
          v16 = v20;
          if ( v20 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x82,
              (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.transitionstate.cpp",
              (const char *)(unsigned int)v20);
            wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v23);
            wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v25);
            wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v22);
            winrt::Udwm::Transitions::implementation::TransitionState::Complete((winrt::Udwm::Transitions::implementation::TransitionState *)this);
            return v16;
          }
          v24 = v18;
          v21 = *(CAnimatedTransitionVisual ***)(a3 + 8);
          if ( v21 == *(CAnimatedTransitionVisual ***)(a3 + 16) )
          {
            std::vector<CWindowData *>::_Emplace_reallocate<CWindowData * const &>(a3, (__int64)v21, &v24);
          }
          else
          {
            *v21 = v18;
            *(_QWORD *)(a3 + 8) += 8LL;
          }
          v23 = 0LL;
          if ( v18 )
            v24 = (CAnimatedTransitionVisual *)((char *)v18 + 8);
          else
            v24 = 0LL;
          std::vector<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>::push_back(this + 7, &v24);
          wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v24);
          wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v23);
          wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v25);
        }
      }
      v4 = v27;
    }
    wil::com_ptr_t<CVisualGroupProxy,wil::err_returncode_policy>::operator=(this + 6, v12);
    v22 = 0LL;
    *v4 = v12;
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v22);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x65,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.transitionstate.cpp",
      (const char *)(unsigned int)RootRenderDataVisual);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v22);
    winrt::Udwm::Transitions::implementation::TransitionState::Complete((winrt::Udwm::Transitions::implementation::TransitionState *)this);
    return v7;
  }
}
