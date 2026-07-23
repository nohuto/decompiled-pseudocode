/*
 * XREFs of PopCheckShutdownMarker @ 0x140C1C5B4
 * Callers:
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     PopReadRegKeyValue @ 0x1404AABEC (PopReadRegKeyValue.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14069B800 (ZwQuerySystemInformation.c)
 *     ZwQuerySystemInformationEx @ 0x14069DF00 (ZwQuerySystemInformationEx.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     PopRecordSleepCheckpointSource @ 0x14073D8D4 (PopRecordSleepCheckpointSource.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x140773A90 (RtlCheckSystemBootStatusIntegrity.c)
 *     RtlGetSystemBootStatusEx @ 0x140773B40 (RtlGetSystemBootStatusEx.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x140821DF0 (ExGetFirmwareEnvironmentVariable.c)
 *     PopRecordSleepCheckpoint @ 0x140A871EC (PopRecordSleepCheckpoint.c)
 *     PopClearSystemSleepCheckpoint @ 0x140A96864 (PopClearSystemSleepCheckpoint.c)
 *     PopReadWheaBootErrorCount @ 0x140C1CCAC (PopReadWheaBootErrorCount.c)
 *     PopDiagTraceDirtyTransition @ 0x140C1E1D4 (PopDiagTraceDirtyTransition.c)
 *     PopDiagTraceInvalidBootStat @ 0x140C1ED78 (PopDiagTraceInvalidBootStat.c)
 */

char __fastcall PopCheckShutdownMarker(__int64 a1)
{
  __int64 v1; // rax
  char v3; // dl
  int SystemBootStatus; // eax
  int *v5; // r9
  __int64 v6; // r10
  WNF_STATE_NAME *v7; // r8
  unsigned __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // r8
  char v11; // cl
  char result; // al
  char v13; // bl
  __int64 v14; // rcx
  __int64 v15; // rcx
  char v16; // [rsp+48h] [rbp-C0h] BYREF
  char v17; // [rsp+49h] [rbp-BFh] BYREF
  bool v18; // [rsp+4Ah] [rbp-BEh] BYREF
  int v19; // [rsp+4Ch] [rbp-BCh] BYREF
  int v20; // [rsp+50h] [rbp-B8h] BYREF
  int v21; // [rsp+54h] [rbp-B4h] BYREF
  int v22; // [rsp+58h] [rbp-B0h] BYREF
  int v23; // [rsp+5Ch] [rbp-ACh] BYREF
  int v24; // [rsp+60h] [rbp-A8h] BYREF
  int Buffer; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v26; // [rsp+68h] [rbp-A0h] BYREF
  WNF_STATE_NAME StateName[3]; // [rsp+70h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+88h] [rbp-80h] BYREF
  __int64 v29; // [rsp+A8h] [rbp-60h]
  __int64 v30; // [rsp+B0h] [rbp-58h]
  int *v31; // [rsp+B8h] [rbp-50h]
  __int64 v32; // [rsp+C0h] [rbp-48h]
  int *v33; // [rsp+C8h] [rbp-40h]
  __int64 v34; // [rsp+D0h] [rbp-38h]
  __int128 *v35; // [rsp+D8h] [rbp-30h]
  __int64 v36; // [rsp+E0h] [rbp-28h]
  int *v37; // [rsp+E8h] [rbp-20h]
  __int64 v38; // [rsp+F0h] [rbp-18h]
  int *v39; // [rsp+F8h] [rbp-10h]
  __int64 v40; // [rsp+100h] [rbp-8h]
  int *v41; // [rsp+108h] [rbp+0h]
  __int64 v42; // [rsp+110h] [rbp+8h]
  int *v43; // [rsp+118h] [rbp+10h]
  __int64 v44; // [rsp+120h] [rbp+18h]
  char *v45; // [rsp+128h] [rbp+20h]
  __int64 v46; // [rsp+130h] [rbp+28h]
  bool *v47; // [rsp+138h] [rbp+30h]
  __int64 v48; // [rsp+140h] [rbp+38h]
  int v49; // [rsp+148h] [rbp+40h] BYREF
  __int128 *v50; // [rsp+150h] [rbp+48h]
  int v51; // [rsp+158h] [rbp+50h]
  int v52; // [rsp+160h] [rbp+58h]
  __int128 *v53; // [rsp+168h] [rbp+60h]
  int v54; // [rsp+170h] [rbp+68h]
  int v55; // [rsp+178h] [rbp+70h]
  __int128 *v56; // [rsp+180h] [rbp+78h]
  int v57; // [rsp+188h] [rbp+80h]
  int v58; // [rsp+190h] [rbp+88h]
  int *v59; // [rsp+198h] [rbp+90h]
  int v60; // [rsp+1A0h] [rbp+98h]

  v1 = *(_QWORD *)(a1 + 240);
  v16 = 0;
  *(_OWORD *)StateName[1].Data = 0LL;
  v3 = *(_BYTE *)(v1 + 132);
  v49 = 14;
  v50 = &PopBsdPhysicalPowerButtonInfo;
  v51 = 64;
  v53 = &PopBsdPowerTransition;
  PopDirtyTransitionDiagInfo = v3 & 1;
  v56 = &PopBsdPowerTransitionExtension;
  v59 = &dword_140E66E9C;
  v52 = 7;
  v54 = 32;
  v55 = 16;
  v57 = 32;
  v58 = 11;
  v60 = 4;
  RtlCheckSystemBootStatusIntegrity((__int64)&byte_140E66E91);
  SystemBootStatus = RtlGetSystemBootStatusEx((__int64)&v49, 4u);
  if ( SystemBootStatus < 0 )
  {
    v5 = &v49;
    v6 = 4LL;
    v7 = &StateName[1];
    do
    {
      if ( !v7->Data[0] )
        dword_140E66E94 |= 1 << *(_BYTE *)v5;
      v7 = (WNF_STATE_NAME *)((char *)v7 + 4);
      v5 += 6;
      --v6;
    }
    while ( v6 );
    LOBYTE(v5) = byte_140E66E91;
    PopDiagTraceInvalidBootStat(MEMORY[0x7FFE02C4], (unsigned int)dword_140E66E94, (unsigned int)SystemBootStatus, v5);
  }
  PopBsdPhysicalPowerButtonInfoAtBoot = PopBsdPhysicalPowerButtonInfo;
  xmmword_140E670A0 = xmmword_140E67040;
  xmmword_140E670B0 = xmmword_140E67050;
  xmmword_140E670C0 = xmmword_140E67060;
  if ( _mm_srli_si128((__m128i)PopBsdPhysicalPowerButtonInfo, 8).m128i_u32[0]
    && (unsigned int)dword_140E07680 > 5
    && tlgKeywordOn((__int64)&dword_140E07680, 0x200000000000LL) )
  {
    v20 = v8;
    v19 = WORD2(v8);
    v31 = &v19;
    v33 = &v20;
    v35 = &xmmword_140E670B0;
    v21 = WORD6(xmmword_140E670B0);
    v37 = &v21;
    v39 = &v22;
    v23 = HIWORD(xmmword_140E670B0);
    v41 = &v23;
    v24 = BYTE6(v8);
    v43 = &v24;
    v22 = v8;
    v10 = HIBYTE(v8);
    v29 = v9;
    v17 = v10 & 1;
    v18 = (v10 & 2) != 0;
    v45 = &v17;
    v30 = 8LL;
    v47 = &v18;
    v32 = 4LL;
    v34 = 4LL;
    v36 = 8LL;
    v38 = 4LL;
    v40 = 4LL;
    v42 = 4LL;
    v44 = 4LL;
    v46 = 1LL;
    v48 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E07680,
      (unsigned __int8 *)&byte_140047EBF,
      0LL,
      0LL,
      0xCu,
      &v28);
  }
  PopBsdPowerTransitionAtBoot = PopBsdPowerTransition;
  xmmword_140E67120 = xmmword_140E66FB0;
  PopBsdPowerTransitionOnDisk = PopBsdPowerTransition;
  xmmword_140E66FD8 = xmmword_140E66FB0;
  PopBsdPhysicalPowerButtonInfoOnDisk = PopBsdPhysicalPowerButtonInfo;
  xmmword_140E670E0 = xmmword_140E67040;
  xmmword_140E670F0 = xmmword_140E67050;
  xmmword_140E67100 = xmmword_140E67060;
  PopBsdPowerTransitionExtensionAtBoot = PopBsdPowerTransitionExtension;
  xmmword_140E67080 = xmmword_140E67018;
  PopBsdPowerTransitionExtensionOnDisk = PopBsdPowerTransitionExtension;
  xmmword_140E66FF8 = xmmword_140E67018;
  if ( (qword_140EFE818 & 4) != 0 )
    BYTE8(PopBsdPowerTransitionAtBoot) &= ~1u;
  if ( (PopSimulate & 0x200) != 0 )
    BYTE8(PopBsdPowerTransitionAtBoot) |= 1u;
  v11 = BYTE14(PopBsdPowerTransitionAtBoot) & 0xDF;
  BYTE14(PopBsdPowerTransitionAtBoot) &= ~0x20u;
  if ( DWORD2(PopBsdPhysicalPowerButtonInfoAtBoot) && (HIBYTE(PopBsdPhysicalPowerButtonInfoAtBoot) & 4) != 0 )
  {
    BYTE14(PopBsdPowerTransitionAtBoot) = v11 | 0x20;
    *(_QWORD *)&PopBsdPowerTransitionAtBoot = PopBsdPhysicalPowerButtonInfoAtBoot;
  }
  PopAutoChkCausedReboot = (BYTE14(PopBsdPowerTransition) & 0x10) != 0;
  StateName[0] = (WNF_STATE_NAME)WNF_PO_PREVIOUS_SHUTDOWN_STATE;
  Buffer = BYTE8(PopBsdPowerTransitionAtBoot) & 1;
  result = ZwUpdateWnfStateData(StateName, &Buffer, 4u, 0LL, 0LL, 0, 0);
  if ( (PopSimulate & 0x400) != 0 )
  {
    WORD6(PopBsdPowerTransitionAtBoot) = 1;
    result = BYTE8(PopBsdPowerTransitionAtBoot) & 0xF | 0x50;
    BYTE8(PopBsdPowerTransitionAtBoot) = result;
  }
  if ( (PopSimulate & 0x20000000) != 0 )
  {
    BYTE8(PopBsdPowerTransitionAtBoot) |= 2u;
    *((_QWORD *)&xmmword_140E67080 + 1) = 1LL;
  }
  if ( (BYTE8(PopBsdPowerTransitionAtBoot) & 1) != 0 )
  {
    LODWORD(v26) = 1;
    if ( (int)ExGetFirmwareEnvironmentVariable(
                (__int64)L"*,",
                (int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID,
                (int)&v16,
                (int)&v26,
                0LL) < 0 )
    {
      v13 = BYTE2(PopBsdPowerTransitionExtensionAtBoot);
      BYTE1(PopBsdPowerTransitionExtensionAtBoot) = BYTE1(PopBsdPowerTransitionExtensionAtBoot) & 0xF3 | 8;
      PopRecordSleepCheckpointSource(2);
    }
    else
    {
      v13 = v16;
      BYTE2(PopBsdPowerTransitionExtensionAtBoot) = v16;
      BYTE1(PopBsdPowerTransitionExtensionAtBoot) = BYTE1(PopBsdPowerTransitionExtensionAtBoot) & 0xF3 | 4;
      PopRecordSleepCheckpoint(v16);
      PopRecordSleepCheckpointSource(1);
      PopClearSystemSleepCheckpoint(1);
    }
    v14 = *(_QWORD *)(a1 + 240);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 280);
      if ( v15 )
      {
        dword_140E66EA0 = *(_DWORD *)(v15 + 56);
        qword_140E66EA8 = *(_QWORD *)(v15 + 64);
        qword_140E66EB0 = *(_QWORD *)(v15 + 72);
        qword_140E66EB8 = *(_QWORD *)(v15 + 80);
        qword_140E66EC0 = *(_QWORD *)(v15 + 88);
      }
    }
    dword_140E66F18 = 0;
    PopReadRegKeyValue(
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl",
      L"CrashDumpEnabled",
      4uLL,
      4,
      &dword_140E66F18);
    dword_140E66F1C = 0;
    PopReadRegKeyValue(
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl",
      L"FilterPages",
      4uLL,
      4,
      &dword_140E66F1C);
    if ( (int)PopReadRegKeyValue(
                L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\LastCrashdump",
                L"Info",
                0x30uLL,
                0,
                &dword_140E66F20) >= 0
      && !dword_140E66EA0
      && dword_140E66F28 )
    {
      dword_140E66EA0 = dword_140E66F28;
      qword_140E66EA8 = qword_140E66F30;
      dword_140E66EC8 = 1;
    }
    dword_140E66E98 = MEMORY[0x7FFE02C4];
    byte_140E66EE0 = v13;
    qword_140E66EE8 = (__int64)&PopBsdPhysicalPowerButtonInfoAtBoot;
    qword_140E66ED0 = (__int64)&PopBsdPowerTransitionAtBoot;
    qword_140E66ED8 = (__int64)&PopBsdPowerTransitionExtensionAtBoot;
    dword_140E66EF0 = ExBootAppErrorDiagCode;
    dword_140E66EF4 = ExBootAppFailureStatus;
    ZwQuerySystemInformation(SystemBootEnvironmentInformation, &unk_140E66EF8, 0x20u, 0LL);
    dword_140E66F58 = 7;
    qword_140E66F60 = (__int64)&PopFirmwareResetReason;
    if ( ZwQuerySystemInformationEx(SystemWatchdogTimerInformation, &dword_140E66F58, 4u, &dword_140E66F58, 8u, 0LL) >= 0 )
    {
      dword_140E66F50 = dword_140E66F5C;
      if ( dword_140E66F5C )
      {
        dword_140E66F58 = 8;
        if ( ZwQuerySystemInformationEx(SystemWatchdogTimerInformation, &dword_140E66F58, 4u, &dword_140E66F58, 8u, 0LL) >= 0 )
          dword_140E66F54 = dword_140E66F5C;
      }
    }
    PopReadWheaBootErrorCount(&dword_140E66F68);
    return PopDiagTraceDirtyTransition(&PopDirtyTransitionDiagInfo);
  }
  return result;
}
