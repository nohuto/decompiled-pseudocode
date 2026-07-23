/*
 * XREFs of ExpRefreshTimeZoneInformation @ 0x140A7981C
 * Callers:
 *     ExpReadLeapSecondData @ 0x1407B68FC (ExpReadLeapSecondData.c)
 *     ExpRefreshSystemTime @ 0x1407B6CB4 (ExpRefreshSystemTime.c)
 *     ExpTimeZoneInitSiloState @ 0x1407B6E80 (ExpTimeZoneInitSiloState.c)
 *     NtSetSystemTime @ 0x1407B7040 (NtSetSystemTime.c)
 *     ExpSetSystemTime @ 0x140B6E630 (ExpSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeCancelTimer @ 0x1402BE1D0 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 *     ExLocalTimeToSystemTime @ 0x140326A40 (ExLocalTimeToSystemTime.c)
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x1403C3490 (PsGetCurrentServerSilo.c)
 *     RtlTimeToTimeFields @ 0x140419FA0 (RtlTimeToTimeFields.c)
 *     RtlTimeFieldsToTime @ 0x14041A560 (RtlTimeFieldsToTime.c)
 *     RtlSetSystemGlobalData @ 0x140420C20 (RtlSetSystemGlobalData.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 *     PsAttachSiloToCurrentThread @ 0x14042FBB0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x14043A1F0 (PsDetachSiloFromCurrentThread.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlCutoverTimeToSystemTime @ 0x14077D9B0 (RtlCutoverTimeToSystemTime.c)
 *     RtlSetActiveTimeBias @ 0x1407820DC (RtlSetActiveTimeBias.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x1407821EC (RtlpCheckDynamicTimeZoneInformation.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x140782578 (RtlpSetTimeZoneInformationWorker.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14078284C (RtlpUpdateDynamicTimeZones.c)
 *     EtwTraceTimeZoneBiasChange @ 0x1407A9B60 (EtwTraceTimeZoneBiasChange.c)
 *     ExpLogRefreshTimeZoneInformationCutoverFail @ 0x1407B6630 (ExpLogRefreshTimeZoneInformationCutoverFail.c)
 *     ExpReadSiloTimeZoneMarker @ 0x1407B6BF8 (ExpReadSiloTimeZoneMarker.c)
 *     RtlGetPersistedStateLocation @ 0x1409B4B60 (RtlGetPersistedStateLocation.c)
 *     RtlpGetRegistryHandle @ 0x1409B52DC (RtlpGetRegistryHandle.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x1409B66B0 (RtlpQueryTimeZoneInformationWorker.c)
 *     ExpLogRefreshTimeZoneInformationQueryFail @ 0x140A79EFC (ExpLogRefreshTimeZoneInformationQueryFail.c)
 *     ExpInitializeTimeZoneInformation @ 0x140A7A008 (ExpInitializeTimeZoneInformation.c)
 *     ExpWriteTimeZoneBias @ 0x140A7A0B8 (ExpWriteTimeZoneBias.c)
 *     EtwTraceTimeZoneInformationRefresh @ 0x140A7A108 (EtwTraceTimeZoneInformationRefresh.c)
 *     ExpLogRefreshTimeZoneInformationSuccess @ 0x140A7A294 (ExpLogRefreshTimeZoneInformationSuccess.c)
 *     ExpWriteTimeZoneBiasStartEnd @ 0x140A7A4A0 (ExpWriteTimeZoneBiasStartEnd.c)
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
  BOOLEAN v11; // r9
  bool SiloTimeZoneMarker; // al
  wchar_t *v13; // rcx
  _OWORD *v14; // rax
  __int128 v15; // xmm1
  int v16; // r9d
  int v17; // ecx
  __int64 v19; // rsi
  LARGE_INTEGER v20; // rbx
  int RegistryHandle; // edi
  int v22; // edi
  BOOLEAN v23; // r9
  LARGE_INTEGER v24; // rdi
  LARGE_INTEGER v25; // rbx
  int v26; // ecx
  int v27; // edi
  void *v28; // r15
  __int64 v29; // r13
  int v30; // eax
  int v31; // eax
  __int64 v32; // rdi
  wchar_t *v33; // rcx
  _OWORD *v34; // rax
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int16 Year; // di
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  int v42; // edx
  __int16 v43; // bx
  int v44; // r9d
  char v45; // [rsp+48h] [rbp-C0h]
  LARGE_INTEGER LocalTime; // [rsp+50h] [rbp-B8h] BYREF
  LARGE_INTEGER Time; // [rsp+60h] [rbp-A8h] BYREF
  LARGE_INTEGER v48; // [rsp+68h] [rbp-A0h] BYREF
  LARGE_INTEGER v49; // [rsp+70h] [rbp-98h] BYREF
  __int64 v50; // [rsp+78h] [rbp-90h]
  unsigned __int64 Buffer; // [rsp+80h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+90h] [rbp-78h] BYREF
  LARGE_INTEGER v54; // [rsp+98h] [rbp-70h] BYREF
  LARGE_INTEGER v55; // [rsp+A0h] [rbp-68h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+A8h] [rbp-60h] BYREF
  ULONG BufferLengthOut[4]; // [rsp+B8h] [rbp-50h] BYREF
  wchar_t Buf2[34]; // [rsp+C8h] [rbp-40h] BYREF
  _TIME_FIELDS CutoverTime; // [rsp+10Ch] [rbp+4h] BYREF
  int v60; // [rsp+11Ch] [rbp+14h]
  _TIME_FIELDS v61; // [rsp+160h] [rbp+58h] BYREF
  int v62; // [rsp+170h] [rbp+68h]
  __int16 v63; // [rsp+174h] [rbp+6Ch]
  char v64; // [rsp+274h] [rbp+16Ch]
  WCHAR TargetPath[264]; // [rsp+278h] [rbp+170h] BYREF

  memset_0(Buf2, 0, 0x1B0uLL);
  TimeFields = 0LL;
  SystemTime.QuadPart = 0LL;
  v2 = 0;
  v54.QuadPart = 0LL;
  v3 = 1;
  v48.QuadPart = 0LL;
  v4 = 0LL;
  Buffer = 0LL;
  v45 = 0;
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
         || (SiloTimeZoneMarker = ExpReadSiloTimeZoneMarker(), v13 = Buf2, SiloTimeZoneMarker) )
  {
    TimeZoneInformationWorker = RtlpQueryTimeZoneInformationWorker((char *)Buf2, 0x1B0uLL);
  }
  else
  {
    v9 = 3LL;
    v14 = (_OWORD *)v8;
    do
    {
      *(_OWORD *)v13 = *v14;
      *((_OWORD *)v13 + 1) = v14[1];
      *((_OWORD *)v13 + 2) = v14[2];
      *((_OWORD *)v13 + 3) = v14[3];
      *((_OWORD *)v13 + 4) = v14[4];
      *((_OWORD *)v13 + 5) = v14[5];
      *((_OWORD *)v13 + 6) = v14[6];
      v13 += 64;
      v15 = v14[7];
      v14 += 8;
      *((_OWORD *)v13 - 1) = v15;
      --v9;
    }
    while ( v9 );
    TimeZoneInformationWorker = 0;
    *(_OWORD *)v13 = *v14;
    *((_OWORD *)v13 + 1) = v14[1];
    *((_OWORD *)v13 + 2) = v14[2];
  }
  if ( TimeZoneInformationWorker < 0 )
  {
    ++*(_DWORD *)(v8 + 1000);
    LOBYTE(v9) = v3;
    ExpSystemIsInCmosMode = 1;
    ExpLogRefreshTimeZoneInformationQueryFail((unsigned int)TimeZoneInformationWorker, v9);
    v16 = 0;
    v17 = 1;
LABEL_17:
    EtwTraceTimeZoneInformationRefresh(v17, *(_DWORD *)(v8 + 436), *(_DWORD *)(v8 + 432), v16, v3);
    return 0;
  }
  v19 = MEMORY[0xFFFFF78000000014];
  v20.QuadPart = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v8 + 440);
  Time = v20;
  if ( !v64 )
  {
    if ( v63 )
    {
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( RtlpCheckDynamicTimeZoneInformation((char *)Buf2, TimeFields.Year) )
      {
        v2 = 1;
        v45 = 1;
LABEL_27:
        RtlpSetTimeZoneInformationWorker(Buf2, 0x1B0u);
        goto LABEL_28;
      }
    }
  }
  if ( v3
    && RtlGetPersistedStateLocation(
         L"TimeZoneInformationSettings",
         L"TargetNtPath",
         0LL,
         LocationTypeRegistry,
         TargetPath,
         0x208u,
         BufferLengthOut) >= 0 )
  {
    Handle = 0LL;
    RegistryHandle = RtlpGetRegistryHandle(0, TargetPath, 0, &Handle);
    v2 = RegistryHandle == -1073741772;
    v45 = v2;
    if ( Handle )
      ZwClose(Handle);
    if ( RegistryHandle == -1073741772 )
      goto LABEL_27;
  }
LABEL_28:
  v22 = *(_DWORD *)Buf2;
  v49.QuadPart = -1LL;
  v55.QuadPart = -1LL;
  LODWORD(v50) = *(_DWORD *)Buf2;
  if ( CutoverTime.Month && v61.Month )
  {
    if ( !RtlCutoverTimeToSystemTime(&CutoverTime, &SystemTime, &Time, v11) )
    {
      ++*(_DWORD *)(v8 + 1000);
      ExpSystemIsInCmosMode = 1;
      ExpLogRefreshTimeZoneInformationCutoverFail();
      LOBYTE(v16) = v45;
      v17 = 2;
      goto LABEL_17;
    }
    v24 = SystemTime;
    v49 = SystemTime;
    if ( !RtlCutoverTimeToSystemTime(&v61, &v54, &Time, v23) )
    {
      ++*(_DWORD *)(v8 + 1000);
      ExpSystemIsInCmosMode = 1;
      ExpLogRefreshTimeZoneInformationCutoverFail();
      LOBYTE(v16) = v2;
      v17 = 3;
      goto LABEL_17;
    }
    v55 = v54;
    if ( v20.QuadPart >= v54.QuadPart && v20.QuadPart >= v24.QuadPart )
    {
      LocalTime.QuadPart = 0LL;
      v25.QuadPart = 0LL;
      v26 = (v24.QuadPart <= v54.QuadPart) + 1;
LABEL_44:
      v27 = v50;
      v28 = (void *)(v8 + 432);
      v29 = v8 + 512;
      *(_DWORD *)(v8 + 432) = v26;
      v30 = v60;
      if ( v26 == 2 )
        v30 = v62;
      v22 = v30 + v27;
      goto LABEL_48;
    }
    if ( v54.QuadPart >= v24.QuadPart )
    {
      if ( v20.QuadPart >= v24.QuadPart && v20.QuadPart < v54.QuadPart )
        goto LABEL_40;
    }
    else if ( v20.QuadPart < v54.QuadPart || v20.QuadPart >= v24.QuadPart )
    {
LABEL_40:
      v25 = v54;
      LocalTime = v54;
      v26 = 1;
      goto LABEL_44;
    }
    v25 = v24;
    v26 = 2;
    LocalTime = v24;
    goto LABEL_44;
  }
  v29 = v8 + 512;
  KeCancelTimer((PKTIMER)(v8 + 512));
  v28 = (void *)(v8 + 432);
  *(_DWORD *)(v8 + 432) = 0;
  v25.QuadPart = 0LL;
  LocalTime.QuadPart = 0LL;
LABEL_48:
  if ( *(_DWORD *)(v8 + 436) != v22 )
  {
    Buffer = 0xFFFFFFFF00000000uLL;
    ZwUpdateWnfStateData(&WNF_SEB_TIME_ZONE_CHANGE, &Buffer, 8u, 0LL, 0LL, 0, 0);
    EtwTraceTimeZoneBiasChange(v22, *(_DWORD *)(v8 + 436));
  }
  v31 = 60 * v22;
  *(_DWORD *)(v8 + 436) = v22;
  v32 = 3LL;
  v33 = Buf2;
  *(_QWORD *)(v8 + 440) = 10000000LL * v31;
  v34 = (_OWORD *)v8;
  do
  {
    *v34 = *(_OWORD *)v33;
    v34[1] = *((_OWORD *)v33 + 1);
    v34[2] = *((_OWORD *)v33 + 2);
    v34[3] = *((_OWORD *)v33 + 3);
    v34[4] = *((_OWORD *)v33 + 4);
    v34[5] = *((_OWORD *)v33 + 5);
    v34[6] = *((_OWORD *)v33 + 6);
    v34 += 8;
    v35 = *((_OWORD *)v33 + 7);
    v33 += 64;
    *(v34 - 1) = v35;
    --v32;
  }
  while ( v32 );
  v36 = *(_OWORD *)v33;
  ExpSystemIsInCmosMode = 0;
  *v34 = v36;
  v34[1] = *((_OWORD *)v33 + 1);
  v34[2] = *((_OWORD *)v33 + 2);
  RtlSetSystemGlobalData(GlobalDataIdTimeZoneId, v28, 4u);
  RtlTimeToTimeFields(&Time, &TimeFields);
  if ( v25.QuadPart )
  {
    ExLocalTimeToSystemTime(&LocalTime, (PLARGE_INTEGER)(v8 + 992));
    KiSetTimerEx(v29, *(_QWORD *)(v8 + 992), 0, 0, v8 + 448);
  }
  Year = TimeFields.Year;
  *(_WORD *)(v8 + 944) = 100 * (TimeFields.Year / 100 + 1);
  RtlTimeFieldsToTime((PTIME_FIELDS)(v8 + 944), &v48);
  ExLocalTimeToSystemTime(&v48, (PLARGE_INTEGER)(v8 + 936));
  KiSetTimerEx(v8 + 672, *(_QWORD *)(v8 + 936), 0, 0, v8 + 608);
  *(_WORD *)(v8 + 968) = Year + 1;
  RtlTimeFieldsToTime((PTIME_FIELDS)(v8 + 968), &v48);
  ExLocalTimeToSystemTime(&v48, (PLARGE_INTEGER)(v8 + 960));
  KiSetTimerEx(v8 + 832, *(_QWORD *)(v8 + 960), 0, 0, v8 + 768);
  _InterlockedAdd((volatile signed __int32 *)(MmWriteableSharedUserData + 604), 1u);
  ExpWriteTimeZoneBias(v8 + 440, v38, v39, v40);
  if ( LocalTime.QuadPart )
    v41 = *(_QWORD *)(v8 + 992);
  else
    v41 = *(_QWORD *)(v8 + 960) - 10000LL;
  ExpWriteTimeZoneBiasStartEnd(v19, v41);
  _InterlockedAdd((volatile signed __int32 *)(MmWriteableSharedUserData + 604), 1u);
  if ( !ExpRealTimeIsUniversal )
    RtlSetActiveTimeBias(*(unsigned int *)(v8 + 436));
  v43 = TimeFields.Year;
  if ( TimeFields.Year != *(_WORD *)(v8 + 984) )
  {
    if ( RtlpUpdateDynamicTimeZones(TimeFields.Year) )
      *(_WORD *)(v8 + 984) = v43;
  }
  LOBYTE(v42) = v3;
  ExpLogRefreshTimeZoneInformationSuccess(
    (unsigned int)Buf2,
    v42,
    (unsigned int)&v49,
    (unsigned int)&v55,
    (__int64)&LocalTime);
  LOBYTE(v44) = v45;
  EtwTraceTimeZoneInformationRefresh(0, *(_DWORD *)(v8 + 436), *(_DWORD *)(v8 + 432), v44, v3);
  return 1;
}
