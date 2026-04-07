/*
 * XREFs of ?GetRootRenderDataVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV?$com_ptr_t@VCGlobalTimeTrackVisual@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180101AD4
 * Callers:
 *     ?TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@_N@Z @ 0x180102B30 (-TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobal.c)
 *     ?TransferScreenVisualLive@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x180102EF0 (-TransferScreenVisualLive@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGl.c)
 *     ?TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@AEAV?$vector@PEAVCAnimatedTransitionVisual@@V?$allocator@PEAVCAnimatedTransitionVisual@@@std@@@std@@@Z @ 0x180103400 (-TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGloba.c)
 * Callees:
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002D59C (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180045AEC (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18009E810 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?Create@CGlobalTimeTrackVisual@@SAJPEAPEAV1@@Z @ 0x18010116C (-Create@CGlobalTimeTrackVisual@@SAJPEAPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Udwm::Transitions::implementation::TransitionState::GetRootRenderDataVisual(
        __int64 a1,
        struct CGlobalTimeTrackVisual **a2)
{
  volatile signed __int32 *v4; // rax
  CBaseObject *v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  volatile signed __int32 *RenderTargetRootVisualForDesktop; // rax
  CBaseObject *v10; // rbx
  int inserted; // eax
  unsigned int v12; // esi
  int v13; // eax
  struct CGlobalTimeTrackVisual *v14; // rax
  CBaseObject *v15; // rcx
  int v16; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CBaseObject *v18; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v19; // [rsp+60h] [rbp+18h] BYREF

  GetDesktopID(1LL, &v19);
  v4 = *(volatile signed __int32 **)(a1 + 40);
  v5 = *a2;
  if ( !v4 )
  {
    *a2 = 0LL;
    if ( v5 )
      CBaseObject::Release(v5);
    v6 = CGlobalTimeTrackVisual::Create(a2);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x169,
        (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
    RenderTargetRootVisualForDesktop = (volatile signed __int32 *)CWindowList::GetRenderTargetRootVisualForDesktop(
                                                                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 54),
                                                                    v19);
    v10 = (CBaseObject *)RenderTargetRootVisualForDesktop;
    v18 = (CBaseObject *)RenderTargetRootVisualForDesktop;
    if ( RenderTargetRootVisualForDesktop )
    {
      _InterlockedIncrement(RenderTargetRootVisualForDesktop + 2);
      v10 = v18;
    }
    inserted = VisualCollection::InsertRelative((CBaseObject *)((char *)v10 + 32), (unsigned __int64)*a2, 0LL, 0, v16);
    v12 = inserted;
    if ( inserted >= 0 )
    {
      v13 = CVisual::MoveToFront(*a2, 1);
      v12 = v13;
      if ( v13 >= 0 )
      {
        v14 = *a2;
        v15 = *(CBaseObject **)(a1 + 40);
        *(_QWORD *)(a1 + 40) = *a2;
        if ( v14 )
        {
          _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
          v10 = v18;
        }
        if ( v15 )
          CBaseObject::Release(v15);
        if ( !v10 )
          return 0LL;
        v5 = v10;
        goto LABEL_22;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16C,
        (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
        (const char *)(unsigned int)v13);
      if ( v10 )
        CBaseObject::Release(v10);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16B,
        (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
        (const char *)(unsigned int)inserted);
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v18);
    }
    return v12;
  }
  *a2 = (struct CGlobalTimeTrackVisual *)v4;
  _InterlockedIncrement(v4 + 2);
  if ( v5 )
LABEL_22:
    CBaseObject::Release(v5);
  return 0LL;
}
