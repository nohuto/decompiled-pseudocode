/*
 * XREFs of HUBDSM_ValidatingMSOSExtendedPropertyDescriptor @ 0x140025B00
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_ValidateAndCacheMSOSExtendedPropertyDescriptor @ 0x140033A74 (HUBMISC_ValidateAndCacheMSOSExtendedPropertyDescriptor.c)
 */

__int64 __fastcall HUBDSM_ValidatingMSOSExtendedPropertyDescriptor(__int64 a1)
{
  return HUBMISC_ValidateAndCacheMSOSExtendedPropertyDescriptor(*(_QWORD *)(a1 + 960));
}
