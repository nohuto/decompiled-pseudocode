/*
 * XREFs of IoUnregisterShutdownNotification @ 0x140B6D210
 * Callers:
 *     IoDeleteDevice @ 0x1403F1B00 (IoDeleteDevice.c)
 *     DifIoUnregisterShutdownNotificationWrapper @ 0x14062B420 (DifIoUnregisterShutdownNotificationWrapper.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x1402C7030 (MmUnlockPagableImageSection.c)
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     MmLockPagableSectionByHandle @ 0x140A3FE90 (MmLockPagableSectionByHandle.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __stdcall IoUnregisterShutdownNotification(PDEVICE_OBJECT DeviceObject)
{
  KIRQL v2; // al
  PVOID *v3; // rbx
  KIRQL v4; // bp
  PVOID *v5; // rsi
  PVOID *v6; // rdx
  PVOID **v7; // rax
  PVOID *i; // rbx
  PVOID *v9; // rsi
  PVOID *v10; // rax
  PVOID **v11; // rdx

  MmLockPagableSectionByHandle(ExPageLockHandle);
  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  v3 = (PVOID *)IopNotifyShutdownQueueHead;
  v4 = v2;
  while ( v3 != &IopNotifyShutdownQueueHead )
  {
    v5 = v3;
    if ( v3[2] == DeviceObject )
    {
      v6 = (PVOID *)*v3;
      if ( *((PVOID **)*v3 + 1) != v3 || (v7 = (PVOID **)v3[1], *v7 != v3) )
LABEL_16:
        __fastfail(3u);
      *v7 = v6;
      v6[1] = v7;
      v3 = (PVOID *)v3[1];
      ObfDereferenceObject(DeviceObject);
      ExFreePoolWithTag(v5, 0);
    }
    v3 = (PVOID *)*v3;
  }
  for ( i = (PVOID *)IopNotifyLastChanceShutdownQueueHead; i != &IopNotifyLastChanceShutdownQueueHead; i = (PVOID *)*i )
  {
    v9 = i;
    if ( i[2] == DeviceObject )
    {
      v10 = (PVOID *)*i;
      if ( *((PVOID **)*i + 1) != i )
        goto LABEL_16;
      v11 = (PVOID **)i[1];
      if ( *v11 != i )
        goto LABEL_16;
      *v11 = v10;
      v10[1] = v11;
      i = (PVOID *)i[1];
      ObfDereferenceObject(DeviceObject);
      ExFreePoolWithTag(v9, 0);
    }
  }
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  MmUnlockPagableImageSection(ExPageLockHandle);
  DeviceObject->Flags &= ~0x800u;
}
