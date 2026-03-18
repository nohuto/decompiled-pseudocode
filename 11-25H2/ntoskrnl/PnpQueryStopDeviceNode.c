/*
 * XREFs of PnpQueryStopDeviceNode @ 0x140728F9C
 * Callers:
 *     PnpQueryRebalanceWorker @ 0x140728E0C (PnpQueryRebalanceWorker.c)
 * Callees:
 *     PipSetDevNodeState @ 0x140493D48 (PipSetDevNodeState.c)
 *     PnpFindMountableDevice @ 0x1404A6B84 (PnpFindMountableDevice.c)
 *     PnpLockMountableDevice @ 0x1404C5784 (PnpLockMountableDevice.c)
 *     PiRebalanceOptOut @ 0x1405A5CD4 (PiRebalanceOptOut.c)
 *     IopQueryReconfiguration @ 0x140727AE4 (IopQueryReconfiguration.c)
 *     PipSetDevNodeFlags @ 0x1408331E8 (PipSetDevNodeFlags.c)
 *     PnpPoFxActivateDevice @ 0x140834FC8 (PnpPoFxActivateDevice.c)
 */

__int64 __fastcall PnpQueryStopDeviceNode(__int64 a1, char a2)
{
  unsigned int Reconfiguration; // edi

  Reconfiguration = -1073741823;
  if ( *(_DWORD *)(a1 + 300) == 778 && ((a2 & 1) == 0 || !PiRebalanceOptOut(a1)) )
  {
    if ( PnpFindMountableDevice(*(_QWORD *)(a1 + 32)) )
    {
      PnpLockMountableDevice(*(_QWORD **)(a1 + 32));
      PipSetDevNodeFlags(a1, 0x1000000LL);
    }
    PnpPoFxActivateDevice(a1, 32LL);
    Reconfiguration = IopQueryReconfiguration(5, *(_QWORD *)(a1 + 32));
    PipSetDevNodeState(a1, 779);
  }
  return Reconfiguration;
}
