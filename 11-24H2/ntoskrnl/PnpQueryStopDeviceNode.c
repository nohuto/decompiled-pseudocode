/*
 * XREFs of PnpQueryStopDeviceNode @ 0x14073522C
 * Callers:
 *     PnpQueryRebalanceWorker @ 0x14073509C (PnpQueryRebalanceWorker.c)
 * Callees:
 *     PipSetDevNodeState @ 0x140492B28 (PipSetDevNodeState.c)
 *     PnpFindMountableDevice @ 0x1404A752C (PnpFindMountableDevice.c)
 *     PnpLockMountableDevice @ 0x1404C3E64 (PnpLockMountableDevice.c)
 *     PiRebalanceOptOut @ 0x1405A9664 (PiRebalanceOptOut.c)
 *     IopQueryReconfiguration @ 0x140733D7C (IopQueryReconfiguration.c)
 *     PnpPoFxActivateDevice @ 0x1408BB7C0 (PnpPoFxActivateDevice.c)
 *     PipSetDevNodeFlags @ 0x1409905B8 (PipSetDevNodeFlags.c)
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
