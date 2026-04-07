/*
 * XREFs of ?OnWindowMoveSizeChanged@?$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIAnimationsTransitionManager@Private@345@@impl@winrt@@UEAAH_K@Z @ 0x1800FE170
 * Callers:
 *     <none>
 * Callees:
 *     ??1IScreenRotationRejuvTransitionHandler@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x180065770 (--1IScreenRotationRejuvTransitionHandler@Private@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@@std@@@std@@@std@@@1@AEBQEAUHWND__@@@Z @ 0x1800FC0E0 (--$find@X@-$_Hash@V-$_Umap_traits@PEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@V-$_Uh.c)
 *     ??0ITransitionHandler@Transitions@Udwm@winrt@@QEAA@AEBU0123@@Z @ 0x1800FC710 (--0ITransitionHandler@Transitions@Udwm@winrt@@QEAA@AEBU0123@@Z.c)
 *     ?PostTransition@?$consume_Udwm_Transitions_ITransitionHandler@UITransitionHandler@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800FE230 (-PostTransition@-$consume_Udwm_Transitions_ITransitionHandler@UITransitionHandler@Transitions@Ud.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::Private::IAnimationsTransitionManager>::OnWindowMoveSizeChanged(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v2 = a1 + 104;
  if ( !a1 )
    v2 = 136LL;
  if ( *(_QWORD *)v2 )
  {
    v3 = a1 + 88;
    if ( !a1 )
      v3 = 120LL;
    std::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::ITransitionHandler,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransitionHandler>>,0>>::find<void>(
      (_QWORD *)v3,
      &v6,
      (const unsigned __int8 *)&v5);
    if ( v6 != *(_QWORD *)(v3 + 8) )
    {
      winrt::Udwm::Transitions::ITransitionHandler::ITransitionHandler(
        (winrt::Udwm::Transitions::ITransitionHandler *)&v5,
        (const struct winrt::Udwm::Transitions::ITransitionHandler *)(v6 + 24));
      try
      {
        winrt::impl::consume_Udwm_Transitions_ITransitionHandler<winrt::Udwm::Transitions::ITransitionHandler>::PostTransition(&v5);
        winrt::Udwm::Transitions::Private::IScreenRotationRejuvTransitionHandler::~IScreenRotationRejuvTransitionHandler((winrt::Udwm::Transitions::Private::IScreenRotationRejuvTransitionHandler *)&v5);
      }
      catch ( ... )
      {
        return (unsigned int)*winrt::to_hresult(&v5);
      }
    }
  }
  return 0LL;
}
