/*
 * XREFs of PipIsDevNodeDNStarted @ 0x1404DD25C
 * Callers:
 *     PipSetDevNodeState @ 0x14048D998 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x1404DD2C0 (PipRestoreDevNodeState.c)
 *     IoReportDetectedDevice @ 0x14071A3E0 (IoReportDetectedDevice.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x1408CEFD8 (PiControlGetUserFlagsFromDeviceNode.c)
 *     PnpCheckForActiveDependencies @ 0x1409BDBB4 (PnpCheckForActiveDependencies.c)
 *     PnpProcessDependencyRelations @ 0x1409BF64C (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1409BF7EC (PnpRequestDeviceRemovalWorker.c)
 *     PiDevCfgConfigureDevice @ 0x1409CA478 (PiDevCfgConfigureDevice.c)
 *     PiControlGetDevicePowerData @ 0x140A5B688 (PiControlGetDevicePowerData.c)
 *     PnpDriverLoadingFailed @ 0x140A9C798 (PnpDriverLoadingFailed.c)
 *     PiDevCfgLogDeviceStarted @ 0x140AA1894 (PiDevCfgLogDeviceStarted.c)
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
