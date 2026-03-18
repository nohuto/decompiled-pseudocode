/*
 * XREFs of ?CitpInteractionSummariesCheckPeriodAndFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1400B2C08
 * Callers:
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1400B26AC (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 * Callees:
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z @ 0x1400B2ECC (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z.c)
 */

void __fastcall CitpInteractionSummariesCheckPeriodAndFlush(struct _CIT_IMPACT_CONTEXT *a1, int a2)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(W32GetUserSessionState(a1) + 18968);
  if ( (*(_DWORD *)(v4 + 12) & 1) != 0 && (unsigned int)(a2 - *((_DWORD *)a1 + 72)) > *(_DWORD *)(v4 + 16) )
    CitpInteractionSummariesFlush(a1, 0);
}
