/*
 * XREFs of MiCaptureWriteWatchDirtyBit @ 0x1404F31F8
 * Callers:
 *     MiRevertValidPte @ 0x140237FA0 (MiRevertValidPte.c)
 *     MiWsleFlush @ 0x140286410 (MiWsleFlush.c)
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 *     MiMakeCombineCandidateClean @ 0x1402FA1D0 (MiMakeCombineCandidateClean.c)
 *     MiDeleteRotateVa @ 0x1403CDA5C (MiDeleteRotateVa.c)
 *     MiUnmapFrameBuffer @ 0x1403CE530 (MiUnmapFrameBuffer.c)
 *     MiMakeVaRangeNoAccess @ 0x140498B94 (MiMakeVaRangeNoAccess.c)
 *     MiProtectAweRegion @ 0x1404C2558 (MiProtectAweRegion.c)
 *     MiSwitchToTransition @ 0x1404F1388 (MiSwitchToTransition.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlockVadTree @ 0x140261370 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1402DEE70 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402FC070 (MiLocateAddress.c)
 *     MiLocateLockedVadEvent @ 0x1403CDE38 (MiLocateLockedVadEvent.c)
 *     MiLockVadCore @ 0x1403FD500 (MiLockVadCore.c)
 *     MiUnlockVadCore @ 0x140429670 (MiUnlockVadCore.c)
 *     MiGetVadMandatoryPageSize @ 0x140458234 (MiGetVadMandatoryPageSize.c)
 */

void __fastcall MiCaptureWriteWatchDirtyBit(__int64 a1, unsigned __int64 a2, struct _LIST_ENTRY *a3)
{
  struct _LIST_ENTRY *Address; // rbx
  unsigned __int64 LockedVadEvent; // rbp
  __int64 v6; // rcx
  unsigned __int64 v7; // rdi
  unsigned __int64 VadMandatoryPageSize; // rbx

  Address = a3;
  if ( (*(_DWORD *)(a1 + 500) & 0x20) == 0 )
  {
    if ( a3 || (MiLockVadTree(1, a2, 0LL), Address = MiLocateAddress(a2), MiUnlockVadTree(1, 0x11u), Address) )
    {
      if ( ((__int64)Address[3].Flink & 0x600000) == 0x600000 )
      {
        MiLockVadCore((__int64)Address, 1);
        LockedVadEvent = MiLocateLockedVadEvent((__int64)Address, 4);
        MiUnlockVadCore(v6, 0x11u);
        v7 = LODWORD(Address[1].Blink) | ((unsigned __int64)LOBYTE(Address[2].Flink) << 32);
        VadMandatoryPageSize = MiGetVadMandatoryPageSize((__int64)Address);
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(LockedVadEvent + 8));
        _bittestandset64(*(signed __int64 **)(LockedVadEvent + 24), ((a2 >> 12) - v7) / VadMandatoryPageSize);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(LockedVadEvent + 8));
      }
    }
  }
}
