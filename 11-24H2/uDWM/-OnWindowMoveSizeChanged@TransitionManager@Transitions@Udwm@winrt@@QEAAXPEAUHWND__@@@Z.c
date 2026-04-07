/*
 * XREFs of ?OnWindowMoveSizeChanged@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__@@@Z @ 0x18006F2DC
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18008FE50 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?PostTransition@?$consume_Udwm_Transitions_ITransition@UITransition@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x18004B19C (-PostTransition@-$consume_Udwm_Transitions_ITransition@UITransition@Transitions@Udwm@winrt@@@imp.c)
 *     ??1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18004BFEC (--1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UITransition@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@@std@@@std@@@1@AEBQEAUHWND__@@@Z @ 0x180080E88 (--$find@X@-$_Hash@V-$_Umap_traits@PEAUHWND__@@UITransition@Transitions@Udwm@winrt@@V-$_Uhash_com.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Udwm::Transitions::TransitionManager::OnWindowMoveSizeChanged(
        winrt::Udwm::Transitions::TransitionManager *this,
        HWND a2)
{
  __int64 v3; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  HWND v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  if ( *((_QWORD *)this + 10) )
  {
    std::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::ITransition,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransition>>,0>>::find<void>(
      (char *)this + 64,
      &v4,
      &v5);
    if ( v4 != *((_QWORD *)this + 9) )
    {
      v3 = *(_QWORD *)(v4 + 24);
      v4 = v3;
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      winrt::impl::consume_Udwm_Transitions_ITransition<winrt::Udwm::Transitions::ITransition>::PostTransition(&v4);
      winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler((winrt::Udwm::Transitions::AnimationCompletedHandler *)&v4);
    }
  }
}
