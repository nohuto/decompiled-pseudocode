/*
 * XREFs of MapChildMmioSpace @ 0x14004402C
 * Callers:
 *     ?MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z @ 0x1400A8C34 (-MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MapChildMmioSpace(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64))DxgCoreInterface[78])(a1);
}
