/*
 * XREFs of ?NdisPDDetachQueueFromEC@@YAXPEAU_NDIS_PD_QUEUE@@@Z @ 0x14013A7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPDDetachQueueFromECInternal@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x14013D60C (-ndisPDDetachQueueFromECInternal@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015F4B0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015F730 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NdisPDDetachQueueFromEC(struct _NDIS_PD_QUEUE *a1)
{
  struct NDIS_PD_QUEUE_TRACKER *v1; // rbx
  KLockThisExclusive v2; // [rsp+20h] [rbp-28h] BYREF

  v1 = (struct NDIS_PD_QUEUE_TRACKER *)a1->PDPlatformReserved[1];
  if ( *((_QWORD *)v1 + 33) )
  {
    KLockThisExclusive::KLockThisExclusive(&v2, qword_14011CF58);
    ndisPDDetachQueueFromECInternal(v1);
    KLockHolder::~KLockHolder(&v2);
  }
}
