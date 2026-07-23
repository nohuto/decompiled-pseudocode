/*
 * XREFs of LdrpFreeTls @ 0x180009480
 * Callers:
 *     LdrShutdownThread @ 0x180009100 (LdrShutdownThread.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
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
            RtlFreeHeap(LdrpTlsHeap, 0, *((PVOID *)*ThreadLocalStoragePointer - 1));
          ++ThreadLocalStoragePointer;
          --v5;
        }
        while ( v5 );
      }
      RtlFreeHeap(LdrpTlsHeap, 0, v4);
    }
  }
  else
  {
    RtlReleaseSRWLockShared(&LdrpTlsLock);
  }
  return LdrpCleanupThreadTlsData();
}
