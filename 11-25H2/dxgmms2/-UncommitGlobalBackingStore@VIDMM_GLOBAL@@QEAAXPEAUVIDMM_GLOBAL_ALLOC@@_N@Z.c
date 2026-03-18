/*
 * XREFs of ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400C0750
 * Callers:
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400B8AEC (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX6KE6PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E8A9C (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1400F39C8 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400FDCE0 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1400C0A60 (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1401014AC (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z.c)
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
    if ( (v3 & 0x80000) != 0 || (**((_DWORD **)a2 + 47) & 0x10020008) != 0 )
    {
      v8 = **((unsigned int **)a2 + 47);
      if ( (v8 & 0x20000000) != 0 )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(v8);
          WdLogGlobalForLineNumber = 27761;
        }
      }
      else if ( (v8 & 8) != 0 )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(v8);
          WdLogGlobalForLineNumber = 27765;
        }
      }
      else if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v8);
        WdLogGlobalForLineNumber = 27769;
      }
      if ( (**((_DWORD **)a2 + 47) & 0x4000000) != 0 && *((_DWORD *)a2 + 60) )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(v8);
          WdLogGlobalForLineNumber = 27783;
        }
      }
      else
      {
        v9 = *((_DWORD *)a2 + 7);
        if ( (v9 & 0x8000) != 0 && (v9 & 0x80000) != 0 )
        {
          v11 = (void *)*((_QWORD *)a2 + 51);
          if ( v11 )
            VIDMM_PROCESS::UnmapHostAddressesFromGuest(
              *((VIDMM_PROCESS **)a2 + 48),
              v11,
              *((_QWORD *)a2 + 52),
              *((_QWORD *)a2 + 50),
              1);
        }
        if ( (*((_DWORD *)a2 + 7) & 0x2000000) != 0 )
        {
          MmUnmapViewInSystemSpace(*((PVOID *)a2 + 27));
          *((_DWORD *)a2 + 7) &= ~0x2000000u;
          *((_QWORD *)a2 + 27) = 0LL;
        }
        v10 = (void *)*((_QWORD *)a2 + 26);
        if ( a3 )
          VidMmDereferenceObjectAsync(v10);
        else
          ObfDereferenceObject(v10);
        *((_QWORD *)a2 + 26) = 0LL;
      }
    }
    else if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(this);
      WdLogGlobalForLineNumber = 27846;
    }
  }
  _InterlockedAdd64(
    (volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * (*((_DWORD *)a2 + 6) & 0x3F)) + 1616LL),
    -*((_QWORD *)v5 + 2));
  *((_DWORD *)a2 + 8) &= ~0x20u;
}
