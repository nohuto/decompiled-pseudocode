/*
 * XREFs of ?ndisCleanupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1401474C0
 * Callers:
 *     ?NdisPDPIFreeQueue@@YAXPEAU_NDIS_PD_QUEUE@@@Z @ 0x140146480 (-NdisPDPIFreeQueue@@YAXPEAU_NDIS_PD_QUEUE@@@Z.c)
 *     ?ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z @ 0x140147568 (-ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z.c)
 * Callees:
 *     ?ndisPDDetachQueueFromECInternal@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1401484EC (-ndisPDDetachQueueFromECInternal@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z.c)
 *     ?ndisPdQCounterUpdateName@@YAJPEAUNDIS_PD_COUNTER@@@Z @ 0x140148D70 (-ndisPdQCounterUpdateName@@YAJPEAUNDIS_PD_COUNTER@@@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015DDF0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015DF70 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall ndisCleanupPDQTracker(struct NDIS_PD_QUEUE_TRACKER ***a1)
{
  struct NDIS_PD_QUEUE_TRACKER **v2; // rcx
  struct NDIS_PD_QUEUE_TRACKER **v3; // rax
  struct NDIS_PD_COUNTER *v4; // rcx
  struct NDIS_PD_QUEUE_TRACKER *v5; // rax
  struct NDIS_PD_QUEUE_TRACKER **v6; // r8
  struct NDIS_PD_QUEUE_TRACKER **v7; // rdx
  KLockThisExclusive v8; // [rsp+20h] [rbp-28h] BYREF

  KLockThisExclusive::KLockThisExclusive(&v8, qword_140127008);
  ndisPDDetachQueueFromECInternal((struct NDIS_PD_QUEUE_TRACKER *)a1);
  v2 = *a1;
  if ( (*a1)[1] != (struct NDIS_PD_QUEUE_TRACKER *)a1 )
    goto LABEL_8;
  v3 = a1[1];
  if ( *v3 != (struct NDIS_PD_QUEUE_TRACKER *)a1 )
    goto LABEL_8;
  *v3 = (struct NDIS_PD_QUEUE_TRACKER *)v2;
  v2[1] = (struct NDIS_PD_QUEUE_TRACKER *)v3;
  *a1 = 0LL;
  v4 = (struct NDIS_PD_COUNTER *)a1[28];
  if ( v4 )
  {
    v5 = (struct NDIS_PD_QUEUE_TRACKER *)(a1 + 29);
    v6 = a1[29];
    if ( v6[1] == (struct NDIS_PD_QUEUE_TRACKER *)(a1 + 29) )
    {
      v7 = a1[30];
      if ( *v7 == v5 )
      {
        *v7 = (struct NDIS_PD_QUEUE_TRACKER *)v6;
        v6[1] = (struct NDIS_PD_QUEUE_TRACKER *)v7;
        *(_QWORD *)v5 = 0LL;
        a1[28] = 0LL;
        --*((_DWORD *)v4 + 22);
        ndisPdQCounterUpdateName(v4);
        goto LABEL_7;
      }
    }
LABEL_8:
    __fastfail(3u);
  }
LABEL_7:
  a1[6] = 0LL;
  a1[4] = 0LL;
  KLockHolder::~KLockHolder(&v8);
}
