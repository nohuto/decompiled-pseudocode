/*
 * XREFs of HUBDSM_ValidatingAlternateBOSDescriptorHeader @ 0x140025120
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x14002C940 (HUBDTX_ValidateAndCacheBOSDescriptorHeader.c)
 */

__int64 __fastcall HUBDSM_ValidatingAlternateBOSDescriptorHeader(__int64 a1)
{
  return HUBDTX_ValidateAndCacheBOSDescriptorHeader(*(_QWORD *)(a1 + 960));
}
