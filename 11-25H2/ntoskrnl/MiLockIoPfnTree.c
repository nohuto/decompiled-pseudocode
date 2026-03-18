/*
 * XREFs of MiLockIoPfnTree @ 0x140392384
 * Callers:
 *     MiReferenceIoPages @ 0x1402AD138 (MiReferenceIoPages.c)
 *     MiUnlockOpportunisticPagesInPageTable @ 0x1403911E8 (MiUnlockOpportunisticPagesInPageTable.c)
 *     MiDereferenceIoPages @ 0x140391A60 (MiDereferenceIoPages.c)
 *     MiLookupIoPageNode @ 0x1403920A8 (MiLookupIoPageNode.c)
 *     MiMarkHugeRangeTransition @ 0x1404EDA2C (MiMarkHugeRangeTransition.c)
 *     MiCreateIoPageExclusion @ 0x140669CD8 (MiCreateIoPageExclusion.c)
 *     MiDeleteStaleCacheMaps @ 0x140669E20 (MiDeleteStaleCacheMaps.c)
 *     MiFreezeIoPfnNode @ 0x14066A44C (MiFreezeIoPfnNode.c)
 *     MiIsProbeActive @ 0x14066A808 (MiIsProbeActive.c)
 *     MiMakeIoRangePermanent @ 0x14066A934 (MiMakeIoRangePermanent.c)
 *     MiMarkHugeRangeIoPfnDeleted @ 0x14066AE10 (MiMarkHugeRangeIoPfnDeleted.c)
 *     MiRemoveIoPageExclusion @ 0x14066AFAC (MiRemoveIoPageExclusion.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall MiLockIoPfnTree(__int64 a1)
{
  char v1; // si
  char v2; // di
  unsigned __int8 CurrentIrql; // bl
  __int64 v5; // r14
  unsigned int v6; // ebx
  __int64 v7; // r14
  char v8; // al

  v1 = a1;
  if ( (a1 & 4) != 0 )
  {
    v2 = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1);
    }
    v8 = CurrentIrql;
    if ( CurrentIrql == 2 )
      v8 = 17;
    v2 = v8;
  }
  if ( (v1 & 1) != 0 )
  {
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(*((_QWORD *)KeGetCurrentPrcb()->MmInternal + 41) + 640LL));
  }
  else
  {
    v5 = qword_140E2D8B8;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(qword_140E2D8B8 + 376) + 640LL));
    v6 = 1;
    if ( (unsigned __int16)KeNumberNodes > 1u )
    {
      v7 = v5 + 760;
      do
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)v7 + 640LL));
        v7 += 384LL;
        ++v6;
      }
      while ( v6 < (unsigned __int16)KeNumberNodes );
    }
  }
  return v2;
}
