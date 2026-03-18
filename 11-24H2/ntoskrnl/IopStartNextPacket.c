/*
 * XREFs of IopStartNextPacket @ 0x140391548
 * Callers:
 *     IoStartNextPacket @ 0x1403916D0 (IoStartNextPacket.c)
 *     IopStartNextPacketByKeyEx @ 0x140391714 (IopStartNextPacketByKeyEx.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 *     KeRemoveDeviceQueue @ 0x140390B70 (KeRemoveDeviceQueue.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall IopStartNextPacket(__int64 a1, int a2)
{
  KIRQL v2; // si
  PKDEVICE_QUEUE_ENTRY v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  PKDEVICE_QUEUE_ENTRY v8; // rbp

  v2 = 0;
  if ( a2 )
    v2 = KeAcquireQueuedSpinLock(7uLL);
  *(_QWORD *)(a1 + 32) = 0LL;
  v5 = KeRemoveDeviceQueue((PKDEVICE_QUEUE)(a1 + 160));
  if ( v5 )
  {
    v8 = v5 - 5;
    *(_QWORD *)(a1 + 32) = v5 - 5;
    if ( a2 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 312) + 64LL) & 0x200) != 0 )
        v8[4].DeviceListEntry.Blink = 0LL;
      KeReleaseQueuedSpinLock(7uLL, v2);
    }
    guard_dispatch_icall_no_overrides(a1, v8, v6, v7);
  }
  else if ( a2 )
  {
    KeReleaseQueuedSpinLock(7uLL, v2);
  }
}
