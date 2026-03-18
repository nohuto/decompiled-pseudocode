/*
 * XREFs of MiUnlockProbePacketWorkingSet @ 0x1402BB270
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x1402AABA0 (MmProbeAndLockSelectedPages.c)
 *     MiProbeAndLockPacket @ 0x1402AC750 (MiProbeAndLockPacket.c)
 *     MiProbeLeafPteAccess @ 0x1402ADF50 (MiProbeLeafPteAccess.c)
 *     MmStoreProbeAndLockPages @ 0x1402CB0A0 (MmStoreProbeAndLockPages.c)
 *     MmProbeAndLockPages @ 0x1402D5660 (MmProbeAndLockPages.c)
 *     MiFaultInProbeAddress @ 0x1402FC28C (MiFaultInProbeAddress.c)
 *     MiProbeAndLockComplete @ 0x14046B730 (MiProbeAndLockComplete.c)
 *     MiSplitReducedCommitClonePage @ 0x1404F6C24 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402BBC90 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 */

char __fastcall MiUnlockProbePacketWorkingSet(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v3; // r9
  unsigned __int64 v5; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  char v7; // al
  __int64 v8; // rdx

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 )
  {
    v3 = *(_QWORD *)(a1 + 104);
    if ( v1 != 0xFFFFF6FB7DBEDF68uLL )
    {
      if ( (*(_DWORD *)(v3 + 184) & 0xF) != 0
        || v1 < 0xFFFFF6FB7DBED000uLL
        || v1 > 0xFFFFF6FB7DBEDFFFuLL
        || (v5 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
      {
        if ( (*(_DWORD *)(v3 + 184) & 0xF) != 0 && v1 >= 0xFFFFF6FB7DBED000uLL && v1 <= 0xFFFFF6FB7DBEDFFFuLL )
          _InterlockedAnd(
            &dword_140E2EE6C[(unsigned __int64)(2 * (unsigned int)((__int64)(v1 + 0x90482413000LL) >> 3)) >> 5],
            ~(2 << ((2 * ((__int64)(v1 + 0x90482413000LL) >> 3)) & 0x1F)) & ~(1 << ((2
                                                                                   * ((__int64)(v1 + 0x90482413000LL) >> 3)) & 0x1F)));
        else
          _InterlockedAnd64((volatile signed __int64 *)v1, 0xCFFFFFFFFFFFFFFFuLL);
      }
      else
      {
        ExReleaseSpinLockRegardlessFromDpcLevel(v5 + 4 * ((v1 >> 3) & 0x1FF));
      }
      goto LABEL_9;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v7 = *(_DWORD *)(v3 + 184) & 0xF;
    if ( v7 )
    {
      if ( v7 == 7 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[1]);
        goto LABEL_9;
      }
      v8 = 3LL;
      if ( v7 == 5 )
        v8 = 0LL;
    }
    else
    {
      v8 = 2LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[v8]);
LABEL_9:
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  return MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 104), *(_BYTE *)(a1 + 76));
}
