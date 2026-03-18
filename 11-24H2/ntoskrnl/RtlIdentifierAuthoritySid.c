/*
 * XREFs of RtlIdentifierAuthoritySid @ 0x140A5E8A8
 * Callers:
 *     SepCreateTokenEx @ 0x1403645F4 (SepCreateTokenEx.c)
 *     SepIsAppSiloCapability @ 0x1404833CC (SepIsAppSiloCapability.c)
 * Callees:
 *     <none>
 */

PSID_IDENTIFIER_AUTHORITY __stdcall RtlIdentifierAuthoritySid(PSID Sid)
{
  return (PSID_IDENTIFIER_AUTHORITY)((char *)Sid + 2);
}
