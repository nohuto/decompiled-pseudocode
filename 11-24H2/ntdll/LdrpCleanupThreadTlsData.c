/*
 * XREFs of LdrpCleanupThreadTlsData @ 0x1800E7D74
 * Callers:
 *     LdrpFreeTls @ 0x1800AB4A0 (LdrpFreeTls.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 */

void LdrpCleanupThreadTlsData()
{
  _QWORD *v0; // rdi
  _QWORD *v1; // rsi
  unsigned __int64 UniqueThread; // r14
  _RTL_SRWLOCK *v3; // rbx
  _QWORD *Value; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx

  v0 = 0LL;
  v1 = 0LL;
  UniqueThread = (unsigned __int64)NtCurrentTeb()->ClientId.UniqueThread;
  v3 = (_RTL_SRWLOCK *)((char *)&LdrpDelayedTlsReclaimTable + 16 * ((UniqueThread >> 2) & 0xF));
  RtlAcquireSRWLockExclusive(v3 + 1);
  Value = (_QWORD *)v3->Value;
  if ( v3->Value )
  {
    do
    {
      v5 = (_QWORD *)Value[1];
      if ( *Value == UniqueThread )
      {
        if ( v1 )
          v1[1] = v5;
        else
          v3->Value = (unsigned __int64)v5;
        Value[1] = v0;
        v0 = Value;
        Value = v1;
      }
      v1 = Value;
      Value = v5;
    }
    while ( v5 );
  }
  RtlReleaseSRWLockExclusive(v3 + 1);
  if ( v0 )
  {
    do
    {
      v6 = (_QWORD *)v0[1];
      RtlFreeHeap(LdrpTlsHeap, 0, v0);
      v0 = v6;
    }
    while ( v6 );
  }
}
