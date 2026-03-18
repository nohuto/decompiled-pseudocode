/*
 * XREFs of ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x140038E38
 * Callers:
 *     RemoveVaRangeCb @ 0x1400B6904 (RemoveVaRangeCb.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400B723C (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RAN.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400F4748 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?VidMmiLogEndVaRangeMapping@@YAXPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@_K22@Z @ 0x140101FE8 (-VidMmiLogEndVaRangeMapping@@YAXPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@_K22@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetVidMmAllocFromOwner(int a1, __int64 a2)
{
  int v2; // ecx
  int v4; // ecx

  v2 = a1 - 1;
  if ( !v2 )
    return a2;
  v4 = v2 - 3;
  if ( !v4 )
    return *(_QWORD *)(a2 + 56);
  if ( v4 == 1 )
    return *(_QWORD *)(a2 + 24);
  return 0LL;
}
