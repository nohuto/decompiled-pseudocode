/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x1800A45E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_1801DAEF0);
  if ( hHandle )
    CloseHandle(hHandle);
}
