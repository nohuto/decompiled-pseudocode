/*
 * XREFs of ?ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z @ 0x140147568
 * Callers:
 *     ?NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@PEAKPEAU_NDIS_PD_QUEUE_PARAMETERS@@33@Z @ 0x140145920 (-NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PAR.c)
 *     ?NdisPDPIReleaseReceiveQueues@@YAXPEAUNDIS_PD_PROVIDER_HANDLE__@@@Z @ 0x140146A30 (-NdisPDPIReleaseReceiveQueues@@YAXPEAUNDIS_PD_PROVIDER_HANDLE__@@@Z.c)
 * Callees:
 *     ?ndisCleanupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@@Z @ 0x14014742C (-ndisCleanupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@@Z.c)
 *     ?ndisCleanupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1401474C0 (-ndisCleanupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015DDF0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x14015DE20 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015DF70 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x14015DFC0 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 */

void __fastcall ndisCleanupPDRSSObjects(struct NDIS_PD_ASSOCIATION *a1, struct _LIST_ENTRY *a2, struct _LIST_ENTRY *a3)
{
  _LIST_ENTRY **v6; // rdi
  _LIST_ENTRY *v7; // rbx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY **v10; // rdi
  _LIST_ENTRY *v11; // rbx
  _LIST_ENTRY *v12; // rax
  _LIST_ENTRY *v13; // rax
  KLockHolder v14; // [rsp+20h] [rbp-28h] BYREF

  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v14, qword_140127008);
  v6 = (_LIST_ENTRY **)((char *)a1 + 144);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == (_LIST_ENTRY *)v6 )
      break;
    if ( (_LIST_ENTRY **)v7->Blink != v6
      || (Flink = v7->Flink, v7->Flink->Blink != v7)
      || (*v6 = Flink,
          Flink->Blink = (_LIST_ENTRY *)v6,
          v7->Flink = 0LL,
          KLockHolder::ReleaseExclusive(&v14),
          ndisCleanupPDQTracker((struct NDIS_PD_QUEUE_TRACKER ***)&v7[-1]),
          Blink = a2->Blink,
          Blink->Flink != a2) )
    {
LABEL_13:
      __fastfail(3u);
    }
    v7->Flink = a2;
    v7->Blink = Blink;
    Blink->Flink = v7;
    a2->Blink = v7;
    KLockHolder::AcquireExclusive(&v14);
  }
  v10 = (_LIST_ENTRY **)((char *)a1 + 112);
  while ( 1 )
  {
    v11 = *v10;
    if ( *v10 == (_LIST_ENTRY *)v10 )
      break;
    if ( (_LIST_ENTRY **)v11->Blink != v10 )
      goto LABEL_13;
    v12 = v11->Flink;
    if ( v11->Flink->Blink != v11 )
      goto LABEL_13;
    *v10 = v12;
    v12->Blink = (_LIST_ENTRY *)v10;
    v11->Flink = 0LL;
    KLockHolder::ReleaseExclusive(&v14);
    ndisCleanupPDCounter((struct NDIS_PD_COUNTER ***)&v11[-1]);
    v13 = a3->Blink;
    if ( v13->Flink != a3 )
      goto LABEL_13;
    v11->Flink = a3;
    v11->Blink = v13;
    v13->Flink = v11;
    a3->Blink = v11;
    KLockHolder::AcquireExclusive(&v14);
  }
  KLockHolder::~KLockHolder(&v14);
}
