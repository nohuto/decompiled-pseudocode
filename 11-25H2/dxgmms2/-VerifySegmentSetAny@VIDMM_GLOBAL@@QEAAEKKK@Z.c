/*
 * XREFs of ?VerifySegmentSetAny@VIDMM_GLOBAL@@QEAAEKKK@Z @ 0x1400F5F80
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX6KE6PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E8A9C (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall VIDMM_GLOBAL::VerifySegmentSetAny(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned int a3,
        int a4)
{
  __int64 v4; // r10
  __int64 v5; // rdx

  v4 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * a2);
  v5 = 0LL;
  if ( (~*(_DWORD *)(v4 + 60) & a3) == 0 )
  {
    while ( a3 )
    {
      if ( (a3 & 1) != 0 && a4 == (a4 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 1648) + 8 * v5) + 104LL)) )
        return 1;
      a3 >>= 1;
      v5 = (unsigned int)(v5 + 1);
    }
  }
  return 0;
}
