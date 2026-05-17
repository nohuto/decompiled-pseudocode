/*
 * XREFs of RtlpWnfRetryTimerCallback @ 0x180113BB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x180020CB0 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpGetFirstWnfNameSubscription @ 0x180113B70 (RtlpGetFirstWnfNameSubscription.c)
 *     RtlpGetNextWnfNameSubscription @ 0x180113D10 (RtlpGetNextWnfNameSubscription.c)
 */

__int64 RtlpWnfRetryTimerCallback()
{
  __int64 v0; // rcx
  unsigned __int64 v1; // rdi
  unsigned __int64 v2; // rsi
  __int64 i; // rax
  volatile signed __int32 **v4; // rdx
  unsigned __int64 v5; // r8
  __int64 v6; // rbx
  volatile signed __int64 *v7; // rbp
  _DWORD v9[10]; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0;
  v9[0] = 0;
  RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_1801CE200 + 8));
  v0 = qword_1801CE200;
  *(_QWORD *)(qword_1801CE200 + 80) = 0LL;
  RtlReleaseSRWLockShared((volatile signed __int64 *)(v0 + 8));
  while ( 1 )
  {
    v1 = 0LL;
    v2 = MEMORY[0x7FFE0008] - RtlpFreezeTimeBias - MEMORY[0x7FFE03B0] + 500000;
    RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_1801CE200 + 8));
    for ( i = RtlpGetFirstWnfNameSubscription(); ; i = RtlpGetNextWnfNameSubscription(v6) )
    {
      v6 = i;
      if ( !i )
        break;
      v7 = (volatile signed __int64 *)(i + 64);
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)(i + 64), v4, v5);
      if ( *(_DWORD *)(v6 + 124) == 2 && v2 >= *(_QWORD *)(v6 + 136) )
      {
        v1 = *(_QWORD *)(v6 + 128);
        *(_QWORD *)(v6 + 128) = 0LL;
        *(_DWORD *)(v6 + 124) = 0;
        RtlReleaseSRWLockExclusive(v7);
        break;
      }
      RtlReleaseSRWLockExclusive(v7);
    }
    RtlReleaseSRWLockShared((volatile signed __int64 *)(qword_1801CE200 + 8));
    if ( !v1 )
      return RtlpWnfCalculateAndSetNextTimer();
    RtlpWnfProcessCurrentDescriptor(v1, 1, &v10, v9);
    if ( v10 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v1);
  }
}
