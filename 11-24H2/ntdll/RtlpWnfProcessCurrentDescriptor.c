/*
 * XREFs of RtlpWnfProcessCurrentDescriptor @ 0x180020CB0
 * Callers:
 *     RtlpWnfNotificationThread @ 0x18001FCF0 (RtlpWnfNotificationThread.c)
 *     RtlpWnfRetryTimerCallback @ 0x180113BB0 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x180021030 (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpDereferenceWnfNameSubscription @ 0x1800996E0 (RtlpDereferenceWnfNameSubscription.c)
 *     RtlpWnfCalculateRetryTime @ 0x1801188F4 (RtlpWnfCalculateRetryTime.c)
 *     NtGetCompleteWnfStateSubscription @ 0x180163BC0 (NtGetCompleteWnfStateSubscription.c)
 *     memcmp @ 0x1801676D0 (memcmp.c)
 */

__int64 __fastcall RtlpWnfProcessCurrentDescriptor(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v5; // rbp
  volatile signed __int64 *v6; // rcx
  __int64 v9; // r13
  __int64 v10; // rsi
  unsigned __int64 v11; // rbx
  int v12; // esi
  int v13; // eax
  unsigned __int64 v14; // rax
  _QWORD *v15; // rbx
  int v16; // eax
  __int64 **v17; // rdi
  __int64 *i; // rax
  __int64 v19; // rax
  int v20; // ecx
  __int64 result; // rax
  __int64 v22; // r8

  *a3 = 1;
  v5 = 0LL;
  v6 = (volatile signed __int64 *)(qword_1801CE200 + 8);
  *a4 = 0;
  RtlAcquireSRWLockShared(v6);
  v9 = qword_1801CE200;
  v10 = *(_QWORD *)(qword_1801CE200 + 24);
  v11 = *(_QWORD *)(qword_1801CE200 + 16);
  if ( (v10 & 1) != 0 )
  {
    if ( !v11 )
      return RtlReleaseSRWLockShared((volatile signed __int64 *)(v9 + 8));
    v11 ^= qword_1801CE200 + 16;
  }
  v12 = v10 & 1;
  if ( !v11 )
    return RtlReleaseSRWLockShared((volatile signed __int64 *)(v9 + 8));
  do
  {
    v13 = memcmp((const void *)(a1 + 8), (const void *)(v11 - 16), 8uLL);
    if ( v13 < 0 )
    {
      v14 = *(_QWORD *)v11;
      if ( v12 && v14 )
      {
        v11 ^= v14;
        continue;
      }
      goto LABEL_5;
    }
    if ( v13 <= 0 )
      break;
    v14 = *(_QWORD *)(v11 + 8);
    if ( v12 && v14 )
    {
      v11 ^= v14;
      continue;
    }
LABEL_5:
    v11 = v14;
  }
  while ( v11 );
  if ( !v11 )
    return RtlReleaseSRWLockShared((volatile signed __int64 *)(v9 + 8));
  v15 = (_QWORD *)(v11 - 32);
  if ( !v15 || v15[1] != *(_QWORD *)a1 )
    return RtlReleaseSRWLockShared((volatile signed __int64 *)(v9 + 8));
  RtlAcquireSRWLockExclusive(v15 + 8);
  v16 = *((_DWORD *)v15 + 31);
  if ( !v16 )
    goto LABEL_11;
  if ( v16 == 1 )
  {
    if ( !a2 )
    {
      v22 = v15[16];
      if ( v22 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v22);
      v15[16] = a1;
      *a3 = 0;
    }
LABEL_34:
    RtlReleaseSRWLockExclusive(v15 + 8);
    v9 = qword_1801CE200;
    return RtlReleaseSRWLockShared((volatile signed __int64 *)(v9 + 8));
  }
  if ( a2 )
    goto LABEL_34;
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v15[16]);
  v15[16] = 0LL;
LABEL_11:
  *((_DWORD *)v15 + 31) = 1;
  if ( _InterlockedIncrement64(v15 + 11) <= 1 )
    __fastfail(0xEu);
  RtlReleaseSRWLockExclusive(v15 + 8);
  RtlReleaseSRWLockShared((volatile signed __int64 *)(qword_1801CE200 + 8));
  v17 = (__int64 **)(v15 + 9);
  while ( 1 )
  {
    if ( (unsigned int)RtlpWnfWalkUserSubscriptionList(a1, v15, 0LL) == -1073741267 )
      *a4 = 1;
    if ( (unsigned int)RtlpWnfWalkUserSubscriptionList(a1, v15, 1LL) == -1073741267 )
      *a4 = 1;
    RtlAcquireSRWLockExclusive(v15 + 8);
    for ( i = *v17; i != (__int64 *)v17; i = (__int64 *)*i )
      *((_DWORD *)i + 37) = 0;
    v19 = v15[16];
    if ( !v19 )
      break;
    v15[16] = 0LL;
    a1 = v19;
    RtlReleaseSRWLockExclusive(v15 + 8);
    if ( v5 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v5);
    v5 = a1;
    *a4 = 0;
  }
  if ( *a4 )
  {
    v15[16] = a1;
    *((_DWORD *)v15 + 31) = 2;
    if ( a1 == v5 )
      v5 = 0LL;
    RtlpWnfCalculateRetryTime(v15);
    *a3 = 0;
  }
  else
  {
    v20 = *((_DWORD *)v15 + 6);
    *((_DWORD *)v15 + 31) = 0;
    if ( !v20 || *(_DWORD *)(a1 + 16) - v20 > 0 )
      *((_DWORD *)v15 + 6) = *(_DWORD *)(a1 + 16);
  }
  NtGetCompleteWnfStateSubscription(a1 + 8, a1, *(unsigned int *)(a1 + 24), *a4 != 0 ? 0xC000022D : 0, 0LL, 0);
  RtlReleaseSRWLockExclusive(v15 + 8);
  result = RtlpDereferenceWnfNameSubscription(v15);
  if ( v5 )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v5);
  return result;
}
