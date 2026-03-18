/*
 * XREFs of MiCopyOnWriteCheckConditions @ 0x1403DE840
 * Callers:
 *     MiProbeLeafPteAccess @ 0x1402ADF50 (MiProbeLeafPteAccess.c)
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 *     MmProtectPool @ 0x14039FEDC (MmProtectPool.c)
 *     MiCopyToUserVa @ 0x1403DDE48 (MiCopyToUserVa.c)
 *     MiMakeProtoPrivate @ 0x1403DE138 (MiMakeProtoPrivate.c)
 *     MiSystemFault @ 0x1403E1EBC (MiSystemFault.c)
 *     MiLockCode @ 0x1403FE950 (MiLockCode.c)
 *     MiSplitPrivatePage @ 0x1404672C0 (MiSplitPrivatePage.c)
 *     MiLockPagedAddress @ 0x140478BA0 (MiLockPagedAddress.c)
 *     MiLockAweVadsShared @ 0x1404C43BC (MiLockAweVadsShared.c)
 *     MiSplitReducedCommitClonePage @ 0x1404F6C24 (MiSplitReducedCommitClonePage.c)
 *     MiLockDriverPageRange @ 0x14065F370 (MiLockDriverPageRange.c)
 *     MiReplaceImportEntry @ 0x1406605EC (MiReplaceImportEntry.c)
 *     MiPrepareImagePagesForHotPatch @ 0x140671A88 (MiPrepareImagePagesForHotPatch.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1402A3CEC (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiReplenishSlabAllocator @ 0x1403769E8 (MiReplenishSlabAllocator.c)
 *     MiGetCurrentSlabIdentity @ 0x1403BEAC0 (MiGetCurrentSlabIdentity.c)
 *     MiWaitForFreePage @ 0x1403BFC64 (MiWaitForFreePage.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403D824C (LOCK_ADDRESS_SPACE.c)
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
      MiReplenishSlabAllocator(a3, 1uLL, 0x20000u, a3);
    }
    else
    {
      CurrentSlabIdentity = MiGetCurrentSlabIdentity((__int64)KeGetCurrentThread());
      v8 = 3;
      if ( CurrentSlabIdentity == -1 )
        v8 = 1;
      MiWaitForFreePage(*((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(v7 + 174)), v8);
    }
  }
}
