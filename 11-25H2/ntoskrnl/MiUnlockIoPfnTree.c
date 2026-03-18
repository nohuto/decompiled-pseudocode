/*
 * XREFs of MiUnlockIoPfnTree @ 0x1403922D8
 * Callers:
 *     MiReferenceIoPages @ 0x1402AD138 (MiReferenceIoPages.c)
 *     MiUnlockOpportunisticPagesInPageTable @ 0x1403911E8 (MiUnlockOpportunisticPagesInPageTable.c)
 *     MiLookupIoPageNode @ 0x1403920A8 (MiLookupIoPageNode.c)
 *     MiMarkHugeRangeTransition @ 0x1404EDA2C (MiMarkHugeRangeTransition.c)
 *     MiCreateIoPageExclusion @ 0x140669CD8 (MiCreateIoPageExclusion.c)
 *     MiDeleteStaleCacheMaps @ 0x140669E20 (MiDeleteStaleCacheMaps.c)
 *     MiIsProbeActive @ 0x14066A808 (MiIsProbeActive.c)
 *     MiMakeIoRangePermanent @ 0x14066A934 (MiMakeIoRangePermanent.c)
 *     MiMarkHugeRangeIoPfnDeleted @ 0x14066AE10 (MiMarkHugeRangeIoPfnDeleted.c)
 *     MiRemoveIoPageExclusion @ 0x14066AFAC (MiRemoveIoPageExclusion.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
    v6 = qword_140E2D8B8;
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
