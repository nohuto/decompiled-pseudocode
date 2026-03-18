/*
 * XREFs of ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400C10B0
 * Callers:
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400AA4F4 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400D7B70 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX6KE6PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400DCBA4 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1400ED714 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 * Callees:
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1400A8B60 (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1400C13C0 (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_GLOBAL::UncommitGlobalBackingStore(VIDMM_GLOBAL *this, struct VIDMM_GLOBAL_ALLOC *a2, char a3)
{
  int v3; // eax
  unsigned int *v5; // rbp
  __int64 v8; // rcx
  int v9; // eax
  void *v10; // rcx
  void *v11; // rdx

  v3 = *((_DWORD *)a2 + 7);
  v5 = *(unsigned int **)a2;
  if ( (v3 & 0x4000) == 0 && (v3 & 0x200000) == 0 )
  {
    if ( (v3 & 0x80000) != 0 || (**((_DWORD **)a2 + 49) & 0x10020008) != 0 )
    {
      v8 = **((unsigned int **)a2 + 49);
      if ( (v8 & 0x20000000) != 0 )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(v8);
          WdLogGlobalForLineNumber = 28153;
        }
      }
      else if ( (v8 & 8) != 0 )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(v8);
          WdLogGlobalForLineNumber = 28157;
        }
      }
      else if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v8);
        WdLogGlobalForLineNumber = 28161;
      }
      if ( (**((_DWORD **)a2 + 49) & 0x4000000) != 0 && *((_DWORD *)a2 + 64) )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(v8);
          WdLogGlobalForLineNumber = 28175;
        }
      }
      else
      {
        v9 = *((_DWORD *)a2 + 7);
        if ( (v9 & 0x8000) != 0 && (v9 & 0x80000) != 0 )
        {
          v11 = (void *)*((_QWORD *)a2 + 53);
          if ( v11 )
            VIDMM_PROCESS::UnmapHostAddressesFromGuest(*((VIDMM_PROCESS **)a2 + 50), v11, *((_QWORD *)a2 + 54));
        }
        if ( (*((_DWORD *)a2 + 7) & 0x2000000) != 0 )
        {
          MmUnmapViewInSystemSpace(*((PVOID *)a2 + 29));
          *((_DWORD *)a2 + 7) &= ~0x2000000u;
          *((_QWORD *)a2 + 29) = 0LL;
        }
        v10 = (void *)*((_QWORD *)a2 + 28);
        if ( a3 )
          VidMmDereferenceObjectAsync(v10);
        else
          ObfDereferenceObject(v10);
        *((_QWORD *)a2 + 28) = 0LL;
      }
    }
    else if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(this);
      WdLogGlobalForLineNumber = 28238;
    }
  }
  _InterlockedAdd64(
    (volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * (*((_DWORD *)a2 + 6) & 0x3F)) + 1616LL),
    -*((_QWORD *)v5 + 2));
  *((_DWORD *)a2 + 8) &= ~0x20u;
}
