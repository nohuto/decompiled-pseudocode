/*
 * XREFs of HUBPSM30_CheckingIsD3ColdIsEnabled @ 0x1400126D0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_IsD3ColdSupported @ 0x140030C10 (HUBMISC_IsD3ColdSupported.c)
 */

__int64 __fastcall HUBPSM30_CheckingIsD3ColdIsEnabled(__int64 a1)
{
  return HUBMISC_IsD3ColdSupported(*(_QWORD *)(a1 + 960));
}
