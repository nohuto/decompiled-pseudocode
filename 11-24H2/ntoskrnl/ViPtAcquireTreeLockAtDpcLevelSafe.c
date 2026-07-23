/*
 * XREFs of ViPtAcquireTreeLockAtDpcLevelSafe @ 0x14060FE3C
 * Callers:
 *     VfPtAddStackInfoIfNotExist @ 0x140B8DD84 (VfPtAddStackInfoIfNotExist.c)
 *     VfPtGenerateTraceInformation @ 0x140B8DF6C (VfPtGenerateTraceInformation.c)
 *     VfPtProcessAllocPoolInfo @ 0x140B8E55C (VfPtProcessAllocPoolInfo.c)
 *     VfPtProcessFreePoolInfo @ 0x140B8E614 (VfPtProcessFreePoolInfo.c)
 *     ViPtDeleteAvlTrees @ 0x140B8E740 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall ViPtAcquireTreeLockAtDpcLevelSafe(__int64 a1, __int64 a2)
{
  char v4; // al
  struct _KTHREAD *CurrentThread; // rsi
  volatile LONG *v6; // rcx

  if ( *(struct _KTHREAD **)(a1 + 136) != KeGetCurrentThread() )
  {
    v4 = *(_BYTE *)(a2 + 9);
    if ( (v4 & 2) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v6 = (volatile LONG *)(a1 + 128);
      if ( (v4 & 4) != 0 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel(v6);
        *(_QWORD *)(a1 + 136) = CurrentThread;
      }
      else
      {
        ExAcquireSpinLockSharedAtDpcLevel(v6);
      }
      *(_BYTE *)(a2 + 9) |= 2u;
      *(_QWORD *)a2 = a1;
    }
  }
}
