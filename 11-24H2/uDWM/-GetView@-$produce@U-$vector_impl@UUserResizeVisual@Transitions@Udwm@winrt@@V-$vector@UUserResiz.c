/*
 * XREFs of ?GetView@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800E95C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$detach_from@UAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_P$$QEAUAnimatedTransitionVisualWrapper@Transitions@Udwm@1@@Z @ 0x18004AF30 (--$detach_from@UAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@@impl@winrt@@YA-A_P$$QEA.c)
 *     ??1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18004BFEC (--1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ??$clear_abi@X@impl@winrt@@YAXPEAPEAX@Z @ 0x18004C2A0 (--$clear_abi@X@impl@winrt@@YAXPEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>>::GetView(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 v5; // rcx
  bool v6; // zf
  __int64 v7; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  winrt::impl::clear_abi<void>(a2);
  v4 = (v3 - 16) & -(__int64)(v3 != 0);
  v5 = v4 & -(__int64)(v4 != -40);
  v6 = v5 == -24;
  v7 = v5 + 24;
  v9 = v7;
  if ( !v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v10 = 0LL;
  winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler((winrt::Udwm::Transitions::AnimationCompletedHandler *)&v10);
  *a2 = winrt::impl::detach_from<winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper>(&v9);
  winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler((winrt::Udwm::Transitions::AnimationCompletedHandler *)&v9);
  return 0LL;
}
