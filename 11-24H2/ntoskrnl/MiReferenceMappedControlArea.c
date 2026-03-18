/*
 * XREFs of MiReferenceMappedControlArea @ 0x14067304C
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x1407F191C (MiApplyImageHotPatchRequest.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiReferenceMappedControlArea(__int64 a1)
{
  KIRQL v2; // al

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  ++*(_QWORD *)(a1 + 24);
  ++*(_QWORD *)(a1 + 48);
  return MiReleaseSpinLockExclusive((_DWORD *)(a1 + 72), v2);
}
