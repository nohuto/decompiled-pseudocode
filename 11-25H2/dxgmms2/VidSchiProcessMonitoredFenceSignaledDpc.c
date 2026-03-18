/*
 * XREFs of VidSchiProcessMonitoredFenceSignaledDpc @ 0x140008FCC
 * Callers:
 *     VidSchDdiNotifyDpcWorker @ 0x14000779C (VidSchDdiNotifyDpcWorker.c)
 *     VidSchDdiNotifyDpc @ 0x1400079E0 (VidSchDdiNotifyDpc.c)
 * Callees:
 *     ?VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x140018A48 (-VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiUnwaitMonitoredFences @ 0x140019940 (VidSchiUnwaitMonitoredFences.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14001D710 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14002D720 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x140033860 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     ?VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z @ 0x140033960 (-VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z.c)
 */

void __fastcall VidSchiProcessMonitoredFenceSignaledDpc(PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *Next; // rbx
  __int64 v2; // rdi
  __int64 v3; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v4[2]; // [rsp+28h] [rbp-48h] BYREF
  char v5; // [rsp+38h] [rbp-38h]
  int v6; // [rsp+3Ch] [rbp-34h]
  _BYTE v7[48]; // [rsp+40h] [rbp-30h] BYREF

  Next = ListEntry[2].Next;
  ExpInterlockedPushEntrySList((PSLIST_HEADER)&Next[193], ListEntry);
  v2 = *((_QWORD *)&Next[1].Next + 1);
  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v7, (unsigned __int64 *)(v2 + 1984), 1, 1);
  v3 = v2;
  v5 = 0;
  v4[1] = v4;
  v4[0] = v4;
  v6 = 2;
  if ( (*((_DWORD *)&Next->Next + 3) & 2) != 0 )
    VidSchiUnwaitNodeHwQueueProgress((struct HwQueueStagingList *)&v3, (struct _VIDSCH_NODE *)Next);
  VidSchiUnwaitMonitoredFences((HwQueueStagingList *)&v3);
  if ( (*((_DWORD *)&Next->Next + 3) & 2) != 0 )
    VidSchiUpdateHwSchRunningTime((struct _VIDSCH_NODE *)Next);
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v3);
  AcquireSpinLock::Release((AcquireSpinLock *)v7);
}
