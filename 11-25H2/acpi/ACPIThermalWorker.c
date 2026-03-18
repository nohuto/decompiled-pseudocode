/*
 * XREFs of ACPIThermalWorker @ 0x1400B5660
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     ACPIGet @ 0x1400157F0 (ACPIGet.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_Dqssdddd @ 0x1400369E0 (WPP_RECORDER_SF_Dqssdddd.c)
 *     ACPIThermalLoop @ 0x1400379FC (ACPIThermalLoop.c)
 *     WPP_RECORDER_SF_ddqssdddd @ 0x140039CC0 (WPP_RECORDER_SF_ddqssdddd.c)
 *     WPP_RECORDER_SF_dqssdddd @ 0x14003FA08 (WPP_RECORDER_SF_dqssdddd.c)
 *     AMLIFreeDataBuffs @ 0x140040074 (AMLIFreeDataBuffs.c)
 *     WPP_RECORDER_SF_Dddqssdddd @ 0x140043388 (WPP_RECORDER_SF_Dddqssdddd.c)
 *     ACPIThermalUpdateConstraints @ 0x140047AFC (ACPIThermalUpdateConstraints.c)
 *     ACPIThermalStopZoneWorker @ 0x140069144 (ACPIThermalStopZoneWorker.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     ACPIThermalCheckPolicySupport @ 0x140098604 (ACPIThermalCheckPolicySupport.c)
 *     ACPIThermalBuildConstraints @ 0x1400A7698 (ACPIThermalBuildConstraints.c)
 *     ACPIThermalCheckNativeTemperatureSupport @ 0x1400A7810 (ACPIThermalCheckNativeTemperatureSupport.c)
 *     ACPIThermalGetParameter @ 0x1400B668C (ACPIThermalGetParameter.c)
 *     ACPIThermalGetOverrideHandle @ 0x1400B6754 (ACPIThermalGetOverrideHandle.c)
 *     ACPIAmliEvaluateDsm @ 0x1400B9FBC (ACPIAmliEvaluateDsm.c)
 *     ACPIThermalReadTemperature @ 0x1400BCDC4 (ACPIThermalReadTemperature.c)
 */

LONG __fastcall ACPIThermalWorker(__int64 a1, int a2)
{
  int v2; // r12d
  LONG result; // eax
  __int64 v5; // rdi
  __int64 *v6; // r14
  __int64 v7; // r13
  union _LARGE_INTEGER v8; // rax
  int Parameter; // eax
  unsigned __int64 v10; // rcx
  union _LARGE_INTEGER v11; // rax
  union _LARGE_INTEGER v12; // r13
  __int64 v13; // r12
  __int64 v14; // rsi
  int v15; // eax
  unsigned __int64 v16; // r14
  int v17; // eax
  unsigned __int64 v18; // rsi
  __int64 v19; // rcx
  PVOID v20; // r14
  int v21; // eax
  unsigned int v22; // esi
  __int64 *v23; // rax
  __int64 v24; // r15
  __int64 *v25; // rax
  __int64 v26; // rsi
  __int64 *v27; // rax
  __int64 v28; // rsi
  _WORD *v29; // rcx
  _WORD *v30; // rax
  __int64 v31; // r9
  __int16 v32; // dx
  int v33; // eax
  __int64 v34; // rcx
  PVOID v35; // rsi
  union _LARGE_INTEGER v36; // r13
  PLARGE_INTEGER Timeout; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v38; // [rsp+88h] [rbp-80h] BYREF
  union _LARGE_INTEGER Time; // [rsp+90h] [rbp-78h] BYREF
  union _LARGE_INTEGER v40; // [rsp+98h] [rbp-70h]
  unsigned int v41; // [rsp+A0h] [rbp-68h] BYREF
  int v42; // [rsp+A4h] [rbp-64h]
  PVOID v43; // [rsp+A8h] [rbp-60h] BYREF
  PVOID P; // [rsp+B0h] [rbp-58h] BYREF
  int v45; // [rsp+B8h] [rbp-50h]
  __int64 OverrideHandle; // [rsp+C0h] [rbp-48h]
  union _LARGE_INTEGER Interval; // [rsp+C8h] [rbp-40h] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v49; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v50; // [rsp+F8h] [rbp-10h]
  __int128 v51; // [rsp+108h] [rbp+0h]
  _DWORD v52[10]; // [rsp+118h] [rbp+10h] BYREF

  v42 = a2;
  Interval.QuadPart = 0LL;
  *(_QWORD *)&v51 = 0LL;
  DWORD2(v51) = 0;
  v43 = 0LL;
  v2 = a2;
  v41 = 0;
  P = 0LL;
  v38 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  result = MEMORY[0xFFFFF78000000008];
  v40.QuadPart = MEMORY[0xFFFFF78000000008];
  if ( (a2 & 0x2000) != 0 )
    result = ACPIThermalStopZoneWorker(a1);
  if ( (*(_DWORD *)(a1 + 192) & 0x8000000) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 200);
    v6 = *(__int64 **)(a1 + 760);
    v45 = v2 & 0x202;
    if ( (v2 & 0x202) != 0 )
      IoCancelIrp(*(PIRP *)(v5 + 208));
    if ( (v2 & 0x10) == 0 )
      goto LABEL_7;
    qmemcpy(v52, "_AL0_AL1_AL2_AL3_AL4_AL5_AL6_AL7_AL8_AL9", sizeof(v52));
    *(_BYTE *)(v5 + 273) = (int)ACPIThermalCheckPolicySupport(a1) >= 0;
    v21 = ACPIThermalCheckNativeTemperatureSupport(a1);
    v22 = 0;
    *(_DWORD *)(v5 + 100) = 1;
    *(_BYTE *)(v5 + 274) = v21 >= 0;
    do
    {
      v23 = AMLIGetNamedChild(v6, v52[v22]);
      v24 = (__int64)v23;
      if ( !v23 )
        break;
      ACPIThermalBuildConstraints(v23, a1, 0, v22);
      AMLIDereferenceHandleEx(v24);
      ++v22;
    }
    while ( v22 < 0xA );
    v25 = AMLIGetNamedChild(v6, 1280528479);
    v2 = v42;
    v26 = (__int64)v25;
    if ( v25 )
    {
      ACPIThermalBuildConstraints(v25, a1, 1, 1u);
      AMLIDereferenceHandleEx(v26);
      *(_BYTE *)(v5 + 33) = 1;
    }
    v27 = AMLIGetNamedChild(v6, 1146770527);
    v28 = (__int64)v27;
    if ( v27 )
    {
      ACPIThermalBuildConstraints(v27, a1, 1, 0);
      AMLIDereferenceHandleEx(v28);
      *(_BYTE *)(v5 + 33) = 1;
    }
    *(_QWORD *)(v5 + 120) = AMLIGetNamedChild(v6, 1230259295);
    if ( (int)ACPIGet(a1, 1381258079, 402718728, 0LL, 0, 0LL, 0LL, (__int64)&v43, (__int64)&v41) < 0 )
      goto LABEL_7;
    if ( v41 <= 2 || (v41 & 1) != 0 )
      goto LABEL_71;
    v29 = v43;
    if ( *((_WORD *)v43 + ((unsigned __int64)v41 >> 1) - 1) )
      goto LABEL_72;
    *(_OWORD *)(v5 + 304) = 0LL;
    if ( !v29 )
      goto LABEL_70;
    v30 = v29;
    v31 = 0x7FFFLL;
    do
    {
      if ( !*v30 )
        break;
      ++v30;
      --v31;
    }
    while ( v31 );
    if ( v31 )
    {
      if ( v5 == -304 )
        goto LABEL_71;
      v32 = 2 * (0x7FFF - v31);
      *(_QWORD *)(v5 + 312) = v29;
      *(_WORD *)(v5 + 304) = v32;
      *(_WORD *)(v5 + 306) = v32 + 2;
    }
    if ( v31 )
    {
LABEL_70:
      v29 = 0LL;
      v43 = 0LL;
      goto LABEL_72;
    }
LABEL_71:
    v29 = v43;
LABEL_72:
    if ( v29 )
      ExFreePoolWithTag(v29, 0);
LABEL_7:
    if ( (v2 & 0x101) != 0 )
      ACPIThermalUpdateConstraints(a1);
    if ( (v2 & 4) != 0 )
    {
      qmemcpy(v52, "_AC0_AC1_AC2_AC3_AC4_AC5_AC6_AC7_AC8_AC9", sizeof(v52));
      OverrideHandle = ACPIThermalGetOverrideHandle(a1);
      v7 = OverrideHandle;
      ACPIThermalGetParameter(a1, OverrideHandle, 826496095LL, &v38);
      v8 = v40;
      *(_DWORD *)(v5 + 4) = v38;
      Time = v8;
      TimeFields = 0LL;
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (unsigned int)TimeFields.Minute,
          (unsigned int)TimeFields.Hour,
          0x17u,
          (int)Timeout);
      ACPIThermalGetParameter(a1, v7, 843273311LL, &v38);
      *(_DWORD *)(v5 + 8) = v38;
      Time = v40;
      TimeFields = 0LL;
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (unsigned int)TimeFields.Minute,
          (unsigned int)TimeFields.Hour,
          0x18u,
          (int)Timeout);
      ACPIThermalGetParameter(a1, v7, 1448300639LL, &v38);
      *(_DWORD *)(v5 + 20) = v38;
      Time = v40;
      TimeFields = 0LL;
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(_DWORD *)(v5 + 20) / 0xAu,
          TimeFields.Minute,
          0x19u,
          (__int64)Timeout);
      ACPIThermalGetParameter(a1, v7, 1414677343LL, &v38);
      *(_DWORD *)(v5 + 28) = v38;
      Time = v40;
      TimeFields = 0LL;
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(_DWORD *)(v5 + 28) / 0xAu,
          TimeFields.Minute,
          0x1Au,
          (__int64)Timeout);
      Parameter = ACPIThermalGetParameter(a1, v7, 1346786399LL, &v38);
      LODWORD(v10) = v38;
      *(_DWORD *)(v5 + 332) = v38;
      if ( Parameter < 0 )
      {
        v33 = ACPIThermalGetParameter(a1, v7, 1347638367LL, &v38);
        v10 = v38;
        *(_DWORD *)(v5 + 336) = v38;
        if ( v33 >= 0 )
        {
          v10 *= 100LL;
          v38 = v10;
        }
      }
      v11 = v40;
      *(_DWORD *)(v5 + 12) = v10;
      Time = v11;
      TimeFields = 0LL;
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (unsigned int)TimeFields.Minute,
          (unsigned int)TimeFields.Hour,
          0x1Bu,
          (int)Timeout);
      ACPIThermalGetParameter(a1, v7, 861029215LL, &v38);
      *(_DWORD *)(v5 + 24) = v38;
      Time = v40;
      TimeFields = 0LL;
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(_DWORD *)(v5 + 24) / 0xAu,
          TimeFields.Minute,
          0x1Cu,
          (__int64)Timeout);
      ACPIThermalGetParameter(a1, v7, 1414482015LL, &v38);
      *(_DWORD *)(v5 + 76) = v38;
      Time = v40;
      TimeFields = 0LL;
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(_DWORD *)(v5 + 76) / 0xAu,
          TimeFields.Minute,
          0x1Du,
          (__int64)Timeout);
      ACPIThermalGetParameter(a1, v7, 1414811231LL, &v38);
      v12 = v40;
      *(_DWORD *)(v5 + 104) = v38;
      TimeFields = 0LL;
      Time = v12;
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(_DWORD *)(v5 + 104) / 0xAu,
          TimeFields.Minute,
          0x1Eu,
          (__int64)Timeout);
      v13 = OverrideHandle;
      v14 = 0LL;
      do
      {
        if ( (int)ACPIThermalGetParameter(a1, v13, (unsigned int)v52[v14], &v38) < 0 )
          break;
        *(_DWORD *)(v5 + 4 * v14 + 36) = v38;
        Time = v40;
        TimeFields = 0LL;
        RtlTimeToTimeFields(&Time, &TimeFields);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Dddqssdddd(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            *(_DWORD *)(v5 + 4 * v14 + 36) / 0xAu,
            (unsigned int)TimeFields.Minute,
            (unsigned int)TimeFields.Hour,
            (int)Timeout);
        v14 = (unsigned int)(v14 + 1);
      }
      while ( (unsigned int)v14 < 0xA );
      *(_BYTE *)(v5 + 32) = v14;
      v15 = ACPIThermalGetParameter(a1, v13, 1280593247LL, &v38);
      v2 = v42;
      if ( v15 < 0
        && (*(_DWORD *)(v5 + 128) & 2) != 0
        && (v34 = *(_QWORD *)(a1 + 760),
            v49 = 0LL,
            v50 = 0LL,
            v51 = 0LL,
            TimeFields = (struct _TIME_FIELDS)THRM_EXTENSIONS_DSM_UUID,
            (int)ACPIAmliEvaluateDsm(v34, (unsigned int)&TimeFields, 0, 1, (__int64)&v49, (__int64)&P) >= 0) )
      {
        v35 = P;
        if ( *((_WORD *)P + 1) == 1 )
          v16 = *((unsigned int *)P + 4);
        else
          v16 = v38;
        AMLIFreeDataBuffs((__int64)P);
        ExFreePoolWithTag(v35, 0x52706341u);
      }
      else
      {
        v16 = v38;
      }
      v36 = v40;
      Time = v40;
      if ( v16 > 0x64 )
        LODWORD(v16) = 100;
      *(_DWORD *)(v5 + 80) = v16;
      TimeFields = 0LL;
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (unsigned int)TimeFields.Minute,
          (unsigned int)TimeFields.Hour,
          0x20u,
          (int)Timeout);
      v17 = *(_DWORD *)(v5 + 128);
      v18 = 0LL;
      v38 = 0LL;
      if ( (v17 & 8) != 0 )
      {
        v19 = *(_QWORD *)(a1 + 760);
        v49 = 0LL;
        v50 = 0LL;
        v51 = 0LL;
        TimeFields = (struct _TIME_FIELDS)THRM_EXTENSIONS_DSM_UUID;
        if ( (int)ACPIAmliEvaluateDsm(v19, (unsigned int)&TimeFields, 0, 3, (__int64)&v49, (__int64)&P) >= 0 )
        {
          v20 = P;
          if ( *((_WORD *)P + 1) == 1 )
            v18 = *((unsigned int *)P + 4);
          AMLIFreeDataBuffs((__int64)P);
          ExFreePoolWithTag(v20, 0x52706341u);
          if ( v18 > 0x64 )
            v18 = 100LL;
          v38 = v18;
        }
      }
      *(_DWORD *)(v5 + 84) = v18;
      Time = v36;
      TimeFields = 0LL;
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (unsigned int)TimeFields.Minute,
          (unsigned int)TimeFields.Hour,
          0x21u,
          (int)Timeout);
      ACPIThermalGetParameter(a1, OverrideHandle, 1348097119LL, &v38);
      *(_DWORD *)(v5 + 88) = v38;
      Time = v36;
      TimeFields = 0LL;
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(_DWORD *)(v5 + 88) / 0xAu,
          TimeFields.Minute,
          0x22u,
          (__int64)Timeout);
    }
    if ( v45 )
    {
      if ( *(_BYTE *)(v5 + 272) )
      {
        Interval.QuadPart = -10000000LL;
        KeDelayExecutionThread(0, 0, &Interval);
      }
      KeWaitForSingleObject((PVOID)(v5 + 248), Executive, 0, 0, 0LL);
      ACPIThermalLoop(a1, 0x4000000LL);
      if ( (v2 & 2) != 0 )
        ACPIThermalReadTemperature(a1, 1LL);
      if ( (v2 & 0x200) != 0 )
        ACPIThermalReadTemperature(a1, 0LL);
    }
    return ACPIThermalLoop(a1, (v2 & 0xFFFFFDFD) != 0 ? 1073742338 : 0x40000000);
  }
  return result;
}
