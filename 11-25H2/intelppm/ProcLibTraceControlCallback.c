/*
 * XREFs of ProcLibTraceControlCallback @ 0x140041B80
 * Callers:
 *     <none>
 * Callees:
 *     ProcLibTraceRegisterGroupEvents @ 0x140004084 (ProcLibTraceRegisterGroupEvents.c)
 *     EnumerateNextDevice @ 0x140004B78 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1400053BC (ResetEnumerationContext.c)
 *     InitializeEnumerationContext @ 0x1400054C4 (InitializeEnumerationContext.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 *     ProcLibTraceCStateDomainRundown @ 0x14002867C (ProcLibTraceCStateDomainRundown.c)
 *     ProcLibTraceProcessorIdsHv @ 0x140028730 (ProcLibTraceProcessorIdsHv.c)
 *     ProcLibTraceIdleStatesErrata @ 0x14002BF88 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x14002C008 (ProcLibTracePccErrata.c)
 *     ProcLibTracePepPerfDomain @ 0x14002C034 (ProcLibTracePepPerfDomain.c)
 *     ProcLibTracePerfStatesErrata @ 0x14002C25C (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x14002C288 (ProcLibTraceThrottleStatesErrata.c)
 *     ProcLibTracePlatformIdleStates @ 0x1400405EC (ProcLibTracePlatformIdleStates.c)
 *     ProcLibTraceCoordinatedLpiStates @ 0x140040870 (ProcLibTraceCoordinatedLpiStates.c)
 *     ProcLibTraceProcessorRundown @ 0x140041E34 (ProcLibTraceProcessorRundown.c)
 *     ProcLibTraceQueryCapabilities @ 0x14004209C (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x140042204 (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x14004249C (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x140042754 (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTracePerfStatesRundown @ 0x1400429A0 (ProcLibTracePerfStatesRundown.c)
 *     ProcLibTraceSummary @ 0x140042B14 (ProcLibTraceSummary.c)
 *     ProcLibTraceSummary2 @ 0x140042E48 (ProcLibTraceSummary2.c)
 *     ProcLibTracePepPerfCapabilities @ 0x140043298 (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1400435B0 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x1400437BC (ProcLibTraceProcessorLpiRundown.c)
 *     ProcLibTracePStateDomainRundown @ 0x140043A50 (ProcLibTracePStateDomainRundown.c)
 *     ProcLibTraceGetPlatformIdleStates @ 0x140043B08 (ProcLibTraceGetPlatformIdleStates.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x140043BA8 (ProcLibTraceCoordinatedIdleStates.c)
 *     ProcLibTracePccSummary @ 0x140045378 (ProcLibTracePccSummary.c)
 *     ProcLibTraceProcessorIds @ 0x14004597C (ProcLibTraceProcessorIds.c)
 *     ProcLibTraceEnergyEsuRundown @ 0x140045A8C (ProcLibTraceEnergyEsuRundown.c)
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
      qword_140019188,
      0LL,
      MatchAnyKeyword);
    ProcLibTracePccSummary();
    for ( i = (__int64 *)qword_1400191F8; i != &qword_1400191F8; i = (__int64 *)*i )
      ProcLibTraceCStateDomainRundown((__int64)i);
    for ( j = (unsigned __int8 *)qword_1400191D8; j != (unsigned __int8 *)&qword_1400191D8; j = *(unsigned __int8 **)j )
    {
      ProcLibTracePStateDomainRundown(j);
      if ( j[48] )
        ProcLibTracePepPerfDomain(j, 1);
    }
    if ( (dword_140019724 & 0x7F077) != 0 )
      ProcLibTraceIdleStatesErrata(1);
    if ( (dword_140019724 & 0x70000000) != 0 )
      ProcLibTracePerfStatesErrata(1);
    if ( (dword_140019724 & 0x3300000) != 0 )
      ProcLibTraceThrottleStatesErrata(1);
    if ( dword_140019724 < 0 )
      ProcLibTracePccErrata(1);
    InitializeEnumerationContext((__int64)&qword_1400191C8, 32, (__int64)v20);
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
      v14(WdfDriverGlobals, qword_140019188);
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
        qword_140019188,
        0LL);
    }
    v14(WdfDriverGlobals, qword_140019188);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1400191A0,
      0LL);
    v15 = (char **)&unk_1400191A8;
    v16 = 2LL;
    v17 = (char *)&unk_1400191A8;
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
      qword_1400191A0);
  }
}
