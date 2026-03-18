/*
 * XREFs of EtwRegister @ 0x1408B7480
 * Callers:
 *     KiIntSteerConnect @ 0x14020213C (KiIntSteerConnect.c)
 *     PsDispatchIumService @ 0x14048F2F0 (PsDispatchIumService.c)
 *     BapdWriteEtwEvents @ 0x1404A4354 (BapdWriteEtwEvents.c)
 *     BapdRegisterEtwProvider @ 0x1404A47C8 (BapdRegisterEtwProvider.c)
 *     McGenEventRegister_EtwRegister @ 0x14057A434 (McGenEventRegister_EtwRegister.c)
 *     HvlpEtwRegister @ 0x140587B34 (HvlpEtwRegister.c)
 *     IoInitializeLiveDump @ 0x14059433C (IoInitializeLiveDump.c)
 *     DifEtwRegisterWrapper @ 0x14060F1D0 (DifEtwRegisterWrapper.c)
 *     HalpMiscInitializeTelemetry @ 0x1406F2894 (HalpMiscInitializeTelemetry.c)
 *     DbgkCaptureLiveDump @ 0x1406FBB5C (DbgkCaptureLiveDump.c)
 *     FsRtlpDedupChangeRegisterVolume @ 0x140700E00 (FsRtlpDedupChangeRegisterVolume.c)
 *     FsRtlpHeatRegisterVolume @ 0x1407017FC (FsRtlpHeatRegisterVolume.c)
 *     PopDiagSleepStudyInitialize @ 0x140749184 (PopDiagSleepStudyInitialize.c)
 *     SSHSupportEtwRegister @ 0x140757F48 (SSHSupportEtwRegister.c)
 *     WdipSemEnableSemProvider @ 0x140793FAC (WdipSemEnableSemProvider.c)
 *     PfSnBeginBootPhase @ 0x140B4B714 (PfSnBeginBootPhase.c)
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140C0DF14 (IopInitializePlugPlayServices.c)
 *     KseInitialize @ 0x140C1A2FC (KseInitialize.c)
 *     PopDiagInitialize @ 0x140C1DDA4 (PopDiagInitialize.c)
 *     PopBatteryInitPhaseTwo @ 0x140C20C4C (PopBatteryInitPhaseTwo.c)
 *     PerfDiagInitialize @ 0x140C2B3A4 (PerfDiagInitialize.c)
 *     EtwpInitialize @ 0x140C2BE1C (EtwpInitialize.c)
 *     WheapInitializeEventing @ 0x140C33838 (WheapInitializeEventing.c)
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 *     SmInitSystem @ 0x140C54CC4 (SmInitSystem.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpRegisterKMProvider @ 0x1408B74C4 (EtwpRegisterKMProvider.c)
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
