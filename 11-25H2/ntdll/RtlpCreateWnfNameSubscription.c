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
  char v4; // bl
  __int64 WnfNameSubscription; // rax
  _QWORD *Heap; // rax
  _QWORD *v8; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // rdi
  int v13; // ebp
  unsigned __int64 v14; // rax
  __int64 v16; // [rsp+20h] [rbp-48h] BYREF

  v3 = qword_1801D0200;
  v4 = 0;
  v16 = a2;
  if ( a3 )
    return 3221225485LL;
  RtlAcquireSRWLockShared(qword_1801D0200 + 8);
  WnfNameSubscription = RtlpFindWnfNameSubscription(v3, &v16);
  if ( WnfNameSubscription )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(WnfNameSubscription + 88)) <= 1 )
      __fastfail(0xEu);
    *a1 = WnfNameSubscription;
    RtlReleaseSRWLockShared(v3 + 8);
    return 0LL;
  }
  RtlReleaseSRWLockShared(v3 + 8);
  Heap = (_QWORD *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap);
  v8 = Heap;
  if ( Heap )
  {
    memset_thunk_772440563353939046(Heap, 0, 0x98uLL);
    v9 = v16;
    *(_DWORD *)v8 = 9963794;
    v8[2] = v9;
    v8[10] = v8 + 9;
    v8[9] = v8 + 9;
    v8[11] = 1LL;
    *((_DWORD *)v8 + 31) = 0;
    RtlAcquireSRWLockExclusive(v3 + 8);
    v10 = RtlpFindWnfNameSubscription(v3, &v16);
    if ( v10 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v10 + 88)) <= 1 )
        __fastfail(0xEu);
      *a1 = v10;
      RtlReleaseSRWLockExclusive(v3 + 8);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v8);
    }
    else
    {
      v12 = *(_QWORD *)(v3 + 16);
      if ( (*(_BYTE *)(v3 + 24) & 1) != 0 )
      {
        if ( v12 )
          v12 ^= v3 + 16;
      }
      v13 = *(_BYTE *)(v3 + 24) & 1;
      if ( v12 )
      {
        while ( 1 )
        {
          if ( memcmp(v8 + 2, (const void *)(v12 - 16), 8uLL) >= 0 )
          {
            v14 = *(_QWORD *)(v12 + 8);
            if ( v13 )
            {
              if ( !v14 )
              {
LABEL_15:
                v4 = 1;
                break;
              }
              v14 ^= v12;
            }
            if ( !v14 )
              goto LABEL_15;
          }
          else
          {
            v14 = *(_QWORD *)v12;
            if ( v13 )
            {
              if ( !v14 )
                break;
              v14 ^= v12;
            }
            if ( !v14 )
              break;
          }
          v12 = v14;
        }
      }
      LOBYTE(v11) = v4;
      RtlRbInsertNodeEx(v3 + 16, v12, v11, v8 + 4);
      *a1 = (__int64)v8;
      RtlReleaseSRWLockExclusive(v3 + 8);
    }
    return 0LL;
  }
  return 3221225495LL;
}
