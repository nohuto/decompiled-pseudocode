/*
 * XREFs of ?RmpGameModeFindProcessOrCompleteInsertion@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAPEAU2@@Z @ 0x18008C608
 * Callers:
 *     ?RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1@Z @ 0x18008CD3C (-RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_.c)
 *     ?RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x18008CFBC (-RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUES.c)
 * Callees:
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x1800608D4 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeAllocateObjectsForRecipientProcess@@YAJPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAX@Z @ 0x18008C0A4 (-RmpGameModeAllocateObjectsForRecipientProcess@@YAJPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAX@Z.c)
 *     ?RmpGameModeFindRecipientProcessByHandle@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x18008C6CC (-RmpGameModeFindRecipientProcessByHandle@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MO.c)
 *     ?RmpGameModeInsertRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008C8C4 (-RmpGameModeInsertRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

__int64 __fastcall RmpGameModeFindProcessOrCompleteInsertion(
        struct _RM_GAME_MODE_CONTEXT *a1,
        void *a2,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a3,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS **a4)
{
  volatile signed __int64 *RecipientProcessByHandle; // rax
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *v8; // rsi
  int ObjectsForRecipientProcess; // ebx

  RecipientProcessByHandle = (volatile signed __int64 *)RmpGameModeFindRecipientProcessByHandle(a1, a2);
  v8 = (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)RecipientProcessByHandle;
  if ( RecipientProcessByHandle )
  {
    if ( _InterlockedIncrement64(RecipientProcessByHandle) <= 1 )
      __fastfail(0xEu);
    a3 = (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)RecipientProcessByHandle;
  }
  else
  {
    ObjectsForRecipientProcess = RmpGameModeAllocateObjectsForRecipientProcess(a3, a2);
    if ( ObjectsForRecipientProcess < 0 )
      return (unsigned int)ObjectsForRecipientProcess;
    if ( _InterlockedIncrement64((volatile signed __int64 *)a3) <= 1 )
      __fastfail(0xEu);
    RmpGameModeInsertRecipientProcess(a3);
    if ( _InterlockedIncrement64((volatile signed __int64 *)a3) <= 1 )
      __fastfail(0xEu);
  }
  ObjectsForRecipientProcess = 0;
  *a4 = a3;
  if ( v8 )
    RmpGameModeDereferenceRecipientProcess(v8);
  return (unsigned int)ObjectsForRecipientProcess;
}
