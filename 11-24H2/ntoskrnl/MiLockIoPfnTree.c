/*
 * XREFs of MiLockIoPfnTree @ 0x14038FA2C
 * Callers:
 *     MiReferenceIoPages @ 0x140238698 (MiReferenceIoPages.c)
 *     MiUnlockOpportunisticPagesInPageTable @ 0x14038DEE4 (MiUnlockOpportunisticPagesInPageTable.c)
 *     MiDereferenceIoPages @ 0x14038E760 (MiDereferenceIoPages.c)
 *     MiLookupIoPageNode @ 0x14038F750 (MiLookupIoPageNode.c)
 *     MiMarkHugeRangeTransition @ 0x1404EECA8 (MiMarkHugeRangeTransition.c)
 *     MiCreateIoPageExclusion @ 0x140676908 (MiCreateIoPageExclusion.c)
 *     MiDeleteStaleCacheMaps @ 0x140676A50 (MiDeleteStaleCacheMaps.c)
 *     MiFreezeIoPfnNode @ 0x14067707C (MiFreezeIoPfnNode.c)
 *     MiIsProbeActive @ 0x140677438 (MiIsProbeActive.c)
 *     MiMakeIoRangePermanent @ 0x140677564 (MiMakeIoRangePermanent.c)
 *     MiMarkHugeRangeIoPfnDeleted @ 0x140677A40 (MiMarkHugeRangeIoPfnDeleted.c)
 *     MiRemoveIoPageExclusion @ 0x140677BDC (MiRemoveIoPageExclusion.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall MiLockIoPfnTree(__int64 a1, __int64 a2)
{
  char v2; // si
  char v3; // di
  unsigned __int8 CurrentIrql; // bl
  __int64 v6; // r14
  unsigned int v7; // ebx
  __int64 v8; // r14
  char v9; // al

  v2 = a1;
  if ( (a1 & 4) != 0 )
  {
    v3 = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, a2);
    }
    v9 = CurrentIrql;
    if ( CurrentIrql == 2 )
      v9 = 17;
    v3 = v9;
  }
  if ( (v2 & 1) != 0 )
  {
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(*((_QWORD *)KeGetCurrentPrcb()->MmInternal + 41) + 640LL));
  }
  else
  {
    v6 = qword_140E2DC38;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(qword_140E2DC38 + 376) + 640LL));
    v7 = 1;
    if ( (unsigned __int16)KeNumberNodes > 1u )
    {
      v8 = v6 + 760;
      do
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)v8 + 640LL));
        v8 += 384LL;
        ++v7;
      }
      while ( v7 < (unsigned __int16)KeNumberNodes );
    }
  }
  return v3;
}
