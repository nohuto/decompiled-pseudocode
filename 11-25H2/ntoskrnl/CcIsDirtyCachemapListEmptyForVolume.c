/*
 * XREFs of CcIsDirtyCachemapListEmptyForVolume @ 0x14049D090
 * Callers:
 *     CcReapPrivateVolumeCachemap @ 0x1403A7DF4 (CcReapPrivateVolumeCachemap.c)
 * Callees:
 *     <none>
 */

bool __fastcall CcIsDirtyCachemapListEmptyForVolume(__int64 a1)
{
  return *(_QWORD *)(a1 + 640) == a1 + 664 && *(_QWORD *)(a1 + 648) == a1 + 664;
}
