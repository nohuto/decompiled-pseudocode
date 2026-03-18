/*
 * XREFs of PopPowerAggregatorEnterScreenOff @ 0x140A2BD88
 * Callers:
 *     PopPowerAggregatorScreenOffActiveToScreenOffStateHandler @ 0x14074D720 (PopPowerAggregatorScreenOffActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x14074D740 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 *     PopPowerAggregatorDisengageModernStandby @ 0x140A2BC28 (PopPowerAggregatorDisengageModernStandby.c)
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x140A2BD10 (PopPowerAggregatorScreenOffExitStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopPowerRequestReferenceRelease @ 0x14046D3D0 (PopPowerRequestReferenceRelease.c)
 *     PopPowerRequestReferenceAcquire @ 0x14046D4E0 (PopPowerRequestReferenceAcquire.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x1404B0130 (PopGetMonitorReasonFromPowerEventId.c)
 *     Feature_RSIdleRevoke__private_IsEnabledDeviceUsageNoInline @ 0x1405D2D5C (Feature_RSIdleRevoke__private_IsEnabledDeviceUsageNoInline.c)
 *     PopPdcEngagePhases @ 0x140750B68 (PopPdcEngagePhases.c)
 *     PdcPoPerfOverride @ 0x140A2BB1C (PdcPoPerfOverride.c)
 *     PopPdcDisengagePhases @ 0x140A2BB44 (PopPdcDisengagePhases.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140A2C210 (PopPowerAggregatorSetCurrentState.c)
 *     PopSleepstudyStartNextSession @ 0x140AA74D0 (PopSleepstudyStartNextSession.c)
 *     PopSleepstudySnapModernStandbySessionData @ 0x140AB83D0 (PopSleepstudySnapModernStandbySessionData.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
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
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // esi
  __int128 v16; // [rsp+28h] [rbp-19h] BYREF
  __int128 v17; // [rsp+38h] [rbp-9h]
  __m128i v18; // [rsp+48h] [rbp+7h]
  __int128 v19; // [rsp+58h] [rbp+17h]
  __int128 v20; // [rsp+68h] [rbp+27h]
  __int128 v21; // [rsp+78h] [rbp+37h]

  v1 = *(__m128i *)((char *)a1 + 56);
  v2 = a1[1];
  v19 = *(_OWORD *)((char *)a1 + 72);
  v3 = _mm_cvtsi128_si32(v1);
  v21 = a1[2];
  v16 = 0LL;
  LODWORD(v16) = 4;
  v18 = v1;
  v20 = v2;
  v17 = 0LL;
  if ( v3 == 4 )
  {
    LOBYTE(v17) = v19;
    DWORD1(v17) = DWORD1(v19);
  }
  PopPowerAggregatorSetCurrentState(a1, &v16);
  PopReleaseRwLock(&PopPowerAggregatorLock);
  if ( v3 == 1 )
    PopSleepstudySnapModernStandbySessionData(v5, v4, v6, v7, v16);
  if ( (v20 & 0xFFFFFFFC) != 0 || (_DWORD)v20 == 1 )
  {
    if ( v3 == 4 || v3 == 1 )
    {
      if ( v3 == 1 && (_QWORD)v21 == v18.m128i_i64[1] )
      {
        v8 = DWORD2(v19);
        if ( (DWORD2(v19) & 0xFF000000) != 0x1000000 || (DWORD2(v19) & 0xFFFFFF) == 0 )
          v8 = 50;
      }
      else
      {
        v8 = PopGetMonitorReasonFromPowerEventId(SDWORD2(v20)) & 0xFFFFFF;
      }
      PopSleepstudyStartNextSession(1LL, v8);
    }
    v9 = (BYTE8(v21) != 0) + 58;
    PopAcquirePolicyLock(v5, v4);
    if ( BYTE11(v21) )
    {
      dword_140E27ADC = 1;
      v14 = v9 & (-((unsigned int)Feature_RSIdleRevoke__private_IsEnabledDeviceUsageNoInline() != 0) - 33);
    }
    else
    {
      dword_140E27ADC = 0;
      v14 = v9;
    }
    PopReleasePolicyLock(v11, v10, v12, v13, v16);
    if ( BYTE8(v21) && (_DWORD)v20 == 4 && HIDWORD(v21) == 1 )
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
    PopPdcEngagePhases(v14);
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
