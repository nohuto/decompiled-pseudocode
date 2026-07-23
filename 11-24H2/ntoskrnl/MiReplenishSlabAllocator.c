/*
 * XREFs of MiReplenishSlabAllocator @ 0x14021E544
 * Callers:
 *     MiAllocateSlabPageForMdl @ 0x14021CD30 (MiAllocateSlabPageForMdl.c)
 *     MiGetSlabPage @ 0x14021CE24 (MiGetSlabPage.c)
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MiFastReplenishWithAsync @ 0x14026F5B8 (MiFastReplenishWithAsync.c)
 *     MiWalkVaRange @ 0x14029A340 (MiWalkVaRange.c)
 *     MiSharePages @ 0x140343830 (MiSharePages.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403C927C (MiCopyOnWriteCheckConditions.c)
 *     MiReplenishSlabAllocatorWorker @ 0x140498060 (MiReplenishSlabAllocatorWorker.c)
 *     MiProtectDriverSectionPte @ 0x14066C5D0 (MiProtectDriverSectionPte.c)
 *     MiInitialSlabPopulate @ 0x140689090 (MiInitialSlabPopulate.c)
 *     MmAllocateSecureKernelPages @ 0x140689BF4 (MmAllocateSecureKernelPages.c)
 * Callees:
 *     MiCreateSlabEntry @ 0x140217C8C (MiCreateSlabEntry.c)
 *     MiInsertSlabEntry @ 0x14021E754 (MiInsertSlabEntry.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x1402AE6EC (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x1402AE83C (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 *     KeQueryPriorityThread @ 0x1402E24A0 (KeQueryPriorityThread.c)
 *     MiReleaseNonPagedResources @ 0x1403358DC (MiReleaseNonPagedResources.c)
 *     MiFreeSlabEntry @ 0x1403533C8 (MiFreeSlabEntry.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiReplenishSlabAllocatorByIdentity @ 0x1404B74A4 (MiReplenishSlabAllocatorByIdentity.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiReplenishSlabAllocator(__int64 a1, unsigned __int64 a2, int a3)
{
  int v3; // ebp
  __int64 v4; // r12
  struct _KTHREAD *CurrentThread; // rbx
  int v7; // r15d
  unsigned __int8 CurrentIrql; // r14
  unsigned int v9; // r8d
  __int64 SlabEntry; // rax
  __int64 v11; // r13
  unsigned int v12; // ebp
  int v15; // ebp
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // [rsp+60h] [rbp+8h] BYREF
  int v21; // [rsp+70h] [rbp+18h]

  v21 = a3;
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
      KiSetSystemPriorityThread((ULONG_PTR)CurrentThread, 1, v9);
    }
  }
  if ( *(_DWORD *)(a1 + 128) == 8 )
  {
    v12 = MiReplenishSlabAllocatorByIdentity(a1);
    if ( !v12 )
      goto LABEL_32;
  }
  else
  {
    while ( 1 )
    {
      SlabEntry = MiCreateSlabEntry(a1, v4, v3, CurrentIrql);
      v11 = SlabEntry;
      if ( !SlabEntry )
      {
        v12 = 0;
        goto LABEL_9;
      }
      v15 = *(_DWORD *)(SlabEntry + 92) & 2;
      v16 = 3LL;
      if ( CurrentIrql != 2 )
        v16 = 1LL;
      if ( !(unsigned int)MiInsertSlabEntry(v4, a1, SlabEntry, v16) )
        break;
      if ( CurrentIrql < 2u )
      {
        v19 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v17) = 2;
          KiRaiseIrqlProcessIrqlFlags(v19, v17);
        }
      }
      MiFreeSlabEntry(a1, v11);
      if ( !v15 )
        MiReleaseNonPagedResources(v4, LODWORD(MiPageSizes[(*(_DWORD *)(a1 + 136) >> 4) & 3]));
      v3 = v21;
      if ( CurrentIrql < 2u )
      {
        if ( KiIrqlFlags )
        {
          LOBYTE(v18) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v18);
        }
        __writecr8(CurrentIrql);
LABEL_32:
        v3 = v21;
      }
    }
    if ( !v15 )
      MiReleaseNonPagedResources(v4, LODWORD(MiPageSizes[(*(_DWORD *)(a1 + 136) >> 4) & 3]));
    v12 = 1;
  }
LABEL_9:
  if ( CurrentThread )
  {
    if ( v7 != 32 )
    {
      v20 = v7;
      KiClearSystemPriority((ULONG_PTR)CurrentThread, &v20);
    }
    if ( CurrentThread->SpecialApcDisable++ == -1
      && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v12;
}
