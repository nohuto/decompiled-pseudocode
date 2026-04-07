/*
 * XREFs of ?_Change_array@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEAAXQEAUUserResizeVisual@Transitions@Udwm@winrt@@_K1@Z @ 0x180103890
 * Callers:
 *     ??$_Emplace_reallocate@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@QEAAPEAUUserResizeVisual@Transitions@Udwm@winrt@@QEAU2345@AEBU2345@@Z @ 0x180100190 (--$_Emplace_reallocate@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@-$vector@UUserResizeVisual@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001F154 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAXPEAUUserResizeVisual@Transitions@Udwm@winrt@@QEAU1234@AEAV?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@0@@Z @ 0x180100014 (--$_Destroy_range@V-$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAXPEAUUser.c)
 */

__int64 __fastcall std::vector<winrt::Udwm::Transitions::UserResizeVisual>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  winrt::Udwm::Transitions::UserResizeVisual *v6; // rcx
  __int64 result; // rax

  v6 = *(winrt::Udwm::Transitions::UserResizeVisual **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<winrt::Udwm::Transitions::UserResizeVisual>>(
      v6,
      *(winrt::Udwm::Transitions::UserResizeVisual **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
