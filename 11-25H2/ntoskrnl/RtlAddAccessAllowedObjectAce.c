/*
 * XREFs of RtlAddAccessAllowedObjectAce @ 0x140770840
 * Callers:
 *     LocalGetAclForString @ 0x140917620 (LocalGetAclForString.c)
 * Callees:
 *     RtlpAddKnownObjectAce @ 0x140771014 (RtlpAddKnownObjectAce.c)
 *     RtlpAddKnownAce @ 0x14092B1E0 (RtlpAddKnownAce.c)
 */

__int64 __fastcall RtlAddAccessAllowedObjectAce(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6, PSID Src)
{
  if ( a5 || a6 )
    return RtlpAddKnownObjectAce(a1, a2, a3, a4, a5, a6, Src, 5);
  else
    return RtlpAddKnownAce(a1, a2, a3, a4, Src, 0);
}
