/*
 * XREFs of VfNotifyVerifierOfEvent @ 0x140B84EA0
 * Callers:
 *     KeBugCheck2 @ 0x1405AE6F0 (KeBugCheck2.c)
 *     IoShutdownSystem @ 0x140B5579C (IoShutdownSystem.c)
 *     KdExitDebugger @ 0x140B77008 (KdExitDebugger.c)
 *     KdEnterDebugger @ 0x140B7C96C (KdEnterDebugger.c)
 *     IoInitSystem @ 0x140C1C9C8 (IoInitSystem.c)
 *     Phase1InitializationIoReady @ 0x140C61CC8 (Phase1InitializationIoReady.c)
 * Callees:
 *     VfClearVerifierSettings @ 0x14060E360 (VfClearVerifierSettings.c)
 *     VfUtilDbgPrint @ 0x14060E85C (VfUtilDbgPrint.c)
 *     DifNotifyPluginSystemEvent @ 0x140616F68 (DifNotifyPluginSystemEvent.c)
 *     DifUpdatePluginState @ 0x140617534 (DifUpdatePluginState.c)
 *     VfBranchTracingPluginEntry @ 0x140B957E0 (VfBranchTracingPluginEntry.c)
 *     VfStartBranchTracing @ 0x140B95958 (VfStartBranchTracing.c)
 *     VfStopBranchTracing @ 0x140B959E4 (VfStopBranchTracing.c)
 */

void __fastcall VfNotifyVerifierOfEvent(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int started; // eax
  __int32 v6; // r9d
  int v7; // eax

  if ( a1 )
  {
    v1 = a1 - 1;
    if ( v1 )
    {
      v2 = v1 - 1;
      if ( !v2 )
      {
        _InterlockedAdd(&dword_140F04748, 1u);
        _InterlockedExchange(&ViKeTrackIrqlDisabled, 1);
        VfStopBranchTracing();
        _InterlockedExchange(&ViFaultsDisabled, v6);
        return;
      }
      v3 = v2 - 1;
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( v4 )
        {
          if ( v4 == 1 )
          {
            _InterlockedAdd(&dword_140F04754, 1u);
            started = VfStartBranchTracing();
            if ( started < 0 && (MmVerifierData & 0x8000000) != 0 )
              VfUtilDbgPrint("Failed to start branch tracing. <Status == 0x%08X>\n", started);
            if ( (VfOptionFlags & 0x10) != 0 )
            {
              VfUtilDbgPrint("Driver Verifier: VERIFIER_OPTION_ONEBOOT set before boot. Clearing Verifier options from Registry.\n");
              VfClearVerifierSettings();
            }
            DifUpdatePluginState();
            DifNotifyPluginSystemEvent(0, 0LL);
          }
        }
        else
        {
          _InterlockedAdd(&dword_140F04750, 1u);
          VfStartBranchTracing();
        }
        return;
      }
      _InterlockedAdd(&dword_140F0474C, 1u);
    }
    else
    {
      _InterlockedAdd(&dword_140F04744, 1u);
    }
    VfStopBranchTracing();
    return;
  }
  _InterlockedAdd(&ViNotifyEvent, 1u);
  v7 = VfBranchTracingPluginEntry();
  if ( v7 < 0 && (MmVerifierData & 0x8000000) != 0 )
    VfUtilDbgPrint("Failed to initialize branch tracing. <Status == 0x%08X>\n", v7);
}
