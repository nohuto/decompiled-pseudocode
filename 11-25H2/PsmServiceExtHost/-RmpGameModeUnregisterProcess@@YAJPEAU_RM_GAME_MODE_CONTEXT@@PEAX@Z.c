/*
 * XREFs of ?RmpGameModeUnregisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x18008D7DC
 * Callers:
 *     ?RmSrvGameModeUnregisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAX@Z @ 0x180088080 (-RmSrvGameModeUnregisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAX@Z.c)
 * Callees:
 *     ?RmpGameModeAcquireLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180060830 (-RmpGameModeAcquireLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeRemoveRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180060868 (-RmpGameModeRemoveRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x1800608D4 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeDereferenceRemovedProcesses@@YAXPEAU_LIST_ENTRY@@@Z @ 0x180071904 (-RmpGameModeDereferenceRemovedProcesses@@YAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModeCancelRecipientProcessThreadpoolWait@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180071948 (-RmpGameModeCancelRecipientProcessThreadpoolWait@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeClearPairingTree@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z @ 0x18008C364 (-RmpGameModeClearPairingTree@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModeFindRecipientProcessByHandle@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x18008C6CC (-RmpGameModeFindRecipientProcessByHandle@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MO.c)
 */

__int64 __fastcall RmpGameModeUnregisterProcess(struct _RM_GAME_MODE_CONTEXT *a1, HANDLE Process)
{
  unsigned int v4; // edi
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *RecipientProcessByHandle; // rax
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *v6; // rsi
  struct _LIST_ENTRY v8; // [rsp+20h] [rbp-18h] BYREF

  v8 = 0LL;
  RmpGameModeAcquireLock(a1);
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 3528LL) & 1) != 0 )
  {
    v4 = -1073741077;
  }
  else
  {
    RecipientProcessByHandle = RmpGameModeFindRecipientProcessByHandle(a1, Process);
    v6 = RecipientProcessByHandle;
    if ( RecipientProcessByHandle )
    {
      RmpGameModeClearPairingTree(RecipientProcessByHandle, &v8);
      RmpGameModeRemoveRecipientProcess(v6);
      *((_DWORD *)a1 + 20) = 0;
      RtlReleaseSRWLockExclusive((char *)a1 + 72);
      RmpGameModeCancelRecipientProcessThreadpoolWait(v6);
      RmpGameModeDereferenceRemovedProcesses(&v8);
      v4 = 0;
      RmpGameModeDereferenceRecipientProcess(v6);
      return v4;
    }
    v4 = -1073741275;
  }
  *((_DWORD *)a1 + 20) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 72);
  return v4;
}
