/*
 * XREFs of ?CitpGetProgDataFromProcessContext@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_PROCESS@@@Z @ 0x14023C3E8
 * Callers:
 *     ?CitpInteractionSummaryGetOutstanding@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_PROCESS@@G@Z @ 0x14023C450 (-CitpInteractionSummaryGetOutstanding@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_PROCESS@@G@Z.c)
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x14023C4B0 (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     <none>
 */

struct _CIT_PROG_DATA *__fastcall CitpGetProgDataFromProcessContext(struct _CIT_PROCESS *a1)
{
  __int64 UserSessionState; // rax
  __int16 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r8

  UserSessionState = W32GetUserSessionState(a1);
  v3 = *((_WORD *)a1 + 21);
  v4 = 0LL;
  if ( v3 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(UserSessionState + 18968) + 32LL);
    v6 = *((unsigned __int16 *)a1 + 20);
    if ( (unsigned int)v6 < *(_DWORD *)(v5 + 56) )
    {
      v7 = *(_QWORD *)v5 + 96 * v6;
      if ( *(_WORD *)(v7 + 32) == v3 )
      {
        if ( *(_QWORD *)(v7 + 56) != *((_QWORD *)a1 + 8) )
          return 0LL;
        return (struct _CIT_PROG_DATA *)v7;
      }
    }
  }
  return (struct _CIT_PROG_DATA *)v4;
}
