/*
 * XREFs of MiLocateSubsectionNode @ 0x1402C31C0
 * Callers:
 *     MiComputeDataFlushRange @ 0x14022F300 (MiComputeDataFlushRange.c)
 *     MiRemoveMappedPtes @ 0x140260FC0 (MiRemoveMappedPtes.c)
 *     MiGetProtoPteAddress @ 0x140301740 (MiGetProtoPteAddress.c)
 *     MiAdvanceVadView @ 0x14040663C (MiAdvanceVadView.c)
 *     MiReferenceDataSubsections @ 0x140416740 (MiReferenceDataSubsections.c)
 *     MiDereferenceDataSubsections @ 0x14068BC60 (MiDereferenceDataSubsections.c)
 *     MiMapViewOfDataSection @ 0x1408E0820 (MiMapViewOfDataSection.c)
 *     MiPfPrepareReadList @ 0x1409557EC (MiPfPrepareReadList.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

_DWORD *__fastcall MiLocateSubsectionNode(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int8 CurrentIrql; // di
  int v6; // esi
  _DWORD *v7; // rbp
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  volatile LONG *v11; // rcx
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  _QWORD *v15; // r10
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r9
  __int64 retaddr; // [rsp+D8h] [rbp+0h]

  if ( a2 >= 0x40000000000000LL )
    return 0LL;
  CurrentIrql = 17;
  v6 = a3 & 1;
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 8) != 0 )
    {
      ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags != v6 )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        _m_prefetchw((const void *)(a1 + 72));
        v13 = *(_DWORD *)(a1 + 72) & 0x7FFFFFFF;
        while ( 1 )
        {
          v14 = v13;
          v13 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 72), v13 + 1, v13);
          if ( v14 == v13 )
            break;
          if ( v13 < 0 )
          {
            ExpWaitForSpinLockSharedAndAcquire(a1 + 72, CurrentIrql);
            break;
          }
        }
      }
      else
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(a1 + 72, CurrentIrql);
      }
    }
  }
  v7 = *(_DWORD **)(a1 + 296);
  v8 = a2 >> 12;
  v9 = (unsigned int)v7[9] | ((unsigned __int64)(v7[8] & 0xFFC0) << 26);
  v10 = v9 + (unsigned int)v7[10];
  if ( v8 < v9 )
    goto LABEL_27;
  if ( v7[8] < 0x100000u )
    --v10;
  if ( v8 > v10 )
  {
LABEL_27:
    v15 = *(_QWORD **)(a1 + 280);
    if ( !v15 )
      goto LABEL_37;
    do
    {
      v16 = *((unsigned int *)v15 - 5) | ((unsigned __int64)(*(_DWORD *)(v15 - 3) & 0xFFC0) << 26);
      v17 = v16 + *((unsigned int *)v15 - 4);
      v18 = (unsigned int)v8 | ((unsigned __int64)(unsigned __int16)(WORD2(v8) << 6) << 26);
      if ( *((_DWORD *)v15 - 6) < 0x100000u )
        --v17;
      if ( v18 > v17 )
      {
        v15 = (_QWORD *)v15[1];
      }
      else
      {
        if ( v18 >= v16 )
          break;
        v15 = (_QWORD *)*v15;
      }
    }
    while ( v15 );
    if ( v15 )
    {
      v7 = v15 - 7;
      *(_QWORD *)(a1 + 296) = v15 - 7;
    }
    else
    {
LABEL_37:
      v7 = 0LL;
    }
  }
  if ( !v6 )
  {
    v11 = (volatile LONG *)(a1 + 72);
    if ( CurrentIrql == 17 )
    {
      ExReleaseSpinLockSharedFromDpcLevel(v11);
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        _InterlockedAnd(v11, 0xBFFFFFFF);
        _InterlockedDecrement(v11);
      }
      else
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v11, retaddr);
      }
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
  }
  return v7;
}
