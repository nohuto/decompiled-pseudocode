/*
 * XREFs of PipIsDevNodeDNStarted @ 0x1404E6CD4
 * Callers:
 *     PipSetDevNodeState @ 0x140493D48 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x1404E6DA0 (PipRestoreDevNodeState.c)
 *     IoReportDetectedDevice @ 0x140710750 (IoReportDetectedDevice.c)
 *     PnpProcessDependencyRelations @ 0x14082F9A8 (PnpProcessDependencyRelations.c)
 *     PnpCheckForActiveDependencies @ 0x14083248C (PnpCheckForActiveDependencies.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x1408CEEF8 (PiControlGetUserFlagsFromDeviceNode.c)
 *     PiDevCfgConfigureDevice @ 0x14097F7D4 (PiDevCfgConfigureDevice.c)
 *     PiControlGetDevicePowerData @ 0x140A60C44 (PiControlGetDevicePowerData.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140A753D0 (PnpRequestDeviceRemovalWorker.c)
 *     PnpDriverLoadingFailed @ 0x140A9BB78 (PnpDriverLoadingFailed.c)
 *     PiDevCfgLogDeviceStarted @ 0x140AA03F8 (PiDevCfgLogDeviceStarted.c)
 * Callees:
 *     Feature_KernelPnP_StateRetrieval__private_IsEnabledDeviceUsageNoInline @ 0x1405A26B8 (Feature_KernelPnP_StateRetrieval__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall PipIsDevNodeDNStarted(__int64 a1)
{
  __int64 result; // rax

  if ( !(unsigned int)Feature_KernelPnP_StateRetrieval__private_IsEnabledDeviceUsageNoInline() )
  {
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
        goto LABEL_4;
      default:
        goto LABEL_5;
    }
  }
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
LABEL_4:
      result = 1LL;
      break;
    default:
LABEL_5:
      result = 0LL;
      break;
  }
  return result;
}
