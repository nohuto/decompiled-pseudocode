/*
 * XREFs of ?Unlock@CWindowList@@UEAAXXZ @ 0x1800F38E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CWindowList::Unlock(CWindowList *this)
{
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
}
