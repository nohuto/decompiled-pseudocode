/*
 * XREFs of PfpRpControlRequestReset @ 0x140A9864C
 * Callers:
 *     PfpRpShutdown @ 0x14073AFB0 (PfpRpShutdown.c)
 *     PfpRpControlRequestPerform @ 0x140A74058 (PfpRpControlRequestPerform.c)
 * Callees:
 *     PsGetNextProcess @ 0x1408DF760 (PsGetNextProcess.c)
 *     PfpRpCHashEmpty @ 0x140A986A4 (PfpRpCHashEmpty.c)
 */

__int64 __fastcall PfpRpControlRequestReset(__int64 a1)
{
  __int64 *i; // rcx
  __int64 *NextProcess; // rax

  PfpRpCHashEmpty(a1, a1 + 96, a1 + 120);
  for ( i = 0LL; ; i = NextProcess )
  {
    NextProcess = PsGetNextProcess(i);
    if ( !NextProcess )
      break;
    _InterlockedAnd((volatile signed __int32 *)NextProcess + 125, 0xFFFFBFFF);
  }
  PfpRpCHashEmpty(a1, a1 + 56, a1 + 88);
  *(_QWORD *)(a1 + 80) = 0LL;
  return 0LL;
}
