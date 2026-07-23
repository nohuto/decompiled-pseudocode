/*
 * XREFs of RtlpCreateWnfNameSubscription @ 0x18002E89C
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18002DFFC (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlpFindWnfNameSubscription @ 0x18002ED50 (RtlpFindWnfNameSubscription.c)
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlRbInsertNodeEx @ 0x18006AA90 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memcmp @ 0x180165A90 (memcmp.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpCreateWnfNameSubscription(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  BOOLEAN v4; // bl
  __int64 WnfNameSubscription; // rax
  char *Heap; // rax
  char *v8; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rdi
  int v12; // ebp
  unsigned __int64 v13; // rax
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF

  v3 = qword_1801CD200;
  v4 = 0;
  v15 = a2;
  if ( a3 )
    return 3221225485LL;
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_1801CD200 + 8));
  WnfNameSubscription = RtlpFindWnfNameSubscription(v3, &v15);
  if ( WnfNameSubscription )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(WnfNameSubscription + 88)) <= 1 )
      __fastfail(0xEu);
    *a1 = WnfNameSubscription;
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(v3 + 8));
    return 0LL;
  }
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(v3 + 8));
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x98uLL);
  v8 = Heap;
  if ( Heap )
  {
    memset_thunk_772440563353939046(Heap, 0, 0x98uLL);
    v9 = v15;
    *(_DWORD *)v8 = 9963794;
    *((_QWORD *)v8 + 2) = v9;
    *((_QWORD *)v8 + 10) = v8 + 72;
    *((_QWORD *)v8 + 9) = v8 + 72;
    *((_QWORD *)v8 + 11) = 1LL;
    *((_DWORD *)v8 + 31) = 0;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v3 + 8));
    v10 = RtlpFindWnfNameSubscription(v3, &v15);
    if ( v10 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v10 + 88)) <= 1 )
        __fastfail(0xEu);
      *a1 = v10;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v3 + 8));
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
    }
    else
    {
      v11 = *(_QWORD *)(v3 + 16);
      if ( (*(_BYTE *)(v3 + 24) & 1) != 0 )
      {
        if ( v11 )
          v11 ^= v3 + 16;
      }
      v12 = *(_BYTE *)(v3 + 24) & 1;
      if ( v11 )
      {
        while ( 1 )
        {
          if ( memcmp(v8 + 16, (const void *)(v11 - 16), 8uLL) >= 0 )
          {
            v13 = *(_QWORD *)(v11 + 8);
            if ( v12 )
            {
              if ( !v13 )
              {
LABEL_15:
                v4 = 1;
                break;
              }
              v13 ^= v11;
            }
            if ( !v13 )
              goto LABEL_15;
          }
          else
          {
            v13 = *(_QWORD *)v11;
            if ( v12 )
            {
              if ( !v13 )
                break;
              v13 ^= v11;
            }
            if ( !v13 )
              break;
          }
          v11 = v13;
        }
      }
      RtlRbInsertNodeEx((PRTL_RB_TREE)(v3 + 16), (PRTL_BALANCED_NODE)v11, v4, (PRTL_BALANCED_NODE)(v8 + 32));
      *a1 = (__int64)v8;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v3 + 8));
    }
    return 0LL;
  }
  return 3221225495LL;
}
