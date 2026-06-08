/*
 * XREFs of IoHaltC1Idle @ 0x140009DD0
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x140002350 (ReadGenAddr.c)
 *     C1Halt @ 0x14000FF20 (C1Halt.c)
 *     IssueVerw @ 0x14000FF60 (IssueVerw.c)
 */

void __fastcall __noreturn IoHaltC1Idle(unsigned __int8 *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = a2;
  if ( (_WORD)a2 )
  {
    a2 = 0LL;
    __writemsr(0x48u, 0LL);
  }
  if ( HIWORD(v2) )
    IssueVerw(HIWORD(v2), a2);
  ReadGenAddr(a1);
  C1Halt(v5, v4);
}
