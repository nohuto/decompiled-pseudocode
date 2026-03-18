/*
 * XREFs of RtlIdentifierAuthoritySid @ 0x140A5D6B8
 * Callers:
 *     SepCreateTokenEx @ 0x14036B744 (SepCreateTokenEx.c)
 *     SepIsAppSiloCapability @ 0x140482B34 (SepIsAppSiloCapability.c)
 * Callees:
 *     <none>
 */

PSID_IDENTIFIER_AUTHORITY __stdcall RtlIdentifierAuthoritySid(PSID Sid)
{
  return (PSID_IDENTIFIER_AUTHORITY)((char *)Sid + 2);
}
