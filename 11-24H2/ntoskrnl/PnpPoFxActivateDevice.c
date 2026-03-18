/*
 * XREFs of PnpPoFxActivateDevice @ 0x1408BB7C0
 * Callers:
 *     PnpQueryStopDeviceNode @ 0x14073522C (PnpQueryStopDeviceNode.c)
 *     PipProcessDevNodeTree @ 0x1408BA630 (PipProcessDevNodeTree.c)
 *     PipEnumerateDevice @ 0x1408BAFAC (PipEnumerateDevice.c)
 *     PiProcessQueryDeviceState @ 0x1408BB868 (PiProcessQueryDeviceState.c)
 *     PnpDeleteLockedDeviceNode @ 0x140A6B71C (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403F0610 (RtlDeleteElementGenericTableAvl.c)
 *     PoFxActivateDevice @ 0x140496064 (PoFxActivateDevice.c)
 *     Feature_9F_PnpDumpFixes__private_IsEnabledDeviceUsageNoInline @ 0x14059F458 (Feature_9F_PnpDumpFixes__private_IsEnabledDeviceUsageNoInline.c)
 *     PnpMapActivatingDeviceNodeToThreadV2 @ 0x1405A93E8 (PnpMapActivatingDeviceNodeToThreadV2.c)
 *     PnpUnmapActivatingDeviceNodeToThreadV2 @ 0x1405A9454 (PnpUnmapActivatingDeviceNodeToThreadV2.c)
 *     PnpMapActivatingDeviceNodeToThreadV1 @ 0x140733060 (PnpMapActivatingDeviceNodeToThreadV1.c)
 */

void __fastcall PnpPoFxActivateDevice(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)Feature_9F_PnpDumpFixes__private_IsEnabledDeviceUsageNoInline() )
    PnpMapActivatingDeviceNodeToThreadV2(a1, (__int64)CurrentThread);
  else
    PnpMapActivatingDeviceNodeToThreadV1(a1, (__int64)CurrentThread);
  PoFxActivateDevice(*(_QWORD *)(a1 + 32));
  if ( (unsigned int)Feature_9F_PnpDumpFixes__private_IsEnabledDeviceUsageNoInline() )
  {
    PnpUnmapActivatingDeviceNodeToThreadV2((__int64)CurrentThread);
  }
  else
  {
    Buffer[0] = 0LL;
    Buffer[1] = CurrentThread;
    ExAcquireFastMutex(&PnpDeviceActivationTableLock);
    RtlDeleteElementGenericTableAvl(&PnpDeviceActivationTable, Buffer);
    KeReleaseGuardedMutex(&PnpDeviceActivationTableLock);
  }
  *(_DWORD *)(a1 + 704) |= a2;
}
