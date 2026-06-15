/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x1400592D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&CriticalSection);
  if ( hEvent )
    CloseHandle(hEvent);
}
