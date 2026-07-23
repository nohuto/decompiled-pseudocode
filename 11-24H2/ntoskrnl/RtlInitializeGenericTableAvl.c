/*
 * XREFs of RtlInitializeGenericTableAvl @ 0x140451510
 * Callers:
 *     PiDmObjectManagerInit @ 0x140724C78 (PiDmObjectManagerInit.c)
 *     PopDirectedDripsUmInitialize @ 0x140764388 (PopDirectedDripsUmInitialize.c)
 *     EtwpEnableKeyProviders @ 0x1407AF1DC (EtwpEnableKeyProviders.c)
 *     EtwpInitializeAutoLoggers @ 0x1407AF5E4 (EtwpInitializeAutoLoggers.c)
 *     PiPnpRtlBeginOperation @ 0x1408C99A8 (PiPnpRtlBeginOperation.c)
 *     PiDqQueryCreate @ 0x1409F21D8 (PiDqQueryCreate.c)
 *     SshpCacheInitializeLibraryCache @ 0x140AB247C (SshpCacheInitializeLibraryCache.c)
 *     VfAvlInitializeTreeEx @ 0x140B85CD8 (VfAvlInitializeTreeEx.c)
 *     ViPtInitAvlTrees @ 0x140B8E8F0 (ViPtInitAvlTrees.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __stdcall RtlInitializeGenericTableAvl(
        PRTL_AVL_TABLE Table,
        PRTL_AVL_COMPARE_ROUTINE CompareRoutine,
        PRTL_AVL_ALLOCATE_ROUTINE AllocateRoutine,
        PRTL_AVL_FREE_ROUTINE FreeRoutine,
        PVOID TableContext)
{
  memset_0(Table, 0, sizeof(_RTL_AVL_TABLE));
  Table->CompareRoutine = (_RTL_GENERIC_COMPARE_RESULTS (__fastcall *)(_RTL_AVL_TABLE *, void *, void *))CompareRoutine;
  Table->FreeRoutine = (void (__fastcall *)(_RTL_AVL_TABLE *, void *))FreeRoutine;
  Table->TableContext = TableContext;
  Table->BalancedRoot.Parent = &Table->BalancedRoot;
  Table->AllocateRoutine = (void *(__fastcall *)(_RTL_AVL_TABLE *, unsigned int))AllocateRoutine;
}
