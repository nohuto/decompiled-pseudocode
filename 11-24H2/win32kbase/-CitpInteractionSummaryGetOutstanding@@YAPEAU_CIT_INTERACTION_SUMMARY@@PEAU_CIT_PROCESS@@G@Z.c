/*
 * XREFs of ?CitpInteractionSummaryGetOutstanding@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_PROCESS@@G@Z @ 0x14023C450
 * Callers:
 *     ?CitpProcessInfoCleanup@@YAXPEAU_CIT_PROCESS@@@Z @ 0x1400B5D00 (-CitpProcessInfoCleanup@@YAXPEAU_CIT_PROCESS@@@Z.c)
 * Callees:
 *     ?CitpGetProgDataFromProcessContext@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_PROCESS@@@Z @ 0x14023C3E8 (-CitpGetProgDataFromProcessContext@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_PROCESS@@@Z.c)
 */

struct _CIT_INTERACTION_SUMMARY *__fastcall CitpInteractionSummaryGetOutstanding(struct _CIT_PROCESS *a1)
{
  int v2; // eax
  struct _CIT_PROG_DATA *ProgDataFromProcessContext; // rax
  struct _CIT_INTERACTION_SUMMARY *result; // rax

  v2 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1) + 18968) + 12LL);
  if ( (v2 & 1) == 0 )
    return 0LL;
  if ( (v2 & 2) != 0 )
  {
    ProgDataFromProcessContext = CitpGetProgDataFromProcessContext(a1);
    if ( !ProgDataFromProcessContext )
      return 0LL;
    result = (struct _CIT_INTERACTION_SUMMARY *)*((_QWORD *)ProgDataFromProcessContext + 11);
  }
  else
  {
    result = (struct _CIT_INTERACTION_SUMMARY *)*((_QWORD *)a1 + 4);
  }
  if ( result && *(struct _CIT_INTERACTION_SUMMARY **)result != result )
  {
    *((_WORD *)result + 57) |= 0x10u;
    return result;
  }
  return 0LL;
}
