/*
 * XREFs of WheapPrmInvokeHandler @ 0x14065E5CC
 * Callers:
 *     WheapPrmTranslateDimmAddressIntel @ 0x14065E610 (WheapPrmTranslateDimmAddressIntel.c)
 *     WheapPrmTranslatePhysicalAddressIntel @ 0x14065E858 (WheapPrmTranslatePhysicalAddressIntel.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WheapPrmInvokeHandler(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  return (unsigned int)guard_dispatch_icall_no_overrides(&INTEL_ADDRESS_TRANSLATION_PRM_HANDLER_GUID, a2, 0LL, a5);
}
