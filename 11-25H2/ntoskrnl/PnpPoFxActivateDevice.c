/*
 * XREFs of PnpPoFxActivateDevice @ 0x140834FC8
 * Callers:
 *     PnpQueryStopDeviceNode @ 0x140728F9C (PnpQueryStopDeviceNode.c)
 *     PiProcessQueryDeviceState @ 0x140833E34 (PiProcessQueryDeviceState.c)
 *     PipEnumerateDevice @ 0x1408353E4 (PipEnumerateDevice.c)
 *     PipProcessDevNodeTree @ 0x1408355F8 (PipProcessDevNodeTree.c)
 *     PnpDeleteLockedDeviceNode @ 0x140A68CA8 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403EAAD0 (RtlDeleteElementGenericTableAvl.c)
 *     PoFxActivateDevice @ 0x14047D544 (PoFxActivateDevice.c)
 *     PnpMapActivatingDeviceNodeToThread @ 0x140A93FB0 (PnpMapActivatingDeviceNodeToThread.c)
 */

void __fastcall PnpPoFxActivateDevice(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  CurrentThread = KeGetCurrentThread();
  PnpMapActivatingDeviceNodeToThread(a1, CurrentThread);
  PoFxActivateDevice(*(_QWORD *)(a1 + 32));
  Buffer[0] = 0LL;
  Buffer[1] = CurrentThread;
  ExAcquireFastMutex(&PnpDeviceActivationTableLock);
  RtlDeleteElementGenericTableAvl(&PnpDeviceActivationTable, Buffer);
  KeReleaseGuardedMutex(&PnpDeviceActivationTableLock);
  *(_DWORD *)(a1 + 704) |= a2;
}
