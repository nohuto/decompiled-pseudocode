/*
 * XREFs of ProcLibTraceControlCallback @ 0x14003D7C0
 * Callers:
 *     <none>
 * Callees:
 *     EnumerateNextDevice @ 0x140001490 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x14000305C (ResetEnumerationContext.c)
 *     InitializeEnumerationContext @ 0x140003C50 (InitializeEnumerationContext.c)
 *     ProcLibTraceRegisterGroupEvents @ 0x140004BD0 (ProcLibTraceRegisterGroupEvents.c)
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
 *     ProcLibTraceProcessorIdsHv @ 0x140022020 (ProcLibTraceProcessorIdsHv.c)
 *     ProcLibTraceIdleStatesErrata @ 0x14002346C (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1400234EC (ProcLibTracePccErrata.c)
 *     ProcLibTracePepPerfDomain @ 0x140023518 (ProcLibTracePepPerfDomain.c)
 *     ProcLibTracePerfStatesErrata @ 0x140023740 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x14002376C (ProcLibTraceThrottleStatesErrata.c)
 *     ProcLibTracePccSummary @ 0x14003D1D8 (ProcLibTracePccSummary.c)
 *     ProcLibTracePlatformIdleStates @ 0x14003D2C4 (ProcLibTracePlatformIdleStates.c)
 *     ProcLibTraceCoordinatedLpiStates @ 0x14003D540 (ProcLibTraceCoordinatedLpiStates.c)
 *     ProcLibTraceProcessorRundown @ 0x14003DA74 (ProcLibTraceProcessorRundown.c)
 *     ProcLibTraceQueryCapabilities @ 0x14003DCAC (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x14003DE14 (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x14003E0A0 (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x14003E360 (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTracePerfStatesRundown @ 0x14003E5A4 (ProcLibTracePerfStatesRundown.c)
 *     ProcLibTraceSummary @ 0x14003E720 (ProcLibTraceSummary.c)
 *     ProcLibTraceSummary2 @ 0x14003EA70 (ProcLibTraceSummary2.c)
 *     ProcLibTracePepPerfCapabilities @ 0x14003EEB8 (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x14003F1D0 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x14003F3E4 (ProcLibTraceProcessorLpiRundown.c)
 *     ProcLibTraceProcessorIds @ 0x14003F678 (ProcLibTraceProcessorIds.c)
 *     ProcLibTraceGetPlatformIdleStates @ 0x14003F78C (ProcLibTraceGetPlatformIdleStates.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x14003F82C (ProcLibTraceCoordinatedIdleStates.c)
 *     ProcLibTraceCStateDomainRundown @ 0x1400402EC (ProcLibTraceCStateDomainRundown.c)
 *     ProcLibTracePStateDomainRundown @ 0x140040774 (ProcLibTracePStateDomainRundown.c)
 *     ProcLibTraceEnergyEsuRundown @ 0x140040FC0 (ProcLibTraceEnergyEsuRundown.c)
 */

void __fastcall ProcLibTraceControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  __int64 *i; // rbx
  unsigned __int8 *j; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  bool v13; // zf
  void (__fastcall *v14)(PWDF_DRIVER_GLOBALS, __int64); // rax
  char **v15; // rsi
  __int64 v16; // rbp
  char *v17; // rdi
  char *k; // rbx
  __int64 v19; // [rsp+20h] [rbp-38h] BYREF
  __int64 v20[6]; // [rsp+28h] [rbp-30h] BYREF

  if ( ControlCode == 2 )
  {
    v19 = 0LL;
    memset(v20, 0, 32);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, ULONGLONG))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1400145A8,
      0LL,
      MatchAnyKeyword);
    ProcLibTracePccSummary();
    for ( i = (__int64 *)qword_140014618; i != &qword_140014618; i = (__int64 *)*i )
      ProcLibTraceCStateDomainRundown(i);
    for ( j = (unsigned __int8 *)qword_1400145F8; j != (unsigned __int8 *)&qword_1400145F8; j = *(unsigned __int8 **)j )
    {
      ProcLibTracePStateDomainRundown(j);
      if ( j[48] )
        ProcLibTracePepPerfDomain(j, 1);
    }
    if ( (dword_140014B44 & 0x7F077) != 0 )
      ProcLibTraceIdleStatesErrata(1);
    if ( (dword_140014B44 & 0x70000000) != 0 )
      ProcLibTracePerfStatesErrata(1);
    if ( (dword_140014B44 & 0x3300000) != 0 )
      ProcLibTraceThrottleStatesErrata(1);
    if ( dword_140014B44 < 0 )
      ProcLibTracePccErrata(1);
    InitializeEnumerationContext((__int64)&qword_1400145E8, 32, (__int64)v20);
    LOBYTE(v6) = 1;
    ProcLibTraceGetPlatformIdleStates(v6);
    ProcLibTracePlatformIdleStates(1);
    LOBYTE(v7) = 1;
    ProcLibTraceCoordinatedIdleStates(v7);
    ProcLibTraceCoordinatedLpiStates();
    if ( _bittest64(Globals, 0x25u) )
      ProcLibTraceEnergyEsuRundown();
    ResetEnumerationContext(v20);
    while ( 1 )
    {
      v13 = (unsigned int)EnumerateNextDevice(v20, &v19) == 0;
      v14 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512);
      if ( !v13 )
        break;
      v14(WdfDriverGlobals, qword_1400145A8);
      v8 = v19;
      ProcLibTraceProcessorRundown(v19);
      ProcLibTraceSummary(v8);
      LOBYTE(v9) = 1;
      ProcLibTraceSummary2(v8, v9);
      ProcLibTracePerfStatesRundown(v8);
      ProcLibTraceBiosPStatesRundown(v8);
      ProcLibTraceBiosCStatesRundown(v8);
      ProcLibTraceBiosTStatesRundown(v8);
      ProcLibTraceProcessorLpiRundown(v8);
      LOBYTE(v10) = 1;
      ProcLibTraceQueryCapabilities(v8, v10);
      LOBYTE(v11) = 1;
      ProcLibTraceGetProcessorIdleStatesV2(v8, v11);
      LOBYTE(v12) = 1;
      ProcLibTracePepPerfCapabilities(v8, v12);
      if ( *(_DWORD *)(v8 + 80) == 1 )
        ProcLibTraceProcessorIdsHv(v8);
      else
        ProcLibTraceProcessorIds(v8);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1400145A8,
        0LL);
    }
    v14(WdfDriverGlobals, qword_1400145A8);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1400145C0,
      0LL);
    v15 = (char **)&unk_1400145C8;
    v16 = 2LL;
    v17 = (char *)&unk_1400145C8;
    do
    {
      for ( k = *v15; k != v17; k = *(char **)k )
        ProcLibTraceRegisterGroupEvents((__int64)k, 2u);
      v17 += 16;
      v15 += 2;
      --v16;
    }
    while ( v16 );
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1400145C0);
  }
}
