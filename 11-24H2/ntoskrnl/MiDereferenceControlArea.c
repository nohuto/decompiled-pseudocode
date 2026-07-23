/*
 * XREFs of MiDereferenceControlArea @ 0x14042777C
 * Callers:
 *     MiFaultGetFileExtents @ 0x140426C40 (MiFaultGetFileExtents.c)
 *     MiRefillPurgedExtents @ 0x1404276E4 (MiRefillPurgedExtents.c)
 *     MiFreeAweView @ 0x1406F3720 (MiFreeAweView.c)
 *     MiDeleteVad @ 0x140895840 (MiDeleteVad.c)
 *     AlpcpCreateView @ 0x140897248 (AlpcpCreateView.c)
 *     MiMapViewInSystemSpace @ 0x1408EB578 (MiMapViewInSystemSpace.c)
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 *     MiMapImageInSystemSpace @ 0x14093E220 (MiMapImageInSystemSpace.c)
 *     KsepSdbMapToMemory @ 0x14094498C (KsepSdbMapToMemory.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140974760 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     NtGetNlsSectionPtr @ 0x140A053E0 (NtGetNlsSectionPtr.c)
 *     MiUnloadSystemImage @ 0x140A870C4 (MiUnloadSystemImage.c)
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x140338330 (MiCheckControlArea.c)
 */

__int64 __fastcall MiDereferenceControlArea(__int64 a1)
{
  KIRQL v2; // al

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  --*(_QWORD *)(a1 + 40);
  --*(_QWORD *)(a1 + 48);
  return MiCheckControlArea(a1, v2);
}
