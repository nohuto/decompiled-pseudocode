/*
 * XREFs of EtwRegister @ 0x1409EA180
 * Callers:
 *     KiIntSteerConnect @ 0x1402B3934 (KiIntSteerConnect.c)
 *     BapdWriteEtwEvents @ 0x14049F614 (BapdWriteEtwEvents.c)
 *     BapdRegisterEtwProvider @ 0x14049FA88 (BapdRegisterEtwProvider.c)
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 *     McGenEventRegister_EtwRegister @ 0x14057ABE4 (McGenEventRegister_EtwRegister.c)
 *     HvlpEtwRegister @ 0x140588494 (HvlpEtwRegister.c)
 *     IoInitializeLiveDump @ 0x1405949C8 (IoInitializeLiveDump.c)
 *     DifEtwRegisterWrapper @ 0x140619750 (DifEtwRegisterWrapper.c)
 *     HalpMiscInitializeTelemetry @ 0x1406FC2C4 (HalpMiscInitializeTelemetry.c)
 *     DbgkCaptureLiveDump @ 0x1407055FC (DbgkCaptureLiveDump.c)
 *     FsRtlpDedupChangeRegisterVolume @ 0x14070A880 (FsRtlpDedupChangeRegisterVolume.c)
 *     FsRtlpHeatRegisterVolume @ 0x14070B27C (FsRtlpHeatRegisterVolume.c)
 *     PopDiagSleepStudyInitialize @ 0x140753574 (PopDiagSleepStudyInitialize.c)
 *     SSHSupportEtwRegister @ 0x140767B38 (SSHSupportEtwRegister.c)
 *     WdipSemEnableSemProvider @ 0x1407A3494 (WdipSemEnableSemProvider.c)
 *     PfSnBeginBootPhase @ 0x140B5D6F4 (PfSnBeginBootPhase.c)
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 *     KseInitialize @ 0x140C2D51C (KseInitialize.c)
 *     PopDiagInitialize @ 0x140C30FC0 (PopDiagInitialize.c)
 *     PopBatteryInitPhaseTwo @ 0x140C33E6C (PopBatteryInitPhaseTwo.c)
 *     PpmEventInitialize @ 0x140C35428 (PpmEventInitialize.c)
 *     PpmEventInitializeEx @ 0x140C3625C (PpmEventInitializeEx.c)
 *     PerfDiagInitialize @ 0x140C3E7DC (PerfDiagInitialize.c)
 *     EtwpInitialize @ 0x140C3F24C (EtwpInitialize.c)
 *     WheapInitializeEventing @ 0x140C46C54 (WheapInitializeEventing.c)
 *     SmInitSystem @ 0x140C68AC8 (SmInitSystem.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpRegisterKMProvider @ 0x1409EA1C4 (EtwpRegisterKMProvider.c)
 */

NTSTATUS __stdcall EtwRegister(
        LPCGUID ProviderId,
        PETWENABLECALLBACK EnableCallback,
        PVOID CallbackContext,
        PREGHANDLE RegHandle)
{
  struct _LIST_ENTRY *Flink; // rcx
  int v5; // edx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // r10d
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
  return EtwpRegisterKMProvider((_DWORD)Flink, v8, 3, v5, v6, retaddr, v7);
}
