/*
 * XREFs of MiEndingOffsetWithLock @ 0x1402724D4
 * Callers:
 *     MiReadyFlushMdlToWrite @ 0x1402735E4 (MiReadyFlushMdlToWrite.c)
 *     MiViewMayContainPage @ 0x140361C90 (MiViewMayContainPage.c)
 *     MiPfPrepareReadList @ 0x14093919C (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140939D28 (MiPfPrepareSequentialReadList.c)
 *     MiPfAllocateMdls @ 0x14093A89C (MiPfAllocateMdls.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall MiEndingOffsetWithLock(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rsi
  _DWORD *v5; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v4 = a1;
  v5 = (_DWORD *)(*a1 + 72LL);
  CurrentIrql = KeGetCurrentIrql();
  v7 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v5);
    v11 = *v5 & 0x7FFFFFFF;
    while ( 1 )
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange(v5, v11 + 1, v11);
      if ( v12 == v11 )
        break;
      if ( v11 < 0 )
      {
        LOBYTE(v7) = CurrentIrql;
        ExpWaitForSpinLockSharedAndAcquire(v5, v7, a3, a4);
        break;
      }
    }
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v5, CurrentIrql);
  }
  if ( (*(_DWORD *)(*(_QWORD *)v4 + 56LL) & 0x20) != 0 )
    v8 = ((unsigned int)v4[9] + (unsigned __int64)(unsigned int)v4[10]) << 9;
  else
    v8 = ((unsigned int)v4[10] + ((unsigned int)v4[9] | ((unsigned __int64)(v4[8] & 0xFFC0) << 26))) << 12;
  v9 = v8 + ((unsigned __int64)(unsigned int)v4[8] >> 20);
  if ( CurrentIrql == 17 )
  {
    ExReleaseSpinLockSharedFromDpcLevel(v5);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(v5, 0xBFFFFFFF);
      _InterlockedDecrement(v5);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v5, retaddr);
    }
    if ( KiIrqlFlags )
    {
      LOBYTE(v7) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
    }
    __writecr8(CurrentIrql);
  }
  return v9;
}
