/*
 * XREFs of ?RmpGameModeDereferenceRemovedProcesses@@YAXPEAU_LIST_ENTRY@@@Z @ 0x180071904
 * Callers:
 *     ?RmpGameModeUnregisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x18008D7DC (-RmpGameModeUnregisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     CempListEntryRemoveAndClear @ 0x1800276C4 (CempListEntryRemoveAndClear.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x1800608D4 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeCancelRecipientProcessThreadpoolWait@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180071948 (-RmpGameModeCancelRecipientProcessThreadpoolWait@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

void __fastcall RmpGameModeDereferenceRemovedProcesses(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *Flink; // rcx
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *p_Blink; // rbx

  while ( 1 )
  {
    Flink = a1->Flink;
    if ( a1->Flink == a1 )
      break;
    p_Blink = (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)&Flink[-4].Blink;
    CempListEntryRemoveAndClear(Flink);
    RmpGameModeCancelRecipientProcessThreadpoolWait(p_Blink);
    RmpGameModeDereferenceRecipientProcess(p_Blink);
  }
}
