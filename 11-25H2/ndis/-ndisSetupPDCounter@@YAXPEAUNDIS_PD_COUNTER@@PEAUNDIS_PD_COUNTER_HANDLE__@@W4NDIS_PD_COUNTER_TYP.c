/*
 * XREFs of ?ndisSetupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@PEAUNDIS_PD_COUNTER_HANDLE__@@W4NDIS_PD_COUNTER_TYPE@@PEAUNDIS_PD_ASSOCIATION@@E@Z @ 0x140148EC0
 * Callers:
 *     ?NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@PEAKPEAU_NDIS_PD_QUEUE_PARAMETERS@@33@Z @ 0x140145920 (-NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PAR.c)
 *     ?NdisPDPIAllocateCounter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_COUNTER_PARAMETERS@@PEAPEAUNDIS_PD_COUNTER_HANDLE__@@@Z @ 0x140145DC0 (-NdisPDPIAllocateCounter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_COUNTER_PARAMETERS@@PEA.c)
 * Callees:
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015DDF0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015DF70 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall ndisSetupPDCounter(
        struct NDIS_PD_COUNTER *a1,
        struct NDIS_PD_COUNTER_HANDLE__ *a2,
        enum NDIS_PD_COUNTER_TYPE a3,
        struct NDIS_PD_ASSOCIATION *a4,
        char a5)
{
  struct KPushLockBase *v7; // rdx
  struct NDIS_PD_ASSOCIATION **v8; // rcx
  struct NDIS_PD_ASSOCIATION *v9; // rbx
  struct NDIS_PD_ASSOCIATION **v10; // rcx
  KLockThisExclusive v11; // [rsp+20h] [rbp-28h] BYREF

  *((_QWORD *)a1 + 6) = a2;
  v7 = qword_140127008;
  *((_BYTE *)a1 + 60) = a5;
  *((_DWORD *)a1 + 14) = a3;
  *((_QWORD *)a1 + 4) = a4;
  KLockThisExclusive::KLockThisExclusive(&v11, v7);
  v8 = (struct NDIS_PD_ASSOCIATION **)*((_QWORD *)a4 + 13);
  if ( *v8 != (struct NDIS_PD_ASSOCIATION *)((char *)a4 + 96) )
    goto LABEL_6;
  *(_QWORD *)a1 = (char *)a4 + 96;
  *((_QWORD *)a1 + 1) = v8;
  *v8 = a1;
  *((_QWORD *)a4 + 13) = a1;
  if ( a5 )
  {
    v9 = (struct NDIS_PD_COUNTER *)((char *)a1 + 16);
    v10 = (struct NDIS_PD_ASSOCIATION **)*((_QWORD *)a4 + 15);
    if ( *v10 == (struct NDIS_PD_ASSOCIATION *)((char *)a4 + 112) )
    {
      *(_QWORD *)v9 = (char *)a4 + 112;
      *((_QWORD *)v9 + 1) = v10;
      *v10 = v9;
      *((_QWORD *)a4 + 15) = v9;
      goto LABEL_5;
    }
LABEL_6:
    __fastfail(3u);
  }
LABEL_5:
  KLockHolder::~KLockHolder(&v11);
}
