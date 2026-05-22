/*
 * XREFs of ?GetLock@DWMCursorBroker@@UEAAPEAVrecursive_mutex@std@@XZ @ 0x1800788C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct std::recursive_mutex *__fastcall DWMCursorBroker::GetLock(DWMCursorBroker *this)
{
  return (struct std::recursive_mutex *)&DWMCursorBroker::s_lock;
}
