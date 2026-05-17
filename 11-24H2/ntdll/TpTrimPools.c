/*
 * XREFs of TpTrimPools @ 0x1800F57E0
 * Callers:
 *     LdrShutdownThread @ 0x1800045E0 (LdrShutdownThread.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlSleepConditionVariableSRW @ 0x180049EB0 (RtlSleepConditionVariableSRW.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtWaitForMultipleObjects @ 0x1801627E0 (NtWaitForMultipleObjects.c)
 *     NtSetInformationWorkerFactory @ 0x1801652A0 (NtSetInformationWorkerFactory.c)
 */

__int64 __fastcall TpTrimPools(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  _UNKNOWN **v3; // r15
  _UNKNOWN **v4; // rbx
  volatile signed __int64 *v5; // rbp
  volatile signed __int32 **v6; // rdx
  unsigned __int64 v7; // r8
  volatile signed __int64 *v8; // rsi
  char v9; // r13
  unsigned int v10; // r8d
  int v11; // r9d
  int v12; // eax
  unsigned __int64 Heap; // r12
  unsigned __int64 v14; // r14
  __int64 v15; // rdi
  _QWORD **v16; // r8
  _QWORD *v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  unsigned int v20; // ebx
  __int64 v21; // rcx
  unsigned int v22; // r10d
  unsigned __int64 *v23; // rbx
  unsigned __int64 *v25; // rsi
  unsigned __int64 v26; // rdi
  unsigned __int64 *v27; // rsi
  unsigned __int64 v28; // rdi
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rax
  int v33; // [rsp+70h] [rbp+8h] BYREF
  __int64 v34; // [rsp+78h] [rbp+10h] BYREF
  volatile signed __int64 *v35; // [rsp+80h] [rbp+18h]

  v33 = 0;
  v34 = -1000000LL;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&TppPoolpListLock, a2, a3);
  v3 = (_UNKNOWN **)TppPoolpList;
  while ( v3 != &TppPoolpList )
  {
    v4 = v3;
    v3 = (_UNKNOWN **)*v3;
    v5 = (volatile signed __int64 *)(v4 - 2);
    RtlAcquireSRWLockShared((volatile signed __int64 *)v4 - 2);
    if ( *((_BYTE *)v4 - 7) )
      goto LABEL_4;
    v8 = (volatile signed __int64 *)(v4 - 39);
    v35 = (volatile signed __int64 *)(v4 - 39);
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)v4 - 78, v6, v7);
    v33 = 0;
    v9 = 1;
    if ( (int)NtSetInformationWorkerFactory(*(v4 - 41), 12LL, &v33) >= 0 && v33 )
    {
      v10 = *((_DWORD *)v4 + 13) & 0xFFFFF001 | (2 * (v33 & 0x7FF));
      v11 = 0;
      for ( *((_DWORD *)v4 + 13) = v10; ((v10 >> 11) & 0xFFE) < (v10 & 0xFFE); v11 = v12 )
      {
        if ( v11 == 258 )
          break;
        v12 = RtlSleepConditionVariableSRW(
                (signed __int64 *)v4 + 8,
                (volatile signed __int64 *)v4 - 39,
                (__int64)&v34,
                0);
        v10 = *((_DWORD *)v4 + 13);
      }
      if ( (v10 & 0x7FF000) == 0 )
      {
        *((_DWORD *)v4 + 13) = v10 & 0xFFFFF001;
        goto LABEL_30;
      }
      Heap = RtlAllocateHeap(
               (__int64)NtCurrentPeb()->ProcessHeap,
               (TppHeapTag + 786432) | 8u,
               8 * (((unsigned __int64)v10 >> 12) & 0x7FF));
      if ( !Heap )
      {
        v27 = (unsigned __int64 *)(v4 + 9);
        while ( 1 )
        {
          v28 = *v27;
          if ( (unsigned __int64 *)*v27 == v27 )
            break;
          v29 = *(_QWORD *)v28;
          if ( *(_QWORD *)(*(_QWORD *)v28 + 8LL) != v28 || (v30 = *(_QWORD **)(v28 + 8), *v30 != v28) )
LABEL_17:
            __fastfail(3u);
          *v30 = v29;
          *(_QWORD *)(v29 + 8) = v30;
          NtClose(*(HANDLE *)(v28 + 16));
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v28);
        }
        *((_DWORD *)v4 + 13) &= 0xFF800001;
LABEL_29:
        v8 = v35;
        goto LABEL_30;
      }
      v14 = RtlAllocateHeap(
              (__int64)NtCurrentPeb()->ProcessHeap,
              (TppHeapTag + 786432) | 8u,
              8 * (((unsigned __int64)*((unsigned int *)v4 + 13) >> 12) & 0x7FF));
      if ( v14 )
      {
        v15 = 0LL;
        v16 = (_QWORD **)(v4 + 9);
        while ( 1 )
        {
          v17 = *v16;
          if ( *v16 == v16 )
            break;
          *(_QWORD *)(Heap + 8 * v15) = v17[2];
          *(_QWORD *)(v14 + 8 * v15) = v17;
          v18 = *v17;
          if ( *(_QWORD **)(*v17 + 8LL) != v17 )
            goto LABEL_17;
          v19 = (_QWORD *)v17[1];
          if ( (_QWORD *)*v19 != v17 )
            goto LABEL_17;
          *v19 = v18;
          v15 = (unsigned int)(v15 + 1);
          *(_QWORD *)(v18 + 8) = v19;
        }
        *((_DWORD *)v4 + 13) &= 0xFF800001;
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)v4 - 39);
        RtlReleaseSRWLockShared((volatile signed __int64 *)v4 - 2);
        v9 = 0;
        v20 = 0;
        do
        {
          v21 = v20 << 6;
          if ( (unsigned int)v21 >= (unsigned int)v15 )
            break;
          v22 = (int)v21 + 64 <= (unsigned int)v15 ? 64 : v15 & 0x3F;
          if ( (unsigned int)NtWaitForMultipleObjects(v22, Heap + 8 * v21, 0LL, 0LL, &v34) == 258 )
            break;
          ++v20;
        }
        while ( v20 <= (unsigned int)v15 >> 6 );
        if ( (_DWORD)v15 )
        {
          v23 = (unsigned __int64 *)v14;
          do
          {
            NtClose(*(HANDLE *)((char *)v23 + Heap - v14));
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *v23++);
            --v15;
          }
          while ( v15 );
        }
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v14);
      }
      else
      {
        v25 = (unsigned __int64 *)(v4 + 9);
        while ( 1 )
        {
          v26 = *v25;
          if ( (unsigned __int64 *)*v25 == v25 )
            break;
          v31 = *(_QWORD *)v26;
          if ( *(_QWORD *)(*(_QWORD *)v26 + 8LL) != v26 )
            goto LABEL_17;
          v32 = *(_QWORD **)(v26 + 8);
          if ( *v32 != v26 )
            goto LABEL_17;
          *v32 = v31;
          *(_QWORD *)(v31 + 8) = v32;
          NtClose(*(HANDLE *)(v26 + 16));
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v26);
        }
        *((_DWORD *)v4 + 13) &= 0xFF800001;
      }
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap);
      if ( v9 )
        goto LABEL_29;
    }
    else
    {
LABEL_30:
      RtlReleaseSRWLockExclusive(v8);
LABEL_4:
      RtlReleaseSRWLockShared(v5);
    }
  }
  return RtlReleaseSRWLockExclusive(&TppPoolpListLock);
}
