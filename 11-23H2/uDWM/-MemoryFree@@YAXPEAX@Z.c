/*
 * XREFs of ?MemoryFree@@YAXPEAX@Z @ 0x180021C38
 * Callers:
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180002224 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180002A04 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x1800030FC (--1UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ?Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z @ 0x180003204 (-Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x1800032BC (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18001A058 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?SLGetHelper@@YA_NPEBG@Z @ 0x18005ADCC (-SLGetHelper@@YA_NPEBG@Z.c)
 *     ??1?$unique_ptr@V?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@Uprocess_heap_deleter@3@@wistd@@QEAA@XZ @ 0x18009A614 (--1-$unique_ptr@V-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@.c)
 *     ??1EnabledStateManager@details@wil@@QEAA@XZ @ 0x18009A6BC (--1EnabledStateManager@details@wil@@QEAA@XZ.c)
 *     ??1FeatureStateData@details_abi@wil@@QEAA@XZ @ 0x18009A73C (--1FeatureStateData@details_abi@wil@@QEAA@XZ.c)
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x18009A790 (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 *     ??1RawUsageIndex@details_abi@wil@@QEAA@XZ @ 0x18009A8A8 (--1RawUsageIndex@details_abi@wil@@QEAA@XZ.c)
 *     ??1heap_buffer@details_abi@wil@@QEAA@XZ @ 0x18009A978 (--1heap_buffer@details_abi@wil@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall MemoryFree(void *a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, a1);
}
