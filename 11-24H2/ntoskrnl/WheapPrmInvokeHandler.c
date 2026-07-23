/*
 * XREFs of WheapPrmInvokeHandler @ 0x14065CD9C
 * Callers:
 *     WheapPrmTranslateDimmAddressIntel @ 0x14065CDE0 (WheapPrmTranslateDimmAddressIntel.c)
 *     WheapPrmTranslatePhysicalAddressIntel @ 0x14065D028 (WheapPrmTranslatePhysicalAddressIntel.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WheapPrmInvokeHandler(__int64 a1, __int64 a2)
{
  return (unsigned int)guard_dispatch_icall_no_overrides(&INTEL_ADDRESS_TRANSLATION_PRM_HANDLER_GUID, a2);
}
