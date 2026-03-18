/*
 * XREFs of ?AcquireTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400E5B48
 * Callers:
 *     ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N4@Z @ 0x1400E57A0 (-TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIREC.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     EvictAllReclaimedSysmemAllocation @ 0x1400ACF64 (EvictAllReclaimedSysmemAllocation.c)
 *     ?FlushTemporaryResources@VIDMM_PHYSICAL_ADAPTER@@QEAAX_N0@Z @ 0x1400B3DAC (-FlushTemporaryResources@VIDMM_PHYSICAL_ADAPTER@@QEAAX_N0@Z.c)
 *     AcquireGPUResourcesFromSegmentSet @ 0x1400E687C (AcquireGPUResourcesFromSegmentSet.c)
 */

__int64 __fastcall VIDMM_PHYSICAL_ADAPTER::AcquireTemporaryResourcesForAllocation(
        VIDMM_GLOBAL **this,
        struct VIDMM_PHYSICAL_ALLOC *a2)
{
  __int64 v2; // rbp
  __int64 v5; // rcx
  int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  unsigned int v10; // eax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // r8
  _QWORD *v16; // rcx
  __int64 v17; // rcx

  v2 = *(_QWORD *)a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    WdLogGlobalForLineNumber = 2147;
  }
  if ( *((_QWORD *)a2 + 18) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(this);
      WdLogGlobalForLineNumber = 2156;
      v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v12);
      v13[3] = *((_QWORD *)a2 + 18);
      v13[4] = *((unsigned int *)a2 + 34);
      v13[5] = *((int *)a2 + 35);
      WdLogGlobalForLineNumber = 2160;
    }
    v14 = (_QWORD *)((char *)a2 + 112);
    v15 = *((_QWORD *)a2 + 14);
    if ( *(struct VIDMM_PHYSICAL_ALLOC **)(v15 + 8) != (struct VIDMM_PHYSICAL_ALLOC *)((char *)a2 + 112)
      || (v16 = (_QWORD *)*((_QWORD *)a2 + 15), (_QWORD *)*v16 != v14) )
    {
      __fastfail(3u);
    }
    *v16 = v15;
    *(_QWORD *)(v15 + 8) = v16;
    v6 = 0;
    *v14 = 0LL;
    *((_QWORD *)a2 + 15) = 0LL;
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)a2 + 18) + 56LL))(*((_QWORD *)a2 + 18), v2);
  }
  else
  {
    v6 = AcquireGPUResourcesFromSegmentSet((_DWORD)this, (_DWORD)a2, 0, 1, 0, -1LL);
    if ( v6 >= 0 )
      goto LABEL_5;
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v5);
      WdLogGlobalForLineNumber = 2195;
    }
    VIDMM_PHYSICAL_ADAPTER::FlushTemporaryResources(this, 1u, 1);
    v6 = AcquireGPUResourcesFromSegmentSet((_DWORD)this, (_DWORD)a2, 0, 1, 0, -1LL);
    if ( v6 >= 0 )
    {
LABEL_5:
      EvictAllReclaimedSysmemAllocation((VIDMM_PHYSICAL_ADAPTER *)this);
      *((_DWORD *)a2 + 14) |= 0x40u;
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v7);
        WdLogGlobalForLineNumber = 2220;
        v9 = (_QWORD *)WdLogNewEntry5_WdTrace(v8);
        v9[3] = *((_QWORD *)a2 + 18);
        v9[4] = *((unsigned int *)a2 + 34);
        v9[5] = *((int *)a2 + 35);
        WdLogGlobalForLineNumber = 2224;
      }
      v10 = *((_DWORD *)this + 430) + 1;
      *((_DWORD *)this + 430) = v10;
      if ( v10 > *((_DWORD *)this + 10) )
        *((_DWORD *)this + 10) = v10;
    }
    else if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v17);
      WdLogGlobalForLineNumber = 2234;
    }
  }
  return (unsigned int)v6;
}
