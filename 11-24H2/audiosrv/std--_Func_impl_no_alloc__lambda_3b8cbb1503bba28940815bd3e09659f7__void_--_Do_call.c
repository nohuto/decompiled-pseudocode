/*
 * XREFs of std::_Func_impl_no_alloc__lambda_3b8cbb1503bba28940815bd3e09659f7__void_::_Do_call @ 0x1800E2020
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@std@@QEAAXPEAU_RecurringTask@@@Z @ 0x18000CA44 (-reset@-$unique_ptr@U_RecurringTask@@U-$default_delete@U_RecurringTask@@@std@@@std@@QEAAXPEAU_Re.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_3b8cbb1503bba28940815bd3e09659f7__void_::_Do_call(__int64 a1)
{
  std::unique_ptr<_RecurringTask>::reset((__int64 *)(*(_QWORD *)(a1 + 8) + 256LL), 0LL);
  CBtAudioResourceManagerBase::ReevaluateGameModeOperation(*(CBtAudioResourceManagerBase **)(a1 + 8));
}
