/*
 * XREFs of ?RmpGameModeDisableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x18008C560
 * Callers:
 *     ?RmSrvGameModeDisableForRegisteredProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAX@Z @ 0x1800877B4 (-RmSrvGameModeDisableForRegisteredProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAX@Z.c)
 * Callees:
 *     ?RmpGameModeQueuePolicyWorkerWithLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18001D810 (-RmpGameModeQueuePolicyWorkerWithLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeAcquireLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180060830 (-RmpGameModeAcquireLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x1800608D4 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeFindRecipientProcessByHandle@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x18008C6CC (-RmpGameModeFindRecipientProcessByHandle@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MO.c)
 */

__int64 __fastcall RmpGameModeDisableForRegisteredProcess(struct _RM_GAME_MODE_CONTEXT *a1, HANDLE Process)
{
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *v4; // rdi
  unsigned int v5; // ebx
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *RecipientProcessByHandle; // rax
  char v7; // al

  v4 = 0LL;
  RmpGameModeAcquireLock(a1);
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 3528LL) & 1) != 0 )
  {
    v5 = -1073741077;
  }
  else
  {
    RecipientProcessByHandle = RmpGameModeFindRecipientProcessByHandle(a1, Process);
    v4 = RecipientProcessByHandle;
    if ( RecipientProcessByHandle )
    {
      v7 = *((_BYTE *)RecipientProcessByHandle + 170);
      if ( (v7 & 4) != 0 )
      {
        v5 = -1073741584;
      }
      else
      {
        *((_BYTE *)v4 + 170) = v7 | 4;
        RmpGameModeQueuePolicyWorkerWithLock(a1);
        v5 = 0;
      }
    }
    else
    {
      v5 = -1073741275;
    }
  }
  *((_DWORD *)a1 + 20) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 72);
  if ( v4 )
    RmpGameModeDereferenceRecipientProcess(v4);
  return v5;
}
