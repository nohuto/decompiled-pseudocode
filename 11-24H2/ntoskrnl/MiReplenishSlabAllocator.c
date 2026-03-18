/*
 * XREFs of MiReplenishSlabAllocator @ 0x140413B18
 * Callers:
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     MiWalkVaRange @ 0x14028A740 (MiWalkVaRange.c)
 *     MiGetSlabPage @ 0x1402F3934 (MiGetSlabPage.c)
 *     MiSharePages @ 0x1402FA880 (MiSharePages.c)
 *     MiCopyOnWriteCheckConditions @ 0x140406AD8 (MiCopyOnWriteCheckConditions.c)
 *     MiAllocateSlabPageForMdl @ 0x140413A24 (MiAllocateSlabPageForMdl.c)
 *     MiReplenishSlabAllocatorWorker @ 0x140414340 (MiReplenishSlabAllocatorWorker.c)
 *     MiFastReplenishWithAsync @ 0x140414728 (MiFastReplenishWithAsync.c)
 *     MiProtectDriverSectionPte @ 0x14066B400 (MiProtectDriverSectionPte.c)
 *     MiInitialSlabPopulate @ 0x140687F60 (MiInitialSlabPopulate.c)
 *     MmAllocateSecureKernelPages @ 0x140688AC4 (MmAllocateSecureKernelPages.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14020C57C (MiReleaseNonPagedResources.c)
 *     KeQueryPriorityThread @ 0x140248260 (KeQueryPriorityThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     MiFreeSlabEntry @ 0x1402D2150 (MiFreeSlabEntry.c)
 *     MiCreateSlabEntry @ 0x1403A112C (MiCreateSlabEntry.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x1403B6408 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x1403B6558 (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 *     MiInsertSlabEntry @ 0x140413D28 (MiInsertSlabEntry.c)
 *     MiReplenishSlabAllocatorByIdentity @ 0x1404143E8 (MiReplenishSlabAllocatorByIdentity.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiReplenishSlabAllocator(__int64 a1, unsigned __int64 a2, int a3)
{
  int v3; // ebp
  __int64 v4; // r12
  struct _KTHREAD *CurrentThread; // rbx
  int v7; // r15d
  unsigned __int8 CurrentIrql; // r14
  int v9; // r8d
  __int64 SlabEntry; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r13
  unsigned int v14; // ebp
  int v17; // ebp
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // [rsp+60h] [rbp+8h] BYREF
  int v22; // [rsp+70h] [rbp+18h]

  v22 = a3;
  v3 = a3;
  v4 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(a1 + 128) != 8 && *(_QWORD *)(a1 + 96) + **(_QWORD **)(a1 + 80) >= a2 )
    return 1LL;
  CurrentThread = 0LL;
  v7 = 32;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    if ( !KeQueryPriorityThread(CurrentThread) )
    {
      v7 = 1;
      KiSetSystemPriorityThread(CurrentThread, 1, v9);
    }
  }
  if ( *(_DWORD *)(a1 + 128) == 8 )
  {
    v14 = MiReplenishSlabAllocatorByIdentity(a1);
    if ( !v14 )
      goto LABEL_32;
  }
  else
  {
    while ( 1 )
    {
      SlabEntry = MiCreateSlabEntry(a1, v4, v3, CurrentIrql);
      v13 = SlabEntry;
      if ( !SlabEntry )
      {
        v14 = 0;
        goto LABEL_9;
      }
      v17 = *(_DWORD *)(SlabEntry + 92) & 2;
      v18 = 3LL;
      if ( CurrentIrql != 2 )
        v18 = 1LL;
      if ( !(unsigned int)MiInsertSlabEntry(v4, a1, SlabEntry, v18) )
        break;
      if ( CurrentIrql < 2u )
      {
        v20 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v11) = 2;
          KiRaiseIrqlProcessIrqlFlags(v20, v11);
        }
      }
      MiFreeSlabEntry(a1, v13);
      if ( !v17 )
        MiReleaseNonPagedResources(v4, LODWORD(MiPageSizes[(*(_DWORD *)(a1 + 136) >> 4) & 3]));
      v3 = v22;
      if ( CurrentIrql < 2u )
      {
        if ( KiIrqlFlags )
        {
          LOBYTE(v19) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v19);
        }
        __writecr8(CurrentIrql);
LABEL_32:
        v3 = v22;
      }
    }
    if ( !v17 )
      MiReleaseNonPagedResources(v4, LODWORD(MiPageSizes[(*(_DWORD *)(a1 + 136) >> 4) & 3]));
    v14 = 1;
  }
LABEL_9:
  if ( CurrentThread )
  {
    if ( v7 != 32 )
    {
      v21 = v7;
      KiClearSystemPriority(CurrentThread, &v21);
    }
    if ( CurrentThread->SpecialApcDisable++ == -1
      && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery(v12, v11);
    }
  }
  return v14;
}
