/*
 * XREFs of MiDereferenceControlAreaBySection @ 0x14044FC78
 * Callers:
 *     MmGetImageFileSignatureInformation @ 0x14044FBE0 (MmGetImageFileSignatureInformation.c)
 *     MiApplyImageHotPatchRequest @ 0x1407E1A7C (MiApplyImageHotPatchRequest.c)
 *     MiCreateImageOrDataSection @ 0x14093D200 (MiCreateImageOrDataSection.c)
 *     MiSectionDelete @ 0x140A1D090 (MiSectionDelete.c)
 *     MiDereferenceFailedControlArea @ 0x140A7EC78 (MiDereferenceFailedControlArea.c)
 * Callees:
 *     MiCheckControlArea @ 0x14022F1E0 (MiCheckControlArea.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiDereferenceControlAreaBySection(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  KIRQL v4; // al
  __int64 v5; // rdx

  v3 = a2;
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  --*(_QWORD *)(a1 + 24);
  LOBYTE(v5) = v4;
  *(_QWORD *)(a1 + 48) -= v3;
  return MiCheckControlArea(a1, v5);
}
