/*
 * XREFs of MiDereferenceControlAreaBySection @ 0x140451548
 * Callers:
 *     MmGetImageFileSignatureInformation @ 0x1404514B0 (MmGetImageFileSignatureInformation.c)
 *     MiApplyImageHotPatchRequest @ 0x1407F191C (MiApplyImageHotPatchRequest.c)
 *     MiCreateImageOrDataSection @ 0x140941B00 (MiCreateImageOrDataSection.c)
 *     MiSectionDelete @ 0x140A24310 (MiSectionDelete.c)
 *     MiDereferenceFailedControlArea @ 0x140A822F8 (MiDereferenceFailedControlArea.c)
 * Callees:
 *     MiCheckControlArea @ 0x14020EFD0 (MiCheckControlArea.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
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
