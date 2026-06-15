/*
 * XREFs of ??$?4U?$default_delete@U_RecurringTask@@@std@@$0A@@?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18002786C
 * Callers:
 *     ?StartInactiveTimer@CAudioSession@@QEAAXXZ @ 0x180026DC8 (-StartInactiveTimer@CAudioSession@@QEAAXXZ.c)
 *     ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x1800274F0 (-QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_Recurr.c)
 * Callees:
 *     ?reset@?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@std@@QEAAXPEAU_RecurringTask@@@Z @ 0x18000CA44 (-reset@-$unique_ptr@U_RecurringTask@@U-$default_delete@U_RecurringTask@@@std@@@std@@QEAAXPEAU_Re.c)
 */

__int64 *__fastcall std::unique_ptr<_RecurringTask>::operator=<std::default_delete<_RecurringTask>,0>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v4; // rdx

  v4 = *a2;
  *a2 = 0LL;
  std::unique_ptr<_RecurringTask>::reset(a1, v4);
  return a1;
}
