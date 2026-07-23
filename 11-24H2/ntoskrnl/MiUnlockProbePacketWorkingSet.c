/*
 * XREFs of MiUnlockProbePacketWorkingSet @ 0x14020BCC0
 * Callers:
 *     MiFaultInProbeAddress @ 0x14020ABF4 (MiFaultInProbeAddress.c)
 *     MiProbeAndLockComplete @ 0x1402377D8 (MiProbeAndLockComplete.c)
 *     MiProbeAndLockPacket @ 0x140237CC0 (MiProbeAndLockPacket.c)
 *     MiProbeLeafPteAccess @ 0x1402394D0 (MiProbeLeafPteAccess.c)
 *     MmStoreProbeAndLockPages @ 0x1402E9990 (MmStoreProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x140390AC0 (MmProbeAndLockSelectedPages.c)
 *     MiSplitReducedCommitClonePage @ 0x1404F6C58 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x14020BE60 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 */

__int64 __fastcall MiUnlockProbePacketWorkingSet(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v3; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  char v6; // al
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 )
  {
    v3 = *(_QWORD *)(a1 + 104);
    if ( v1 != 0xFFFFF6FB7DBEDF68uLL )
    {
      if ( (*(_DWORD *)(v3 + 184) & 0xF) != 0
        || v1 < 0xFFFFF6FB7DBED000uLL
        || v1 > 0xFFFFF6FB7DBEDFFFuLL
        || (v8 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
      {
        if ( (*(_DWORD *)(v3 + 184) & 0xF) != 0 && v1 >= 0xFFFFF6FB7DBED000uLL && v1 <= 0xFFFFF6FB7DBEDFFFuLL )
          _InterlockedAnd(
            &dword_140E2F1EC[(unsigned __int64)(2 * (unsigned int)((__int64)(v1 + 0x90482413000LL) >> 3)) >> 5],
            ~(2 << ((2 * ((__int64)(v1 + 0x90482413000LL) >> 3)) & 0x1F)) & ~(1 << ((2
                                                                                   * ((__int64)(v1 + 0x90482413000LL) >> 3)) & 0x1F)));
        else
          _InterlockedAnd64((volatile signed __int64 *)v1, 0xCFFFFFFFFFFFFFFFuLL);
      }
      else
      {
        ExReleaseSpinLockRegardlessFromDpcLevel(v8 + 4 * ((v1 >> 3) & 0x1FF));
      }
      goto LABEL_6;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v6 = *(_DWORD *)(v3 + 184) & 0xF;
    if ( v6 )
    {
      if ( v6 == 7 )
      {
        KxReleaseQueuedSpinLock(&CurrentPrcb->SelfmapLockHandle[1]);
        goto LABEL_6;
      }
      v7 = 3LL;
      if ( v6 == 5 )
        v7 = 0LL;
    }
    else
    {
      v7 = 2LL;
    }
    KxReleaseQueuedSpinLock(&CurrentPrcb->SelfmapLockHandle[v7]);
LABEL_6:
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  return MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 104), *(unsigned __int8 *)(a1 + 76));
}
