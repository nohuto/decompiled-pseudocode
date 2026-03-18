/*
 * XREFs of MiUnlockIoPfnTree @ 0x1403D0468
 * Callers:
 *     MiReferenceIoPages @ 0x140283108 (MiReferenceIoPages.c)
 *     MiLookupIoPageNode @ 0x1403D0238 (MiLookupIoPageNode.c)
 *     MiUnlockOpportunisticPagesInPageTable @ 0x1403D1CC8 (MiUnlockOpportunisticPagesInPageTable.c)
 *     MiMarkHugeRangeTransition @ 0x1404F1208 (MiMarkHugeRangeTransition.c)
 *     MiCreateIoPageExclusion @ 0x140675738 (MiCreateIoPageExclusion.c)
 *     MiDeleteStaleCacheMaps @ 0x140675880 (MiDeleteStaleCacheMaps.c)
 *     MiIsProbeActive @ 0x140676268 (MiIsProbeActive.c)
 *     MiMakeIoRangePermanent @ 0x140676394 (MiMakeIoRangePermanent.c)
 *     MiMarkHugeRangeIoPfnDeleted @ 0x140676870 (MiMarkHugeRangeIoPfnDeleted.c)
 *     MiRemoveIoPageExclusion @ 0x140676A0C (MiRemoveIoPageExclusion.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
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
    v6 = qword_140E2DAF8;
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
