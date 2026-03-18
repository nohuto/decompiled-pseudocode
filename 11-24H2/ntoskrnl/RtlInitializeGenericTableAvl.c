/*
 * XREFs of RtlInitializeGenericTableAvl @ 0x14045C170
 * Callers:
 *     PiDmObjectManagerInit @ 0x1407270E8 (PiDmObjectManagerInit.c)
 *     PopDirectedDripsUmInitialize @ 0x1407649B8 (PopDirectedDripsUmInitialize.c)
 *     EtwpEnableKeyProviders @ 0x1407AED8C (EtwpEnableKeyProviders.c)
 *     EtwpInitializeAutoLoggers @ 0x1407AF194 (EtwpInitializeAutoLoggers.c)
 *     PiPnpRtlBeginOperation @ 0x1408CBF78 (PiPnpRtlBeginOperation.c)
 *     PiDqQueryCreate @ 0x1409F9868 (PiDqQueryCreate.c)
 *     SshpCacheInitializeLibraryCache @ 0x140AB80C8 (SshpCacheInitializeLibraryCache.c)
 *     VfAvlInitializeTreeEx @ 0x140B83CD8 (VfAvlInitializeTreeEx.c)
 *     ViPtInitAvlTrees @ 0x140B8C8F0 (ViPtInitAvlTrees.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void __stdcall RtlInitializeGenericTableAvl(
        PRTL_AVL_TABLE Table,
        PRTL_AVL_COMPARE_ROUTINE CompareRoutine,
        PRTL_AVL_ALLOCATE_ROUTINE AllocateRoutine,
        PRTL_AVL_FREE_ROUTINE FreeRoutine,
        PVOID TableContext)
{
  memset_0(Table, 0, sizeof(RTL_AVL_TABLE));
  Table->CompareRoutine = (_RTL_GENERIC_COMPARE_RESULTS (__fastcall *)(_RTL_AVL_TABLE *, void *, void *))CompareRoutine;
  Table->FreeRoutine = (void (__fastcall *)(_RTL_AVL_TABLE *, void *))FreeRoutine;
  Table->TableContext = TableContext;
  Table->BalancedRoot.Parent = &Table->BalancedRoot;
  Table->AllocateRoutine = (void *(__fastcall *)(_RTL_AVL_TABLE *, unsigned int))AllocateRoutine;
}
