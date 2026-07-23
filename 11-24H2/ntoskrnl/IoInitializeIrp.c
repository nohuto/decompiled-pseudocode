/*
 * XREFs of IoInitializeIrp @ 0x140435540
 * Callers:
 *     IopAllocateReserveIrp @ 0x14025CDD8 (IopAllocateReserveIrp.c)
 *     IopAllocateBackpocketIrp @ 0x140592D08 (IopAllocateBackpocketIrp.c)
 *     SmStorePhysicalRequestIssue @ 0x140798C6C (SmStorePhysicalRequestIssue.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140A0F778 (WmipSendWmiIrpToTraceDeviceList.c)
 *     ViIrpAllocateLockedPacket @ 0x140B900BC (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IovInitializeIrp @ 0x140BAB428 (IovInitializeIrp.c)
 */

void __stdcall IoInitializeIrp(PIRP Irp, USHORT PacketSize, CCHAR StackSize)
{
  __int64 v4; // rdi
  size_t v5; // rsi
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = StackSize;
  v5 = PacketSize;
  if ( (MmVerifierData & 0x10) != 0 )
    IovInitializeIrp(Irp, PacketSize, StackSize, retaddr);
  memset_0(Irp, 0, v5);
  Irp->Size = v5;
  Irp->CurrentLocation = v4 + 1;
  Irp->Type = 6;
  Irp->StackCount = v4;
  Irp->ApcEnvironment = KeGetCurrentThread()->ApcStateIndex;
  Irp->ThreadListEntry.Blink = &Irp->ThreadListEntry;
  Irp->ThreadListEntry.Flink = &Irp->ThreadListEntry;
  Irp->Tail.Overlay.CurrentStackLocation = (struct _IO_STACK_LOCATION *)((char *)&Irp[1] + 64 * v4 + 8 * v4);
}
