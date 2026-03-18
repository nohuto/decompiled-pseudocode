/*
 * XREFs of ReleaseVaRangeCb @ 0x140114874
 * Callers:
 *     ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1400BDE04 (-FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140037628 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     Feature_3694358843__private_IsEnabledDeviceUsageNoInline @ 0x14004C408 (Feature_3694358843__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall ReleaseVaRangeCb(__int64 a1)
{
  unsigned int v2; // edx

  *(_DWORD *)(a1 + 64) &= ~0x4000u;
  Feature_3694358843__private_IsEnabledDeviceUsageNoInline();
  return VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)(a1 - 8), v2);
}
