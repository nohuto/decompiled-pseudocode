/*
 * XREFs of ViPtReleaseTreeLockFromDpcLevel @ 0x1406119B0
 * Callers:
 *     ViPtCleanupLockContext @ 0x1406118EC (ViPtCleanupLockContext.c)
 *     VfPtAddStackInfoIfNotExist @ 0x140B8BD84 (VfPtAddStackInfoIfNotExist.c)
 *     VfPtGenerateTraceInformation @ 0x140B8BF6C (VfPtGenerateTraceInformation.c)
 *     VfPtProcessAllocPoolInfo @ 0x140B8C55C (VfPtProcessAllocPoolInfo.c)
 *     VfPtProcessFreePoolInfo @ 0x140B8C614 (VfPtProcessFreePoolInfo.c)
 *     ViPtDeleteAvlTrees @ 0x140B8C740 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
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
