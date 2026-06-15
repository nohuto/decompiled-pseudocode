/*
 * XREFs of ?SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z @ 0x18001A920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioThreadPool::SetTimer(
        CAudioThreadPool *this,
        struct _TP_TIMER *a2,
        struct _FILETIME *a3,
        DWORD a4,
        DWORD a5)
{
  SetThreadpoolTimer(a2, a3, a4, a5);
}
