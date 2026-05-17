/*
 * XREFs of LdrpCleanupThreadTlsData @ 0x1800ECF14
 * Callers:
 *     LdrpFreeTls @ 0x180009480 (LdrpFreeTls.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

__int64 LdrpCleanupThreadTlsData()
{
  __int64 v0; // rdi
  void **v1; // rsi
  unsigned __int64 UniqueThread; // r14
  volatile signed __int32 *v3; // rbx
  void **v4; // rax
  _QWORD *v5; // rcx
  __int64 result; // rax
  __int64 v7; // r9
  __int64 v8; // rbx

  v0 = 0LL;
  v1 = 0LL;
  UniqueThread = (unsigned __int64)NtCurrentTeb()->ClientId.UniqueThread;
  v3 = (volatile signed __int32 *)((char *)&LdrpDelayedTlsReclaimTable + 16 * ((UniqueThread >> 2) & 0xF));
  RtlAcquireSRWLockExclusive(v3 + 2);
  v4 = *(void ***)v3;
  if ( *(_QWORD *)v3 )
  {
    do
    {
      v5 = v4[1];
      if ( *v4 == (void *)UniqueThread )
      {
        if ( v1 )
          v1[1] = v5;
        else
          *(_QWORD *)v3 = v5;
        v4[1] = (void *)v0;
        v0 = (__int64)v4;
        v4 = v1;
      }
      v1 = v4;
      v4 = (void **)v5;
    }
    while ( v5 );
  }
  result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)v3 + 1);
  if ( v0 )
  {
    do
    {
      v8 = *(_QWORD *)(v0 + 8);
      result = RtlFreeHeap(LdrpTlsHeap, 0, v0, v7);
      v0 = v8;
    }
    while ( v8 );
  }
  return result;
}
