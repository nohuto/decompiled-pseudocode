/*
 * XREFs of ?ndisWaitWakeIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140088E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisWaitWakeIoCompletion(struct _DEVICE_OBJECT *a1, struct _IRP *a2, KSPIN_LOCK *a3)
{
  KIRQL v4; // al
  bool v5; // cf
  unsigned int v6; // edi

  if ( a2->PendingReturned )
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  v4 = KeAcquireSpinLockRaiseToDpc(a3 + 12);
  v5 = *((_BYTE *)a3 + 1329) != 0;
  *((_BYTE *)a3 + 1328) = 1;
  a3[65] = 0LL;
  v6 = v5 ? 0xC0000016 : 0;
  KeReleaseSpinLock(a3 + 12, v4);
  return v6;
}
