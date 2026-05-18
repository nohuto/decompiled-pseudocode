/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x180002680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_1800194A8);
  if ( hHandle )
    CloseHandle(hHandle);
}
