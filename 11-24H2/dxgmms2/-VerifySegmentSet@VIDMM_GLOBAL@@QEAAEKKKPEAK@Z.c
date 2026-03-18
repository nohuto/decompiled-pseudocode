/*
 * XREFs of ?VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1400EBFB0
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX6KE6PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400DCBA4 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@QEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K1_NPEAU_VIDMM_VERIFY_SUPPORTED_SEGMENT@@@Z @ 0x1400EBA34 (-VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@QEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_GLOBAL::VerifySegmentSet(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int *a5)
{
  __int64 v5; // r11
  __int64 v6; // rbx
  unsigned int v7; // edx

  v5 = 0LL;
  v6 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * a2);
  v7 = 0;
  if ( a5 )
    *a5 = 0;
  if ( (~*(_DWORD *)(v6 + 60) & a3) != 0 )
    return 0;
  for ( ; a3; a3 >>= 1 )
  {
    if ( (a3 & 1) != 0 && a4 != (a4 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 1648) + 8 * v5) + 104LL)) )
      v7 |= 1 << v5;
    v5 = (unsigned int)(v5 + 1);
  }
  if ( a5 )
    *a5 = v7;
  return v7 == 0;
}
