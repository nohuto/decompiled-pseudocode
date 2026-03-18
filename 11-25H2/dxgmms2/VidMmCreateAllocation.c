/*
 * XREFs of VidMmCreateAllocation @ 0x140038960
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@KPEBVDXGADAPTERALLOCATION@@PEAXPEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAPEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1400E89BC (-CreateAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXG.c)
 */

__int64 __fastcall VidMmCreateAllocation(_QWORD *a1, __int64 a2)
{
  return VIDMM_GLOBAL::CreateAllocation(
           *a1,
           a1,
           *(unsigned int *)(a2 + 52),
           *(_QWORD *)(a2 + 16),
           *(_QWORD *)(a2 + 24),
           *(_DWORD *)(a2 + 12));
}
