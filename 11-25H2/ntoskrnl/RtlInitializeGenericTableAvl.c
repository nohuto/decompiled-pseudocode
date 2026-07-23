/*
 * XREFs of RtlInitializeGenericTableAvl @ 0x14045CC60
 * Callers:
 *     PiDmObjectManagerInit @ 0x14071B168 (PiDmObjectManagerInit.c)
 *     PopDirectedDripsUmInitialize @ 0x140754EF8 (PopDirectedDripsUmInitialize.c)
 *     EtwpEnableKeyProviders @ 0x14079F9BC (EtwpEnableKeyProviders.c)
 *     EtwpInitializeAutoLoggers @ 0x14079FDC4 (EtwpInitializeAutoLoggers.c)
 *     PiDqQueryCreate @ 0x1408379A8 (PiDqQueryCreate.c)
 *     PiPnpRtlBeginOperation @ 0x1408D0818 (PiPnpRtlBeginOperation.c)
 *     SshpCacheInitializeLibraryCache @ 0x140AB35A0 (SshpCacheInitializeLibraryCache.c)
 *     VfAvlInitializeTreeEx @ 0x140B73CF8 (VfAvlInitializeTreeEx.c)
 *     ViPtInitAvlTrees @ 0x140B7C910 (ViPtInitAvlTrees.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
