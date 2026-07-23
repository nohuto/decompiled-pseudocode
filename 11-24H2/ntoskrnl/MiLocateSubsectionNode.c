/*
 * XREFs of MiLocateSubsectionNode @ 0x14040FCF0
 * Callers:
 *     MiRemoveMappedPtes @ 0x1402915D0 (MiRemoveMappedPtes.c)
 *     MiComputeDataFlushRange @ 0x140302C10 (MiComputeDataFlushRange.c)
 *     MiGetProtoPteAddress @ 0x14030BEC0 (MiGetProtoPteAddress.c)
 *     MiReferenceDataSubsections @ 0x1403953D8 (MiReferenceDataSubsections.c)
 *     MiAdvanceVadView @ 0x1403C8DEC (MiAdvanceVadView.c)
 *     MiDereferenceDataSubsections @ 0x14068CD90 (MiDereferenceDataSubsections.c)
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 *     MiPfPrepareReadList @ 0x14093919C (MiPfPrepareReadList.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

_DWORD *__fastcall MiLocateSubsectionNode(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // di
  int v7; // esi
  _DWORD *v8; // rbp
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  volatile LONG *v12; // rcx
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  _QWORD *v16; // r10
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9
  __int64 retaddr; // [rsp+D8h] [rbp+0h]

  if ( a2 >= 0x40000000000000LL )
    return 0LL;
  CurrentIrql = 17;
  v7 = a3 & 1;
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
      if ( KiIrqlFlags != v7 )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        _m_prefetchw((const void *)(a1 + 72));
        v14 = *(_DWORD *)(a1 + 72) & 0x7FFFFFFF;
        while ( 1 )
        {
          v15 = v14;
          v14 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 72), v14 + 1, v14);
          if ( v15 == v14 )
            break;
          if ( v14 < 0 )
          {
            ExpWaitForSpinLockSharedAndAcquire((signed __int32 *)(a1 + 72), CurrentIrql, a3, a4);
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
  v8 = *(_DWORD **)(a1 + 296);
  v9 = a2 >> 12;
  v10 = (unsigned int)v8[9] | ((unsigned __int64)(v8[8] & 0xFFC0) << 26);
  v11 = v10 + (unsigned int)v8[10];
  if ( v9 < v10 )
    goto LABEL_27;
  if ( v8[8] < 0x100000u )
    --v11;
  if ( v9 > v11 )
  {
LABEL_27:
    v16 = *(_QWORD **)(a1 + 280);
    if ( !v16 )
      goto LABEL_37;
    do
    {
      v17 = *((unsigned int *)v16 - 5) | ((unsigned __int64)(*(_DWORD *)(v16 - 3) & 0xFFC0) << 26);
      v18 = v17 + *((unsigned int *)v16 - 4);
      v19 = (unsigned int)v9 | ((unsigned __int64)(unsigned __int16)(WORD2(v9) << 6) << 26);
      if ( *((_DWORD *)v16 - 6) < 0x100000u )
        --v18;
      if ( v19 > v18 )
      {
        v16 = (_QWORD *)v16[1];
      }
      else
      {
        if ( v19 >= v17 )
          break;
        v16 = (_QWORD *)*v16;
      }
    }
    while ( v16 );
    if ( v16 )
    {
      v8 = v16 - 7;
      *(_QWORD *)(a1 + 296) = v16 - 7;
    }
    else
    {
LABEL_37:
      v8 = 0LL;
    }
  }
  if ( !v7 )
  {
    v12 = (volatile LONG *)(a1 + 72);
    if ( CurrentIrql == 17 )
    {
      ExReleaseSpinLockSharedFromDpcLevel(v12);
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        _InterlockedAnd(v12, 0xBFFFFFFF);
        _InterlockedDecrement(v12);
      }
      else
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v12, retaddr);
      }
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
  }
  return v8;
}
