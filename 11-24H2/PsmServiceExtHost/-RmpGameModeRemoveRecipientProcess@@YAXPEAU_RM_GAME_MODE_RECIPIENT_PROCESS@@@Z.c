/*
 * XREFs of ?RmpGameModeRemoveRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x1800607E8
 * Callers:
 *     ?RmpGameModeRecipientProcessTerminationCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x180060590 (-RmpGameModeRecipientProcessTerminationCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@.c)
 *     ?RmpGameModeCheckRemovePairedAuxiliary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008C74C (-RmpGameModeCheckRemovePairedAuxiliary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeUnregisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x18008DC3C (-RmpGameModeUnregisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180060854 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeIsProcessPrimary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180071A24 (-RmpGameModeIsProcessPrimary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeRemoveRecipientFromAuxiliaryList@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008D558 (-RmpGameModeRemoveRecipientFromAuxiliaryList@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

void __fastcall RmpGameModeRemoveRecipientProcess(struct _RM_GAME_MODE_RECIPIENT_PROCESS *a1)
{
  __int64 v1; // rdi
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *v3; // rcx

  v1 = *((_QWORD *)a1 + 4);
  RtlRbRemoveNode(v1 + 8, (char *)a1 + 8);
  if ( (*((_BYTE *)a1 + 144) & 1) != 0 )
    RmpGameModeRemoveRecipientFromAuxiliaryList(a1);
  *((_BYTE *)a1 + 170) &= ~1u;
  if ( RmpGameModeIsProcessPrimary(a1) )
    --*(_DWORD *)(v1 + 136);
  RmpGameModeDereferenceRecipientProcess(v3);
  RmpGameModeQueuePolicyWorkerWithLock((struct _RM_GAME_MODE_CONTEXT *)v1);
}
