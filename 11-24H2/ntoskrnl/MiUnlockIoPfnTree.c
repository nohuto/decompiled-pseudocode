/*
 * XREFs of MiUnlockIoPfnTree @ 0x14038F980
 * Callers:
 *     MiReferenceIoPages @ 0x140238698 (MiReferenceIoPages.c)
 *     MiUnlockOpportunisticPagesInPageTable @ 0x14038DEE4 (MiUnlockOpportunisticPagesInPageTable.c)
 *     MiLookupIoPageNode @ 0x14038F750 (MiLookupIoPageNode.c)
 *     MiMarkHugeRangeTransition @ 0x1404EECA8 (MiMarkHugeRangeTransition.c)
 *     MiCreateIoPageExclusion @ 0x140676908 (MiCreateIoPageExclusion.c)
 *     MiDeleteStaleCacheMaps @ 0x140676A50 (MiDeleteStaleCacheMaps.c)
 *     MiIsProbeActive @ 0x140677438 (MiIsProbeActive.c)
 *     MiMakeIoRangePermanent @ 0x140677564 (MiMakeIoRangePermanent.c)
 *     MiMarkHugeRangeIoPfnDeleted @ 0x140677A40 (MiMarkHugeRangeIoPfnDeleted.c)
 *     MiRemoveIoPageExclusion @ 0x140677BDC (MiRemoveIoPageExclusion.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall MiUnlockIoPfnTree(unsigned __int8 a1, char a2)
{
  unsigned __int64 v2; // rdi
  volatile LONG *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rbp
  unsigned int v7; // ebx
  volatile LONG *v8; // rcx

  v2 = a1;
  if ( (a2 & 1) != 0 )
  {
    v4 = (volatile LONG *)(*((_QWORD *)KeGetCurrentPrcb()->MmInternal + 41) + 640LL);
    if ( (a2 & 4) != 0 || (_BYTE)v2 == 17 )
    {
      ExReleaseSpinLockSharedFromDpcLevel(v4);
    }
    else
    {
      ExReleaseSpinLockSharedFromDpcLevel(v4);
      if ( KiIrqlFlags )
      {
        LOBYTE(v5) = v2;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
      }
      __writecr8(v2);
    }
  }
  else
  {
    v6 = qword_140E2DC38;
    v7 = 0;
    if ( KeNumberNodes != 1 )
    {
      do
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(v6 + 376) + 640LL));
        v6 += 384LL;
        ++v7;
      }
      while ( v7 < (unsigned int)(unsigned __int16)KeNumberNodes - 1 );
    }
    v8 = (volatile LONG *)(*(_QWORD *)(v6 + 376) + 640LL);
    if ( (a2 & 4) != 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v8);
    else
      MiReleaseSpinLockExclusive(v8, v2);
  }
}
