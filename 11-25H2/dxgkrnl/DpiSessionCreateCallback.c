/*
 * XREFs of DpiSessionCreateCallback @ 0x1403E211C
 * Callers:
 *     DxgkNotifySessionStateChange @ 0x1403E1D40 (DxgkNotifySessionStateChange.c)
 * Callees:
 *     DpiFdoStartAdapterThread @ 0x140240820 (DpiFdoStartAdapterThread.c)
 *     DpiLdaValidateSystemChainStatus @ 0x14024D170 (DpiLdaValidateSystemChainStatus.c)
 */

__int64 DpiSessionCreateCallback()
{
  unsigned int v0; // ebx
  NTSTATUS v1; // eax
  __int64 v2; // rdx

  v0 = 0;
  if ( !_InterlockedCompareExchange(&dword_14015DD60, 1, 0) )
  {
    v1 = KeWaitForSingleObject(&stru_14015DDA8, Executive, 0, 0, 0LL);
    v0 = v1;
    if ( v1 )
    {
      WdLogSingleEntry1(2LL, v1);
      v0 = 0;
      WdLogGlobalForLineNumber = 3490;
    }
    DpiFdoStartAdapterThread(0LL, v2);
    DpiLdaValidateSystemChainStatus();
    _InterlockedExchange(&dword_14015DD60, 2);
  }
  return v0;
}
