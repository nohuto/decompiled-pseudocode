/*
 * XREFs of PnpQueryStopDeviceNode @ 0x14073315C
 * Callers:
 *     PnpQueryRebalanceWorker @ 0x140732FCC (PnpQueryRebalanceWorker.c)
 * Callees:
 *     PipSetDevNodeState @ 0x14048D998 (PipSetDevNodeState.c)
 *     PnpFindMountableDevice @ 0x1404A1F5C (PnpFindMountableDevice.c)
 *     PnpLockMountableDevice @ 0x1404BF394 (PnpLockMountableDevice.c)
 *     PiRebalanceOptOut @ 0x1405A65D4 (PiRebalanceOptOut.c)
 *     IopQueryReconfiguration @ 0x140731CB0 (IopQueryReconfiguration.c)
 *     PnpPoFxActivateDevice @ 0x1408B9170 (PnpPoFxActivateDevice.c)
 *     PipSetDevNodeFlags @ 0x14097B5F8 (PipSetDevNodeFlags.c)
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
