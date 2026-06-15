/*
 * XREFs of ?CloseTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@@Z @ 0x1801177C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioThreadPool::CloseTimer(CAudioThreadPool *this, struct _TP_TIMER *a2)
{
  CloseThreadpoolTimer(a2);
}
