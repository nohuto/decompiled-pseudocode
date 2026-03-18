/*
 * XREFs of MiReferenceMappedControlArea @ 0x14066759C
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x1407E1A7C (MiApplyImageHotPatchRequest.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 */

__int64 __fastcall MiReferenceMappedControlArea(__int64 a1)
{
  KIRQL v2; // al

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  ++*(_QWORD *)(a1 + 24);
  ++*(_QWORD *)(a1 + 48);
  return MiReleaseSpinLockExclusive((_DWORD *)(a1 + 72), v2);
}
