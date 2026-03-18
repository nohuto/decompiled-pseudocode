/*
 * XREFs of KiGetNextTimerExpirationDueTime @ 0x1405BBBB0
 * Callers:
 *     KeEstimateClockTickDuration @ 0x1404CC19C (KeEstimateClockTickDuration.c)
 *     KePrepareClockTimerForPlatformIdle @ 0x1405B94A0 (KePrepareClockTimerForPlatformIdle.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x1403B55D0 (KeIsEmptyAffinityEx.c)
 *     KeCheckProcessorAffinityEx @ 0x1403C9F30 (KeCheckProcessorAffinityEx.c)
 *     KeQueryTimerDueTime @ 0x14048E920 (KeQueryTimerDueTime.c)
 *     KiFindNextTimerDueTime @ 0x1405C4988 (KiFindNextTimerDueTime.c)
 *     KiGetNextTimer2ExpirationDueTime @ 0x1405C4EDC (KiGetNextTimer2ExpirationDueTime.c)
 *     KiGetPastDueIRTimerInfo @ 0x1405C4F88 (KiGetPastDueIRTimerInfo.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall KiGetNextTimerExpirationDueTime(
        unsigned __int64 a1,
        char a2,
        unsigned __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        unsigned __int64 *a7,
        int *a8,
        __int64 a9)
{
  int v9; // esi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  int v12; // r12d
  char v13; // r14
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // r13
  __int64 NextTimerDueTime; // rax
  unsigned __int64 TimerDueTime; // rdx
  __int64 *v18; // r8
  __int64 *v19; // r14
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  char result; // al
  char v24; // [rsp+30h] [rbp-20h] BYREF
  char v25[7]; // [rsp+31h] [rbp-1Fh] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 v27; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-8h] BYREF
  char v29; // [rsp+90h] [rbp+40h] BYREF
  char v30; // [rsp+98h] [rbp+48h]
  char v31; // [rsp+A8h] [rbp+58h]

  v31 = a4;
  v30 = a2;
  v28 = 0LL;
  v9 = 0;
  v27 = 0LL;
  v10 = -1LL;
  v11 = 0LL;
  v29 = 0;
  v12 = 0;
  v26 = -1LL;
  v13 = a4;
  v14 = a3;
  v15 = a1;
  v24 = 0;
  v25[0] = 0;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v9 = 1;
    goto LABEL_52;
  }
  if ( !*(_BYTE *)(a1 + 33) && !KiSerializeTimerExpiration && PoSkipTickMode == 2 )
  {
    v9 = 2;
    goto LABEL_52;
  }
  v11 = -1LL;
  if ( (_BYTE)a4 )
  {
    v19 = (__int64 *)ExpWakeTimerList;
    v18 = &ExpWakeTimerList;
    v12 = 12;
    TimerDueTime = -1LL;
    while ( v19 != &ExpWakeTimerList )
    {
      a1 = (unsigned __int64)(v19 - 33);
      v19 = (__int64 *)*v19;
      if ( (*(_BYTE *)(a1 + 304) & 4) != 0 )
      {
        if ( *(_QWORD *)(a1 + 256) )
        {
          TimerDueTime = KeQueryTimerDueTime(a1);
          v18 = &ExpWakeTimerList;
        }
        if ( TimerDueTime && TimerDueTime < v10 )
          v10 = TimerDueTime;
      }
    }
    v13 = v31;
    v26 = v10;
  }
  else
  {
    LOBYTE(a3) = a2;
    v9 = 4;
    NextTimerDueTime = KiFindNextTimerDueTime(a1, v14, a3, &v26);
    v10 = v26;
    v11 = NextTimerDueTime;
  }
  if ( KiGroupSchedulingEnabled )
  {
    if ( v30 )
    {
      if ( !(unsigned int)KeIsEmptyAffinityEx(KiGroupSchedulingOverQuotaMask) )
      {
LABEL_23:
        if ( KiGenerationEndTick * (unsigned __int64)(unsigned int)KeMaximumIncrement < v10 )
        {
          v10 = KiGenerationEndTick * (unsigned int)KeMaximumIncrement;
          v26 = v10;
          v12 = 5;
        }
      }
    }
    else if ( (unsigned int)KeCheckProcessorAffinityEx(KiGroupSchedulingOverQuotaMask, *(_DWORD *)(v15 + 36)) )
    {
      goto LABEL_23;
    }
  }
  if ( *(_BYTE *)(v15 + 33) )
  {
    LOBYTE(TimerDueTime) = a6;
    LOBYTE(a1) = v13;
    KiGetNextTimer2ExpirationDueTime(a1, TimerDueTime, (unsigned int)&v27, (unsigned int)&v28, (__int64)&v29);
    a4 = 6LL;
    if ( v27 < v11 )
    {
      v11 = v27;
      v9 = 6;
    }
    a1 = v28;
    if ( v28 < v10 )
    {
      v10 = v28;
      v26 = v28;
      if ( v29 )
      {
        LOBYTE(TimerDueTime) = a6;
        v12 = 7;
        KiGetPastDueIRTimerInfo(v28, TimerDueTime, &v24, v25);
      }
      else
      {
        v12 = 6;
      }
    }
  }
  if ( !KiGlobalTimerResolutionRequests )
  {
    v10 = v26;
    a1 = (unsigned int)KeNonHrTimeIncrement;
    v18 = (__int64 *)((unsigned int)KeNonHrTimeIncrement
                    - (unsigned __int64)(unsigned int)(KeMinimumIncrement - 1)
                    + KiLastNonHrTimerExpiration);
    if ( KePseudoHrTimeIncrement < (unsigned int)KeNonHrTimeIncrement && v26 < (unsigned __int64)v18 )
    {
      TimerDueTime = (unsigned int)KePseudoHrTimeIncrement;
      v10 = (unsigned int)KePseudoHrTimeIncrement + v14;
      if ( v10 < (unsigned __int64)v18 )
      {
        v20 = (unsigned int)KePseudoHrTimeIncrement + v14;
        a4 = v20;
        do
        {
          a1 = (unsigned int)KePseudoHrTimeIncrement + a4;
          a4 = a1;
          if ( (unsigned int)KePseudoHrTimeIncrement + v20 > v26 + (unsigned int)KeNonHrTimeIncrement )
            break;
          v10 = a1;
          v20 = a1;
        }
        while ( a1 < (unsigned __int64)v18 );
      }
    }
  }
  if ( v10 < v11 )
  {
    v11 = v10;
    v9 = v12;
  }
  if ( v30 )
  {
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      if ( (_BYTE)KdDebuggerEnabled )
      {
        if ( v14 < v11 )
        {
          a1 = (unsigned int)(10000 * KiDebugPollInterval);
          if ( v11 - v14 > a1 )
          {
            v11 = a1 + v14;
            v9 = 8;
          }
        }
      }
    }
  }
  if ( *(_BYTE *)(v15 + 33) )
  {
    LOBYTE(a1) = a5;
    v21 = guard_dispatch_icall_no_overrides(a1, TimerDueTime, v18, a4);
    if ( v21 )
    {
      if ( v11 > v21 )
      {
        v11 = v21;
        v9 = 9;
        if ( v14 > v21 )
          v11 = v14;
      }
    }
  }
LABEL_52:
  v22 = a9;
  *a7 = v11;
  result = (char)a8;
  *a8 = v9;
  if ( v22 )
  {
    result = 0;
    *(_QWORD *)v22 = 0LL;
    *(_DWORD *)v22 = v9;
    if ( v9 == 7 )
    {
      *(_BYTE *)(v22 + 4) = v24;
      result = v25[0];
      *(_BYTE *)(v22 + 5) = v25[0];
    }
    else if ( !v9 )
    {
      *(_DWORD *)v22 = 11;
    }
  }
  return result;
}
