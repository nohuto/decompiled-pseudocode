/*
 * XREFs of LdrpCleanupThreadTlsData @ 0x1800EC734
 * Callers:
 *     LdrpFreeTls @ 0x180004110 (LdrpFreeTls.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall LdrpCleanupThreadTlsData(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  void **v4; // rsi
  unsigned __int64 UniqueThread; // r14
  volatile signed __int32 *v6; // rbx
  void **v7; // rax
  _QWORD *v8; // rcx
  __int64 result; // rax
  unsigned __int64 v10; // rbx

  v3 = 0LL;
  v4 = 0LL;
  UniqueThread = (unsigned __int64)NtCurrentTeb()->ClientId.UniqueThread;
  v6 = (volatile signed __int32 *)((char *)&LdrpDelayedTlsReclaimTable + 16 * ((UniqueThread >> 2) & 0xF));
  RtlAcquireSRWLockExclusive(v6 + 2, a2, a3);
  v7 = *(void ***)v6;
  if ( *(_QWORD *)v6 )
  {
    do
    {
      v8 = v7[1];
      if ( *v7 == (void *)UniqueThread )
      {
        if ( v4 )
          v4[1] = v8;
        else
          *(_QWORD *)v6 = v8;
        v7[1] = (void *)v3;
        v3 = (unsigned __int64)v7;
        v7 = v4;
      }
      v4 = v7;
      v7 = (void **)v8;
    }
    while ( v8 );
  }
  result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)v6 + 1);
  if ( v3 )
  {
    do
    {
      v10 = *(_QWORD *)(v3 + 8);
      result = RtlFreeHeap(LdrpTlsHeap, 0, v3);
      v3 = v10;
    }
    while ( v10 );
  }
  return result;
}
