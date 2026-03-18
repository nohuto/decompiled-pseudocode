/*
 * XREFs of MiProbeAndLockComplete @ 0x14046B730
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x1402AABA0 (MmProbeAndLockSelectedPages.c)
 *     MmLockPhysicalPagesByVa @ 0x1407DAAE0 (MmLockPhysicalPagesByVa.c)
 * Callees:
 *     MiUnlockProbePacketWorkingSet @ 0x1402BB270 (MiUnlockProbePacketWorkingSet.c)
 *     MmUnlockPages @ 0x1402D4670 (MmUnlockPages.c)
 *     MiAddMdlTracker @ 0x1404D2BE8 (MiAddMdlTracker.c)
 *     MmUnlockPhysicalPagesByVa @ 0x1407DABEC (MmUnlockPhysicalPagesByVa.c)
 */

__int64 __fastcall MiProbeAndLockComplete(__int64 a1, int a2)
{
  __int64 v4; // r8
  struct _MDL *v5; // rdi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  volatile signed __int64 *v10; // rax

  MiUnlockProbePacketWorkingSet(a1);
  v5 = *(struct _MDL **)(a1 + 64);
  if ( (*(_DWORD *)(a1 + 72) & 0x40) == 0 && (MmTrackLockedPages & 1) != 0 )
    MiAddMdlTracker(*(_QWORD *)(a1 + 64));
  if ( a2 < 0 )
  {
    if ( (*(_DWORD *)(a1 + 72) & 0x40) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 8);
      if ( v6 > *(_QWORD *)a1 )
        MmUnlockPhysicalPagesByVa(*(_QWORD *)a1, v6 - *(_QWORD *)a1, v4, *(unsigned int *)(a1 + 96));
      v7 = *(_QWORD *)(a1 + 88);
      if ( MmNumLockedPagesFixEnabled )
      {
        v8 = *(_QWORD *)(v7 + 1040);
        if ( MmNumLockedPagesFanOutEnabled )
        {
          LODWORD(v7) = KeGetPcr()->Prcb.Number;
          v9 = v8 + (((v7 >> 1) & 3) << 6);
        }
        else
        {
          v9 = *(_QWORD *)(v7 + 1040);
        }
        v10 = (volatile signed __int64 *)(v9 + 512);
      }
      else
      {
        v10 = (volatile signed __int64 *)(v7 + 656);
      }
      _InterlockedAdd64(v10, -((*(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 8)) >> 12));
    }
    else
    {
      MmUnlockPages(v5);
    }
    ++dword_140E2FEDC;
  }
  return (unsigned int)a2;
}
