/*
 * XREFs of PopCalculateCsSummary @ 0x140486560
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140485908 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PpmConvertTimeTo @ 0x1403B1DAC (PpmConvertTimeTo.c)
 *     PopCalculateIdleInformation @ 0x140486AEC (PopCalculateIdleInformation.c)
 *     PopBatteryCapacityToRate @ 0x140486CD8 (PopBatteryCapacityToRate.c)
 *     PopBatteryGetEnergyDrainFromDischage @ 0x140486F3C (PopBatteryGetEnergyDrainFromDischage.c)
 *     PopCalculateTotalHwDripsResidency @ 0x1404F6008 (PopCalculateTotalHwDripsResidency.c)
 *     PopCurrentPowerState @ 0x140A22CB0 (PopCurrentPowerState.c)
 *     PopMeasureEnergyChange @ 0x140A82094 (PopMeasureEnergyChange.c)
 *     PopQueryInputSuppressionCount @ 0x140A9AC3C (PopQueryInputSuppressionCount.c)
 *     PopQueryPowerButtonSuppressionCount @ 0x140A9E9B8 (PopQueryPowerButtonSuppressionCount.c)
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
  char v16; // r10
  int v17; // ecx
  __int128 v18; // xmm0
  char v19; // al
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  int v23; // edx
  KIRQL v24; // al
  int v25; // [rsp+20h] [rbp-89h]
  __int64 v26; // [rsp+28h] [rbp-81h]
  ULONGLONG v27; // [rsp+28h] [rbp-81h]
  __int128 v28; // [rsp+30h] [rbp-79h] BYREF
  __int64 v29; // [rsp+40h] [rbp-69h]
  unsigned __int64 v30; // [rsp+48h] [rbp-61h]
  ULONGLONG v31; // [rsp+50h] [rbp-59h]
  ULONGLONG v32; // [rsp+58h] [rbp-51h]
  ULONGLONG v33; // [rsp+60h] [rbp-49h]
  unsigned __int64 v34; // [rsp+68h] [rbp-41h]
  __int64 v35; // [rsp+70h] [rbp-39h]
  unsigned __int64 v36; // [rsp+78h] [rbp-31h]
  __int128 v37; // [rsp+80h] [rbp-29h] BYREF
  __int128 v38; // [rsp+90h] [rbp-19h]
  _OWORD v39[6]; // [rsp+A0h] [rbp-9h] BYREF
  int v40; // [rsp+110h] [rbp+67h]
  int v41; // [rsp+118h] [rbp+6Fh] BYREF
  int v42; // [rsp+120h] [rbp+77h]
  LARGE_INTEGER PerformanceCounter; // [rsp+128h] [rbp+7Fh] BYREF

  DWORD2(v28) = 0;
  *(_QWORD *)&v28 = 0LL;
  memset(v39, 0, 32);
  v37 = 0LL;
  v38 = 0LL;
  PopCalculateIdleInformation(&v37);
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v5 = (InterruptTimePrecise.QuadPart - qword_140E279C8) / 0xAuLL;
  PopCurrentPowerState(v39);
  if ( v5 )
  {
    EnergyDrainFromDischage = PopBatteryGetEnergyDrainFromDischage((unsigned int)PopCsConsumption, HIDWORD(v39[0]));
    v40 = PopBatteryCapacityToRate(EnergyDrainFromDischage, v5);
  }
  else
  {
    v40 = 0;
  }
  v7 = PopMeasureEnergyChange(&v28, &CsSessionEnergyCounter);
  v8 = HIDWORD(xmmword_140F0AB08);
  if ( HIDWORD(xmmword_140F0AB08) )
    LODWORD(v7) = (unsigned int)(100 * xmmword_140F0AB18) / HIDWORD(xmmword_140F0AB08);
  else
    LOBYTE(v7) = 0;
  v9 = 0;
  if ( (xmmword_140F0AB08 & 0x40000000) == 0 )
    v9 = xmmword_140F0AB18;
  v42 = v7;
  v29 = *((_QWORD *)&v37 + 1) - qword_140E279D0;
  PerformanceCounter.LowPart = v9;
  v25 = DWORD2(v38) - dword_140E279E0;
  v35 = PopCalculateTotalHwDripsResidency(qword_140E27A68, v38, v5);
  v10 = v5 + qword_140E279D8 - v37;
  v36 = (KiAccumulatedDeepSleepTimerRebasing - qword_140E279E8) / 0xAuLL;
  v11 = _InterlockedExchangeAdd64(&qword_140E27B40, 0LL);
  if ( v11 )
    v11 = (v11 - qword_140E279C8) / 0xA;
  v26 = qword_140E27A08;
  v27 = v26 - PpmConvertTimeTo(qword_140E279F8, 0xF4240uLL);
  v12 = qword_140E27A18;
  v34 = v5 - qword_140E27A08;
  if ( qword_140E27A10 )
  {
    if ( qword_140E279C8 <= (unsigned __int64)qword_140E27A10 )
      v13 = InterruptTimePrecise.QuadPart - qword_140E27A10;
    else
      v13 = InterruptTimePrecise.QuadPart - qword_140E279C8;
    v12 = v13 + qword_140E27A18;
  }
  v30 = v12 / 0xA;
  v31 = PpmConvertTimeTo(qword_140E27A28, 0xF4240uLL);
  v32 = PpmConvertTimeTo(qword_140E27A38, 0xF4240uLL);
  v33 = PpmConvertTimeTo(qword_140E27A50, 0xF4240uLL);
  v14 = KeAcquireSpinLockRaiseToDpc(&PopModernStandbyTransitionInfo);
  v15 = dword_140E0B690;
  KeReleaseSpinLock(&PopModernStandbyTransitionInfo, v14);
  v41 = 0;
  PopQueryInputSuppressionCount(&v41);
  v41 = 0;
  PopQueryPowerButtonSuppressionCount(&v41);
  v17 = v41 - dword_140E27AD4;
  v18 = v28;
  *(_DWORD *)a1 = v40;
  *(_DWORD *)(a1 + 28) = PerformanceCounter.LowPart;
  *(_QWORD *)(a1 + 40) = v29;
  *(_DWORD *)(a1 + 56) = v25;
  *(_QWORD *)(a1 + 72) = v27;
  *(_QWORD *)(a1 + 88) = v30;
  *(_QWORD *)(a1 + 96) = v31;
  *(_QWORD *)(a1 + 104) = v32;
  *(_QWORD *)(a1 + 392) = v33;
  *(_QWORD *)(a1 + 80) = v34;
  *(_QWORD *)(a1 + 144) = v35;
  *(_OWORD *)(a1 + 8) = v18;
  *(_DWORD *)(a1 + 24) = v8;
  *(_QWORD *)(a1 + 32) = v5;
  *(_QWORD *)(a1 + 48) = v10;
  *(_QWORD *)(a1 + 64) = v11;
  *(_DWORD *)(a1 + 128) = v15;
  *(_DWORD *)(a1 + 132) = a2;
  *(_DWORD *)(a1 + 120) = dword_140E279E4;
  *(_QWORD *)(a1 + 112) = v36;
  v19 = 2 * v42;
  *(_QWORD *)(a1 + 152) = v20;
  *(_QWORD *)(a1 + 160) = v21;
  *(_BYTE *)(a1 + 136) = v19 | v16 & 1;
  *(_BYTE *)(a1 + 137) = HIBYTE(word_140E27A98);
  *(_DWORD *)(a1 + 176) = dword_140E27A80;
  *(_DWORD *)(a1 + 180) = dword_140E27A84;
  *(_BYTE *)(a1 + 184) = byte_140E27A88;
  *(_DWORD *)(a1 + 188) = dword_140E27A8C;
  *(_DWORD *)(a1 + 192) = dword_140E27A90;
  *(_DWORD *)(a1 + 196) = dword_140E27A94;
  *(_DWORD *)(a1 + 200) = dword_140E27A9C;
  *(_DWORD *)(a1 + 204) = dword_140E27AA0;
  *(_BYTE *)(a1 + 208) = byte_140E27AA4;
  *(_DWORD *)(a1 + 212) = HIDWORD(v39[0]);
  *(_DWORD *)(a1 + 216) = DWORD2(v39[0]);
  *(_BYTE *)(a1 + 224) = byte_140E27AAC;
  *(_BYTE *)(a1 + 225) = byte_140E27AAD;
  *(_DWORD *)(a1 + 228) = dword_140E27AB0;
  v22 = dword_140E27AB4;
  *(_DWORD *)(a1 + 344) = v17;
  *(_DWORD *)(a1 + 232) = v22;
  *(_DWORD *)(a1 + 240) = v23;
  *(_QWORD *)(a1 + 248) = qword_140E27A58;
  *(_QWORD *)(a1 + 256) = qword_140E27A60;
  *(_DWORD *)(a1 + 236) = dword_140E27AD8;
  *(_DWORD *)(a1 + 348) = dword_140E27ADC;
  *(_DWORD *)(a1 + 352) = dword_140E27AE0;
  *(_QWORD *)(a1 + 360) = qword_140E27AE8;
  *(_DWORD *)(a1 + 368) = dword_140E27AF0;
  *(_QWORD *)(a1 + 376) = qword_140E27AF8;
  *(_DWORD *)(a1 + 384) = dword_140E27B00;
  v24 = KeAcquireSpinLockRaiseToDpc(&qword_140F0BAB8);
  *(_QWORD *)(a1 + 272) = qword_140F0BAA8;
  *(_QWORD *)(a1 + 264) = qword_140F0BAB0;
  *(_QWORD *)(a1 + 280) = PopDisplayOnPerformance;
  KeReleaseSpinLock(&qword_140F0BAB8, v24);
}
