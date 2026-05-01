/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x1802D4EA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_1808C85A8);
  if ( hHandle )
    CloseHandle(hHandle);
}
