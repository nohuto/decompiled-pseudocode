/*
 * XREFs of MiDereferenceControlArea @ 0x14046FD68
 * Callers:
 *     MiFaultGetFileExtents @ 0x14046FAA0 (MiFaultGetFileExtents.c)
 *     MiRefillPurgedExtents @ 0x14046FCD0 (MiRefillPurgedExtents.c)
 *     MiFreeAweView @ 0x1406E9DC4 (MiFreeAweView.c)
 *     KsepSdbMapToMemory @ 0x14082B4A8 (KsepSdbMapToMemory.c)
 *     AlpcpCreateView @ 0x1408B3D94 (AlpcpCreateView.c)
 *     MiDeleteVad @ 0x1408B4F54 (MiDeleteVad.c)
 *     MiMapViewInSystemSpace @ 0x1408BA3B8 (MiMapViewInSystemSpace.c)
 *     NtGetNlsSectionPtr @ 0x1408FB050 (NtGetNlsSectionPtr.c)
 *     MiMapViewOfDataSection @ 0x1408FEC20 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1409028FC (MiMapViewOfImageSection.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1409417A8 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapImageInSystemSpace @ 0x140943ED0 (MiMapImageInSystemSpace.c)
 *     MiUnloadSystemImage @ 0x140A862D4 (MiUnloadSystemImage.c)
 * Callees:
 *     MiCheckControlArea @ 0x14022F1E0 (MiCheckControlArea.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiDereferenceControlArea(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rdx

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  --*(_QWORD *)(a1 + 40);
  LOBYTE(v3) = v2;
  --*(_QWORD *)(a1 + 48);
  return MiCheckControlArea(a1, v3);
}
