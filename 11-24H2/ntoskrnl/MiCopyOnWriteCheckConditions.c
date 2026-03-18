/*
 * XREFs of MiCopyOnWriteCheckConditions @ 0x140406AD8
 * Callers:
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     MiSystemFault @ 0x140229570 (MiSystemFault.c)
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     MiMakeProtoPrivate @ 0x140239334 (MiMakeProtoPrivate.c)
 *     MiLockCode @ 0x14023D6F0 (MiLockCode.c)
 *     MiProbeLeafPteAccess @ 0x140283F40 (MiProbeLeafPteAccess.c)
 *     MmProtectPool @ 0x1403889FC (MmProtectPool.c)
 *     MiCopyToUserVa @ 0x1403E2DBC (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x1404051C4 (MiSplitPrivatePage.c)
 *     MiLockPagedAddress @ 0x14047910C (MiLockPagedAddress.c)
 *     MiLockAweVadsShared @ 0x1404C2D68 (MiLockAweVadsShared.c)
 *     MiSplitReducedCommitClonePage @ 0x1404F9378 (MiSplitReducedCommitClonePage.c)
 *     MiLockDriverPageRange @ 0x14066AEB0 (MiLockDriverPageRange.c)
 *     MiReplaceImportEntry @ 0x14066C12C (MiReplaceImportEntry.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14067D29C (MiPrepareImagePagesForHotPatch.c)
 * Callees:
 *     MiWaitForFreePage @ 0x1402CF708 (MiWaitForFreePage.c)
 *     MiGetCurrentSlabIdentity @ 0x1403FC210 (MiGetCurrentSlabIdentity.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140405E18 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x140405F18 (LOCK_ADDRESS_SPACE.c)
 *     MiReplenishSlabAllocator @ 0x140413B18 (MiReplenishSlabAllocator.c)
 */

void __fastcall MiCopyOnWriteCheckConditions(__int64 a1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 Process; // rdi
  struct _KTHREAD *v5; // rax
  char CurrentSlabIdentity; // al
  __int64 v7; // r8
  char v8; // dl

  if ( a2 == -1073740748 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
      Process = (__int64)CurrentThread->ApcState.Process;
      v5 = *(struct _KTHREAD **)(Process + 624);
      if ( v5 )
      {
        if ( v5 != CurrentThread )
        {
          LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)CurrentThread->ApcState.Process);
          UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
        }
      }
    }
  }
  else if ( a2 == -1073741801
         && KeGetCurrentIrql() < 2u
         && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0
         && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 0xC) == 0 )
  {
    if ( a3 )
    {
      MiReplenishSlabAllocator(a3, 1LL, 0x20000LL);
    }
    else
    {
      CurrentSlabIdentity = MiGetCurrentSlabIdentity((__int64)KeGetCurrentThread());
      v8 = 3;
      if ( CurrentSlabIdentity == -1 )
        v8 = 1;
      MiWaitForFreePage(*((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(v7 + 174)), v8);
    }
  }
}
