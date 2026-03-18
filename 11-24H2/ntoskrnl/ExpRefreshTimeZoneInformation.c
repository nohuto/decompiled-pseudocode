/*
 * XREFs of ExpRefreshTimeZoneInformation @ 0x1409DC59C
 * Callers:
 *     ExpReadLeapSecondData @ 0x1407B64AC (ExpReadLeapSecondData.c)
 *     ExpRefreshSystemTime @ 0x1407B6864 (ExpRefreshSystemTime.c)
 *     ExpTimeZoneInitSiloState @ 0x1407B6A30 (ExpTimeZoneInitSiloState.c)
 *     NtSetSystemTime @ 0x1407B6BF0 (NtSetSystemTime.c)
 *     ExpSetSystemTime @ 0x140B6CD90 (ExpSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeCancelTimer @ 0x140333B20 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x1403347A0 (KiSetTimerEx.c)
 *     ExLocalTimeToSystemTime @ 0x140348040 (ExLocalTimeToSystemTime.c)
 *     PsGetServerSiloGlobals @ 0x140349380 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x140349A50 (PsGetCurrentServerSilo.c)
 *     RtlTimeToTimeFields @ 0x1404260F0 (RtlTimeToTimeFields.c)
 *     RtlTimeFieldsToTime @ 0x1404266B0 (RtlTimeFieldsToTime.c)
 *     RtlSetSystemGlobalData @ 0x14042EEF0 (RtlSetSystemGlobalData.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14042F240 (PsIsCurrentThreadInServerSilo.c)
 *     PsAttachSiloToCurrentThread @ 0x14043CF50 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140444750 (PsDetachSiloFromCurrentThread.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     RtlCutoverTimeToSystemTime @ 0x14077DA80 (RtlCutoverTimeToSystemTime.c)
 *     RtlSetActiveTimeBias @ 0x1407821AC (RtlSetActiveTimeBias.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x1407822BC (RtlpCheckDynamicTimeZoneInformation.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x140782648 (RtlpSetTimeZoneInformationWorker.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14078291C (RtlpUpdateDynamicTimeZones.c)
 *     EtwTraceTimeZoneBiasChange @ 0x1407A9A20 (EtwTraceTimeZoneBiasChange.c)
 *     ExpLogRefreshTimeZoneInformationCutoverFail @ 0x1407B61E0 (ExpLogRefreshTimeZoneInformationCutoverFail.c)
 *     ExpReadSiloTimeZoneMarker @ 0x1407B67A8 (ExpReadSiloTimeZoneMarker.c)
 *     RtlGetPersistedStateLocation @ 0x1409CC0E0 (RtlGetPersistedStateLocation.c)
 *     RtlpGetRegistryHandle @ 0x1409CC85C (RtlpGetRegistryHandle.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x1409DB994 (RtlpQueryTimeZoneInformationWorker.c)
 *     ExpLogRefreshTimeZoneInformationQueryFail @ 0x1409DCC7C (ExpLogRefreshTimeZoneInformationQueryFail.c)
 *     ExpInitializeTimeZoneInformation @ 0x1409DCDAC (ExpInitializeTimeZoneInformation.c)
 *     ExpWriteTimeZoneBias @ 0x1409DCE5C (ExpWriteTimeZoneBias.c)
 *     EtwTraceTimeZoneInformationRefresh @ 0x1409DCEAC (EtwTraceTimeZoneInformationRefresh.c)
 *     ExpLogRefreshTimeZoneInformationSuccess @ 0x1409DD038 (ExpLogRefreshTimeZoneInformationSuccess.c)
 *     ExpWriteTimeZoneBiasStartEnd @ 0x1409DD244 (ExpWriteTimeZoneBiasStartEnd.c)
 */

char __fastcall ExpRefreshTimeZoneInformation(char a1)
{
  bool v2; // r13
  char v3; // r12
  struct _LIST_ENTRY *v4; // rdi
  unsigned __int64 CurrentServerSilo; // rax
  _QWORD *ServerSiloGlobals; // rax
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // rdx
  int TimeZoneInformationWorker; // ebx
  bool SiloTimeZoneMarker; // al
  wchar_t *v12; // rcx
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  int v15; // r9d
  int v16; // ecx
  __int64 v18; // rsi
  LARGE_INTEGER v19; // rbx
  int RegistryHandle; // edi
  int v21; // edi
  LARGE_INTEGER v22; // rdi
  LARGE_INTEGER v23; // rbx
  int v24; // ecx
  int v25; // edi
  int *v26; // r15
  __int64 v27; // r13
  int v28; // eax
  int v29; // eax
  __int64 v30; // rdi
  wchar_t *v31; // rcx
  _OWORD *v32; // rax
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int16 Year; // di
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  int v40; // edx
  __int16 v41; // bx
  int v42; // r9d
  char v43; // [rsp+48h] [rbp-C0h]
  LARGE_INTEGER LocalTime; // [rsp+50h] [rbp-B8h] BYREF
  LARGE_INTEGER Time; // [rsp+60h] [rbp-A8h] BYREF
  LARGE_INTEGER v46; // [rsp+68h] [rbp-A0h] BYREF
  LARGE_INTEGER v47; // [rsp+70h] [rbp-98h] BYREF
  __int64 v48; // [rsp+78h] [rbp-90h]
  unsigned __int64 v49; // [rsp+80h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  LARGE_INTEGER v51; // [rsp+90h] [rbp-78h] BYREF
  LARGE_INTEGER v52; // [rsp+98h] [rbp-70h] BYREF
  LARGE_INTEGER v53; // [rsp+A0h] [rbp-68h] BYREF
  TIME_FIELDS TimeFields; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v55; // [rsp+B8h] [rbp-50h] BYREF
  wchar_t Buf2[34]; // [rsp+C8h] [rbp-40h] BYREF
  TIME_FIELDS v57; // [rsp+10Ch] [rbp+4h] BYREF
  int v58; // [rsp+11Ch] [rbp+14h]
  TIME_FIELDS v59; // [rsp+160h] [rbp+58h] BYREF
  int v60; // [rsp+170h] [rbp+68h]
  __int16 v61; // [rsp+174h] [rbp+6Ch]
  char v62; // [rsp+274h] [rbp+16Ch]
  WCHAR v63[264]; // [rsp+278h] [rbp+170h] BYREF

  memset_0(Buf2, 0, 0x1B0uLL);
  TimeFields = 0LL;
  v51.QuadPart = 0LL;
  v2 = 0;
  v52.QuadPart = 0LL;
  v3 = 1;
  v46.QuadPart = 0LL;
  v4 = 0LL;
  v49 = 0LL;
  v43 = 0;
  CurrentServerSilo = PsGetCurrentServerSilo();
  ServerSiloGlobals = PsGetServerSiloGlobals(CurrentServerSilo);
  v8 = ServerSiloGlobals[153];
  if ( *(_QWORD *)(v8 + 592) )
    v3 = 0;
  else
    ExpInitializeTimeZoneInformation(v7, ServerSiloGlobals[153]);
  if ( a1 )
  {
    if ( !ExpReadSiloTimeZoneMarker() )
      v4 = PsAttachSiloToCurrentThread(0LL);
    TimeZoneInformationWorker = RtlpQueryTimeZoneInformationWorker((char *)Buf2, 0x1B0uLL);
    if ( v4 )
      PsDetachSiloFromCurrentThread(v4);
  }
  else if ( !PsIsCurrentThreadInServerSilo()
         || (SiloTimeZoneMarker = ExpReadSiloTimeZoneMarker(), v12 = Buf2, SiloTimeZoneMarker) )
  {
    TimeZoneInformationWorker = RtlpQueryTimeZoneInformationWorker((char *)Buf2, 0x1B0uLL);
  }
  else
  {
    v9 = 3LL;
    v13 = (_OWORD *)v8;
    do
    {
      *(_OWORD *)v12 = *v13;
      *((_OWORD *)v12 + 1) = v13[1];
      *((_OWORD *)v12 + 2) = v13[2];
      *((_OWORD *)v12 + 3) = v13[3];
      *((_OWORD *)v12 + 4) = v13[4];
      *((_OWORD *)v12 + 5) = v13[5];
      *((_OWORD *)v12 + 6) = v13[6];
      v12 += 64;
      v14 = v13[7];
      v13 += 8;
      *((_OWORD *)v12 - 1) = v14;
      --v9;
    }
    while ( v9 );
    TimeZoneInformationWorker = 0;
    *(_OWORD *)v12 = *v13;
    *((_OWORD *)v12 + 1) = v13[1];
    *((_OWORD *)v12 + 2) = v13[2];
  }
  if ( TimeZoneInformationWorker < 0 )
  {
    ++*(_DWORD *)(v8 + 1000);
    LOBYTE(v9) = v3;
    ExpSystemIsInCmosMode = 1;
    ExpLogRefreshTimeZoneInformationQueryFail((unsigned int)TimeZoneInformationWorker, v9);
    v15 = 0;
    v16 = 1;
LABEL_17:
    EtwTraceTimeZoneInformationRefresh(v16, *(_DWORD *)(v8 + 436), *(_DWORD *)(v8 + 432), v15, v3);
    return 0;
  }
  v18 = MEMORY[0xFFFFF78000000014];
  v19.QuadPart = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v8 + 440);
  Time = v19;
  if ( !v62 )
  {
    if ( v61 )
    {
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( RtlpCheckDynamicTimeZoneInformation((char *)Buf2, TimeFields.Year) )
      {
        v2 = 1;
        v43 = 1;
LABEL_27:
        RtlpSetTimeZoneInformationWorker(Buf2, 0x1B0u);
        goto LABEL_28;
      }
    }
  }
  if ( v3
    && (int)RtlGetPersistedStateLocation(
              L"TimeZoneInformationSettings",
              L"TargetNtPath",
              0LL,
              0,
              v63,
              0x208u,
              (unsigned int *)&v55) >= 0 )
  {
    Handle = 0LL;
    RegistryHandle = RtlpGetRegistryHandle(0, v63, 0, &Handle);
    v2 = RegistryHandle == -1073741772;
    v43 = v2;
    if ( Handle )
      ZwClose(Handle);
    if ( RegistryHandle == -1073741772 )
      goto LABEL_27;
  }
LABEL_28:
  v21 = *(_DWORD *)Buf2;
  v47.QuadPart = -1LL;
  v53.QuadPart = -1LL;
  LODWORD(v48) = *(_DWORD *)Buf2;
  if ( v57.Month && v59.Month )
  {
    if ( !RtlCutoverTimeToSystemTime(&v57, &v51, &Time) )
    {
      ++*(_DWORD *)(v8 + 1000);
      ExpSystemIsInCmosMode = 1;
      ExpLogRefreshTimeZoneInformationCutoverFail();
      LOBYTE(v15) = v43;
      v16 = 2;
      goto LABEL_17;
    }
    v22 = v51;
    v47 = v51;
    if ( !RtlCutoverTimeToSystemTime(&v59, &v52, &Time) )
    {
      ++*(_DWORD *)(v8 + 1000);
      ExpSystemIsInCmosMode = 1;
      ExpLogRefreshTimeZoneInformationCutoverFail();
      LOBYTE(v15) = v2;
      v16 = 3;
      goto LABEL_17;
    }
    v53 = v52;
    if ( v19.QuadPart >= v52.QuadPart && v19.QuadPart >= v22.QuadPart )
    {
      LocalTime.QuadPart = 0LL;
      v23.QuadPart = 0LL;
      v24 = (v22.QuadPart <= v52.QuadPart) + 1;
LABEL_44:
      v25 = v48;
      v26 = (int *)(v8 + 432);
      v27 = v8 + 512;
      *(_DWORD *)(v8 + 432) = v24;
      v28 = v58;
      if ( v24 == 2 )
        v28 = v60;
      v21 = v28 + v25;
      goto LABEL_48;
    }
    if ( v52.QuadPart >= v22.QuadPart )
    {
      if ( v19.QuadPart >= v22.QuadPart && v19.QuadPart < v52.QuadPart )
        goto LABEL_40;
    }
    else if ( v19.QuadPart < v52.QuadPart || v19.QuadPart >= v22.QuadPart )
    {
LABEL_40:
      v23 = v52;
      LocalTime = v52;
      v24 = 1;
      goto LABEL_44;
    }
    v23 = v22;
    v24 = 2;
    LocalTime = v22;
    goto LABEL_44;
  }
  v27 = v8 + 512;
  KeCancelTimer((PKTIMER)(v8 + 512));
  v26 = (int *)(v8 + 432);
  *(_DWORD *)(v8 + 432) = 0;
  v23.QuadPart = 0LL;
  LocalTime.QuadPart = 0LL;
LABEL_48:
  if ( *(_DWORD *)(v8 + 436) != v21 )
  {
    v49 = 0xFFFFFFFF00000000uLL;
    ZwUpdateWnfStateData((__int64)&WNF_SEB_TIME_ZONE_CHANGE, (__int64)&v49);
    EtwTraceTimeZoneBiasChange(v21, *(_DWORD *)(v8 + 436));
  }
  v29 = 60 * v21;
  *(_DWORD *)(v8 + 436) = v21;
  v30 = 3LL;
  v31 = Buf2;
  *(_QWORD *)(v8 + 440) = 10000000LL * v29;
  v32 = (_OWORD *)v8;
  do
  {
    *v32 = *(_OWORD *)v31;
    v32[1] = *((_OWORD *)v31 + 1);
    v32[2] = *((_OWORD *)v31 + 2);
    v32[3] = *((_OWORD *)v31 + 3);
    v32[4] = *((_OWORD *)v31 + 4);
    v32[5] = *((_OWORD *)v31 + 5);
    v32[6] = *((_OWORD *)v31 + 6);
    v32 += 8;
    v33 = *((_OWORD *)v31 + 7);
    v31 += 64;
    *(v32 - 1) = v33;
    --v30;
  }
  while ( v30 );
  v34 = *(_OWORD *)v31;
  ExpSystemIsInCmosMode = 0;
  *v32 = v34;
  v32[1] = *((_OWORD *)v31 + 1);
  v32[2] = *((_OWORD *)v31 + 2);
  RtlSetSystemGlobalData(6, v26, 4);
  RtlTimeToTimeFields(&Time, &TimeFields);
  if ( v23.QuadPart )
  {
    ExLocalTimeToSystemTime(&LocalTime, (PLARGE_INTEGER)(v8 + 992));
    KiSetTimerEx(v27, *(_QWORD *)(v8 + 992), 0, 0, v8 + 448);
  }
  Year = TimeFields.Year;
  *(_WORD *)(v8 + 944) = 100 * (TimeFields.Year / 100 + 1);
  RtlTimeFieldsToTime((PTIME_FIELDS)(v8 + 944), &v46);
  ExLocalTimeToSystemTime(&v46, (PLARGE_INTEGER)(v8 + 936));
  KiSetTimerEx(v8 + 672, *(_QWORD *)(v8 + 936), 0, 0, v8 + 608);
  *(_WORD *)(v8 + 968) = Year + 1;
  RtlTimeFieldsToTime((PTIME_FIELDS)(v8 + 968), &v46);
  ExLocalTimeToSystemTime(&v46, (PLARGE_INTEGER)(v8 + 960));
  KiSetTimerEx(v8 + 832, *(_QWORD *)(v8 + 960), 0, 0, v8 + 768);
  _InterlockedAdd((volatile signed __int32 *)(MmWriteableSharedUserData + 604), 1u);
  ExpWriteTimeZoneBias(v8 + 440, v36, v37, v38);
  if ( LocalTime.QuadPart )
    v39 = *(_QWORD *)(v8 + 992);
  else
    v39 = *(_QWORD *)(v8 + 960) - 10000LL;
  ExpWriteTimeZoneBiasStartEnd(v18, v39);
  _InterlockedAdd((volatile signed __int32 *)(MmWriteableSharedUserData + 604), 1u);
  if ( !ExpRealTimeIsUniversal )
    RtlSetActiveTimeBias(*(unsigned int *)(v8 + 436));
  v41 = TimeFields.Year;
  if ( TimeFields.Year != *(_WORD *)(v8 + 984) )
  {
    if ( RtlpUpdateDynamicTimeZones(TimeFields.Year) )
      *(_WORD *)(v8 + 984) = v41;
  }
  LOBYTE(v40) = v3;
  ExpLogRefreshTimeZoneInformationSuccess(
    (unsigned int)Buf2,
    v40,
    (unsigned int)&v47,
    (unsigned int)&v53,
    (__int64)&LocalTime);
  LOBYTE(v42) = v43;
  EtwTraceTimeZoneInformationRefresh(0, *(_DWORD *)(v8 + 436), *(_DWORD *)(v8 + 432), v42, v3);
  return 1;
}
