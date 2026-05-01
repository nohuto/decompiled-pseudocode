/*
 * XREFs of ??0?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@QEAA@XZ @ 0x18028AF54
 * Callers:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18028B48C (-ensure_data@-$tip_test@V-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@@tip.c)
 * Callees:
 *     ??0test_state@tip2@@QEAA@XZ @ 0x18028B340 (--0test_state@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>(
        __int64 a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-30h]

  *(_QWORD *)&v3 = 0xF10001C72808LL;
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *(_QWORD *)(a1 + 8) = a1;
  *((_QWORD *)&v3 + 1) = "AltTabShowTest";
  tip2::test_state::test_state((tip2::test_state *)(a1 + 16));
  *(_DWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_OWORD *)(a1 + 24) = v3;
  *(_OWORD *)(a1 + 40) = 1uLL;
  *(_OWORD *)(a1 + 56) = 0uLL;
  InitializeCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
  *(_WORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 276) = 0;
  *(_QWORD *)a1 = &tip2::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>::`vftable';
  *(_QWORD *)(a1 + 264) = a1 + 16;
  result = a1;
  *(_DWORD *)(a1 + 280) = 1;
  return result;
}
