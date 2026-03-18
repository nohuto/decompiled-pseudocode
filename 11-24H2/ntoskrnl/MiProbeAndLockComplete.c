/*
 * XREFs of MiProbeAndLockComplete @ 0x140282248
 * Callers:
 *     MmProbeAndLockPages @ 0x140282330 (MmProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x140286070 (MmProbeAndLockSelectedPages.c)
 *     MiProbeAndLockPages @ 0x140420120 (MiProbeAndLockPages.c)
 *     IopProbeAndLockPages_0 @ 0x140438384 (IopProbeAndLockPages_0.c)
 *     MmLockPhysicalPagesByVa @ 0x1407EA9A0 (MmLockPhysicalPagesByVa.c)
 * Callees:
 *     MmUnlockPages @ 0x140267F30 (MmUnlockPages.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1402E1C10 (MiUnlockProbePacketWorkingSet.c)
 *     MiAddMdlTracker @ 0x1404D2AB8 (MiAddMdlTracker.c)
 *     MmUnlockPhysicalPagesByVa @ 0x1407EAAAC (MmUnlockPhysicalPagesByVa.c)
 */

__int64 __fastcall MiProbeAndLockComplete(unsigned __int64 *a1, int a2)
{
  __int64 v4; // r8
  struct _MDL *v5; // rdi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx

  MiUnlockProbePacketWorkingSet();
  v5 = (struct _MDL *)a1[8];
  if ( (a1[9] & 0x40) == 0 && (MmTrackLockedPages & 1) != 0 )
    MiAddMdlTracker(a1[8]);
  if ( a2 < 0 )
  {
    if ( (a1[9] & 0x40) != 0 )
    {
      v6 = a1[1];
      v7 = *a1;
      if ( v6 > *a1 )
        MmUnlockPhysicalPagesByVa(v7, v6 - v7, v4, *((unsigned int *)a1 + 24));
      LODWORD(v7) = KeGetPcr()->Prcb.Number;
      _InterlockedAdd64(
        (volatile signed __int64 *)(*(_QWORD *)(a1[11] + 1040) + ((((v7 >> 1) & 3) + 8) << 6)),
        -(__int64)((a1[2] - a1[1]) >> 12));
    }
    else
    {
      MmUnlockPages(v5);
    }
    ++dword_140E30124;
  }
  return (unsigned int)a2;
}
