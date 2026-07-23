/*
 * XREFs of CcIsDirtyCachemapListEmptyForVolume @ 0x14042FDD8
 * Callers:
 *     CcReapPrivateVolumeCachemap @ 0x14042FCA4 (CcReapPrivateVolumeCachemap.c)
 * Callees:
 *     <none>
 */

bool __fastcall CcIsDirtyCachemapListEmptyForVolume(__int64 a1)
{
  return *(_QWORD *)(a1 + 640) == a1 + 664 && *(_QWORD *)(a1 + 648) == a1 + 664;
}
