/*
 * XREFs of RtlpHeapTrkInterceptor @ 0x180090400
 * Callers:
 *     RtlpCallInterceptRoutine @ 0x18004F6D0 (RtlpCallInterceptRoutine.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpHeapTrkTrackAdd @ 0x1800901E0 (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkHash @ 0x180090730 (RtlpHeapTrkHash.c)
 *     RtlpHeapTrkDereferenceStack @ 0x1800907E0 (RtlpHeapTrkDereferenceStack.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18009E150 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800FD438 (RtlpHeapTrkTrackRemoveHeap.c)
 *     NtQueryPerformanceCounter @ 0x180163840 (NtQueryPerformanceCounter.c)
 *     RtlGetCurrentProcessorNumberEx @ 0x180167800 (RtlGetCurrentProcessorNumberEx.c)
 */

__int64 __fastcall RtlpHeapTrkInterceptor(__int64 a1, unsigned __int64 a2, int a3)
{
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  unsigned __int64 v9; // rdi
  unsigned __int8 v10; // dl
  __int64 v11; // r9
  signed __int32 v12; // eax
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  unsigned int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // r14
  volatile signed __int32 *v19; // rdx
  char *SchedulerSharedDataSlot; // r9
  unsigned int i; // r8d
  volatile signed __int32 **v22; // rcx
  _QWORD **v23; // rcx
  _QWORD *j; // rbx
  _QWORD *v25; // rdx
  _QWORD *v26; // rax
  __int64 v27; // r9
  __int64 v28; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v29[4]; // [rsp+28h] [rbp-20h] BYREF
  int v30; // [rsp+50h] [rbp+8h] BYREF

  v30 = 0;
  if ( a1 == qword_1801D0840 || dword_1801D0878 == 1 )
    return 0LL;
  v4 = a3 - 2;
  if ( !v4 )
  {
LABEL_10:
    if ( a2 )
    {
      v9 = (a2 >> 3) | 0xE000000000000000uLL;
      if ( dword_1801D0290 == 1 )
      {
        RtlpHeapTrkTrackAdd(a1, v9);
      }
      else if ( dword_1801D0290 == 2 )
      {
        RtlGetCurrentProcessorNumberEx(&v30);
        v10 = BYTE2(v30);
        if ( BYTE2(v30) >= (unsigned int)dword_1801D0830 )
          v10 = 0;
        BYTE2(v30) = v10;
        v11 = 8LL * v10;
        v12 = **(_DWORD **)(v11 + qword_1801D0880);
        v13 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
        if ( (unsigned int)(v13 - v12) >= 0x3E8
          && v12 == _InterlockedCompareExchange(*(volatile signed __int32 **)(v11 + qword_1801D0880), v13, v12) )
        {
          _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(v11 + qword_1801D0880) + 8LL), qword_1801D0870 / 100);
        }
        v14 = *(_QWORD *)(qword_1801D0880 + 8LL * BYTE2(v30));
        if ( *(__int64 *)(v14 + 8) > 0 )
        {
          v29[0] = 0LL;
          v28 = 0LL;
          NtQueryPerformanceCounter(v29, 0LL);
          RtlpHeapTrkTrackAdd(a1, v9);
          NtQueryPerformanceCounter(&v28, 0LL);
          v28 -= v29[0];
          _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(qword_1801D0880 + 8LL * BYTE2(v30)) + 8LL), ~v28);
          _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(qword_1801D0880 + 8LL * BYTE2(v30)) + 16LL));
        }
        else
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v14 + 24));
        }
      }
    }
    return 0LL;
  }
  v5 = v4 - 1;
  if ( v5 )
  {
    v6 = v5 - 2;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 == 2 )
          RtlpHeapTrkTrackRemoveHeap(a1);
        return 0LL;
      }
      goto LABEL_10;
    }
  }
  if ( a2 )
  {
    v15 = (a2 >> 3) | 0xE000000000000000uLL;
    v16 = RtlpHeapTrkHash(v15);
    v17 = v16;
    v18 = 8LL * (v16 & 0xF);
    v19 = *(volatile signed __int32 **)(v18 + qword_1801D0820);
    SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      for ( i = 0; i < 8; ++i )
      {
        v22 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * i];
        if ( !*v22 )
        {
          if ( v22 )
            *v22 = v19;
          break;
        }
      }
    }
    if ( _interlockedbittestandset64(v19, 0LL) )
      RtlpAcquireSRWLockExclusiveContended(v19);
    v23 = (_QWORD **)(16 * v17 + qword_1801D0280);
    for ( j = *v23; ; j = (_QWORD *)*j )
    {
      if ( j == v23 )
      {
        RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(v18 + qword_1801D0820));
        return 0LL;
      }
      if ( j[3] == v15 && j[2] == a1 )
        break;
    }
    v25 = (_QWORD *)*j;
    if ( *(_QWORD **)(*j + 8LL) != j || (v26 = (_QWORD *)j[1], (_QWORD *)*v26 != j) )
      __fastfail(3u);
    *v26 = v25;
    v25[1] = v26;
    RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(v18 + qword_1801D0820));
    if ( j[4] )
    {
      RtlpHeapTrkDereferenceStack();
      j[4] = 0LL;
    }
    RtlFreeHeap(qword_1801D0840, 0, (__int64)j, v27);
  }
  return 0LL;
}
