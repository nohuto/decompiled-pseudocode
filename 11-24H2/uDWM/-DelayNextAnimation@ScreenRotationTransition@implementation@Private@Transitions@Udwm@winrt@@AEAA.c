/*
 * XREFs of ?DelayNextAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXAEBW4RotationTimelineReason@23456@@Z @ 0x1800E0914
 * Callers:
 *     ?HandleAnimationEnd@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800E1018 (-HandleAnimationEnd@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA.c)
 *     ?PostTransition@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800E122C (-PostTransition@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800E16EC (-StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEA.c)
 *     ?UpdateAngle@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x1800E20BC (-UpdateAngle@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXHH@Z.c)
 * Callees:
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180015730 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180015BD0 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?AddRef@?$root_implements@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAAIXZ @ 0x18004D984 (-AddRef@-$root_implements@Uiterator@-$iterable_base@U-$vector_impl@UUserResizeVisual@Transitions.c)
 *     ??4?$com_ptr_t@V?$CTimeline@M@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAV?$CTimeline@M@@@Z @ 0x180094BF0 (--4-$com_ptr_t@V-$CTimeline@M@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAV-$CTimeline@M@@@.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180096A00 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18009B1B0 (-unconditional_release_ref@-$com_ptr@UScreenRotationTransition@implementation@Private@Transition.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800DEEFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$as@UScreenRotationTransition@Private@Transitions@Udwm@winrt@@U1implementation@2345@$0A@@impl@winrt@@YA?AUScreenRotationTransition@Private@Transitions@Udwm@1@PEAU2implementation@3451@@Z @ 0x1800DF7F8 (--$as@UScreenRotationTransition@Private@Transitions@Udwm@winrt@@U1implementation@2345@$0A@@impl@.c)
 *     ?UnregisterGlobalTimeChanged@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800E2044 (-UnregisterGlobalTimeChanged@ScreenRotationTransition@implementation@Private@Transitions@Udwm@wi.c)
 *     ?log@?$tip_test@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@tip2@@QEAAXPEBG@Z @ 0x1800E2B1C (-log@-$tip_test@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitio.c)
 *     ?SetTransitionHandler@CGlobalTimeTrackVisual@@QEAAXUScreenRotationTransition@Private@Transitions@Udwm@winrt@@@Z @ 0x1800EC324 (-SetTransitionHandler@CGlobalTimeTrackVisual@@QEAAXUScreenRotationTransition@Private@Transitions.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::DelayNextAnimation(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *this,
        const enum winrt::Udwm::Transitions::Private::implementation::RotationTimelineReason *a2,
        __int64 a3,
        const char *a4)
{
  int v6; // ebp
  __int64 v7; // rbx
  CBaseObject *v8; // rax
  int v9; // eax
  int v10; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CBaseObject *v12; // [rsp+58h] [rbp+10h] BYREF
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *v13; // [rsp+60h] [rbp+18h] BYREF

  if ( *(_DWORD *)a2 == 1 )
  {
    tip2::tip_test<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::log(
      (char *)this + 104,
      L"Create delay for first animation");
    v6 = 300;
    *((_BYTE *)this + 82) = 1;
  }
  else
  {
    if ( *(_DWORD *)a2 != 2 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x135,
        (int)"clientcore\\windows\\dwm\\udwm\\transitions.screenrotationtransition.cpp",
        a4);
    tip2::tip_test<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::log(
      (char *)this + 104,
      L"Create delay for second animation");
    v6 = 240;
  }
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::UnregisterGlobalTimeChanged(this);
  v7 = *((_QWORD *)this + 7);
  v13 = this;
  winrt::impl::root_implements<winrt::iterable_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Udwm::Transitions::UserResizeVisual>>::AddRef((__int64)this);
  winrt::impl::as<winrt::Udwm::Transitions::Private::ScreenRotationTransition,winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition,0>(
    &v12,
    (__int64 *)this);
  CGlobalTimeTrackVisual::SetTransitionHandler(v7, &v12);
  winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition>::unconditional_release_ref((__int64 *)&v13);
  v8 = (CBaseObject *)DefaultHeap::AllocClear(0x78uLL);
  v12 = v8;
  if ( v8 )
    v8 = (CBaseObject *)CTimeline<float>::CTimeline<float>(v8, (float)((float)v6 / 1000.0), 0.0, 1.0, 0);
  wil::com_ptr_t<CTimeline<float>,wil::err_returncode_policy>::operator=((CTimelineBase **)this + 11, v8);
  v9 = CDesktopManager::RegisterForGlobalTimeChangeNotification(*((struct CVisual **)this + 7));
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      322LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.screenrotationtransition.cpp",
      (const char *)(unsigned int)v9,
      v10);
  *((_DWORD *)this + 21) = *(_DWORD *)a2;
}
