/*
 * XREFs of ??0AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@@Z @ 0x1800ECBA0
 * Callers:
 *     ??$make@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@PEAVCTopLevelWindow3D@@@winrt@@YA?A_P$$QEAPEAVCTopLevelWindow3D@@@Z @ 0x1801007CC (--$make@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@PEAVCTopLevelWin.c)
 * Callees:
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18001DF78 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@W4TLWRootVisualType@@@Z @ 0x180033F68 (-GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@W4TLWRootVisualType@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x180054C9C (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180055584 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180055AB4 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x18006D732 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800EE05C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *__fastcall winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::AnimatedTransitionVisualWrapper(
        winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *this,
        struct CTopLevelWindow3D *a2)
{
  struct CAnimatedTransitionVisual **v3; // rsi
  int v4; // edi
  struct CAnimatedTransitionVisual *v5; // rcx
  int v6; // eax
  struct CVisual *RootVisualNoAddRef; // rax
  int v8; // eax
  struct CVisual *v9; // rax
  int v10; // eax
  int v11; // eax
  int v12; // r8d
  int v13; // eax
  __int64 v14; // rcx
  int v16; // [rsp+20h] [rbp-40h]
  int v17; // [rsp+20h] [rbp-40h]
  _DWORD v18[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v19; // [rsp+38h] [rbp-28h]
  winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *v20; // [rsp+40h] [rbp-20h]
  struct tagRECT v21; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v20 = this;
  *((_QWORD *)this + 1) = &winrt::impl::produce<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::IAnimatedTransitionVisualWrapper>::`vftable';
  *(_QWORD *)this = &winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::TransitionManager,std::tuple<winrt::Udwm::Transitions::TransitionManager,winrt::Udwm::Transitions::Private::IRotationTransitionManager,winrt::Udwm::Transitions::Private::IWindowStateTransitionManager,winrt::Udwm::Transitions::Private::IAnimationsTransitionManager,Udwm::Transitions::ITransitionManagerNativePrivate>>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)this + 3) = 1LL;
  *(_QWORD *)this = &winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::`vftable'{for `winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,std::tuple<winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>>'};
  *((_QWORD *)this + 2) = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper>::`vftable'{for `winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>'};
  *((_QWORD *)this + 4) = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper>::`vftable';
  v3 = (struct CAnimatedTransitionVisual **)((char *)this + 40);
  v4 = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  *((_DWORD *)this + 14) = -1;
  *((_BYTE *)this + 60) = 0;
  v5 = *v3;
  *v3 = 0LL;
  if ( v5 )
    CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v5 + 8));
  v6 = CAnimatedTransitionVisual::Create(v3);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.animatedtransitionvisualwrapper.cpp",
      (const char *)(unsigned int)v6,
      v16);
  CTopLevelWindow::GetActualWindowRect(
    *(CTopLevelWindow **)(*(_QWORD *)(*((_QWORD *)this + 6) + 336LL) + 440LL),
    &v21,
    1,
    1,
    1);
  RootVisualNoAddRef = (struct CVisual *)CTopLevelWindow::GetRootVisualNoAddRef(
                                           *(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 6) + 336LL) + 440LL),
                                           0);
  v8 = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)*v3, RootVisualNoAddRef, 1, &v21);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x17,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.animatedtransitionvisualwrapper.cpp",
      (const char *)(unsigned int)v8,
      v17);
  v9 = (struct CVisual *)CTopLevelWindow::GetRootVisualNoAddRef(
                           *(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 6) + 336LL) + 440LL),
                           0);
  v10 = CAnimatedTransitionVisual::ProcessSnapshotOnVisual((CCachedVisualImageProxy **)*v3, v9, &v21);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1C,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.animatedtransitionvisualwrapper.cpp",
      (const char *)(unsigned int)v10,
      v17);
  v11 = v21.right - v21.left;
  if ( v21.right - v21.left < 0 )
    v11 = 0;
  LODWORD(v19) = v11;
  v12 = 0;
  if ( v21.right - v21.left >= 0 )
    v12 = v21.right - v21.left;
  v13 = v21.bottom - v21.top;
  if ( v21.bottom - v21.top < 0 )
    v13 = 0;
  HIDWORD(v19) = v13;
  v14 = (__int64)*v3 + 8;
  v18[0] = v12;
  if ( v21.bottom - v21.top >= 0 )
    v4 = v21.bottom - v21.top;
  v18[1] = v4;
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v14 + 104LL))(v14, v18);
  *((_QWORD *)*v3 + 119) = v19;
  CVisual::SetInterpolationMode((unsigned int *)*v3 + 2, 1u);
  return this;
}
