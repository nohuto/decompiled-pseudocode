/*
 * XREFs of KiUpdateTimeAssist @ 0x1402AD69C
 * Callers:
 *     KeClockInterruptNotify @ 0x140319AC0 (KeClockInterruptNotify.c)
 *     KeSynchronizeTimeToQpc @ 0x1404F6210 (KeSynchronizeTimeToQpc.c)
 *     KeResumeClockTimerFromIdle @ 0x1405B6F84 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     RtlBeginReadTickLock @ 0x1402ABCF0 (RtlBeginReadTickLock.c)
 *     KiComputeNewSystemTime @ 0x1402ABEDC (KiComputeNewSystemTime.c)
 *     KiComputeNewInterruptTime @ 0x1402ABF50 (KiComputeNewInterruptTime.c)
 *     RtlWriteAcquireTickLock @ 0x1402ABFD4 (RtlWriteAcquireTickLock.c)
 *     RtlWriteTryAcquireTickLock @ 0x1402ABFF8 (RtlWriteTryAcquireTickLock.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall KiUpdateTimeAssist(LARGE_INTEGER *a1, char a2, __int64 *a3, _QWORD *a4)
{
  char v4; // r15
  __int64 *v5; // rdi
  unsigned __int64 v9; // rbp
  __int64 TickLock; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v12; // rax
  bool v13; // zf
  unsigned __int64 v14; // r9
  LARGE_INTEGER v15; // r15
  __int64 v16; // rbx
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // r10
  __int64 v21; // r8
  __int64 result; // rax
  unsigned __int64 v23; // [rsp+20h] [rbp-28h] BYREF
  __int64 v24; // [rsp+28h] [rbp-20h]

  v4 = 0;
  v23 = 0LL;
  v5 = (__int64 *)(MmWriteableSharedUserData + 832);
  v9 = 1LL;
  if ( !a2 )
  {
    do
    {
      while ( 1 )
      {
        TickLock = RtlBeginReadTickLock(v5);
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v12 = KiComputeNewInterruptTime(PerformanceCounter.QuadPart, &v23);
        v13 = KiTimeUpdateTryAcquireTickLock == 0;
        *a3 = v12;
        if ( v13 )
          break;
        if ( *v5 == TickLock )
        {
          if ( v23 <= KiTimeUpdateTolerance )
            goto LABEL_15;
          if ( RtlWriteTryAcquireTickLock(v5) )
          {
            v4 = 1;
            goto LABEL_7;
          }
        }
      }
    }
    while ( *v5 != TickLock );
    v14 = v23;
LABEL_7:
    if ( KiTimeUpdateTryAcquireTickLock )
      goto LABEL_8;
    if ( v14 <= KiTimeUpdateTolerance )
    {
LABEL_15:
      *a3 = MEMORY[0xFFFFF78000000008];
      result = MEMORY[0xFFFFF78000000320];
      *a4 = MEMORY[0xFFFFF78000000320];
      return result;
    }
    goto LABEL_9;
  }
  if ( !KiTimeUpdateTryAcquireTickLock )
  {
LABEL_9:
    RtlWriteAcquireTickLock(v5);
    goto LABEL_10;
  }
LABEL_8:
  if ( !v4 )
    goto LABEL_9;
LABEL_10:
  if ( a1 )
    v15 = *a1;
  else
    v15 = KeQueryPerformanceCounter(0LL);
  v24 = KiComputeNewSystemTime(v15.QuadPart);
  v16 = v24;
  v17 = KiComputeNewInterruptTime(v15.QuadPart, &v23);
  v18 = HIDWORD(v24);
  *a3 = v17;
  *(_DWORD *)(MmWriteableSharedUserData + 28) = v18;
  *(_QWORD *)(MmWriteableSharedUserData + 20) = v16;
  v19 = *a3;
  *(_DWORD *)(MmWriteableSharedUserData + 16) = HIDWORD(*a3);
  *(_QWORD *)(MmWriteableSharedUserData + 8) = v19;
  *(LARGE_INTEGER *)(MmWriteableSharedUserData + 840) = v15;
  *(LARGE_INTEGER *)(MmWriteableSharedUserData + 848) = v15;
  v20 = MEMORY[0xFFFFF78000000320];
  v21 = (unsigned int)KiTickOffset - v23;
  *a4 = MEMORY[0xFFFFF78000000320];
  if ( v21 <= 0 )
  {
    v21 += KeMaximumIncrement;
    if ( v21 <= 0 )
    {
      v9 = ((unsigned __int64)(((unsigned __int64)-v21
                              * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount)
         + 2;
      LODWORD(v21) = (((unsigned __int64)(((unsigned __int64)-v21
                                         * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount)
                    + 1)
                   * KeMaximumIncrement
                   + v21;
    }
    *a4 = v20 + v9;
    *(_DWORD *)(MmWriteableSharedUserData + 808) = (v20 + v9) >> 32;
    *(_QWORD *)(MmWriteableSharedUserData + 800) = v20 + v9;
  }
  result = *v5 + 1;
  KiTickOffset = v21;
  *v5 = result;
  return result;
}
