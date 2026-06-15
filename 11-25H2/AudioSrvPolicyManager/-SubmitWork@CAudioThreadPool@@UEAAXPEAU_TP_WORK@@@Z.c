/*
 * XREFs of ?SubmitWork@CAudioThreadPool@@UEAAXPEAU_TP_WORK@@@Z @ 0x18004A7A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioThreadPool::SubmitWork(CAudioThreadPool *this, struct _TP_WORK *a2)
{
  SubmitThreadpoolWork(a2);
}
