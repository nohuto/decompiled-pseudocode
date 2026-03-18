/*
 * XREFs of SepValidateCAPID @ 0x1404F69D8
 * Callers:
 *     SeRmReferenceFindCapName @ 0x1404D3FA4 (SeRmReferenceFindCapName.c)
 * Callees:
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 *     RtlValidSid @ 0x140918DF0 (RtlValidSid.c)
 */

__int64 __fastcall SepValidateCAPID(__int64 a1)
{
  if ( !a1 )
    return 3221225485LL;
  if ( RtlValidSid((PSID)a1) )
    return memcmp((const void *)(a1 + 2), &CAP_AUTHORITY, 6uLL) != 0 ? 0xC0000084 : 0;
  return 3221225592LL;
}
