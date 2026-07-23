/*
 * XREFs of RtlpCreateWnfNameSubscription @ 0x1800050BC
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18000481C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlpFindWnfNameSubscription @ 0x180005570 (RtlpFindWnfNameSubscription.c)
 *     RtlRbInsertNodeEx @ 0x180010AF0 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memcmp @ 0x180168C50 (memcmp.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
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

  v3 = qword_1801D0200;
  v4 = 0;
  v15 = a2;
  if ( a3 )
    return 3221225485LL;
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_1801D0200 + 8));
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
