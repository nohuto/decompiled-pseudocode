/*
 * XREFs of HUBDSM_ValidatingSerialNumberStringDescriptorFor1xDevice @ 0x140025E60
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_ValidateAndCacheSerialNumberStringDescriptor @ 0x14002D9F8 (HUBDTX_ValidateAndCacheSerialNumberStringDescriptor.c)
 */

__int64 __fastcall HUBDSM_ValidatingSerialNumberStringDescriptorFor1xDevice(__int64 a1)
{
  return HUBDTX_ValidateAndCacheSerialNumberStringDescriptor(*(_QWORD *)(a1 + 960));
}
