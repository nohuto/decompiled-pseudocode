/*
 * XREFs of RtlpCreateWnfNameSubscription @ 0x180099A4C
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x1800991AC (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlRbInsertNodeEx @ 0x180054EB0 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpFindWnfNameSubscription @ 0x180099F00 (RtlpFindWnfNameSubscription.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memcmp @ 0x1801676D0 (memcmp.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpCreateWnfNameSubscription(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  bool v4; // bl
  __int64 WnfNameSubscription; // rax
  void *Heap; // rax
  unsigned __int64 v8; // r15
  __int64 v9; // rax
  volatile signed __int32 **v10; // rdx
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  int v14; // ebp
  unsigned __int64 v15; // rax
  __int64 v17; // [rsp+20h] [rbp-48h] BYREF

  v3 = qword_1801CE200;
  v4 = 0;
  v17 = a2;
  if ( a3 )
    return 3221225485LL;
  RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_1801CE200 + 8));
  WnfNameSubscription = RtlpFindWnfNameSubscription(v3, &v17);
  if ( WnfNameSubscription )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(WnfNameSubscription + 88)) <= 1 )
      __fastfail(0xEu);
    *a1 = WnfNameSubscription;
    RtlReleaseSRWLockShared((volatile signed __int64 *)(v3 + 8));
    return 0LL;
  }
  RtlReleaseSRWLockShared((volatile signed __int64 *)(v3 + 8));
  Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0x98uLL);
  v8 = (unsigned __int64)Heap;
  if ( Heap )
  {
    memset_thunk_772440563353939046(Heap, 0, 0x98uLL);
    v9 = v17;
    *(_DWORD *)v8 = 9963794;
    *(_QWORD *)(v8 + 16) = v9;
    *(_QWORD *)(v8 + 80) = v8 + 72;
    *(_QWORD *)(v8 + 72) = v8 + 72;
    *(_QWORD *)(v8 + 88) = 1LL;
    *(_DWORD *)(v8 + 124) = 0;
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v3 + 8), v10, v11);
    v12 = RtlpFindWnfNameSubscription(v3, &v17);
    if ( v12 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v12 + 88)) <= 1 )
        __fastfail(0xEu);
      *a1 = v12;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v3 + 8));
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
    }
    else
    {
      v13 = *(_QWORD *)(v3 + 16);
      if ( (*(_BYTE *)(v3 + 24) & 1) != 0 )
      {
        if ( v13 )
          v13 ^= v3 + 16;
      }
      v14 = *(_BYTE *)(v3 + 24) & 1;
      if ( v13 )
      {
        while ( 1 )
        {
          if ( memcmp((const void *)(v8 + 16), (const void *)(v13 - 16), 8uLL) >= 0 )
          {
            v15 = *(_QWORD *)(v13 + 8);
            if ( v14 )
            {
              if ( !v15 )
              {
LABEL_15:
                v4 = 1;
                break;
              }
              v15 ^= v13;
            }
            if ( !v15 )
              goto LABEL_15;
          }
          else
          {
            v15 = *(_QWORD *)v13;
            if ( v14 )
            {
              if ( !v15 )
                break;
              v15 ^= v13;
            }
            if ( !v15 )
              break;
          }
          v13 = v15;
        }
      }
      RtlRbInsertNodeEx(v3 + 16, v13, v4, v8 + 32);
      *a1 = v8;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v3 + 8));
    }
    return 0LL;
  }
  return 3221225495LL;
}
