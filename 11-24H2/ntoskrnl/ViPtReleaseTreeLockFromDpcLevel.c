/*
 * XREFs of ViPtReleaseTreeLockFromDpcLevel @ 0x14060FF70
 * Callers:
 *     ViPtCleanupLockContext @ 0x14060FEAC (ViPtCleanupLockContext.c)
 *     VfPtAddStackInfoIfNotExist @ 0x140B8DD84 (VfPtAddStackInfoIfNotExist.c)
 *     VfPtGenerateTraceInformation @ 0x140B8DF6C (VfPtGenerateTraceInformation.c)
 *     VfPtProcessAllocPoolInfo @ 0x140B8E55C (VfPtProcessAllocPoolInfo.c)
 *     VfPtProcessFreePoolInfo @ 0x140B8E614 (VfPtProcessFreePoolInfo.c)
 *     ViPtDeleteAvlTrees @ 0x140B8E740 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

void __fastcall ViPtReleaseTreeLockFromDpcLevel(__int64 a1, __int64 a2)
{
  char v4; // dl
  volatile LONG *v5; // rcx

  v4 = *(_BYTE *)(a2 + 9);
  if ( (v4 & 2) != 0 )
  {
    v5 = (volatile LONG *)(a1 + 128);
    if ( (v4 & 4) != 0 )
    {
      *(_QWORD *)(a1 + 136) = 0LL;
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    }
    else
    {
      ExReleaseSpinLockSharedFromDpcLevel(v5);
    }
    *(_BYTE *)(a2 + 9) &= ~2u;
    *(_QWORD *)a2 = 0LL;
  }
}
