/*
 * XREFs of ?RmpGameModeFindRecipientProcessByHandle@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x18008C6CC
 * Callers:
 *     ?RmpGameModeDisableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x18008C560 (-RmpGameModeDisableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z.c)
 *     ?RmpGameModeFindProcessOrCompleteInsertion@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAPEAU2@@Z @ 0x18008C608 (-RmpGameModeFindProcessOrCompleteInsertion@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_.c)
 *     ?RmpGameModeReenableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x18008CC94 (-RmpGameModeReenableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z.c)
 *     ?RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1@Z @ 0x18008CD3C (-RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_.c)
 *     ?RmpGameModeUnregisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x18008D7DC (-RmpGameModeUnregisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

struct _RM_GAME_MODE_RECIPIENT_PROCESS *__fastcall RmpGameModeFindRecipientProcessByHandle(
        struct _RM_GAME_MODE_CONTEXT *a1,
        HANDLE Process)
{
  DWORD ProcessId; // eax

  ProcessId = GetProcessId(Process);
  return RmpGameModeFindRecipientProcessById(a1, ProcessId);
}
