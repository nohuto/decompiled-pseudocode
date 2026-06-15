/*
 * XREFs of ??$?4U?$default_delete@U_WaitTask@@@std@@$0A@@?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800B2B3C
 * Callers:
 *     ?QueueWaitItemInternal@CSerialWorkQueue@@AEAAJPEAXP6AXPEAU_TP_CALLBACK_INSTANCE@@0PEAU_TP_WAIT@@J@ZV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@5@@Z @ 0x180027A44 (-QueueWaitItemInternal@CSerialWorkQueue@@AEAAJPEAXP6AXPEAU_TP_CALLBACK_INSTANCE@@0PEAU_TP_WAIT@@.c)
 * Callees:
 *     ?reset@?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@std@@QEAAXPEAU_WaitTask@@@Z @ 0x180048954 (-reset@-$unique_ptr@U_WaitTask@@U-$default_delete@U_WaitTask@@@std@@@std@@QEAAXPEAU_WaitTask@@@Z.c)
 */

_WaitTask **__fastcall std::unique_ptr<_WaitTask>::operator=<std::default_delete<_WaitTask>,0>(
        _WaitTask **a1,
        _WaitTask **a2)
{
  _WaitTask *v4; // rdx

  v4 = *a2;
  *a2 = 0LL;
  std::unique_ptr<_WaitTask>::reset(a1, v4);
  return a1;
}
