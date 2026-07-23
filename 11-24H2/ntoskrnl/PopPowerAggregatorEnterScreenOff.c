/*
 * XREFs of PopPowerAggregatorEnterScreenOff @ 0x140A6E038
 * Callers:
 *     PopPowerAggregatorScreenOffActiveToScreenOffStateHandler @ 0x140757FC0 (PopPowerAggregatorScreenOffActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x140757FE0 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 *     PopPowerAggregatorDisengageModernStandby @ 0x140A6DED8 (PopPowerAggregatorDisengageModernStandby.c)
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x140A6DFC0 (PopPowerAggregatorScreenOffExitStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopPowerRequestReferenceRelease @ 0x1404649E0 (PopPowerRequestReferenceRelease.c)
 *     PopPowerRequestReferenceAcquire @ 0x140464AF0 (PopPowerRequestReferenceAcquire.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x1404AB9C0 (PopGetMonitorReasonFromPowerEventId.c)
 *     PopPdcEngagePhases @ 0x14075C414 (PopPdcEngagePhases.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140A6E4B0 (PopPowerAggregatorSetCurrentState.c)
 *     PdcPoPerfOverride @ 0x140A91EBC (PdcPoPerfOverride.c)
 *     PopPdcDisengagePhases @ 0x140A93B20 (PopPdcDisengagePhases.c)
 *     PopSleepstudyStartNextSession @ 0x140AA7940 (PopSleepstudyStartNextSession.c)
 *     PopSleepstudySnapModernStandbySessionData @ 0x140AB7570 (PopSleepstudySnapModernStandbySessionData.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
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
  __int128 v15; // [rsp+28h] [rbp-19h] BYREF
  __int128 v16; // [rsp+38h] [rbp-9h]
  __m128i v17; // [rsp+48h] [rbp+7h]
  __int128 v18; // [rsp+58h] [rbp+17h]
  __int128 v19; // [rsp+68h] [rbp+27h]
  __int128 v20; // [rsp+78h] [rbp+37h]

  v1 = *(__m128i *)((char *)a1 + 56);
  v2 = a1[1];
  v18 = *(_OWORD *)((char *)a1 + 72);
  v3 = _mm_cvtsi128_si32(v1);
  v20 = a1[2];
  v15 = 0LL;
  LODWORD(v15) = 4;
  v17 = v1;
  v19 = v2;
  v16 = 0LL;
  if ( v3 == 4 )
  {
    LOBYTE(v16) = v18;
    DWORD1(v16) = DWORD1(v18);
  }
  PopPowerAggregatorSetCurrentState(a1, &v15);
  PopReleaseRwLock(&PopPowerAggregatorLock);
  if ( v3 == 1 )
    PopSleepstudySnapModernStandbySessionData(v5, v4, v6, v7, v15);
  if ( (v19 & 0xFFFFFFFC) != 0 || (_DWORD)v19 == 1 )
  {
    if ( v3 == 4 || v3 == 1 )
    {
      if ( v3 == 1 && (_QWORD)v20 == v17.m128i_i64[1] )
      {
        v8 = DWORD2(v18);
        if ( (DWORD2(v18) & 0xFF000000) != 0x1000000 || (DWORD2(v18) & 0xFFFFFF) == 0 )
          v8 = 50;
      }
      else
      {
        v8 = PopGetMonitorReasonFromPowerEventId(SDWORD2(v19)) & 0xFFFFFF;
      }
      PopSleepstudyStartNextSession(1LL, v8);
    }
    v9 = (BYTE8(v20) != 0) + 58;
    PopAcquirePolicyLock(v5, v4);
    if ( BYTE11(v20) )
    {
      dword_140E27E5C = 1;
      v9 = 26;
    }
    else
    {
      dword_140E27E5C = 0;
    }
    PopReleasePolicyLock(v11, v10, v12, v13, v15);
    if ( BYTE8(v20) && (_DWORD)v19 == 4 && HIDWORD(v20) == 1 )
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
    PopPdcEngagePhases(v9);
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
  return PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
}
