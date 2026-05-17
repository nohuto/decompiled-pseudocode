/*
 * XREFs of RtlAddAccessDeniedAce @ 0x1801169A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddKnownAce @ 0x18005F780 (RtlpAddKnownAce.c)
 */

__int64 __fastcall RtlAddAccessDeniedAce(char *a1, unsigned int a2, int a3, unsigned __int8 *Src)
{
  return RtlpAddKnownAce(a1, a2, 0, a3, Src, 1);
}
