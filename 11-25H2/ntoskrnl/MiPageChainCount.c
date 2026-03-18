/*
 * XREFs of MiPageChainCount @ 0x140464C78
 * Callers:
 *     MiComputeAweCharges @ 0x1406E9E6C (MiComputeAweCharges.c)
 *     MiCreateHardwareEnclave @ 0x1407E730C (MiCreateHardwareEnclave.c)
 *     MiAllocateFastAwePages @ 0x1407E84AC (MiAllocateFastAwePages.c)
 *     MiAllocateUserPhysicalPages @ 0x1407E8638 (MiAllocateUserPhysicalPages.c)
 *     MiCreateAweInfoBitMap @ 0x1407E9580 (MiCreateAweInfoBitMap.c)
 *     MiDeleteAweInfoPages @ 0x1407E9850 (MiDeleteAweInfoPages.c)
 *     NtFreeUserPhysicalPages @ 0x1407E9D40 (NtFreeUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x1407EA270 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1407EA520 (NtMapUserPhysicalPagesScatter.c)
 *     MiDeleteSparseRange @ 0x1407EAF44 (MiDeleteSparseRange.c)
 *     MiFreeReadListPages @ 0x1409C98F0 (MiFreeReadListPages.c)
 *     MiGetAweVadPageSize @ 0x1409D236C (MiGetAweVadPageSize.c)
 *     MiCreateUserPhysicalView @ 0x140ABCAD0 (MiCreateUserPhysicalView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageChainCount(__int64 a1)
{
  return *(_QWORD *)(a1 + 16);
}
