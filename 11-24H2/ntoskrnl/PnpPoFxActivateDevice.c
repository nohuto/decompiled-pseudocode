/*
 * XREFs of PnpPoFxActivateDevice @ 0x1408B9170
 * Callers:
 *     PnpQueryStopDeviceNode @ 0x14073315C (PnpQueryStopDeviceNode.c)
 *     PipProcessDevNodeTree @ 0x1408B7FE0 (PipProcessDevNodeTree.c)
 *     PipEnumerateDevice @ 0x1408B895C (PipEnumerateDevice.c)
 *     PiProcessQueryDeviceState @ 0x1408B91C4 (PiProcessQueryDeviceState.c)
 *     PnpDeleteLockedDeviceNode @ 0x140A64C7C (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     PnpMapActivatingDeviceNodeToThread @ 0x1403E3DB4 (PnpMapActivatingDeviceNodeToThread.c)
 *     PnpUnmapActivatingDeviceNodeToThread @ 0x1403E4004 (PnpUnmapActivatingDeviceNodeToThread.c)
 *     PoFxActivateDevice @ 0x1404909F4 (PoFxActivateDevice.c)
 */

void __fastcall PnpPoFxActivateDevice(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  PnpMapActivatingDeviceNodeToThread(a1, (__int64)CurrentThread);
  PoFxActivateDevice(*(_QWORD *)(a1 + 32));
  PnpUnmapActivatingDeviceNodeToThread((__int64)CurrentThread);
  *(_DWORD *)(a1 + 704) |= a2;
}
