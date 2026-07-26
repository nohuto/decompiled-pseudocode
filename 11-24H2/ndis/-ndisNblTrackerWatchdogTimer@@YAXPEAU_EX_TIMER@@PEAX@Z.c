/*
 * XREFs of ?ndisNblTrackerWatchdogTimer@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x140050B00
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerNotifyStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1400A1AD8 (-ndisNblTrackerNotifyStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 */

void __fastcall ndisNblTrackerWatchdogTimer(struct _EX_TIMER *a1, void *a2)
{
  unsigned int v2; // r14d
  struct _NDIS_NBL_TRACKER *Flink; // rsi
  __int64 v4; // rbx
  __int64 v5; // rdi
  ULONG ActiveProcessorCount; // eax
  __int64 PassiveCounter; // r11
  unsigned int v8; // ecx
  PNDIS_PER_PROCESSOR_SLOT__ *Slot; // r8
  unsigned int v10; // edx
  __int64 v11; // rdx

  v2 = ((_BYTE)ndisNblTrackerEpoch - 1) & 1;
  KeAcquireSpinLockAtDpcLevel(&ndisNblTrackerListLock);
  Flink = ndisNblTrackerList;
  if ( ndisNblTrackerList != (struct _NDIS_NBL_TRACKER *)&ndisNblTrackerList )
  {
    while ( 1 )
    {
      v4 = 0LL;
      v5 = 0LL;
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
      PassiveCounter = Flink->Buckets[v2].PassiveCounter;
      v8 = 0;
      if ( ActiveProcessorCount >= 2 )
        break;
      if ( ActiveProcessorCount )
      {
        Slot = Flink->Buckets[v2].Slot;
LABEL_5:
        PassiveCounter += *((_QWORD *)Slot + 512 * v8);
      }
LABEL_6:
      if ( PassiveCounter + v5 + v4 )
        ndisNblTrackerNotifyStuckNbl(Flink);
      Flink = (struct _NDIS_NBL_TRACKER *)Flink->Linkage.Flink;
      if ( Flink == (struct _NDIS_NBL_TRACKER *)&ndisNblTrackerList )
        goto LABEL_9;
    }
    Slot = Flink->Buckets[v2].Slot;
    do
    {
      v10 = v8;
      v8 += 2;
      v11 = v10 << 12;
      v4 += *(_QWORD *)((char *)Slot + v11);
      v5 += *(_QWORD *)((char *)Slot + (unsigned int)(v11 + 4096));
    }
    while ( v8 < ActiveProcessorCount - 1 );
    if ( v8 >= ActiveProcessorCount )
      goto LABEL_6;
    goto LABEL_5;
  }
LABEL_9:
  KeReleaseSpinLockFromDpcLevel(&ndisNblTrackerListLock);
  ndisNblTrackerEpoch = v2;
}
