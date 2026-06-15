/*
 * XREFs of ?TimerCallback@?$CWatchdogTimer_Old@$00@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800B05A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CWatchdogTimer_Old<1>::TimerCallback(PTP_CALLBACK_INSTANCE Instance, __int64 Context, PTP_TIMER Timer)
{
  CWatchdogTimer_Old<1>::OnTimer(Context);
}
