/*
 * XREFs of PopCalculateCsSummary @ 0x1402B5524
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402B63C0 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopCalculateIdleInformation @ 0x1402B5AAC (PopCalculateIdleInformation.c)
 *     PopBatteryCapacityToRate @ 0x1402B5C98 (PopBatteryCapacityToRate.c)
 *     PopBatteryGetEnergyDrainFromDischage @ 0x1402B5EFC (PopBatteryGetEnergyDrainFromDischage.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     PpmConvertTimeTo @ 0x140370A00 (PpmConvertTimeTo.c)
 *     PopCalculateTotalHwDripsResidency @ 0x1404F609C (PopCalculateTotalHwDripsResidency.c)
 *     PopCurrentPowerState @ 0x140A20120 (PopCurrentPowerState.c)
 *     PopMeasureEnergyChange @ 0x140A81364 (PopMeasureEnergyChange.c)
 *     PopQueryInputSuppressionCount @ 0x140A9BD8C (PopQueryInputSuppressionCount.c)
 *     PopQueryPowerButtonSuppressionCount @ 0x140A9F5C8 (PopQueryPowerButtonSuppressionCount.c)
 */

void __fastcall PopCalculateCsSummary(__int64 a1, int a2)
{
  LARGE_INTEGER InterruptTimePrecise; // rbx
  unsigned __int64 v5; // r14
  unsigned int EnergyDrainFromDischage; // eax
  __int64 v7; // rax
  int v8; // r13d
  ULONG v9; // ecx
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rcx
  LONGLONG v13; // rbx
  KIRQL v14; // al
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  char v22; // r10
  int v23; // ecx
  __int128 v24; // xmm0
  char v25; // al
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // eax
  int v29; // edx
  KIRQL v30; // al
  int v31; // [rsp+20h] [rbp-89h]
  __int64 v32; // [rsp+28h] [rbp-81h]
  __int64 v33; // [rsp+28h] [rbp-81h]
  __int128 v34; // [rsp+30h] [rbp-79h] BYREF
  __int64 v35; // [rsp+40h] [rbp-69h]
  unsigned __int64 v36; // [rsp+48h] [rbp-61h]
  __int64 v37; // [rsp+50h] [rbp-59h]
  __int64 v38; // [rsp+58h] [rbp-51h]
  __int64 v39; // [rsp+60h] [rbp-49h]
  unsigned __int64 v40; // [rsp+68h] [rbp-41h]
  __int64 v41; // [rsp+70h] [rbp-39h]
  unsigned __int64 v42; // [rsp+78h] [rbp-31h]
  __int128 v43; // [rsp+80h] [rbp-29h] BYREF
  __int128 v44; // [rsp+90h] [rbp-19h]
  _OWORD v45[6]; // [rsp+A0h] [rbp-9h] BYREF
  int v46; // [rsp+110h] [rbp+67h]
  int v47; // [rsp+118h] [rbp+6Fh] BYREF
  int v48; // [rsp+120h] [rbp+77h]
  LARGE_INTEGER PerformanceCounter; // [rsp+128h] [rbp+7Fh] BYREF

  DWORD2(v34) = 0;
  *(_QWORD *)&v34 = 0LL;
  memset(v45, 0, 32);
  v43 = 0LL;
  v44 = 0LL;
  PopCalculateIdleInformation(&v43);
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v5 = (InterruptTimePrecise.QuadPart - qword_140E27D48) / 0xAuLL;
  PopCurrentPowerState(v45);
  if ( v5 )
  {
    EnergyDrainFromDischage = PopBatteryGetEnergyDrainFromDischage((unsigned int)PopCsConsumption, HIDWORD(v45[0]));
    v46 = PopBatteryCapacityToRate(EnergyDrainFromDischage, v5);
  }
  else
  {
    v46 = 0;
  }
  v7 = PopMeasureEnergyChange(&v34, &CsSessionEnergyCounter);
  v8 = HIDWORD(xmmword_140F0BCE8);
  if ( HIDWORD(xmmword_140F0BCE8) )
    LODWORD(v7) = (unsigned int)(100 * xmmword_140F0BCF8) / HIDWORD(xmmword_140F0BCE8);
  else
    LOBYTE(v7) = 0;
  v9 = 0;
  if ( (xmmword_140F0BCE8 & 0x40000000) == 0 )
    v9 = xmmword_140F0BCF8;
  v48 = v7;
  v35 = *((_QWORD *)&v43 + 1) - qword_140E27D50;
  PerformanceCounter.LowPart = v9;
  v31 = DWORD2(v44) - dword_140E27D60;
  v41 = PopCalculateTotalHwDripsResidency(qword_140E27DE8, v44, v5);
  v10 = v5 + qword_140E27D58 - v43;
  v42 = (KiAccumulatedDeepSleepTimerRebasing - qword_140E27D68) / 0xAuLL;
  v11 = _InterlockedExchangeAdd64(&qword_140E27EC0, 0LL);
  if ( v11 )
    v11 = (v11 - qword_140E27D48) / 0xA;
  v32 = qword_140E27D88;
  v33 = v32 - PpmConvertTimeTo(qword_140E27D78, 1000000LL);
  v12 = qword_140E27D98;
  v40 = v5 - qword_140E27D88;
  if ( qword_140E27D90 )
  {
    if ( qword_140E27D48 <= (unsigned __int64)qword_140E27D90 )
      v13 = InterruptTimePrecise.QuadPart - qword_140E27D90;
    else
      v13 = InterruptTimePrecise.QuadPart - qword_140E27D48;
    v12 = v13 + qword_140E27D98;
  }
  v36 = v12 / 0xA;
  v37 = PpmConvertTimeTo(qword_140E27DA8, 1000000LL);
  v38 = PpmConvertTimeTo(qword_140E27DB8, 1000000LL);
  v39 = PpmConvertTimeTo(qword_140E27DD0, 1000000LL);
  v14 = KeAcquireSpinLockRaiseToDpc(&PopModernStandbyTransitionInfo);
  v15 = dword_140E0B870;
  KeReleaseSpinLock(&PopModernStandbyTransitionInfo, v14);
  v17 = 0LL;
  v18 = 0LL;
  if ( PpmPlatformStates && (unsigned int)dword_140E27F00 < *(_DWORD *)PpmPlatformStates )
  {
    v19 = *(_QWORD *)(PpmPlatformStates + 48);
    v20 = (unsigned __int64)(unsigned int)dword_140E27F00 << 10;
    v17 = *(_QWORD *)(v20 + v19 + 104);
    v18 = *(_QWORD *)(v20 + v19 + 96);
  }
  v47 = 0;
  PopQueryInputSuppressionCount(&v47, v16, v17 - qword_140E27DF0, v18 - qword_140E27DF8);
  v21 = (unsigned int)(v47 - dword_140E27E50);
  v47 = 0;
  PopQueryPowerButtonSuppressionCount(&v47, v21);
  v23 = v47 - dword_140E27E54;
  v24 = v34;
  *(_DWORD *)a1 = v46;
  *(_DWORD *)(a1 + 28) = PerformanceCounter.LowPart;
  *(_QWORD *)(a1 + 40) = v35;
  *(_DWORD *)(a1 + 56) = v31;
  *(_QWORD *)(a1 + 72) = v33;
  *(_QWORD *)(a1 + 88) = v36;
  *(_QWORD *)(a1 + 96) = v37;
  *(_QWORD *)(a1 + 104) = v38;
  *(_QWORD *)(a1 + 392) = v39;
  *(_QWORD *)(a1 + 80) = v40;
  *(_QWORD *)(a1 + 144) = v41;
  *(_OWORD *)(a1 + 8) = v24;
  *(_DWORD *)(a1 + 24) = v8;
  *(_QWORD *)(a1 + 32) = v5;
  *(_QWORD *)(a1 + 48) = v10;
  *(_QWORD *)(a1 + 64) = v11;
  *(_DWORD *)(a1 + 128) = v15;
  *(_DWORD *)(a1 + 132) = a2;
  *(_DWORD *)(a1 + 120) = dword_140E27D64;
  *(_QWORD *)(a1 + 112) = v42;
  v25 = 2 * v48;
  *(_QWORD *)(a1 + 152) = v26;
  *(_QWORD *)(a1 + 160) = v27;
  *(_BYTE *)(a1 + 136) = v25 | v22 & 1;
  *(_BYTE *)(a1 + 137) = HIBYTE(word_140E27E18);
  *(_DWORD *)(a1 + 176) = dword_140E27E00;
  *(_DWORD *)(a1 + 180) = dword_140E27E04;
  *(_BYTE *)(a1 + 184) = byte_140E27E08;
  *(_DWORD *)(a1 + 188) = dword_140E27E0C;
  *(_DWORD *)(a1 + 192) = dword_140E27E10;
  *(_DWORD *)(a1 + 196) = dword_140E27E14;
  *(_DWORD *)(a1 + 200) = dword_140E27E1C;
  *(_DWORD *)(a1 + 204) = dword_140E27E20;
  *(_BYTE *)(a1 + 208) = byte_140E27E24;
  *(_DWORD *)(a1 + 212) = HIDWORD(v45[0]);
  *(_DWORD *)(a1 + 216) = DWORD2(v45[0]);
  *(_BYTE *)(a1 + 224) = byte_140E27E2C;
  *(_BYTE *)(a1 + 225) = byte_140E27E2D;
  *(_DWORD *)(a1 + 228) = dword_140E27E30;
  v28 = dword_140E27E34;
  *(_DWORD *)(a1 + 344) = v23;
  *(_DWORD *)(a1 + 232) = v28;
  *(_DWORD *)(a1 + 240) = v29;
  *(_QWORD *)(a1 + 248) = qword_140E27DD8;
  *(_QWORD *)(a1 + 256) = qword_140E27DE0;
  *(_DWORD *)(a1 + 236) = dword_140E27E58;
  *(_DWORD *)(a1 + 348) = dword_140E27E5C;
  *(_DWORD *)(a1 + 352) = dword_140E27E60;
  *(_QWORD *)(a1 + 360) = qword_140E27E68;
  *(_DWORD *)(a1 + 368) = dword_140E27E70;
  *(_QWORD *)(a1 + 376) = qword_140E27E78;
  *(_DWORD *)(a1 + 384) = dword_140E27E80;
  v30 = KeAcquireSpinLockRaiseToDpc(&qword_140F0B158);
  *(_QWORD *)(a1 + 272) = qword_140F0B148;
  *(_QWORD *)(a1 + 264) = qword_140F0B150;
  *(_QWORD *)(a1 + 280) = PopDisplayOnPerformance;
  KeReleaseSpinLock(&qword_140F0B158, v30);
}
