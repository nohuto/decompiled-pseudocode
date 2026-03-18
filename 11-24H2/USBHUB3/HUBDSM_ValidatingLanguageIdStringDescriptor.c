/*
 * XREFs of HUBDSM_ValidatingLanguageIdStringDescriptor @ 0x1400255B0
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_ValidateAndCacheLanguageIdStringDescriptor @ 0x14002D49C (HUBDTX_ValidateAndCacheLanguageIdStringDescriptor.c)
 */

__int64 __fastcall HUBDSM_ValidatingLanguageIdStringDescriptor(__int64 a1)
{
  return HUBDTX_ValidateAndCacheLanguageIdStringDescriptor(*(_QWORD *)(a1 + 960));
}
