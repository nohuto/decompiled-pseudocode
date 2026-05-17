/*
 * XREFs of LdrpFreeTls @ 0x180004110
 * Callers:
 *     LdrShutdownThread @ 0x1800045E0 (LdrShutdownThread.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 */

__int64 LdrpFreeTls()
{
  struct _TEB *v0; // rbx
  void **p_ThreadLocalStoragePointer; // rdi
  void **ThreadLocalStoragePointer; // rbx
  unsigned int v3; // eax
  void **v4; // rsi
  __int64 v5; // rdi

  v0 = NtCurrentTeb();
  RtlAcquireSRWLockShared(&LdrpTlsLock);
  p_ThreadLocalStoragePointer = &v0->ThreadLocalStoragePointer;
  ThreadLocalStoragePointer = (void **)v0->ThreadLocalStoragePointer;
  if ( ThreadLocalStoragePointer )
  {
    _InterlockedDecrement(&LdrpActiveThreadCount);
    *p_ThreadLocalStoragePointer = 0LL;
    RtlReleaseSRWLockShared(&LdrpTlsLock);
    if ( ThreadLocalStoragePointer != p_ThreadLocalStoragePointer )
    {
      v3 = *((_DWORD *)ThreadLocalStoragePointer - 4);
      v4 = ThreadLocalStoragePointer - 2;
      if ( v3 )
      {
        v5 = v3;
        do
        {
          if ( *ThreadLocalStoragePointer )
            RtlFreeHeap(LdrpTlsHeap, 0LL, *((_QWORD *)*ThreadLocalStoragePointer - 1));
          ++ThreadLocalStoragePointer;
          --v5;
        }
        while ( v5 );
      }
      RtlFreeHeap(LdrpTlsHeap, 0LL, v4);
    }
  }
  else
  {
    RtlReleaseSRWLockShared(&LdrpTlsLock);
  }
  return LdrpCleanupThreadTlsData();
}
