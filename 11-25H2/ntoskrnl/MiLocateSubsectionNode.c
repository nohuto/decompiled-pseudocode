/*
 * XREFs of MiLocateSubsectionNode @ 0x140219A20
 * Callers:
 *     MiComputeDataFlushRange @ 0x140218970 (MiComputeDataFlushRange.c)
 *     MiGetProtoPteAddress @ 0x1402454D0 (MiGetProtoPteAddress.c)
 *     MiAdvanceVadView @ 0x1402A4550 (MiAdvanceVadView.c)
 *     MiReferenceDataSubsections @ 0x1402A485C (MiReferenceDataSubsections.c)
 *     MiRemoveMappedPtes @ 0x1402A9320 (MiRemoveMappedPtes.c)
 *     MiDereferenceDataSubsections @ 0x1406803D0 (MiDereferenceDataSubsections.c)
 *     MiMapViewOfDataSection @ 0x1408FEC20 (MiMapViewOfDataSection.c)
 *     MiPfPrepareReadList @ 0x1409C90BC (MiPfPrepareReadList.c)
 * Callees:
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

_DWORD *__fastcall MiLocateSubsectionNode(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int8 CurrentIrql; // di
  int v6; // esi
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  _DWORD *v9; // rbp
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  volatile LONG *v14; // rcx
  _QWORD *v16; // r10
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r9
  void *retaddr; // [rsp+D8h] [rbp+0h]

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
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        _m_prefetchw((const void *)(a1 + 72));
        v7 = *(_DWORD *)(a1 + 72) & 0x7FFFFFFF;
        while ( 1 )
        {
          v8 = v7;
          v7 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 72), v7 + 1, v7);
          if ( v8 == v7 )
            break;
          if ( v7 < 0 )
          {
            ExpWaitForSpinLockSharedAndAcquire(a1 + 72, CurrentIrql);
            break;
          }
        }
      }
      else
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented((_DWORD *)(a1 + 72), CurrentIrql);
      }
    }
  }
  v9 = *(_DWORD **)(a1 + 296);
  v10 = a2 >> 12;
  v11 = (unsigned int)v9[9] | ((unsigned __int64)(v9[8] & 0xFFC0) << 26);
  v12 = v11 + (unsigned int)v9[10];
  v13 = v12 - 1;
  if ( v10 < v11 )
    goto LABEL_27;
  if ( v9[8] < 0x100000u )
    --v12;
  if ( v10 > v12 )
  {
LABEL_27:
    v16 = *(_QWORD **)(a1 + 280);
    if ( !v16 )
      goto LABEL_37;
    do
    {
      v17 = *((unsigned int *)v16 - 5) | ((unsigned __int64)(*(_DWORD *)(v16 - 3) & 0xFFC0) << 26);
      v13 = v17 + *((unsigned int *)v16 - 4);
      v18 = (unsigned int)v10 | ((unsigned __int64)(unsigned __int16)(WORD2(v10) << 6) << 26);
      if ( *((_DWORD *)v16 - 6) < 0x100000u )
        --v13;
      if ( v18 > v13 )
      {
        v16 = (_QWORD *)v16[1];
      }
      else
      {
        if ( v18 >= v17 )
          break;
        v16 = (_QWORD *)*v16;
      }
    }
    while ( v16 );
    if ( v16 )
    {
      v9 = v16 - 7;
      *(_QWORD *)(a1 + 296) = v16 - 7;
    }
    else
    {
LABEL_37:
      v9 = 0LL;
    }
  }
  if ( !v6 )
  {
    v14 = (volatile LONG *)(a1 + 72);
    if ( CurrentIrql == 17 )
    {
      ExReleaseSpinLockSharedFromDpcLevel(v14);
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        _InterlockedAnd(v14, 0xBFFFFFFF);
        _InterlockedDecrement(v14);
      }
      else
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v14, retaddr, v13);
      }
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
  }
  return v9;
}
