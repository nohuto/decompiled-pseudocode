/*
 * XREFs of KiGetNextTimerExpirationDueTime @ 0x1405B91E0
 * Callers:
 *     KeEstimateClockTickDuration @ 0x1404C560C (KeEstimateClockTickDuration.c)
 *     KePrepareClockTimerForPlatformIdle @ 0x1405B6AE0 (KePrepareClockTimerForPlatformIdle.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140371960 (KeIsEmptyAffinityEx.c)
 *     KeCheckProcessorAffinityEx @ 0x1403A4AD0 (KeCheckProcessorAffinityEx.c)
 *     KeQueryTimerDueTime @ 0x140488D50 (KeQueryTimerDueTime.c)
 *     KiFindNextTimerDueTime @ 0x1405C2050 (KiFindNextTimerDueTime.c)
 *     KiGetNextTimer2ExpirationDueTime @ 0x1405C25A4 (KiGetNextTimer2ExpirationDueTime.c)
 *     KiGetPastDueIRTimerInfo @ 0x1405C2650 (KiGetPastDueIRTimerInfo.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall KiGetNextTimerExpirationDueTime(
        unsigned __int64 a1,
        char a2,
        unsigned __int64 a3,
        char a4,
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
  __int64 *v18; // r14
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  char result; // al
  char v25; // [rsp+30h] [rbp-20h] BYREF
  char v26[7]; // [rsp+31h] [rbp-1Fh] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 v28; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v29; // [rsp+48h] [rbp-8h] BYREF
  char v30; // [rsp+90h] [rbp+40h] BYREF
  char v31; // [rsp+98h] [rbp+48h]
  char v32; // [rsp+A8h] [rbp+58h]

  v32 = a4;
  v31 = a2;
  v29 = 0LL;
  v9 = 0;
  v28 = 0LL;
  v10 = -1LL;
  v11 = 0LL;
  v30 = 0;
  v12 = 0;
  v27 = -1LL;
  v13 = a4;
  v14 = a3;
  v15 = a1;
  v25 = 0;
  v26[0] = 0;
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
  if ( a4 )
  {
    v18 = (__int64 *)ExpWakeTimerList;
    v12 = 12;
    TimerDueTime = -1LL;
    while ( v18 != &ExpWakeTimerList )
    {
      a1 = (unsigned __int64)(v18 - 33);
      v18 = (__int64 *)*v18;
      if ( (*(_BYTE *)(a1 + 304) & 4) != 0 )
      {
        if ( *(_QWORD *)(a1 + 256) )
          TimerDueTime = KeQueryTimerDueTime(a1);
        if ( TimerDueTime && TimerDueTime < v10 )
          v10 = TimerDueTime;
      }
    }
    v13 = v32;
    v27 = v10;
  }
  else
  {
    LOBYTE(a3) = a2;
    v9 = 4;
    NextTimerDueTime = KiFindNextTimerDueTime(a1, v14, a3, &v27);
    v10 = v27;
    v11 = NextTimerDueTime;
  }
  if ( KiGroupSchedulingEnabled )
  {
    if ( v31 )
    {
      if ( !(unsigned int)KeIsEmptyAffinityEx(KiGroupSchedulingOverQuotaMask) )
      {
LABEL_23:
        if ( KiGenerationEndTick * (unsigned __int64)KeMaximumIncrement < v10 )
        {
          v10 = KiGenerationEndTick * KeMaximumIncrement;
          v27 = v10;
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
    KiGetNextTimer2ExpirationDueTime(a1, TimerDueTime, (unsigned int)&v28, (unsigned int)&v29, (__int64)&v30);
    if ( v28 < v11 )
    {
      v11 = v28;
      v9 = 6;
    }
    a1 = v29;
    if ( v29 < v10 )
    {
      v10 = v29;
      v27 = v29;
      if ( v30 )
      {
        LOBYTE(TimerDueTime) = a6;
        v12 = 7;
        KiGetPastDueIRTimerInfo(v29, TimerDueTime, &v25, v26);
      }
      else
      {
        v12 = 6;
      }
    }
  }
  if ( !KiGlobalTimerResolutionRequests )
  {
    v10 = v27;
    a1 = (unsigned int)KeNonHrTimeIncrement;
    v19 = (unsigned int)KeNonHrTimeIncrement
        - (unsigned __int64)(unsigned int)(KeMinimumIncrement - 1)
        + KiLastNonHrTimerExpiration;
    if ( KePseudoHrTimeIncrement < (unsigned int)KeNonHrTimeIncrement && v27 < v19 )
    {
      TimerDueTime = (unsigned int)KePseudoHrTimeIncrement;
      v10 = (unsigned int)KePseudoHrTimeIncrement + v14;
      if ( v10 < v19 )
      {
        v20 = (unsigned int)KePseudoHrTimeIncrement + v14;
        v21 = v20;
        do
        {
          a1 = (unsigned int)KePseudoHrTimeIncrement + v21;
          v21 = a1;
          if ( (unsigned int)KePseudoHrTimeIncrement + v20 > v27 + (unsigned int)KeNonHrTimeIncrement )
            break;
          v10 = a1;
          v20 = a1;
        }
        while ( a1 < v19 );
      }
    }
  }
  if ( v10 < v11 )
  {
    v11 = v10;
    v9 = v12;
  }
  if ( v31 )
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
    v22 = guard_dispatch_icall_no_overrides(a1, TimerDueTime);
    if ( v22 )
    {
      if ( v11 > v22 )
      {
        v11 = v22;
        v9 = 9;
        if ( v14 > v22 )
          v11 = v14;
      }
    }
  }
LABEL_52:
  v23 = a9;
  *a7 = v11;
  result = (char)a8;
  *a8 = v9;
  if ( v23 )
  {
    result = 0;
    *(_QWORD *)v23 = 0LL;
    *(_DWORD *)v23 = v9;
    if ( v9 == 7 )
    {
      *(_BYTE *)(v23 + 4) = v25;
      result = v26[0];
      *(_BYTE *)(v23 + 5) = v26[0];
    }
    else if ( !v9 )
    {
      *(_DWORD *)v23 = 11;
    }
  }
  return result;
}
