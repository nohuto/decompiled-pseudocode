/*
 * XREFs of ProcLibTraceControlCallback @ 0x14003EA10
 * Callers:
 *     <none>
 * Callees:
 *     EnumerateNextDevice @ 0x140001490 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x14000305C (ResetEnumerationContext.c)
 *     InitializeEnumerationContext @ 0x140003C50 (InitializeEnumerationContext.c)
 *     ProcLibTraceRegisterGroupEvents @ 0x140005870 (ProcLibTraceRegisterGroupEvents.c)
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 *     ProcLibTraceProcessorIdsHv @ 0x140023020 (ProcLibTraceProcessorIdsHv.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1400245B8 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x140024638 (ProcLibTracePccErrata.c)
 *     ProcLibTracePepPerfDomain @ 0x140024664 (ProcLibTracePepPerfDomain.c)
 *     ProcLibTracePerfStatesErrata @ 0x14002488C (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1400248B8 (ProcLibTraceThrottleStatesErrata.c)
 *     ProcLibTracePccSummary @ 0x14003E428 (ProcLibTracePccSummary.c)
 *     ProcLibTracePlatformIdleStates @ 0x14003E514 (ProcLibTracePlatformIdleStates.c)
 *     ProcLibTraceCoordinatedLpiStates @ 0x14003E790 (ProcLibTraceCoordinatedLpiStates.c)
 *     ProcLibTraceProcessorRundown @ 0x14003ECC4 (ProcLibTraceProcessorRundown.c)
 *     ProcLibTraceQueryCapabilities @ 0x14003EEFC (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x14003F064 (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x14003F2F0 (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x14003F5B0 (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTracePerfStatesRundown @ 0x14003F7F4 (ProcLibTracePerfStatesRundown.c)
 *     ProcLibTraceSummary @ 0x14003F970 (ProcLibTraceSummary.c)
 *     ProcLibTraceSummary2 @ 0x14003FCC0 (ProcLibTraceSummary2.c)
 *     ProcLibTracePepPerfCapabilities @ 0x140040108 (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x140040420 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x140040634 (ProcLibTraceProcessorLpiRundown.c)
 *     ProcLibTraceProcessorIds @ 0x1400408C8 (ProcLibTraceProcessorIds.c)
 *     ProcLibTraceGetPlatformIdleStates @ 0x1400409DC (ProcLibTraceGetPlatformIdleStates.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x140040A7C (ProcLibTraceCoordinatedIdleStates.c)
 *     ProcLibTraceCStateDomainRundown @ 0x14004153C (ProcLibTraceCStateDomainRundown.c)
 *     ProcLibTracePStateDomainRundown @ 0x1400419C4 (ProcLibTracePStateDomainRundown.c)
 *     ProcLibTraceEnergyEsuRundown @ 0x140042210 (ProcLibTraceEnergyEsuRundown.c)
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
      qword_1400155D8,
      0LL,
      MatchAnyKeyword);
    ProcLibTracePccSummary();
    for ( i = (__int64 *)qword_140015648; i != &qword_140015648; i = (__int64 *)*i )
      ProcLibTraceCStateDomainRundown(i);
    for ( j = (unsigned __int8 *)qword_140015628; j != (unsigned __int8 *)&qword_140015628; j = *(unsigned __int8 **)j )
    {
      ProcLibTracePStateDomainRundown(j);
      if ( j[48] )
        ProcLibTracePepPerfDomain(j, 1);
    }
    if ( (dword_140015B74 & 0x7F077) != 0 )
      ProcLibTraceIdleStatesErrata(1);
    if ( (dword_140015B74 & 0x70000000) != 0 )
      ProcLibTracePerfStatesErrata(1);
    if ( (dword_140015B74 & 0x3300000) != 0 )
      ProcLibTraceThrottleStatesErrata(1);
    if ( dword_140015B74 < 0 )
      ProcLibTracePccErrata(1);
    InitializeEnumerationContext((__int64)&qword_140015618, 32, (__int64)v20);
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
      v14(WdfDriverGlobals, qword_1400155D8);
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
        qword_1400155D8,
        0LL);
    }
    v14(WdfDriverGlobals, qword_1400155D8);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1400155F0,
      0LL);
    v15 = (char **)&unk_1400155F8;
    v16 = 2LL;
    v17 = (char *)&unk_1400155F8;
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
      qword_1400155F0);
  }
}
