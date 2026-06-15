/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x180020790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_180066FE8);
  if ( hHandle )
    CloseHandle(hHandle);
}
