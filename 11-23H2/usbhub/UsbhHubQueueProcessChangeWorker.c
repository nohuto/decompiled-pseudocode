/*
 * XREFs of UsbhHubQueueProcessChangeWorker @ 0x1C0020078
 * Callers:
 *     Usbh_PCE_wDone_Action @ 0x1C00116B0 (Usbh_PCE_wDone_Action.c)
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C001F8E0 (Usbh_PCE_QueueDriverReset_Action.c)
 * Callees:
 *     Log @ 0x1C000F210 (Log.c)
 */

void __fastcall UsbhHubQueueProcessChangeWorker(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rdi
  KIRQL v4; // si
  __int64 v5; // rcx
  WORK_QUEUE_TYPE v6; // r10d
  PVOID v7; // r9

  v2 = (KSPIN_LOCK *)(a2 + 2448);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 2448));
  if ( *(_DWORD *)(a2 + 2412) != 1 )
  {
    v5 = *(_QWORD *)(a2 + 16);
    *(_DWORD *)(a2 + 2412) = 1;
    Log(v5, 512, 1364214615, a2, 0LL);
    _InterlockedAdd((volatile signed __int32 *)(a2 + 2440), v6);
    IoQueueWorkItem(*(PIO_WORKITEM *)(a2 + 2456), (PIO_WORKITEM_ROUTINE)UsbhHubProcessChangeWorker, v6, v7);
  }
  KeReleaseSpinLock(v2, v4);
}
