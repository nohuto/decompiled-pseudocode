/*
 * XREFs of IoAcquireRemoveLockEx @ 0x140430FA0
 * Callers:
 *     PopFxFindAcpiDeviceByUniqueId @ 0x1404BB084 (PopFxFindAcpiDeviceByUniqueId.c)
 *     PopFxFindAndReferenceAcpiDevice @ 0x1404BD72C (PopFxFindAndReferenceAcpiDevice.c)
 *     PopFxAcpiForwardNotification @ 0x1405D72D4 (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiUnregisterDevice @ 0x1405D75B0 (PopFxAcpiUnregisterDevice.c)
 *     DifIoAcquireRemoveLockExWrapper @ 0x140619230 (DifIoAcquireRemoveLockExWrapper.c)
 *     ViFilterDispatchGeneric @ 0x140B8D000 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x140B8D0D0 (ViFilterDispatchPnp.c)
 *     ViFilterDispatchPower @ 0x140B8D290 (ViFilterDispatchPower.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoAcquireRemoveLockEx(
        PIO_REMOVE_LOCK RemoveLock,
        PVOID Tag,
        PCSTR File,
        ULONG Line,
        ULONG RemlockSize)
{
  __int64 Pool2; // rax
  struct _LIST_ENTRY *v11; // r14
  KIRQL v12; // al

  _InterlockedIncrement(&RemoveLock->Common.IoCount);
  if ( RemoveLock->Common.Removed )
  {
    if ( _InterlockedExchangeAdd(&RemoveLock->Common.IoCount, 0xFFFFFFFF) == 1 )
      KeSetEvent(&RemoveLock->Common.RemoveEvent, 0, 0);
    return -1073741738;
  }
  else
  {
    if ( RemlockSize == 120 )
    {
      Pool2 = ExAllocatePool2(0x40uLL);
      v11 = (struct _LIST_ENTRY *)Pool2;
      if ( Pool2 )
      {
        *(_QWORD *)(Pool2 + 8) = Tag;
        *(_QWORD *)(Pool2 + 24) = File;
        *(_DWORD *)(Pool2 + 32) = Line;
        *(_QWORD *)(Pool2 + 16) = MEMORY[0xFFFFF78000000320];
        v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&RemoveLock[2].Common.RemoveEvent);
        v11->Flink = RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink;
        RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink = v11;
        KeReleaseSpinLock((PKSPIN_LOCK)&RemoveLock[2].Common.RemoveEvent, v12);
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)&RemoveLock[2].Common.RemoveEvent.Header.WaitListHead);
      }
    }
    return 0;
  }
}
