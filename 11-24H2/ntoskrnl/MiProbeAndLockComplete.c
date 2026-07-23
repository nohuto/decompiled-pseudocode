/*
 * XREFs of MiProbeAndLockComplete @ 0x1402377D8
 * Callers:
 *     MmProbeAndLockPages @ 0x1402378C0 (MmProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x140390AC0 (MmProbeAndLockSelectedPages.c)
 *     MiProbeAndLockPages @ 0x140415B10 (MiProbeAndLockPages.c)
 *     IopProbeAndLockPages_0 @ 0x14042AF44 (IopProbeAndLockPages_0.c)
 *     MmLockPhysicalPagesByVa @ 0x1407EAF70 (MmLockPhysicalPagesByVa.c)
 * Callees:
 *     MiUnlockProbePacketWorkingSet @ 0x14020BCC0 (MiUnlockProbePacketWorkingSet.c)
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     MiAddMdlTracker @ 0x1404CBC78 (MiAddMdlTracker.c)
 *     MmUnlockPhysicalPagesByVa @ 0x1407EB07C (MmUnlockPhysicalPagesByVa.c)
 */

__int64 __fastcall MiProbeAndLockComplete(__int64 a1, int a2)
{
  __int64 v4; // r8
  struct _MDL *v5; // rdi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx

  MiUnlockProbePacketWorkingSet(a1);
  v5 = *(struct _MDL **)(a1 + 64);
  if ( (*(_DWORD *)(a1 + 72) & 0x40) == 0 && (MmTrackLockedPages & 1) != 0 )
    MiAddMdlTracker(*(_QWORD *)(a1 + 64));
  if ( a2 < 0 )
  {
    if ( (*(_DWORD *)(a1 + 72) & 0x40) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 8);
      v7 = *(_QWORD *)a1;
      if ( v6 > *(_QWORD *)a1 )
        MmUnlockPhysicalPagesByVa(v7, v6 - v7, v4, *(unsigned int *)(a1 + 96));
      LODWORD(v7) = KeGetPcr()->Prcb.Number;
      _InterlockedAdd64(
        (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 1040LL) + ((((v7 >> 1) & 3) + 8) << 6)),
        -((*(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 8)) >> 12));
    }
    else
    {
      MmUnlockPages(v5);
    }
    ++dword_140E30264;
  }
  return (unsigned int)a2;
}
