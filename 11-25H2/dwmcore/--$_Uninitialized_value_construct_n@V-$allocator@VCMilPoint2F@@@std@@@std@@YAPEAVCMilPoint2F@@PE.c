/*
 * XREFs of ??$_Uninitialized_value_construct_n@V?$allocator@VCMilPoint2F@@@std@@@std@@YAPEAVCMilPoint2F@@PEAV1@_KAEAV?$allocator@VCMilPoint2F@@@0@@Z @ 0x1801E2030
 * Callers:
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801E206C (--$_Resize@U_Value_init_tag@std@@@-$vector@VCMilPoint2F@@V-$allocator@VCMilPoint2F@@@std@@@std@@.c)
 * Callees:
 *     ??$_Emplace_back@$$V@?$_Uninitialized_backout_al@V?$allocator@VCMilPoint2F@@@std@@@std@@QEAAXXZ @ 0x1801E21E0 (--$_Emplace_back@$$V@-$_Uninitialized_backout_al@V-$allocator@VCMilPoint2F@@@std@@@std@@QEAAXXZ.c)
 */

__int64 __fastcall std::_Uninitialized_value_construct_n<std::allocator<CMilPoint2F>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdx
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]

  v5 = a1;
  v6 = a1;
  v7 = a3;
  if ( a2 )
  {
    do
      std::_Uninitialized_backout_al<std::allocator<CMilPoint2F>>::_Emplace_back<>(&v5);
    while ( v3 != 1 );
    return v6;
  }
  return a1;
}
