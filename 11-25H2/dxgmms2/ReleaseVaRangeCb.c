/*
 * XREFs of ReleaseVaRangeCb @ 0x1400B6ABC
 * Callers:
 *     ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1400B6868 (-FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140037A34 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 */

__int64 __fastcall ReleaseVaRangeCb(__int64 a1, unsigned int a2)
{
  *(_DWORD *)(a1 + 64) &= ~0x4000u;
  return VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)(a1 - 8), a2);
}
