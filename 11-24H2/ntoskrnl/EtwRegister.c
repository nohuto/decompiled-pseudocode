/*
 * XREFs of EtwRegister @ 0x140A574E0
 * Callers:
 *     KiIntSteerConnect @ 0x1403B7680 (KiIntSteerConnect.c)
 *     PsDispatchIumService @ 0x14048D020 (PsDispatchIumService.c)
 *     BapdWriteEtwEvents @ 0x1404A4884 (BapdWriteEtwEvents.c)
 *     BapdRegisterEtwProvider @ 0x1404A4CF8 (BapdRegisterEtwProvider.c)
 *     McGenEventRegister_EtwRegister @ 0x14057D754 (McGenEventRegister_EtwRegister.c)
 *     HvlpEtwRegister @ 0x14058B1A4 (HvlpEtwRegister.c)
 *     IoInitializeLiveDump @ 0x140597A4C (IoInitializeLiveDump.c)
 *     DifEtwRegisterWrapper @ 0x14061B190 (DifEtwRegisterWrapper.c)
 *     HalpMiscInitializeTelemetry @ 0x1406FE684 (HalpMiscInitializeTelemetry.c)
 *     DbgkCaptureLiveDump @ 0x140707A3C (DbgkCaptureLiveDump.c)
 *     FsRtlpDedupChangeRegisterVolume @ 0x14070CCE0 (FsRtlpDedupChangeRegisterVolume.c)
 *     FsRtlpHeatRegisterVolume @ 0x14070D6DC (FsRtlpHeatRegisterVolume.c)
 *     PopDiagSleepStudyInitialize @ 0x140755254 (PopDiagSleepStudyInitialize.c)
 *     SSHSupportEtwRegister @ 0x140767908 (SSHSupportEtwRegister.c)
 *     WdipSemEnableSemProvider @ 0x1407A3384 (WdipSemEnableSemProvider.c)
 *     PfSnBeginBootPhase @ 0x140B5B684 (PfSnBeginBootPhase.c)
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140C1F07C (IopInitializePlugPlayServices.c)
 *     KseInitialize @ 0x140C2B3FC (KseInitialize.c)
 *     PopDiagInitialize @ 0x140C2EEA0 (PopDiagInitialize.c)
 *     PopBatteryInitPhaseTwo @ 0x140C31D4C (PopBatteryInitPhaseTwo.c)
 *     PpmEventInitialize @ 0x140C332E8 (PpmEventInitialize.c)
 *     PpmEventInitializeEx @ 0x140C3411C (PpmEventInitializeEx.c)
 *     PerfDiagInitialize @ 0x140C3C684 (PerfDiagInitialize.c)
 *     EtwpInitialize @ 0x140C3D0FC (EtwpInitialize.c)
 *     WheapInitializeEventing @ 0x140C44B04 (WheapInitializeEventing.c)
 *     SmInitSystem @ 0x140C6694C (SmInitSystem.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpRegisterKMProvider @ 0x140A57524 (EtwpRegisterKMProvider.c)
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
