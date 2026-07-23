/*
 * XREFs of MiSetStandbyLookasideState @ 0x140410EB0
 * Callers:
 *     MiReplaceTransitionPage @ 0x140251EC4 (MiReplaceTransitionPage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSetStandbyLookasideState(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  unsigned __int64 result; // rax

  v2 = 48 * a1 - 0x220000000000LL;
  v3 = *(_QWORD *)(v2 + 16);
  if ( (v3 & 0x400) != 0 )
    result = (8LL * a2) ^ (v3 ^ (8LL * a2)) & 0xFFFFFFFFFFFFFFF7uLL;
  else
    result = ((unsigned __int64)a2 << 27) ^ (v3 ^ ((unsigned __int64)a2 << 27)) & 0xFFFFFFFFF7FFFFFFuLL;
  *(_QWORD *)(v2 + 16) = result;
  return result;
}
