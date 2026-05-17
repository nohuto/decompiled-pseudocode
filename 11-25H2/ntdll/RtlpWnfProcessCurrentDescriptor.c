/*
 * XREFs of RtlpWnfProcessCurrentDescriptor @ 0x180042680
 * Callers:
 *     RtlpWnfNotificationThread @ 0x180040FB0 (RtlpWnfNotificationThread.c)
 *     RtlpWnfRetryTimerCallback @ 0x180116B70 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     RtlpDereferenceWnfNameSubscription @ 0x180004D50 (RtlpDereferenceWnfNameSubscription.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x180042A00 (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpWnfCalculateRetryTime @ 0x18011B974 (RtlpWnfCalculateRetryTime.c)
 *     NtGetCompleteWnfStateSubscription @ 0x180165150 (NtGetCompleteWnfStateSubscription.c)
 *     memcmp @ 0x180168C50 (memcmp.c)
 */

__int64 __fastcall RtlpWnfProcessCurrentDescriptor(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 v9; // r13
  __int64 v10; // rsi
  unsigned __int64 v11; // rbx
  int v12; // esi
  int v13; // eax
  unsigned __int64 v14; // rax
  __int64 v15; // rbx
  int v16; // eax
  __int64 **v17; // rdi
  __int64 *i; // rax
  __int64 v19; // rax
  int v20; // ecx
  __int64 result; // rax
  __int64 v22; // r8

  *a3 = 1;
  v5 = 0LL;
  v6 = qword_1801D0200 + 8;
  *a4 = 0;
  RtlAcquireSRWLockShared(v6);
  v9 = qword_1801D0200;
  v10 = *(_QWORD *)(qword_1801D0200 + 24);
  v11 = *(_QWORD *)(qword_1801D0200 + 16);
  if ( (v10 & 1) != 0 )
  {
    if ( !v11 )
      return RtlReleaseSRWLockShared(v9 + 8);
    v11 ^= qword_1801D0200 + 16;
  }
  v12 = v10 & 1;
  if ( !v11 )
    return RtlReleaseSRWLockShared(v9 + 8);
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
    return RtlReleaseSRWLockShared(v9 + 8);
  v15 = v11 - 32;
  if ( !v15 || *(_QWORD *)(v15 + 8) != *(_QWORD *)a1 )
    return RtlReleaseSRWLockShared(v9 + 8);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v15 + 64));
  v16 = *(_DWORD *)(v15 + 124);
  if ( !v16 )
    goto LABEL_11;
  if ( v16 == 1 )
  {
    if ( !a2 )
    {
      v22 = *(_QWORD *)(v15 + 128);
      if ( v22 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v22);
      *(_QWORD *)(v15 + 128) = a1;
      *a3 = 0;
    }
LABEL_34:
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v15 + 64));
    v9 = qword_1801D0200;
    return RtlReleaseSRWLockShared(v9 + 8);
  }
  if ( a2 )
    goto LABEL_34;
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, *(_QWORD *)(v15 + 128));
  *(_QWORD *)(v15 + 128) = 0LL;
LABEL_11:
  *(_DWORD *)(v15 + 124) = 1;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v15 + 88)) <= 1 )
    __fastfail(0xEu);
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v15 + 64));
  RtlReleaseSRWLockShared(qword_1801D0200 + 8);
  v17 = (__int64 **)(v15 + 72);
  while ( 1 )
  {
    if ( (unsigned int)RtlpWnfWalkUserSubscriptionList(a1, v15, 0LL) == -1073741267 )
      *a4 = 1;
    if ( (unsigned int)RtlpWnfWalkUserSubscriptionList(a1, v15, 1LL) == -1073741267 )
      *a4 = 1;
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v15 + 64));
    for ( i = *v17; i != (__int64 *)v17; i = (__int64 *)*i )
      *((_DWORD *)i + 37) = 0;
    v19 = *(_QWORD *)(v15 + 128);
    if ( !v19 )
      break;
    *(_QWORD *)(v15 + 128) = 0LL;
    a1 = v19;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v15 + 64));
    if ( v5 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v5);
    v5 = a1;
    *a4 = 0;
  }
  if ( *a4 )
  {
    *(_QWORD *)(v15 + 128) = a1;
    *(_DWORD *)(v15 + 124) = 2;
    if ( a1 == v5 )
      v5 = 0LL;
    RtlpWnfCalculateRetryTime(v15);
    *a3 = 0;
  }
  else
  {
    v20 = *(_DWORD *)(v15 + 24);
    *(_DWORD *)(v15 + 124) = 0;
    if ( !v20 || *(_DWORD *)(a1 + 16) - v20 > 0 )
      *(_DWORD *)(v15 + 24) = *(_DWORD *)(a1 + 16);
  }
  NtGetCompleteWnfStateSubscription(a1 + 8, a1, *(unsigned int *)(a1 + 24), *a4 != 0 ? 0xC000022D : 0, 0LL, 0);
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v15 + 64));
  result = RtlpDereferenceWnfNameSubscription(v15);
  if ( v5 )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v5);
  return result;
}
