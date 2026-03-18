/*
 * XREFs of ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1400B5DE8
 * Callers:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x140016D60 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpProcessInfoCleanup@@YAXPEAU_CIT_PROCESS@@@Z @ 0x1400B5D00 (-CitpProcessInfoCleanup@@YAXPEAU_CIT_PROCESS@@@Z.c)
 *     ?CitpProgDataCleanup@@YAXPEAU_CIT_PROG_DATA@@@Z @ 0x14023C580 (-CitpProgDataCleanup@@YAXPEAU_CIT_PROG_DATA@@@Z.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x14023CCE0 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x1400B3008 (-CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z.c)
 */

void __fastcall CitpInteractionSummaryDelete(struct _CIT_INTERACTION_SUMMARY **a1)
{
  char *v1; // rbx

  v1 = (char *)*a1;
  if ( *a1 )
  {
    if ( *(char **)v1 != v1 )
      CitpInteractionSummaryStopTracking(
        *a1,
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    GreDeleteFastMutex(v1);
    *a1 = 0LL;
  }
}
