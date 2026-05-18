/*
 * XREFs of ?__scrt_uninitialize_thread_safe_statics@@YAXXZ @ 0x18000C800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall __scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&CriticalSection);
  if ( hHandle )
    CloseHandle(hHandle);
}
