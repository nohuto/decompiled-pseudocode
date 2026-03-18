/*
 * XREFs of UnmapChildMmioSpace @ 0x14004B3D4
 * Callers:
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1400A8B60 (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

__int64 UnmapChildMmioSpace()
{
  return ((__int64 (*)(void))DxgCoreInterface[79])();
}
