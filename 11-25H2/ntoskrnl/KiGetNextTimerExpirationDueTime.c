/*
 * XREFs of KiGetNextTimerExpirationDueTime @ 0x1405B7D10
 * Callers:
 *     KeEstimateClockTickDuration @ 0x1404B2C48 (KeEstimateClockTickDuration.c)
 *     KePrepareClockTimerForPlatformIdle @ 0x1405B5660 (KePrepareClockTimerForPlatformIdle.c)
 * Callees:
 *     KeCheckProcessorAffinityEx @ 0x14026BAA0 (KeCheckProcessorAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x140377880 (KeIsEmptyAffinityEx.c)
 *     KeQueryTimerDueTime @ 0x14048EAC4 (KeQueryTimerDueTime.c)
 *     KiFindNextTimerDueTime @ 0x1405C0638 (KiFindNextTimerDueTime.c)
 *     KiGetNextTimer2ExpirationDueTime @ 0x1405C0B8C (KiGetNextTimer2ExpirationDueTime.c)
 *     KiGetPastDueIRTimerInfo @ 0x1405C0C38 (KiGetPastDueIRTimerInfo.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
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
  __int64 v19; // rdx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  char result; // al
  char v26; // [rsp+30h] [rbp-20h] BYREF
  char v27[7]; // [rsp+31h] [rbp-1Fh] BYREF
  unsigned __int64 v28; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 v29; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v30; // [rsp+48h] [rbp-8h] BYREF
  char v31; // [rsp+90h] [rbp+40h] BYREF
  char v32; // [rsp+98h] [rbp+48h]
  char v33; // [rsp+A8h] [rbp+58h]

  v33 = a4;
  v32 = a2;
  v30 = 0LL;
  v9 = 0;
  v29 = 0LL;
  v10 = -1LL;
  v11 = 0LL;
  v31 = 0;
  v12 = 0;
  v28 = -1LL;
  v13 = a4;
  v14 = a3;
  v15 = a1;
  v26 = 0;
  v27[0] = 0;
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
    v13 = v33;
    v28 = v10;
  }
  else
  {
    LOBYTE(a3) = a2;
    v9 = 4;
    NextTimerDueTime = KiFindNextTimerDueTime(a1, v14, a3, &v28);
    v10 = v28;
    v11 = NextTimerDueTime;
  }
  if ( KiGroupSchedulingEnabled )
  {
    if ( v32 )
    {
      if ( !(unsigned int)KeIsEmptyAffinityEx(KiGroupSchedulingOverQuotaMask) )
      {
LABEL_23:
        if ( KiGenerationEndTick * (unsigned __int64)KeMaximumIncrement < v10 )
        {
          v10 = KiGenerationEndTick * KeMaximumIncrement;
          v28 = v10;
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
    KiGetNextTimer2ExpirationDueTime(a1, TimerDueTime, (unsigned int)&v29, (unsigned int)&v30, (__int64)&v31);
    if ( v29 < v11 )
    {
      v11 = v29;
      v9 = 6;
    }
    a1 = v30;
    if ( v30 < v10 )
    {
      v10 = v30;
      v28 = v30;
      if ( v31 )
      {
        LOBYTE(v19) = a6;
        v12 = 7;
        KiGetPastDueIRTimerInfo(v30, v19, &v26, v27);
      }
      else
      {
        v12 = 6;
      }
    }
  }
  if ( !KiGlobalTimerResolutionRequests )
  {
    v10 = v28;
    a1 = (unsigned int)KeNonHrTimeIncrement;
    v20 = (unsigned int)KeNonHrTimeIncrement
        - (unsigned __int64)(unsigned int)(KeMinimumIncrement - 1)
        + KiLastNonHrTimerExpiration;
    if ( KePseudoHrTimeIncrement < (unsigned int)KeNonHrTimeIncrement && v28 < v20 )
    {
      v10 = (unsigned int)KePseudoHrTimeIncrement + v14;
      if ( v10 < v20 )
      {
        v21 = (unsigned int)KePseudoHrTimeIncrement + v14;
        v22 = v21;
        do
        {
          a1 = (unsigned int)KePseudoHrTimeIncrement + v22;
          v22 = a1;
          if ( (unsigned int)KePseudoHrTimeIncrement + v21 > v28 + (unsigned int)KeNonHrTimeIncrement )
            break;
          v10 = a1;
          v21 = a1;
        }
        while ( a1 < v20 );
      }
    }
  }
  if ( v10 < v11 )
  {
    v11 = v10;
    v9 = v12;
  }
  if ( v32 )
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
    v23 = guard_dispatch_icall_no_overrides(a1);
    if ( v23 )
    {
      if ( v11 > v23 )
      {
        v11 = v23;
        v9 = 9;
        if ( v14 > v23 )
          v11 = v14;
      }
    }
  }
LABEL_52:
  v24 = a9;
  *a7 = v11;
  result = (char)a8;
  *a8 = v9;
  if ( v24 )
  {
    result = 0;
    *(_QWORD *)v24 = 0LL;
    *(_DWORD *)v24 = v9;
    if ( v9 == 7 )
    {
      *(_BYTE *)(v24 + 4) = v26;
      result = v27[0];
      *(_BYTE *)(v24 + 5) = v27[0];
    }
    else if ( !v9 )
    {
      *(_DWORD *)v24 = 11;
    }
  }
  return result;
}
