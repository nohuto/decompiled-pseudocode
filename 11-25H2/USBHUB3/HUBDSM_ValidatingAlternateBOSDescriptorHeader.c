/*
 * XREFs of HUBDSM_ValidatingAlternateBOSDescriptorHeader @ 0x1400250E0
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x14002C7D0 (HUBDTX_ValidateAndCacheBOSDescriptorHeader.c)
 */

__int64 __fastcall HUBDSM_ValidatingAlternateBOSDescriptorHeader(__int64 a1)
{
  return HUBDTX_ValidateAndCacheBOSDescriptorHeader(*(_QWORD *)(a1 + 960));
}
