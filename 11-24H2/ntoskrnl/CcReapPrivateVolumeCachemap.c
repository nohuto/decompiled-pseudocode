/*
 * XREFs of CcReapPrivateVolumeCachemap @ 0x1402CA344
 * Callers:
 *     CcReapPrivateVolumeCachemapWorkerThread @ 0x1402C9E90 (CcReapPrivateVolumeCachemapWorkerThread.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     CcPostDeferredWrites @ 0x1402AAB14 (CcPostDeferredWrites.c)
 *     CcIsDirtyCachemapListEmptyForVolume @ 0x1402CA31C (CcIsDirtyCachemapListEmptyForVolume.c)
 *     DbgPrintEx @ 0x1402CB2F0 (DbgPrintEx.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1402CB768 (CcDeletePrivateVolumeCacheMap.c)
 *     CcDeleteSectionsForPartition @ 0x14057C948 (CcDeleteSectionsForPartition.c)
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
       || !CcIsDirtyCachemapListEmptyForVolume((__int64)P) )
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
