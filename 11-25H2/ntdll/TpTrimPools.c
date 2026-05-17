/*
 * XREFs of TpTrimPools @ 0x1800F7360
 * Callers:
 *     LdrShutdownThread @ 0x180009100 (LdrShutdownThread.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlSleepConditionVariableSRW @ 0x18009DB90 (RtlSleepConditionVariableSRW.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtWaitForMultipleObjects @ 0x180163D70 (NtWaitForMultipleObjects.c)
 *     NtSetInformationWorkerFactory @ 0x180166830 (NtSetInformationWorkerFactory.c)
 */

__int64 TpTrimPools()
{
  _UNKNOWN **v0; // r15
  _UNKNOWN **v1; // rbx
  volatile signed __int64 *v2; // rbp
  volatile signed __int64 *v3; // rsi
  char v4; // r13
  unsigned int v5; // r8d
  int v6; // r9d
  int v7; // eax
  __int64 Heap; // r12
  __int64 v9; // r9
  __int64 v10; // r14
  __int64 v11; // rdi
  _QWORD **v12; // r8
  _QWORD *v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // r9
  unsigned int v17; // ebx
  __int64 v18; // rcx
  unsigned int v19; // r10d
  __int64 *v20; // rbx
  __int64 v21; // r9
  __int64 *v23; // rsi
  __int64 v24; // rdi
  __int64 *v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rcx
  _QWORD *v28; // rax
  __int64 v29; // r9
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // r9
  int v33; // [rsp+70h] [rbp+8h] BYREF
  __int64 v34; // [rsp+78h] [rbp+10h] BYREF
  volatile signed __int64 *v35; // [rsp+80h] [rbp+18h]

  v33 = 0;
  v34 = -1000000LL;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&TppPoolpListLock);
  v0 = (_UNKNOWN **)TppPoolpList;
  while ( v0 != &TppPoolpList )
  {
    v1 = v0;
    v0 = (_UNKNOWN **)*v0;
    v2 = (volatile signed __int64 *)(v1 - 2);
    RtlAcquireSRWLockShared((volatile signed __int64 *)v1 - 2);
    if ( *((_BYTE *)v1 - 7) )
      goto LABEL_4;
    v3 = (volatile signed __int64 *)(v1 - 39);
    v35 = (volatile signed __int64 *)(v1 - 39);
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)v1 - 78);
    v33 = 0;
    v4 = 1;
    if ( (int)NtSetInformationWorkerFactory(*(v1 - 41), 12LL, &v33) >= 0 && v33 )
    {
      v5 = *((_DWORD *)v1 + 13) & 0xFFFFF001 | (2 * (v33 & 0x7FF));
      v6 = 0;
      for ( *((_DWORD *)v1 + 13) = v5; ((v5 >> 11) & 0xFFE) < (v5 & 0xFFE); v6 = v7 )
      {
        if ( v6 == 258 )
          break;
        v7 = RtlSleepConditionVariableSRW(
               (signed __int64 *)v1 + 8,
               (volatile signed __int64 *)v1 - 39,
               (__int64)&v34,
               0);
        v5 = *((_DWORD *)v1 + 13);
      }
      if ( (v5 & 0x7FF000) == 0 )
      {
        *((_DWORD *)v1 + 13) = v5 & 0xFFFFF001;
        goto LABEL_30;
      }
      Heap = RtlAllocateHeap(
               (char *)NtCurrentPeb()->ProcessHeap,
               (TppHeapTag + 786432) | 8u,
               8 * (((unsigned __int64)v5 >> 12) & 0x7FF));
      if ( !Heap )
      {
        v25 = (__int64 *)(v1 + 9);
        while ( 1 )
        {
          v26 = *v25;
          if ( (__int64 *)*v25 == v25 )
            break;
          v27 = *(_QWORD *)v26;
          if ( *(_QWORD *)(*(_QWORD *)v26 + 8LL) != v26 || (v28 = *(_QWORD **)(v26 + 8), *v28 != v26) )
LABEL_17:
            __fastfail(3u);
          *v28 = v27;
          *(_QWORD *)(v27 + 8) = v28;
          NtClose(*(HANDLE *)(v26 + 16));
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v26, v29);
        }
        *((_DWORD *)v1 + 13) &= 0xFF800001;
LABEL_29:
        v3 = v35;
        goto LABEL_30;
      }
      v10 = RtlAllocateHeap(
              (char *)NtCurrentPeb()->ProcessHeap,
              (TppHeapTag + 786432) | 8u,
              8 * (((unsigned __int64)*((unsigned int *)v1 + 13) >> 12) & 0x7FF));
      if ( v10 )
      {
        v11 = 0LL;
        v12 = (_QWORD **)(v1 + 9);
        while ( 1 )
        {
          v13 = *v12;
          if ( *v12 == v12 )
            break;
          *(_QWORD *)(Heap + 8 * v11) = v13[2];
          *(_QWORD *)(v10 + 8 * v11) = v13;
          v14 = *v13;
          if ( *(_QWORD **)(*v13 + 8LL) != v13 )
            goto LABEL_17;
          v15 = (_QWORD *)v13[1];
          if ( (_QWORD *)*v15 != v13 )
            goto LABEL_17;
          *v15 = v14;
          v11 = (unsigned int)(v11 + 1);
          *(_QWORD *)(v14 + 8) = v15;
        }
        *((_DWORD *)v1 + 13) &= 0xFF800001;
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)v1 - 39);
        RtlReleaseSRWLockShared((volatile signed __int64 *)v1 - 2);
        v4 = 0;
        v17 = 0;
        do
        {
          v18 = v17 << 6;
          if ( (unsigned int)v18 >= (unsigned int)v11 )
            break;
          v19 = (int)v18 + 64 <= (unsigned int)v11 ? 64 : v11 & 0x3F;
          if ( (unsigned int)NtWaitForMultipleObjects(v19, Heap + 8 * v18, 0LL, 0LL, &v34) == 258 )
            break;
          ++v17;
        }
        while ( v17 <= (unsigned int)v11 >> 6 );
        if ( (_DWORD)v11 )
        {
          v20 = (__int64 *)v10;
          do
          {
            NtClose(*(HANDLE *)((char *)v20 + Heap - v10));
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *v20++, v21);
            --v11;
          }
          while ( v11 );
        }
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v10, v16);
      }
      else
      {
        v23 = (__int64 *)(v1 + 9);
        while ( 1 )
        {
          v24 = *v23;
          if ( (__int64 *)*v23 == v23 )
            break;
          v30 = *(_QWORD *)v24;
          if ( *(_QWORD *)(*(_QWORD *)v24 + 8LL) != v24 )
            goto LABEL_17;
          v31 = *(_QWORD **)(v24 + 8);
          if ( *v31 != v24 )
            goto LABEL_17;
          *v31 = v30;
          *(_QWORD *)(v30 + 8) = v31;
          NtClose(*(HANDLE *)(v24 + 16));
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v24, v32);
        }
        *((_DWORD *)v1 + 13) &= 0xFF800001;
      }
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap, v9);
      if ( v4 )
        goto LABEL_29;
    }
    else
    {
LABEL_30:
      RtlReleaseSRWLockExclusive(v3);
LABEL_4:
      RtlReleaseSRWLockShared(v2);
    }
  }
  return RtlReleaseSRWLockExclusive(&TppPoolpListLock);
}
