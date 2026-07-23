/*
 * XREFs of KiUpdateTimeAssist @ 0x140275E04
 * Callers:
 *     KeClockInterruptNotify @ 0x140279370 (KeClockInterruptNotify.c)
 *     KeSynchronizeTimeToQpc @ 0x1404F6100 (KeSynchronizeTimeToQpc.c)
 *     KeResumeClockTimerFromIdle @ 0x1405B5B04 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     RtlBeginReadTickLock @ 0x140274730 (RtlBeginReadTickLock.c)
 *     KiComputeNewSystemTime @ 0x140274748 (KiComputeNewSystemTime.c)
 *     KiComputeNewInterruptTime @ 0x1402747C0 (KiComputeNewInterruptTime.c)
 *     RtlWriteTryAcquireTickLock @ 0x140274844 (RtlWriteTryAcquireTickLock.c)
 *     RtlWriteAcquireTickLock @ 0x140274A4C (RtlWriteAcquireTickLock.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
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
  __int64 result; // rax
  LARGE_INTEGER v16; // r15
  __int64 v17; // rbx
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // r10
  __int64 v22; // r8
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
            goto LABEL_9;
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
      goto LABEL_11;
    if ( v14 <= KiTimeUpdateTolerance )
    {
LABEL_9:
      *a3 = MEMORY[0xFFFFF78000000008];
      result = MEMORY[0xFFFFF78000000320];
      *a4 = MEMORY[0xFFFFF78000000320];
      return result;
    }
    goto LABEL_12;
  }
  if ( !KiTimeUpdateTryAcquireTickLock )
  {
LABEL_12:
    RtlWriteAcquireTickLock(v5);
    goto LABEL_13;
  }
LABEL_11:
  if ( !v4 )
    goto LABEL_12;
LABEL_13:
  if ( a1 )
    v16 = *a1;
  else
    v16 = KeQueryPerformanceCounter(0LL);
  v24 = KiComputeNewSystemTime(v16.QuadPart);
  v17 = v24;
  v18 = KiComputeNewInterruptTime(v16.QuadPart, &v23);
  v19 = HIDWORD(v24);
  *a3 = v18;
  *(_DWORD *)(MmWriteableSharedUserData + 28) = v19;
  *(_QWORD *)(MmWriteableSharedUserData + 20) = v17;
  v20 = *a3;
  *(_DWORD *)(MmWriteableSharedUserData + 16) = HIDWORD(*a3);
  *(_QWORD *)(MmWriteableSharedUserData + 8) = v20;
  *(LARGE_INTEGER *)(MmWriteableSharedUserData + 840) = v16;
  *(LARGE_INTEGER *)(MmWriteableSharedUserData + 848) = v16;
  v21 = MEMORY[0xFFFFF78000000320];
  v22 = (unsigned int)KiTickOffset - v23;
  *a4 = MEMORY[0xFFFFF78000000320];
  if ( v22 <= 0 )
  {
    v22 += KeMaximumIncrement;
    if ( v22 <= 0 )
    {
      v9 = ((unsigned __int64)(((unsigned __int64)-v22
                              * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount)
         + 2;
      LODWORD(v22) = (((unsigned __int64)(((unsigned __int64)-v22
                                         * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount)
                    + 1)
                   * KeMaximumIncrement
                   + v22;
    }
    *a4 = v21 + v9;
    *(_DWORD *)(MmWriteableSharedUserData + 808) = (v21 + v9) >> 32;
    *(_QWORD *)(MmWriteableSharedUserData + 800) = v21 + v9;
  }
  result = *v5 + 1;
  KiTickOffset = v22;
  *v5 = result;
  return result;
}
