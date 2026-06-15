/*
 * XREFs of _Init_thread_abort @ 0x140059300
 * Callers:
 *     _GetAPOProcessingHostInstance_::_1_::dtor$0 @ 0x140093E1F (_GetAPOProcessingHostInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Init_thread_abort(_DWORD *a1)
{
  EnterCriticalSection(&CriticalSection);
  *a1 = 0;
  LeaveCriticalSection(&CriticalSection);
  return Init_thread_notify();
}
