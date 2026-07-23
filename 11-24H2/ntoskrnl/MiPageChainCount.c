/*
 * XREFs of MiPageChainCount @ 0x14045AA00
 * Callers:
 *     MiComputeAweCharges @ 0x1406F37C8 (MiComputeAweCharges.c)
 *     MiCreateHardwareEnclave @ 0x1407F7910 (MiCreateHardwareEnclave.c)
 *     MiAllocateFastAwePages @ 0x1407F8AAC (MiAllocateFastAwePages.c)
 *     MiAllocateUserPhysicalPages @ 0x1407F8C38 (MiAllocateUserPhysicalPages.c)
 *     MiCreateAweInfoBitMap @ 0x1407F9B80 (MiCreateAweInfoBitMap.c)
 *     MiDeleteAweInfoPages @ 0x1407F9E50 (MiDeleteAweInfoPages.c)
 *     NtFreeUserPhysicalPages @ 0x1407FA340 (NtFreeUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x1407FA870 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1407FAB20 (NtMapUserPhysicalPagesScatter.c)
 *     MiDeleteSparseRange @ 0x1407FB544 (MiDeleteSparseRange.c)
 *     MiFreeReadListPages @ 0x140939A40 (MiFreeReadListPages.c)
 *     MiGetAweVadPageSize @ 0x14097085C (MiGetAweVadPageSize.c)
 *     MiCreateUserPhysicalView @ 0x140AEA2A8 (MiCreateUserPhysicalView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageChainCount(__int64 a1)
{
  return *(_QWORD *)(a1 + 16);
}
