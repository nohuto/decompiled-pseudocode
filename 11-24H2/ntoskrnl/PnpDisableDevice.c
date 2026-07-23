/*
 * XREFs of PnpDisableDevice @ 0x140720DF0
 * Callers:
 *     PnpIsDeviceInstanceEnabled @ 0x140A55FE0 (PnpIsDeviceInstanceEnabled.c)
 *     PiProcessNewDeviceNode @ 0x140A76864 (PiProcessNewDeviceNode.c)
 * Callees:
 *     PiIrpQueryRemoveDevice @ 0x140731D68 (PiIrpQueryRemoveDevice.c)
 *     PipSetDevNodeProblem @ 0x14097AC5C (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x14098187C (PipClearDevNodeProblem.c)
 *     IopRemoveDevice @ 0x1409BE494 (IopRemoveDevice.c)
 *     IopReleaseDeviceResources @ 0x1409BF108 (IopReleaseDeviceResources.c)
 */

__int64 __fastcall PnpDisableDevice(__int64 a1, unsigned int a2)
{
  switch ( *(_DWORD *)(a1 + 300) )
  {
    case 0x301:
    case 0x302:
    case 0x303:
    case 0x304:
      goto LABEL_4;
    case 0x305:
    case 0x306:
    case 0x307:
    case 0x308:
    case 0x309:
    case 0x30A:
    case 0x30B:
    case 0x30C:
    case 0x30D:
    case 0x30E:
    case 0x30F:
      if ( (int)PiIrpQueryRemoveDevice(*(PDEVICE_OBJECT *)(a1 + 32)) >= 0 )
      {
LABEL_4:
        IopRemoveDevice(*(PDEVICE_OBJECT *)(a1 + 32));
        IopReleaseDeviceResources(a1, 1LL);
      }
      else
      {
        IopRemoveDevice(*(PDEVICE_OBJECT *)(a1 + 32));
      }
      break;
    default:
      break;
  }
  if ( (*(_DWORD *)(a1 + 396) & 0x6000) != 0 )
    PipClearDevNodeProblem(a1);
  return PipSetDevNodeProblem(a1, a2, 0LL);
}
