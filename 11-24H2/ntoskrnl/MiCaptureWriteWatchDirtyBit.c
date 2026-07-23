/*
 * XREFs of MiCaptureWriteWatchDirtyBit @ 0x140202774
 * Callers:
 *     MiWsleFlush @ 0x140201004 (MiWsleFlush.c)
 *     MiRevertValidPte @ 0x140212130 (MiRevertValidPte.c)
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 *     MiMakeCombineCandidateClean @ 0x140346988 (MiMakeCombineCandidateClean.c)
 *     MiDeleteRotateVa @ 0x14038DD68 (MiDeleteRotateVa.c)
 *     MiUnmapFrameBuffer @ 0x14038E570 (MiUnmapFrameBuffer.c)
 *     MiMakeVaRangeNoAccess @ 0x14049351C (MiMakeVaRangeNoAccess.c)
 *     MiProtectAweRegion @ 0x1404BDA90 (MiProtectAweRegion.c)
 *     MiSwitchToTransition @ 0x1404EEE28 (MiSwitchToTransition.c)
 * Callees:
 *     MiLockVadTree @ 0x140240750 (MiLockVadTree.c)
 *     MiLocateLockedVadEvent @ 0x14026757C (MiLocateLockedVadEvent.c)
 *     MiUnlockVadTree @ 0x140291980 (MiUnlockVadTree.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiLocateAddress @ 0x140344F70 (MiLocateAddress.c)
 *     MiLockVadCore @ 0x1403DAE20 (MiLockVadCore.c)
 *     MiUnlockVadCore @ 0x14041D7C0 (MiUnlockVadCore.c)
 *     MiGetVadMandatoryPageSize @ 0x14044D544 (MiGetVadMandatoryPageSize.c)
 */

void __fastcall MiCaptureWriteWatchDirtyBit(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 Address; // rax
  __int64 v6; // rdx
  __int64 LockedVadEvent; // rax
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  unsigned __int64 VadMandatoryPageSize; // rbx

  v3 = a3;
  if ( (*(_DWORD *)(a1 + 500) & 0x20) == 0 )
  {
    if ( a3
      || (MiLockVadTree(1LL), Address = MiLocateAddress(a2), LOBYTE(v6) = 17, v3 = Address, MiUnlockVadTree(1LL, v6), v3) )
    {
      if ( (*(_DWORD *)(v3 + 48) & 0x600000) == 0x600000 )
      {
        MiLockVadCore(v3, 1LL);
        LockedVadEvent = MiLocateLockedVadEvent(v3, 4LL);
        LOBYTE(v8) = 17;
        v9 = LockedVadEvent;
        MiUnlockVadCore(v10, v8);
        v11 = *(unsigned int *)(v3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32);
        VadMandatoryPageSize = MiGetVadMandatoryPageSize(v3);
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v9 + 8));
        _bittestandset64(*(signed __int64 **)(v9 + 24), ((a2 >> 12) - v11) / VadMandatoryPageSize);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 8));
      }
    }
  }
}
