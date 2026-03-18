/*
 * XREFs of MiCaptureWriteWatchDirtyBit @ 0x1402A3914
 * Callers:
 *     MiMakeCombineCandidateClean @ 0x140239E58 (MiMakeCombineCandidateClean.c)
 *     MiWsleFlush @ 0x1402479D4 (MiWsleFlush.c)
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 *     MiRevertValidPte @ 0x140380260 (MiRevertValidPte.c)
 *     MiDeleteRotateVa @ 0x14039106C (MiDeleteRotateVa.c)
 *     MiUnmapFrameBuffer @ 0x140391878 (MiUnmapFrameBuffer.c)
 *     MiMakeVaRangeNoAccess @ 0x1404A0378 (MiMakeVaRangeNoAccess.c)
 *     MiSwitchToTransition @ 0x1404AC960 (MiSwitchToTransition.c)
 *     MiProtectAweRegion @ 0x1404C3BAC (MiProtectAweRegion.c)
 * Callees:
 *     MiUnlockVadCore @ 0x1402A3820 (MiUnlockVadCore.c)
 *     MiLockVadCore @ 0x1402A3860 (MiLockVadCore.c)
 *     MiGetVadMandatoryPageSize @ 0x1402A57A0 (MiGetVadMandatoryPageSize.c)
 *     MiLocateLockedVadEvent @ 0x1402A57D4 (MiLocateLockedVadEvent.c)
 *     MiUnlockVadTree @ 0x1402A8690 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402B57D0 (MiLocateAddress.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiCaptureWriteWatchDirtyBit(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 Address; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // r15
  __int64 LockedVadEvent; // rbp
  unsigned __int64 v9; // rdi
  unsigned __int64 VadMandatoryPageSize; // rbx
  __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rbx

  v3 = a3;
  if ( (*(_DWORD *)(a1 + 500) & 0x20) == 0 )
  {
    if ( a3
      || (MiLockVadTree(1LL), Address = MiLocateAddress(a2), LOBYTE(v6) = 17, v3 = Address, MiUnlockVadTree(1LL, v6), v3) )
    {
      if ( (*(_DWORD *)(v3 + 48) & 0x600000) == 0x600000 )
      {
        v7 = a2 >> 12;
        if ( MmVadEventBlockFixEnabled )
        {
          MiLockVadCore(v3, 1);
          LockedVadEvent = MiLocateLockedVadEvent(v3, 4LL);
          _InterlockedAnd((volatile signed __int32 *)(v3 + 48), 0x7FFFFFFCu);
          v9 = *(unsigned int *)(v3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32);
          VadMandatoryPageSize = MiGetVadMandatoryPageSize(v3);
          ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(LockedVadEvent + 8));
          _bittestandset64(*(signed __int64 **)(LockedVadEvent + 24), (v7 - v9) / VadMandatoryPageSize);
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(LockedVadEvent + 8));
        }
        else
        {
          v11 = MiLocateLockedVadEvent(v3, 4LL);
          v12 = *(unsigned int *)(v3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32);
          v13 = MiGetVadMandatoryPageSize(v3);
          MiLockVadCore(v3, 1);
          _bittestandset64(*(signed __int64 **)(v11 + 16), (v7 - v12) / v13);
          MiUnlockVadCore(v3, 0x11u);
        }
      }
    }
  }
}
