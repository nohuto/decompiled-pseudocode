/*
 * XREFs of ?FlushTemporaryResources@VIDMM_PHYSICAL_ADAPTER@@QEAAX_N0@Z @ 0x1400B3DAC
 * Callers:
 *     ?EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ @ 0x1400931C0 (-EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?PurgeSegments@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAVVIDMM_GLOBAL@@PEAU1@UVIDMM_PURGE_FLAGS@@PEAUVIDMM_PURGE_STATISTICS@@PEBVVIDMM_PROCESS@@@Z @ 0x1400D644C (-PurgeSegments@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAVVIDMM_GLOBAL@@PEAU1@UVIDMM_PURGE_FLAGS@@PEAUVIDM.c)
 *     ?AcquireTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400E5B48 (-AcquireTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@.c)
 *     ?PageInAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAUVIDMM_ALLOC@@I_K@Z @ 0x1400EC39C (-PageInAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@W4VIDMM_PLACEMENT_RESTR.c)
 * Callees:
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400B3F08 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400B4660 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?ReleaseTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400D7700 (-ReleaseTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@.c)
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEBAEPEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400FDE94 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEBAEPEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_PHYSICAL_ADAPTER::FlushTemporaryResources(VIDMM_GLOBAL **this, unsigned __int8 a2, char a3)
{
  VIDMM_PHYSICAL_ADAPTER *v6; // rsi
  VIDMM_PHYSICAL_ADAPTER *v7; // rbx
  struct VIDMM_PHYSICAL_ALLOC *v8; // r12
  struct VIDMM_GLOBAL_ALLOC *v9; // r15
  __int64 v10; // rcx
  VIDMM_PHYSICAL_ADAPTER *v11; // rax
  VIDMM_PHYSICAL_ADAPTER **v12; // rcx

  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    WdLogGlobalForLineNumber = 4427;
  }
  if ( a3 || (dword_14008163C & 1) == 0 && (*((_DWORD *)this[6] + 1746) & 0x100000) == 0 )
  {
    if ( a2 )
      VIDMM_GLOBAL::FlushPagingBufferInternal(this[6], *((unsigned __int16 *)this + 28), 0, 0LL, 0LL, 0, 0);
    v6 = this[213];
    while ( 1 )
    {
      v7 = v6;
      if ( v6 == (VIDMM_PHYSICAL_ADAPTER *)(this + 213) )
        break;
      v8 = (VIDMM_PHYSICAL_ADAPTER *)((char *)v6 - 112);
      v9 = (struct VIDMM_GLOBAL_ALLOC *)*((_QWORD *)v6 - 14);
      v6 = *(VIDMM_PHYSICAL_ADAPTER **)v6;
      if ( VIDMM_GLOBAL::IsPagingOperationPending(this[6], v9, 0) )
      {
        if ( !a2 )
          return;
        VIDMM_GLOBAL::WaitForAllPagingEngines(this[6], v9);
      }
      if ( g_IsInternalReleaseOrDbg )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v10) + 24) = v9;
        WdLogGlobalForLineNumber = 4498;
      }
      v11 = *(VIDMM_PHYSICAL_ADAPTER **)v7;
      if ( *(VIDMM_PHYSICAL_ADAPTER **)(*(_QWORD *)v7 + 8LL) != v7
        || (v12 = (VIDMM_PHYSICAL_ADAPTER **)*((_QWORD *)v7 + 1), *v12 != v7) )
      {
        __fastfail(3u);
      }
      *v12 = v11;
      *((_QWORD *)v11 + 1) = v12;
      *(_QWORD *)v7 = 0LL;
      *((_QWORD *)v7 + 1) = 0LL;
      VIDMM_PHYSICAL_ADAPTER::ReleaseTemporaryResourcesForAllocation((VIDMM_PHYSICAL_ADAPTER *)this, v8);
    }
  }
}
