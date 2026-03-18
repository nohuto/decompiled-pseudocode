/*
 * XREFs of RtlAddAccessDeniedAceEx @ 0x1407708A0
 * Callers:
 *     PiAuCreateStandardSecurityObject @ 0x140C13470 (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x14092B1E0 (RtlpAddKnownAce.c)
 */

__int64 __fastcall RtlAddAccessDeniedAceEx(int a1, int a2, int a3, int a4, void *Src)
{
  return RtlpAddKnownAce(a1, a2, a3, a4, Src, 1);
}
