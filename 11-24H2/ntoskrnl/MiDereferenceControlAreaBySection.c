/*
 * XREFs of MiDereferenceControlAreaBySection @ 0x1404468F8
 * Callers:
 *     MmGetImageFileSignatureInformation @ 0x140446860 (MmGetImageFileSignatureInformation.c)
 *     MiApplyImageHotPatchRequest @ 0x1407F1EEC (MiApplyImageHotPatchRequest.c)
 *     MiDereferenceFailedControlArea @ 0x140989CB0 (MiDereferenceFailedControlArea.c)
 *     MiCreateImageOrDataSection @ 0x14098BD70 (MiCreateImageOrDataSection.c)
 *     MiSectionDelete @ 0x140A186E0 (MiSectionDelete.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x140338330 (MiCheckControlArea.c)
 */

__int64 __fastcall MiDereferenceControlAreaBySection(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  KIRQL v4; // al

  v3 = a2;
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  --*(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 48) -= v3;
  return MiCheckControlArea(a1, v4);
}
