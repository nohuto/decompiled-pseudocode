/*
 * XREFs of ??$_Destroy_range@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@YAXPEAU?$com_ptr@UIApplicationView@@@winrt@@QEAU12@AEAV?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@0@@Z @ 0x1801AA250
 * Callers:
 *     ??$_Uninitialized_move@PEAU?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@YAPEAU?$com_ptr@UIApplicationView@@@winrt@@QEAU12@0PEAU12@AEAV?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@0@@Z @ 0x1802C8114 (--$_Uninitialized_move@PEAU-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplic.c)
 *     ?_Tidy@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@AEAAXXZ @ 0x1802CB9D4 (-_Tidy@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationView@.c)
 *     _std::vector_winrt::com_ptr_IApplicationView__std::allocator_winrt::com_ptr_IApplicationView_____::_Emplace_reallocate_winrt::com_ptr_IApplicationView__&__::_1_::catch$0 @ 0x1806D6B05 (_std--vector_winrt--com_ptr_IApplicationView__std--allocator_winrt--com_ptr_IApplicationView____.c)
 * Callees:
 *     ??1?$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ @ 0x18004E0E8 (--1-$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<winrt::com_ptr<IApplicationView>>>(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(v3++);
    while ( v3 != a2 );
  }
  return result;
}
