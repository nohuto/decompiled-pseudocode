/*
 * XREFs of ?DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_CROSSADAPTER_ALLOC@@@Z @ 0x14010C8AC
 * Callers:
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400B8AEC (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX6KE6PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E8A9C (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::DestroyCrossAdapterAllocation(VIDMM_GLOBAL *this, struct VIDMM_CROSSADAPTER_ALLOC *a2)
{
  __int64 v3; // rdx
  void *v4; // rcx
  __int64 v5; // rcx

  v3 = *((int *)a2 + 11);
  if ( __PAIR64__(v3, *((_DWORD *)a2 + 10)) )
  {
    v5 = *((int *)a2 + 10);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 65LL, a2, v5, v3);
    WdLogGlobalForLineNumber = 195;
    JUMPOUT(0x14010C927LL);
  }
  v4 = (void *)*((_QWORD *)a2 + 1);
  if ( v4 )
    MmUnsecureVirtualMemory(v4);
  operator delete(a2);
}
