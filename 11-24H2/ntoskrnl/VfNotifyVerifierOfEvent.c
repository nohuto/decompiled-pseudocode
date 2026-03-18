/*
 * XREFs of VfNotifyVerifierOfEvent @ 0x140B82EA0
 * Callers:
 *     KeBugCheck2 @ 0x1405B1780 (KeBugCheck2.c)
 *     IoShutdownSystem @ 0x140B5374C (IoShutdownSystem.c)
 *     KdExitDebugger @ 0x140B75008 (KdExitDebugger.c)
 *     KdEnterDebugger @ 0x140B7A96C (KdEnterDebugger.c)
 *     IoInitSystem @ 0x140C1A988 (IoInitSystem.c)
 *     Phase1InitializationIoReady @ 0x140C5FB78 (Phase1InitializationIoReady.c)
 * Callees:
 *     VfClearVerifierSettings @ 0x14060FDA0 (VfClearVerifierSettings.c)
 *     VfUtilDbgPrint @ 0x14061029C (VfUtilDbgPrint.c)
 *     DifNotifyPluginSystemEvent @ 0x1406189A8 (DifNotifyPluginSystemEvent.c)
 *     DifUpdatePluginState @ 0x140618F74 (DifUpdatePluginState.c)
 *     VfBranchTracingPluginEntry @ 0x140B937E0 (VfBranchTracingPluginEntry.c)
 *     VfStartBranchTracing @ 0x140B93958 (VfStartBranchTracing.c)
 *     VfStopBranchTracing @ 0x140B939E4 (VfStopBranchTracing.c)
 */

void __fastcall VfNotifyVerifierOfEvent(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int started; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  __int32 v8; // r9d
  int v9; // eax

  if ( a1 )
  {
    v1 = a1 - 1;
    if ( v1 )
    {
      v2 = v1 - 1;
      if ( !v2 )
      {
        _InterlockedAdd(&dword_140F04568, 1u);
        _InterlockedExchange(&ViKeTrackIrqlDisabled, 1);
        VfStopBranchTracing();
        _InterlockedExchange(&ViFaultsDisabled, v8);
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
            _InterlockedAdd(&dword_140F04574, 1u);
            started = VfStartBranchTracing();
            if ( started < 0 && (MmVerifierData & 0x8000000) != 0 )
              VfUtilDbgPrint("Failed to start branch tracing. <Status == 0x%08X>\n", started);
            if ( (VfOptionFlags & 0x10) != 0 )
            {
              VfUtilDbgPrint("Driver Verifier: VERIFIER_OPTION_ONEBOOT set before boot. Clearing Verifier options from Registry.\n");
              VfClearVerifierSettings();
            }
            DifUpdatePluginState();
            DifNotifyPluginSystemEvent(0, 0LL, v6, v7);
          }
        }
        else
        {
          _InterlockedAdd(&dword_140F04570, 1u);
          VfStartBranchTracing();
        }
        return;
      }
      _InterlockedAdd(&dword_140F0456C, 1u);
    }
    else
    {
      _InterlockedAdd(&dword_140F04564, 1u);
    }
    VfStopBranchTracing();
    return;
  }
  _InterlockedAdd(&ViNotifyEvent, 1u);
  v9 = VfBranchTracingPluginEntry();
  if ( v9 < 0 && (MmVerifierData & 0x8000000) != 0 )
    VfUtilDbgPrint("Failed to initialize branch tracing. <Status == 0x%08X>\n", v9);
}
