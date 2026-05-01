/*
 * XREFs of DestroyAggregateSession @ 0x180091C48
 * Callers:
 *     CreateTlgAggregateSession @ 0x180091B6C (CreateTlgAggregateSession.c)
 *     TlgRegisterAggregateProviderEx @ 0x180091D58 (TlgRegisterAggregateProviderEx.c)
 *     TlgUnregisterAggregateProvider @ 0x180091E5C (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x180091B00 (CancelTimerCallbacksAndDeleteTimer.c)
 */

void __fastcall DestroyAggregateSession(LPVOID lpMem)
{
  HANDLE ProcessHeap; // rax

  if ( lpMem )
  {
    CancelTimerCallbacksAndDeleteTimer((__int64)lpMem);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
}
