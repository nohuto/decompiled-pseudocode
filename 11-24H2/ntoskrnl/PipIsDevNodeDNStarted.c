/*
 * XREFs of PipIsDevNodeDNStarted @ 0x1404E6B60
 * Callers:
 *     PipSetDevNodeState @ 0x140492B28 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x1404E6BC4 (PipRestoreDevNodeState.c)
 *     IoReportDetectedDevice @ 0x14071C850 (IoReportDetectedDevice.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x1408D15E8 (PiControlGetUserFlagsFromDeviceNode.c)
 *     PiDevCfgConfigureDevice @ 0x140997CFC (PiDevCfgConfigureDevice.c)
 *     PnpCheckForActiveDependencies @ 0x140A0F7A4 (PnpCheckForActiveDependencies.c)
 *     PnpProcessDependencyRelations @ 0x140A1123C (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140A113DC (PnpRequestDeviceRemovalWorker.c)
 *     PiControlGetDevicePowerData @ 0x140A62D88 (PiControlGetDevicePowerData.c)
 *     PnpDriverLoadingFailed @ 0x140AA1408 (PnpDriverLoadingFailed.c)
 *     PiDevCfgLogDeviceStarted @ 0x140AA6798 (PiDevCfgLogDeviceStarted.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PipIsDevNodeDNStarted(__int64 a1)
{
  __int64 result; // rax

  switch ( *(_DWORD *)(a1 + 300) )
  {
    case 0x307:
    case 0x308:
    case 0x309:
    case 0x30A:
    case 0x30B:
    case 0x30C:
    case 0x30D:
    case 0x30E:
    case 0x30F:
      result = 1LL;
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}
