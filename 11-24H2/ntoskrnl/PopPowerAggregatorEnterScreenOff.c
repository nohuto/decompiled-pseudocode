/*
 * XREFs of PopPowerAggregatorEnterScreenOff @ 0x140902758
 * Callers:
 *     PopPowerAggregatorScreenOffActiveToScreenOffStateHandler @ 0x140759B70 (PopPowerAggregatorScreenOffActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x140759B90 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 *     PopPowerAggregatorDisengageModernStandby @ 0x1409025F8 (PopPowerAggregatorDisengageModernStandby.c)
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x1409026E0 (PopPowerAggregatorScreenOffExitStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopPowerRequestReferenceRelease @ 0x14046BD60 (PopPowerRequestReferenceRelease.c)
 *     PopPowerRequestReferenceAcquire @ 0x14046BE70 (PopPowerRequestReferenceAcquire.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x1404B1130 (PopGetMonitorReasonFromPowerEventId.c)
 *     PopPdcEngagePhases @ 0x14075D474 (PopPdcEngagePhases.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140902BD0 (PopPowerAggregatorSetCurrentState.c)
 *     PdcPoPerfOverride @ 0x140A9568C (PdcPoPerfOverride.c)
 *     PopPdcDisengagePhases @ 0x140A972F0 (PopPdcDisengagePhases.c)
 *     PopSleepstudyStartNextSession @ 0x140AAC910 (PopSleepstudyStartNextSession.c)
 *     PopSleepstudySnapModernStandbySessionData @ 0x140ABC550 (PopSleepstudySnapModernStandbySessionData.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 */

struct _KTHREAD *__fastcall PopPowerAggregatorEnterScreenOff(_OWORD *a1)
{
  __m128i v1; // xmm2
  __int128 v2; // xmm1
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int128 v18; // [rsp+28h] [rbp-19h] BYREF
  __int128 v19; // [rsp+38h] [rbp-9h]
  __m128i v20; // [rsp+48h] [rbp+7h]
  __int128 v21; // [rsp+58h] [rbp+17h]
  __int128 v22; // [rsp+68h] [rbp+27h]
  __int128 v23; // [rsp+78h] [rbp+37h]

  v1 = *(__m128i *)((char *)a1 + 56);
  v2 = a1[1];
  v21 = *(_OWORD *)((char *)a1 + 72);
  v3 = _mm_cvtsi128_si32(v1);
  v23 = a1[2];
  v18 = 0LL;
  LODWORD(v18) = 4;
  v20 = v1;
  v22 = v2;
  v19 = 0LL;
  if ( v3 == 4 )
  {
    LOBYTE(v19) = v21;
    DWORD1(v19) = DWORD1(v21);
  }
  PopPowerAggregatorSetCurrentState(a1, &v18);
  PopReleaseRwLock((signed __int64 *)&PopPowerAggregatorLock);
  if ( v3 == 1 )
    PopSleepstudySnapModernStandbySessionData(v5, v4, v6, v7, v18);
  if ( (v22 & 0xFFFFFFFC) != 0 || (_DWORD)v22 == 1 )
  {
    if ( v3 == 4 || v3 == 1 )
    {
      if ( v3 == 1 && (_QWORD)v23 == v20.m128i_i64[1] )
      {
        v8 = DWORD2(v21);
        if ( (DWORD2(v21) & 0xFF000000) != 0x1000000 || (DWORD2(v21) & 0xFFFFFF) == 0 )
          v8 = 50;
      }
      else
      {
        v8 = PopGetMonitorReasonFromPowerEventId(SDWORD2(v22)) & 0xFFFFFF;
      }
      PopSleepstudyStartNextSession(1LL, v8);
    }
    v9 = (BYTE8(v23) != 0) + 58;
    PopAcquirePolicyLock(v5, v4);
    if ( BYTE11(v23) )
    {
      dword_140E27D1C = 1;
      v9 = 26;
    }
    else
    {
      dword_140E27D1C = 0;
    }
    PopReleasePolicyLock(v11, v10, v12, v13, v18);
    if ( BYTE8(v23) && (_DWORD)v22 == 4 && HIDWORD(v23) == 1 )
    {
      if ( !PopPowerAggregatorIdleDisabledPowerRequestTaken )
      {
        PopPowerAggregatorIdleDisabledPowerRequestTaken = 1;
        PopPowerRequestReferenceAcquire(PopPowerAggregatorIdleDisabledPowerRequest, 1u);
      }
    }
    else if ( PopPowerAggregatorIdleDisabledPowerRequestTaken )
    {
      PopPowerAggregatorIdleDisabledPowerRequestTaken = 0;
      PopPowerRequestReferenceRelease(PopPowerAggregatorIdleDisabledPowerRequest, 1u);
    }
    PopPdcEngagePhases(v9, v14, v15, v16);
  }
  else
  {
    PoModernStandbyActionInProgress = 0;
    PdcPoPerfOverride();
    PopPdcDisengagePhases();
    if ( PopPowerAggregatorIdleDisabledPowerRequestTaken )
    {
      PopPowerAggregatorIdleDisabledPowerRequestTaken = 0;
      PopPowerRequestReferenceRelease(PopPowerAggregatorIdleDisabledPowerRequest, 1u);
    }
  }
  return PopAcquireRwLockExclusive(&PopPowerAggregatorLock);
}
