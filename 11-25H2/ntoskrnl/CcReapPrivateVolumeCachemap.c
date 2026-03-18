/*
 * XREFs of CcReapPrivateVolumeCachemap @ 0x1403A7DF4
 * Callers:
 *     CcReapPrivateVolumeCachemapWorkerThread @ 0x1404C5860 (CcReapPrivateVolumeCachemapWorkerThread.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     CcPostDeferredWrites @ 0x1403A5FC4 (CcPostDeferredWrites.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403A8B18 (CcDeletePrivateVolumeCacheMap.c)
 *     DbgPrintEx @ 0x1403A9690 (DbgPrintEx.c)
 *     CcIsDirtyCachemapListEmptyForVolume @ 0x14049D090 (CcIsDirtyCachemapListEmptyForVolume.c)
 *     CcDeleteSectionsForPartition @ 0x140579638 (CcDeleteSectionsForPartition.c)
 */

__int64 __fastcall CcReapPrivateVolumeCachemap(struct _KEVENT *P)
{
  __int64 Flink; // rsi

  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcReapPrivateVolumeCachemap: Delete Processing PVCM, VCM:%p(vid:%2lx), PVCM:%p(vid:%2lx)\n",
    LODWORD(KeGetCurrentThread()[1].CycleTime),
    KeGetCurrentThread()[1].CurrentRunTime,
    P[1].Header.WaitListHead.Blink,
    HIDWORD(P[1].Header.WaitListHead.Blink[13].Flink),
    P,
    P[1].Header.LockNV);
  Flink = (__int64)P[1].Header.WaitListHead.Flink;
  if ( BYTE5(P[48].Header.WaitListHead.Blink) && BYTE4(P[51].Header.WaitListHead.Flink) )
    KeSetEvent(P + 35, 0, 0);
  while ( P[25].Header.WaitListHead.Flink != &P[25].Header.WaitListHead
       || !(unsigned __int8)CcIsDirtyCachemapListEmptyForVolume(P) )
  {
    CcDeleteSectionsForPartition(&P[26].Header.WaitListHead.Blink, Flink);
    CcDeleteSectionsForPartition(&P[25].Header.WaitListHead, Flink);
  }
  CcPostDeferredWrites(Flink, (__int64)P);
  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcReapPrivateVolumeCachemap: PVCM:%p(vid:%2lx) - All lists processed, deleting PVCM\n",
    LODWORD(KeGetCurrentThread()[1].CycleTime),
    KeGetCurrentThread()[1].CurrentRunTime,
    P,
    P[1].Header.LockNV);
  return CcDeletePrivateVolumeCacheMap(P);
}
