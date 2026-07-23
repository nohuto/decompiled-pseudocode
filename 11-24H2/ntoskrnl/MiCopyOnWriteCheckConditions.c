/*
 * XREFs of MiCopyOnWriteCheckConditions @ 0x1403C927C
 * Callers:
 *     MiLockCode @ 0x140205480 (MiLockCode.c)
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     MiProbeLeafPteAccess @ 0x1402394D0 (MiProbeLeafPteAccess.c)
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MiSystemFault @ 0x1402FC7E0 (MiSystemFault.c)
 *     MmProtectPool @ 0x14038233C (MmProtectPool.c)
 *     MiSplitPrivatePage @ 0x1403C7720 (MiSplitPrivatePage.c)
 *     MiCopyToUserVa @ 0x1403C9340 (MiCopyToUserVa.c)
 *     MiMakeProtoPrivate @ 0x1403C9630 (MiMakeProtoPrivate.c)
 *     MiLockPagedAddress @ 0x14047499C (MiLockPagedAddress.c)
 *     MiLockAweVadsShared @ 0x1404BE2A0 (MiLockAweVadsShared.c)
 *     MiSplitReducedCommitClonePage @ 0x1404F6C58 (MiSplitReducedCommitClonePage.c)
 *     MiLockDriverPageRange @ 0x14066C080 (MiLockDriverPageRange.c)
 *     MiReplaceImportEntry @ 0x14066D2FC (MiReplaceImportEntry.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14067E494 (MiPrepareImagePagesForHotPatch.c)
 * Callees:
 *     MiReplenishSlabAllocator @ 0x14021E544 (MiReplenishSlabAllocator.c)
 *     MiWaitForFreePage @ 0x140260F64 (MiWaitForFreePage.c)
 *     MiGetCurrentSlabIdentity @ 0x1402619D0 (MiGetCurrentSlabIdentity.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1403C8374 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403C8474 (LOCK_ADDRESS_SPACE.c)
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
      MiReplenishSlabAllocator(a3, 1uLL, 0x20000);
    }
    else
    {
      CurrentSlabIdentity = MiGetCurrentSlabIdentity((__int64)KeGetCurrentThread());
      v8 = 3;
      if ( CurrentSlabIdentity == -1 )
        v8 = 1;
      MiWaitForFreePage(*((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(v7 + 174)), v8);
    }
  }
}
