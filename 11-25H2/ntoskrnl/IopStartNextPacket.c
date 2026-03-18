/*
 * XREFs of IopStartNextPacket @ 0x140456F34
 * Callers:
 *     IoStartNextPacket @ 0x140456E30 (IoStartNextPacket.c)
 *     IopStartNextPacketByKeyEx @ 0x140456E74 (IopStartNextPacketByKeyEx.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
 *     KeRemoveDeviceQueue @ 0x140336ED0 (KeRemoveDeviceQueue.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall IopStartNextPacket(__int64 a1, int a2)
{
  KIRQL v2; // si
  PKDEVICE_QUEUE_ENTRY v5; // rax
  PKDEVICE_QUEUE_ENTRY v6; // rbp

  v2 = 0;
  if ( a2 )
    v2 = KeAcquireQueuedSpinLock(7uLL);
  *(_QWORD *)(a1 + 32) = 0LL;
  v5 = KeRemoveDeviceQueue((PKDEVICE_QUEUE)(a1 + 160));
  if ( v5 )
  {
    v6 = v5 - 5;
    *(_QWORD *)(a1 + 32) = v5 - 5;
    if ( a2 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 312) + 64LL) & 0x200) != 0 )
        v6[4].DeviceListEntry.Blink = 0LL;
      KeReleaseQueuedSpinLock(7uLL, v2);
    }
    guard_dispatch_icall_no_overrides(a1, v6);
  }
  else if ( a2 )
  {
    KeReleaseQueuedSpinLock(7uLL, v2);
  }
}
