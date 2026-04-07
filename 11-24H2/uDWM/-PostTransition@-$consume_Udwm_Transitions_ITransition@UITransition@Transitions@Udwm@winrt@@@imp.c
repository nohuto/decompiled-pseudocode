/*
 * XREFs of ?PostTransition@?$consume_Udwm_Transitions_ITransition@UITransition@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x18004B19C
 * Callers:
 *     ?WindowMaximizeSnapPostTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18004B154 (-WindowMaximizeSnapPostTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?OnWindowMoveSizeChanged@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__@@@Z @ 0x18006F2DC (-OnWindowMoveSizeChanged@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__@@@Z.c)
 *     ?PostTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@234@@Z @ 0x1800E7058 (-PostTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@234@@Z.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1800E22B8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_Udwm_Transitions_ITransition<winrt::Udwm::Transitions::ITransition>::PostTransition(
        __int64 *a1)
{
  __int64 v1; // rcx
  unsigned int v2; // eax
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+28h] [rbp-20h]
  char v6; // [rsp+50h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0;
  v5 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 80LL))(v1);
  return winrt::check_hresult(&v6, v2, &v4);
}
