/*
 * XREFs of SmKmFreeMdlForLock @ 0x14020DBD4
 * Callers:
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14020BC20 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     SmKmStoreHelperCommandProcess @ 0x14020D8E4 (SmKmStoreHelperCommandProcess.c)
 *     SmFpCleanup @ 0x140396584 (SmFpCleanup.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x14022E380 (SmAcquireReleaseCharges.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SmKmFreeMdlForLock(__int64 a1, unsigned int *a2)
{
  SmAcquireReleaseCharges(a1, a2[10], 3LL, 1LL);
  ExFreePoolWithTag(a2, 0);
}
