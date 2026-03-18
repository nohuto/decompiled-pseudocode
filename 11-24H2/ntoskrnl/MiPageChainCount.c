/*
 * XREFs of MiPageChainCount @ 0x1404642D0
 * Callers:
 *     MiComputeAweCharges @ 0x1406F57C8 (MiComputeAweCharges.c)
 *     MiCreateHardwareEnclave @ 0x1407F719C (MiCreateHardwareEnclave.c)
 *     MiAllocateFastAwePages @ 0x1407F833C (MiAllocateFastAwePages.c)
 *     MiAllocateUserPhysicalPages @ 0x1407F84C8 (MiAllocateUserPhysicalPages.c)
 *     MiCreateAweInfoBitMap @ 0x1407F9410 (MiCreateAweInfoBitMap.c)
 *     MiDeleteAweInfoPages @ 0x1407F96E0 (MiDeleteAweInfoPages.c)
 *     NtFreeUserPhysicalPages @ 0x1407F9BD0 (NtFreeUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x1407FA100 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1407FA3B0 (NtMapUserPhysicalPagesScatter.c)
 *     MiDeleteSparseRange @ 0x1407FADD4 (MiDeleteSparseRange.c)
 *     MiFreeReadListPages @ 0x140956090 (MiFreeReadListPages.c)
 *     MiGetAweVadPageSize @ 0x140988078 (MiGetAweVadPageSize.c)
 *     MiCreateUserPhysicalView @ 0x140AE76D8 (MiCreateUserPhysicalView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageChainCount(__int64 a1)
{
  return *(_QWORD *)(a1 + 16);
}
