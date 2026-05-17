/*
 * XREFs of RtlpWnfRetryTimerCallback @ 0x180116B70
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x180042680 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpGetNextWnfNameSubscription @ 0x180116CD0 (RtlpGetNextWnfNameSubscription.c)
 *     RtlpGetFirstWnfNameSubscription @ 0x180116D24 (RtlpGetFirstWnfNameSubscription.c)
 */

__int64 RtlpWnfRetryTimerCallback()
{
  __int64 v0; // rcx
  __int64 v1; // rdi
  unsigned __int64 v2; // rsi
  __int64 v3; // rcx
  __int64 i; // rax
  __int64 v5; // rbx
  volatile signed __int64 *v6; // rbp
  __int64 v7; // r9
  _DWORD v9[10]; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0;
  v9[0] = 0;
  RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_1801D0200 + 8));
  v0 = qword_1801D0200;
  *(_QWORD *)(qword_1801D0200 + 80) = 0LL;
  RtlReleaseSRWLockShared((volatile signed __int64 *)(v0 + 8));
  while ( 1 )
  {
    v1 = 0LL;
    v2 = MEMORY[0x7FFE0008] - RtlpFreezeTimeBias - MEMORY[0x7FFE03B0] + 500000;
    RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_1801D0200 + 8));
    for ( i = RtlpGetFirstWnfNameSubscription(v3); ; i = RtlpGetNextWnfNameSubscription(v5) )
    {
      v5 = i;
      if ( !i )
        break;
      v6 = (volatile signed __int64 *)(i + 64);
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)(i + 64));
      if ( *(_DWORD *)(v5 + 124) == 2 && v2 >= *(_QWORD *)(v5 + 136) )
      {
        v1 = *(_QWORD *)(v5 + 128);
        *(_QWORD *)(v5 + 128) = 0LL;
        *(_DWORD *)(v5 + 124) = 0;
        RtlReleaseSRWLockExclusive(v6);
        break;
      }
      RtlReleaseSRWLockExclusive(v6);
    }
    RtlReleaseSRWLockShared((volatile signed __int64 *)(qword_1801D0200 + 8));
    if ( !v1 )
      return RtlpWnfCalculateAndSetNextTimer();
    RtlpWnfProcessCurrentDescriptor(v1, 1, &v10, v9);
    if ( v10 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v1, v7);
  }
}
