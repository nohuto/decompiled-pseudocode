/*
 * XREFs of HUBDSM_ValidatingMSOSExtendedConfigDescriptor @ 0x140025980
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptor @ 0x14002D504 (HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptor.c)
 */

__int64 __fastcall HUBDSM_ValidatingMSOSExtendedConfigDescriptor(__int64 a1)
{
  return HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptor(*(_QWORD *)(a1 + 960));
}
