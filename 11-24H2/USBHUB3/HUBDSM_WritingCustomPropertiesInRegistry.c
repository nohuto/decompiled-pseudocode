/*
 * XREFs of HUBDSM_WritingCustomPropertiesInRegistry @ 0x1400261A0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_ParseAndWriteCustomPropertiesInRegistry @ 0x140085E24 (HUBMISC_ParseAndWriteCustomPropertiesInRegistry.c)
 */

__int64 __fastcall HUBDSM_WritingCustomPropertiesInRegistry(__int64 a1)
{
  return HUBMISC_ParseAndWriteCustomPropertiesInRegistry(*(_QWORD *)(a1 + 960));
}
