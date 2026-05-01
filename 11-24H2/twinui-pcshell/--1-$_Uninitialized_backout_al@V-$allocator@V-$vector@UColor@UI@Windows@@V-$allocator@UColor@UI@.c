/*
 * XREFs of ??1?$_Uninitialized_backout_al@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@std@@@std@@QEAA@XZ @ 0x1802CFBC8
 * Callers:
 *     _std::vector_std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color____std::allocator_std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color_______::vector_std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color____std::allocator_std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color________::_1_::dtor$1 @ 0x1806CC078 (_std--vector_std--vector_Windows--UI--Color_std--allocator_Windows--UI--Color____st_ea_1806CC078.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Uninitialized_backout_al<std::allocator<std::vector<Windows::UI::Color>>>::~_Uninitialized_backout_al<std::allocator<std::vector<Windows::UI::Color>>>(
        __int64 *a1)
{
  return std::_Destroy_range<std::allocator<std::vector<Windows::UI::Color>>>(*a1, a1[1]);
}
