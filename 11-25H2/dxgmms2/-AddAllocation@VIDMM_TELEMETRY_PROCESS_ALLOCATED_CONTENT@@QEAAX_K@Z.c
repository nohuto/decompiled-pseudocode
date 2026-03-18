/*
 * XREFs of ?AddAllocation@VIDMM_TELEMETRY_PROCESS_ALLOCATED_CONTENT@@QEAAX_K@Z @ 0x1400F8DE8
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX6KE6PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E8A9C (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_TELEMETRY_PROCESS_ALLOCATED_CONTENT::AddAllocation(
        VIDMM_TELEMETRY_PROCESS_ALLOCATED_CONTENT *this,
        unsigned __int64 a2)
{
  unsigned int v2; // r8d
  int v4; // r9d

  if ( a2 > 0x100000000LL )
  {
    v2 = 21;
  }
  else
  {
    v2 = 0;
    if ( _BitScanReverse((unsigned int *)&v4, a2 >> 12) )
      v2 = v4 + 1;
  }
  _InterlockedAdd64((volatile signed __int64 *)this + v2, a2);
  _InterlockedIncrement((volatile signed __int32 *)this + v2 + 44);
  *((_BYTE *)this + 264) = 1;
}
