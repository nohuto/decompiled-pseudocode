/*
 * XREFs of TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140A57414
 * Callers:
 *     IoInitializeLiveDump @ 0x140597A4C (IoInitializeLiveDump.c)
 *     IopInitializeSystemVariableService @ 0x14059F250 (IopInitializeSystemVariableService.c)
 *     KcsanInitSystem @ 0x1405AE2A0 (KcsanInitSystem.c)
 *     PdcInitializeETW @ 0x140607A64 (PdcInitializeETW.c)
 *     CarEtwRegister @ 0x1406159C4 (CarEtwRegister.c)
 *     PrExtLogToTelemetry @ 0x140664244 (PrExtLogToTelemetry.c)
 *     UcInitialize @ 0x140694538 (UcInitialize.c)
 *     HalpMiscInitializeTelemetry @ 0x1406FE684 (HalpMiscInitializeTelemetry.c)
 *     PopAdaptiveStandbyInitialize @ 0x1407617F8 (PopAdaptiveStandbyInitialize.c)
 *     TtmInit @ 0x140769B20 (TtmInit.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x14078CD90 (RtlpCapChkTelemetryRunOnce.c)
 *     EtwpInitializeCoverage @ 0x1407AB408 (EtwpInitializeCoverage.c)
 *     VRegSetup @ 0x140829110 (VRegSetup.c)
 *     TlgRegisterAggregateProviderEx @ 0x140AC2794 (TlgRegisterAggregateProviderEx.c)
 *     BapdRecordFirmwareBootStats @ 0x140B60CB0 (BapdRecordFirmwareBootStats.c)
 *     CcInitializeTelemetry @ 0x140BDE6B0 (CcInitializeTelemetry.c)
 *     VmInitSystem @ 0x140BDE898 (VmInitSystem.c)
 *     VslpIumInitializeTelemetry @ 0x140C19C74 (VslpIumInitializeTelemetry.c)
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140C1F07C (IopInitializePlugPlayServices.c)
 *     KasanInitSystem @ 0x140C26690 (KasanInitSystem.c)
 *     PopDiagInitialize @ 0x140C2EEA0 (PopDiagInitialize.c)
 *     PopDirectedDripsDiagInitialize @ 0x140C33984 (PopDirectedDripsDiagInitialize.c)
 *     SshInitialize @ 0x140C341AC (SshInitialize.c)
 *     PspInitPhase2 @ 0x140C3516C (PspInitPhase2.c)
 *     EtwpInitialize @ 0x140C3D0FC (EtwpInitialize.c)
 *     EtwpInitializeCoverageSampler @ 0x140C3EAD0 (EtwpInitializeCoverageSampler.c)
 *     Phase1InitializationIoReady @ 0x140C5FB78 (Phase1InitializationIoReady.c)
 *     SeRmInitPhase1 @ 0x140C6024C (SeRmInitPhase1.c)
 *     KeInitSystem @ 0x140C60CE0 (KeInitSystem.c)
 *     ObInitSystem @ 0x140C612B4 (ObInitSystem.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     EtwpRegisterKMProvider @ 0x140A57524 (EtwpRegisterKMProvider.c)
 *     EtwSetInformation @ 0x140AA4AB0 (EtwSetInformation.c)
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
