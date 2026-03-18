/*
 * XREFs of MiReplenishSlabAllocator @ 0x1403769E8
 * Callers:
 *     MiAllocateSlabPageForMdl @ 0x14022AE68 (MiAllocateSlabPageForMdl.c)
 *     MiGetSlabPage @ 0x14022BC70 (MiGetSlabPage.c)
 *     MiWalkVaRange @ 0x140236150 (MiWalkVaRange.c)
 *     MiSharePages @ 0x140238650 (MiSharePages.c)
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 *     MiFastReplenishWithAsync @ 0x140390EA8 (MiFastReplenishWithAsync.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403DE840 (MiCopyOnWriteCheckConditions.c)
 *     MiReplenishSlabAllocatorWorker @ 0x14049E140 (MiReplenishSlabAllocatorWorker.c)
 *     MiProtectDriverSectionPte @ 0x14065F8C0 (MiProtectDriverSectionPte.c)
 *     MiInitialSlabPopulate @ 0x14067C6D0 (MiInitialSlabPopulate.c)
 *     MmAllocateSecureKernelPages @ 0x14067D234 (MmAllocateSecureKernelPages.c)
 * Callees:
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x140204644 (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x140204704 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     MiReleaseNonPagedResources @ 0x14021133C (MiReleaseNonPagedResources.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     KeQueryPriorityThread @ 0x140375500 (KeQueryPriorityThread.c)
 *     MiCreateSlabEntry @ 0x140376BF8 (MiCreateSlabEntry.c)
 *     MiFreeSlabEntry @ 0x1403B6480 (MiFreeSlabEntry.c)
 *     MiInsertSlabEntry @ 0x14045C760 (MiInsertSlabEntry.c)
 *     MiReplenishSlabAllocatorByIdentity @ 0x1404BD434 (MiReplenishSlabAllocatorByIdentity.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiReplenishSlabAllocator(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // ebp
  __int64 v5; // r12
  struct _KTHREAD *CurrentThread; // rbx
  int v8; // r15d
  unsigned __int8 CurrentIrql; // r14
  int v10; // r8d
  __int64 SlabEntry; // rax
  __int64 v12; // r13
  unsigned int v13; // ebp
  int v16; // ebp
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v21; // [rsp+70h] [rbp+18h]

  v21 = a3;
  v4 = a3;
  v5 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(a1 + 128) != 8 && *(_QWORD *)(a1 + 96) + **(_QWORD **)(a1 + 80) >= a2 )
    return 1LL;
  CurrentThread = 0LL;
  v8 = 32;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    if ( !KeQueryPriorityThread(CurrentThread) )
    {
      v8 = 1;
      KiSetSystemPriorityThread((ULONG_PTR)CurrentThread, 1, v10);
    }
  }
  if ( *(_DWORD *)(a1 + 128) == 8 )
  {
    v13 = MiReplenishSlabAllocatorByIdentity(a1);
    if ( !v13 )
      goto LABEL_32;
  }
  else
  {
    while ( 1 )
    {
      LOBYTE(a4) = CurrentIrql;
      SlabEntry = MiCreateSlabEntry(a1, v5, v4, a4);
      v12 = SlabEntry;
      if ( !SlabEntry )
      {
        v13 = 0;
        goto LABEL_9;
      }
      v16 = *(_DWORD *)(SlabEntry + 92) & 2;
      v17 = 3LL;
      if ( CurrentIrql != 2 )
        v17 = 1LL;
      if ( !(unsigned int)MiInsertSlabEntry(v5, a1, SlabEntry, v17) )
        break;
      if ( CurrentIrql < 2u )
      {
        v19 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v19);
      }
      MiFreeSlabEntry(a1, v12);
      if ( !v16 )
        MiReleaseNonPagedResources(v5, LODWORD(MiPageSizes[(*(_DWORD *)(a1 + 136) >> 4) & 3]));
      v4 = v21;
      if ( CurrentIrql < 2u )
      {
        if ( KiIrqlFlags )
        {
          LOBYTE(v18) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v18);
        }
        __writecr8(CurrentIrql);
LABEL_32:
        v4 = v21;
      }
    }
    if ( !v16 )
      MiReleaseNonPagedResources(v5, LODWORD(MiPageSizes[(*(_DWORD *)(a1 + 136) >> 4) & 3]));
    v13 = 1;
  }
LABEL_9:
  if ( CurrentThread )
  {
    if ( v8 != 32 )
    {
      v20 = v8;
      KiClearSystemPriority((ULONG_PTR)CurrentThread, &v20);
    }
    if ( CurrentThread->SpecialApcDisable++ == -1
      && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v13;
}
