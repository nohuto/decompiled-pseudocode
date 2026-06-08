/*
 * XREFs of IoHaltC1Idle @ 0x140006360
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x14000297C (ReadGenAddr.c)
 *     C1Halt @ 0x14000E340 (C1Halt.c)
 *     IssueVerw @ 0x14000E380 (IssueVerw.c)
 */

void __fastcall __noreturn IoHaltC1Idle(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx

  v3 = a2;
  if ( (_WORD)a2 )
  {
    a2 = 0LL;
    __writemsr(0x48u, 0LL);
  }
  if ( HIWORD(v3) )
    IssueVerw(HIWORD(v3), a2);
  ReadGenAddr(a1, a2, a3);
  C1Halt(v6, v5);
}
