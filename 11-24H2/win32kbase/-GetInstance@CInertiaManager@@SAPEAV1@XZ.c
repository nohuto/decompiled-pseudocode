/*
 * XREFs of ?GetInstance@CInertiaManager@@SAPEAV1@XZ @ 0x14010E830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CInertiaManager *__fastcall CInertiaManager::GetInstance(__int64 a1)
{
  return (struct CInertiaManager *)(W32GetUserSessionState(a1) + 16920);
}
