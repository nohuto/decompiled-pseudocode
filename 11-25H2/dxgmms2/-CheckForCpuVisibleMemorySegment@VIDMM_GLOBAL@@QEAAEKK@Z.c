/*
 * XREFs of ?CheckForCpuVisibleMemorySegment@VIDMM_GLOBAL@@QEAAEKK@Z @ 0x1400F7B04
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX6KE6PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E8A9C (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall VIDMM_GLOBAL::CheckForCpuVisibleMemorySegment(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned int a3)
{
  __int64 v3; // r9
  __int64 v4; // rdx
  int v6; // eax

  v3 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * a2);
  v4 = 0LL;
  if ( (~*(_DWORD *)(v3 + 60) & a3) == 0 )
  {
    while ( a3 )
    {
      if ( (a3 & 1) != 0 )
      {
        v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 1648) + 8 * v4) + 104LL);
        if ( (v6 & 0x1001) == 0 && (v6 & 0x6004) != 0 )
          return 1;
      }
      a3 >>= 1;
      v4 = (unsigned int)(v4 + 1);
    }
  }
  return 0;
}
