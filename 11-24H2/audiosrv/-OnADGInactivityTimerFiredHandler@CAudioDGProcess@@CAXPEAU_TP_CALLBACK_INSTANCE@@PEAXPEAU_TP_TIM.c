/*
 * XREFs of ?OnADGInactivityTimerFiredHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180073F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioDGProcess::OnADGInactivityTimerFiredHandler(
        struct _TP_CALLBACK_INSTANCE *a1,
        CAudioDGProcess *a2,
        struct _TP_TIMER *a3)
{
  CAudioDGProcess::OnADGInactivityTimerFired(a2);
}
