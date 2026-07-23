/*
 * XREFs of TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1409EA0B8
 * Callers:
 *     IoInitializeLiveDump @ 0x1405949C8 (IoInitializeLiveDump.c)
 *     IopInitializeSystemVariableService @ 0x14059C1D0 (IopInitializeSystemVariableService.c)
 *     KcsanInitSystem @ 0x1405AB210 (KcsanInitSystem.c)
 *     PdcInitializeETW @ 0x14060506C (PdcInitializeETW.c)
 *     CarEtwRegister @ 0x140613F84 (CarEtwRegister.c)
 *     PrExtLogToTelemetry @ 0x140662B34 (PrExtLogToTelemetry.c)
 *     UcInitialize @ 0x140695608 (UcInitialize.c)
 *     HalpMiscInitializeTelemetry @ 0x1406FC2C4 (HalpMiscInitializeTelemetry.c)
 *     PopAdaptiveStandbyInitialize @ 0x140760B64 (PopAdaptiveStandbyInitialize.c)
 *     TtmInit @ 0x140769D40 (TtmInit.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x14078CCC0 (RtlpCapChkTelemetryRunOnce.c)
 *     EtwpInitializeCoverage @ 0x1407AB8D8 (EtwpInitializeCoverage.c)
 *     VRegSetup @ 0x140829940 (VRegSetup.c)
 *     TlgRegisterAggregateProviderEx @ 0x140ABDA7C (TlgRegisterAggregateProviderEx.c)
 *     BapdRecordFirmwareBootStats @ 0x140B62D80 (BapdRecordFirmwareBootStats.c)
 *     CcInitializeTelemetry @ 0x140BE06B0 (CcInitializeTelemetry.c)
 *     VmInitSystem @ 0x140BE0898 (VmInitSystem.c)
 *     VslpIumInitializeTelemetry @ 0x140C1BCAC (VslpIumInitializeTelemetry.c)
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 *     KasanInitSystem @ 0x140C286E0 (KasanInitSystem.c)
 *     PopDiagInitialize @ 0x140C30FC0 (PopDiagInitialize.c)
 *     PopDirectedDripsDiagInitialize @ 0x140C35AC4 (PopDirectedDripsDiagInitialize.c)
 *     SshInitialize @ 0x140C362EC (SshInitialize.c)
 *     PspInitPhase2 @ 0x140C372AC (PspInitPhase2.c)
 *     EtwpInitialize @ 0x140C3F24C (EtwpInitialize.c)
 *     EtwpInitializeCoverageSampler @ 0x140C40C20 (EtwpInitializeCoverageSampler.c)
 *     Phase1InitializationIoReady @ 0x140C61CC8 (Phase1InitializationIoReady.c)
 *     SeRmInitPhase1 @ 0x140C6239C (SeRmInitPhase1.c)
 *     KeInitSystem @ 0x140C62E30 (KeInitSystem.c)
 *     ObInitSystem @ 0x140C63408 (ObInitSystem.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     EtwpRegisterKMProvider @ 0x1409EA1C4 (EtwpRegisterKMProvider.c)
 *     EtwSetInformation @ 0x140AD9290 (EtwSetInformation.c)
 */

__int64 __fastcall TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(__int64 a1, __int64 a2, __int64 a3)
{
  REGHANDLE *v3; // rdi
  bool v4; // zf
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned int v7; // esi
  __int128 v9; // [rsp+40h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  v3 = (REGHANDLE *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 32) == 0LL;
  v9 = *(_OWORD *)(*(_QWORD *)(a1 + 8) - 16LL);
  if ( !v4 )
    __fastfail(5u);
  *(_QWORD *)(a1 + 40) = a2;
  *(_QWORD *)(a1 + 48) = a3;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v7 = EtwpRegisterKMProvider(
         CurrentServerSiloGlobals[52].Flink,
         (unsigned int)&v9,
         3,
         (unsigned int)tlgEnableCallback,
         a1,
         retaddr,
         (__int64)v3);
  if ( !v7 )
    EtwSetInformation(*v3, EventProviderSetTraits, *(PVOID *)(a1 + 8), **(unsigned __int16 **)(a1 + 8));
  return v7;
}
