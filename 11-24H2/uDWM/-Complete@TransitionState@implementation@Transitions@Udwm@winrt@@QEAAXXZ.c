/*
 * XREFs of ?Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18004A36C
 * Callers:
 *     ?Complete@?$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@345@@impl@winrt@@UEAAHXZ @ 0x18004A110 (-Complete@-$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@34.c)
 *     ??1TransitionState@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x18004B1DC (--1TransitionState@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     wil::details::lambda_call__lambda_f91e6c8f2a0df16026c4725aea205c89___::_lambda_call__lambda_f91e6c8f2a0df16026c4725aea205c89___ @ 0x1800E8870 (wil--details--lambda_call__lambda_f91e6c8f2a0df16026c4725aea205c89___--_lambda_call__lambda_f91e.c)
 *     ?TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@_N@Z @ 0x1800EA250 (-TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobal.c)
 *     ?TransferScreenVisualLive@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800EA580 (-TransferScreenVisualLive@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGl.c)
 *     ?TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@AEAV?$vector@PEAVCAnimatedTransitionVisual@@V?$allocator@PEAVCAnimatedTransitionVisual@@@std@@@std@@@Z @ 0x1800EA890 (-TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGloba.c)
 * Callees:
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001DE40 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveAllChildren@CContainerVisual@@QEAAXXZ @ 0x180021904 (-RemoveAllChildren@CContainerVisual@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180021E28 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800250EC (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?reset@?$com_ptr_t@VCSolidRectangleInstruction@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004BB08 (-reset@-$com_ptr_t@VCSolidRectangleInstruction@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18004C0B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180079A10 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@s.c)
 *     ??$_Destroy_range@V?$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUIInspectable@Foundation@Windows@winrt@@QEAU1234@AEAV?$allocator@UIInspectable@Foundation@Windows@winrt@@@0@@Z @ 0x180099EA8 (--$_Destroy_range@V-$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUIInspe.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800DEEFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Udwm::Transitions::implementation::TransitionState::Complete(
        winrt::Udwm::Transitions::implementation::TransitionState *this)
{
  CRenderDataVisual **v2; // rdi
  CContainerVisual *v3; // rcx
  int v4; // eax
  CBaseObject *v5; // rcx
  int v6; // eax
  winrt::Windows::Foundation::IUnknown *v7; // rcx
  _QWORD *v8; // rdi
  _QWORD *v9; // rdi
  int v10; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CBaseObject *v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = (CRenderDataVisual **)((char *)this + 48);
  v3 = (CContainerVisual *)*((_QWORD *)this + 6);
  if ( v3 )
  {
    CContainerVisual::RemoveAllChildren(v3);
    v4 = CRenderDataVisual::ClearInstructions(*v2);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x48,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\transitions.transitionstate.cpp",
        (const char *)(unsigned int)v4,
        v10);
    v5 = (CBaseObject *)*((_QWORD *)*v2 + 3);
    v13 = v5;
    if ( v5 )
      CMILRefCountBase::AddRef(v5);
    if ( v5 )
    {
      v6 = CContainerVisual::RemoveChild(v5, *v2);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x4C,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\transitions.transitionstate.cpp",
          (const char *)(unsigned int)v6,
          v10);
    }
    wil::com_ptr_t<CSolidRectangleInstruction,wil::err_returncode_policy>::reset(v2);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v13);
  }
  if ( *((_QWORD *)this + 7) != *((_QWORD *)this + 8) )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>>();
    *((_QWORD *)this + 8) = *((_QWORD *)this + 7);
  }
  v7 = (winrt::Windows::Foundation::IUnknown *)*((_QWORD *)this + 10);
  if ( v7 != *((winrt::Windows::Foundation::IUnknown **)this + 11) )
  {
    std::_Destroy_range<std::allocator<winrt::Windows::Foundation::IInspectable>>(v7);
    *((_QWORD *)this + 11) = *((_QWORD *)this + 10);
  }
  v8 = (_QWORD *)((char *)this + 104);
  if ( (int *)((char *)this + 104) != &v10 )
  {
    if ( *v8 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Udwm::Transitions::implementation::TransitionState *)((char *)this + 104));
    *v8 = 0LL;
  }
  v9 = (_QWORD *)((char *)this + 112);
  if ( (char *)this + 112 != &v11 )
  {
    if ( *v9 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Udwm::Transitions::implementation::TransitionState *)((char *)this + 112));
    *v9 = 0LL;
  }
  *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53) + 672LL) = 0;
  *((_BYTE *)this + 120) = 1;
}
