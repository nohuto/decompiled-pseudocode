/*
 * XREFs of C1Idle @ 0x140003A50
 * Callers:
 *     <none>
 * Callees:
 *     C1Halt @ 0x14000E340 (C1Halt.c)
 *     IssueVerw @ 0x14000E380 (IssueVerw.c)
 */

void __fastcall __noreturn C1Idle(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d

  v2 = WORD1(a2);
  if ( (_WORD)a2 )
  {
    a1 = 72LL;
    a2 = 0LL;
    __writemsr(0x48u, 0LL);
  }
  if ( (_WORD)v2 )
    IssueVerw((unsigned __int16)v2, a2);
  C1Halt(a1, a2);
}
