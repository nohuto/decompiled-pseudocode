/*
 * XREFs of DpiGetPnpRegistryKeyName @ 0x14004C01C
 * Callers:
 *     ?ReadPhysicalAdapterConfiguration@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400984A4 (-ReadPhysicalAdapterConfiguration@VIDMM_GLOBAL@@QEAAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiGetPnpRegistryKeyName(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64))DxgCoreInterface[2])(a1, 2LL);
}
