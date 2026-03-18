/*
 * XREFs of ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@UVIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1400D7384
 * Callers:
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEBVVIDMM_PROCESS@@PEA_K@Z @ 0x1400D6EFC (-PurgeContent@VIDMM_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEBVVIDMM_PROCESS@@PEA_K@Z.c)
 *     ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x140102974 (-PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 * Callees:
 *     ?EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400AD020 (-EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400B4660 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?FlushTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400D76AC (-FlushTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::PurgeAllocation(VIDMM_GLOBAL *a1, _DWORD *a2, char a3, _QWORD *a4)
{
  __int64 v8; // rcx
  VIDMM_PHYSICAL_ADAPTER *v9; // r14
  __int64 v10; // rsi
  char v11; // r9
  unsigned int v12; // edx

  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a2;
    WdLogGlobalForLineNumber = 17875;
  }
  v8 = a2[6] & 0x3F;
  v9 = *(VIDMM_PHYSICAL_ADAPTER **)(*((_QWORD *)a1 + 5029) + 8 * v8);
  if ( !a2[19] )
  {
    v10 = *(_QWORD *)a2;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 56LL) & 1) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v8);
        WdLogGlobalForLineNumber = 17891;
      }
      v11 = (a3 & 2) != 0 || (a3 & 4) != 0 || (a3 & 0x20) != 0;
      VIDMM_PHYSICAL_ADAPTER::EvictResources(v9, (struct VIDMM_PHYSICAL_ALLOC *)v10, a3 & 1, v11, 0, 0LL);
      v12 = a2[6] & 0x3F;
      *a4 += *(_QWORD *)(v10 + 16);
      VIDMM_GLOBAL::FlushPagingBufferInternal(a1, v12, 0, 0LL, 0LL, 0, 0);
      VIDMM_PHYSICAL_ADAPTER::FlushTemporaryResourcesForAllocation(v9, (struct VIDMM_PHYSICAL_ALLOC *)v10);
    }
  }
}
