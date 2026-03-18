/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x18025C790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_1804059A8);
  if ( hHandle )
    CloseHandle(hHandle);
}
