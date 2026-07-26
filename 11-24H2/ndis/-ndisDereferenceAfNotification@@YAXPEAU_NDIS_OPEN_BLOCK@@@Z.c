/*
 * XREFs of ?ndisDereferenceAfNotification@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14005DE40
 * Callers:
 *     ?ndisMFinishQueuedPendingOpen@@YAXPEAX@Z @ 0x140173B50 (-ndisMFinishQueuedPendingOpen@@YAXPEAX@Z.c)
 *     ?ndisCreateNotifyQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAUCO_ADDRESS_FAMILY@@PEAPEAU_NDIS_AF_NOTIFY@@@Z @ 0x140173CB0 (-ndisCreateNotifyQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAUCO_ADDRESS_FAMILY.c)
 *     ?ndisNotifyAfRegistration@@YAXPEAX@Z @ 0x140173FD0 (-ndisNotifyAfRegistration@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 */

void __fastcall ndisDereferenceAfNotification(struct _NDIS_OPEN_BLOCK *a1)
{
  KIRQL v2; // si
  struct _KEVENT *AfNotifyCompleteEvent; // rcx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      19,
      16,
      (struct _GUID *)&WPP_1ba601ee69d03855ff220f07563e78fc_Traceguids,
      (char)a1);
  v2 = KeAcquireSpinLockRaiseToDpc(&a1->SpinLock);
  if ( _InterlockedExchangeAdd(&a1->PendingAfNotifications, 0xFFFFFFFF) == 1 )
  {
    AfNotifyCompleteEvent = a1->AfNotifyCompleteEvent;
    if ( AfNotifyCompleteEvent )
      KeSetEvent(AfNotifyCompleteEvent, 0, 0);
  }
  KeReleaseSpinLock(&a1->SpinLock, v2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      19,
      17,
      (struct _GUID *)&WPP_1ba601ee69d03855ff220f07563e78fc_Traceguids,
      (char)a1);
}
