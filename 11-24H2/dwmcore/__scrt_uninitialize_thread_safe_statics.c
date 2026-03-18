/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x180251160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_1803F9928);
  if ( hHandle )
    CloseHandle(hHandle);
}
