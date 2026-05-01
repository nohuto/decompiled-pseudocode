/*
 * XREFs of ?RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1@Z @ 0x18008CD3C
 * Callers:
 *     ?RmSrvGameModeRegisterPairedAuxiliaryProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1K@Z @ 0x180087BB0 (-RmSrvGameModeRegisterPairedAuxiliaryProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF80 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F7E0 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?RmpGameModeAcquireLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180060830 (-RmpGameModeAcquireLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x1800608D4 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeComparePairingByAuxiliaryId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18008C488 (-RmpGameModeComparePairingByAuxiliaryId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?RmpGameModeFindProcessOrCompleteInsertion@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAPEAU2@@Z @ 0x18008C608 (-RmpGameModeFindProcessOrCompleteInsertion@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_.c)
 *     ?RmpGameModeFindRecipientProcessByHandle@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x18008C6CC (-RmpGameModeFindRecipientProcessByHandle@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MO.c)
 *     ?RmpGameModeInitializeRecipientProcess@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008C6FC (-RmpGameModeInitializeRecipientProcess@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RESOURCE.c)
 *     ?RmpGameModeInsertProcessPairing@@YAXPEAU_RM_GAME_MODE_PROCESS_PAIRING@@@Z @ 0x18008C778 (-RmpGameModeInsertProcessPairing@@YAXPEAU_RM_GAME_MODE_PROCESS_PAIRING@@@Z.c)
 *     ?RmpGameModeIsProcessValidPairingTarget@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008CA0C (-RmpGameModeIsProcessValidPairingTarget@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

__int64 __fastcall RmpGameModeRegisterPairedProcess(
        struct _RM_GAME_MODE_CONTEXT *a1,
        void *a2,
        struct _RM_GAME_MODE_RESOURCE_REQUEST *a3,
        HANDLE Process)
{
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *v5; // rsi
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *v9; // r12
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *v10; // rbp
  char *Heap; // rdi
  unsigned int v12; // ebx
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *RecipientProcessByHandle; // rax
  __int64 v14; // r8
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *v15; // rax
  int ProcessOrCompleteInsertion; // eax
  unsigned __int64 v17; // rbx
  int v18; // r15d
  void *v19; // r13
  int v20; // eax
  unsigned __int64 v21; // rax
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *v22; // rax
  __int64 v23; // rdx
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *v25; // [rsp+20h] [rbp-38h] BYREF

  v5 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  Heap = (char *)HampAllocateHeap(0x40uLL);
  if ( !Heap )
    return (unsigned int)-1073741801;
  RmpGameModeAcquireLock(a1);
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 3528LL) & 1) != 0 )
    goto LABEL_4;
  RecipientProcessByHandle = RmpGameModeFindRecipientProcessByHandle(a1, Process);
  v10 = RecipientProcessByHandle;
  if ( !RecipientProcessByHandle || !RmpGameModeIsProcessValidPairingTarget(RecipientProcessByHandle) )
  {
    v12 = -1073741583;
    goto LABEL_35;
  }
  v25 = RmpGameModeFindRecipientProcessByHandle(a1, a2);
  v5 = v25;
  if ( v25 )
    goto LABEL_13;
  *((_DWORD *)a1 + 20) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 72);
  v15 = (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)HampAllocateHeap(0xB0uLL);
  v9 = v15;
  if ( v15 )
  {
    RmpGameModeInitializeRecipientProcess(a1, a3, v15);
    *((_BYTE *)v9 + 170) |= 8u;
    RmpGameModeAcquireLock(a1);
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 3528LL) & 1) != 0 )
    {
LABEL_4:
      v12 = -1073741077;
      goto LABEL_35;
    }
    ProcessOrCompleteInsertion = RmpGameModeFindProcessOrCompleteInsertion(a1, a2, v9, &v25);
    v5 = v25;
    v12 = ProcessOrCompleteInsertion;
    if ( ProcessOrCompleteInsertion < 0 )
    {
LABEL_35:
      *((_DWORD *)a1 + 20) = 0;
      RtlReleaseSRWLockExclusive((char *)a1 + 72);
      if ( v9 )
        RmpGameModeDereferenceRecipientProcess(v9);
      goto LABEL_37;
    }
LABEL_13:
    if ( (*((_BYTE *)v5 + 170) & 8) == 0 )
    {
LABEL_14:
      v12 = -1073740008;
      goto LABEL_35;
    }
    v17 = *((_QWORD *)v10 + 9);
    v18 = *((_BYTE *)v10 + 80) & 1;
    if ( (*((_BYTE *)v10 + 80) & 1) != 0 )
    {
      if ( !v17 )
        goto LABEL_30;
      v17 ^= (unsigned __int64)v10 + 72;
    }
    if ( v17 )
    {
      v19 = (void *)*((unsigned int *)v5 + 27);
      do
      {
        v20 = RmpGameModeComparePairingByAuxiliaryId(v19, (struct _RTL_BALANCED_NODE *)v17);
        if ( v20 >= 0 )
        {
          if ( v20 <= 0 )
            break;
          v21 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v21 = *(_QWORD *)v17;
        }
        if ( v18 && v21 )
          v17 ^= v21;
        else
          v17 = v21;
      }
      while ( v17 );
      if ( v17 )
        goto LABEL_14;
    }
LABEL_30:
    *((_QWORD *)Heap + 6) = 0LL;
    *((_QWORD *)Heap + 7) = 0LL;
    *(_QWORD *)Heap = 0LL;
    *((_QWORD *)Heap + 1) = 0LL;
    *((_QWORD *)Heap + 2) = -1LL;
    *(_OWORD *)(Heap + 24) = 0LL;
    *((_QWORD *)Heap + 5) = -1LL;
    if ( _InterlockedIncrement64((volatile signed __int64 *)v10) <= 1 )
      __fastfail(0xEu);
    v22 = v25;
    *((_QWORD *)Heap + 6) = v10;
    v23 = _InterlockedIncrement64((volatile signed __int64 *)v22);
    if ( v23 <= 1 )
      __fastfail(0xEu);
    v5 = v25;
    *((_QWORD *)Heap + 7) = v25;
    RmpGameModeInsertProcessPairing((struct _RM_GAME_MODE_PROCESS_PAIRING *)Heap, v23, v14);
    Heap = 0LL;
    v12 = 0;
    goto LABEL_35;
  }
  v12 = -1073741801;
LABEL_37:
  if ( v5 )
    RmpGameModeDereferenceRecipientProcess(v5);
  if ( v10 )
    RmpGameModeDereferenceRecipientProcess(v10);
  if ( Heap )
    HampFreeHeap(Heap);
  return v12;
}
