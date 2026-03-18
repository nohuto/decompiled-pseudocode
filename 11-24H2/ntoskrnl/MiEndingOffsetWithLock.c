/*
 * XREFs of MiEndingOffsetWithLock @ 0x14023A3EC
 * Callers:
 *     MiReadyFlushMdlToWrite @ 0x14023C268 (MiReadyFlushMdlToWrite.c)
 *     MiViewMayContainPage @ 0x1402BA550 (MiViewMayContainPage.c)
 *     MiPfPrepareReadList @ 0x1409557EC (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140956378 (MiPfPrepareSequentialReadList.c)
 *     MiPfAllocateMdls @ 0x140956EEC (MiPfAllocateMdls.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall MiEndingOffsetWithLock(_QWORD *a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rsi
  _DWORD *v4; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a1;
  v4 = (_DWORD *)(*a1 + 72LL);
  CurrentIrql = KeGetCurrentIrql();
  v6 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL, a3);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v4);
    v10 = *v4 & 0x7FFFFFFF;
    while ( 1 )
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange(v4, v10 + 1, v10);
      if ( v11 == v10 )
        break;
      if ( v10 < 0 )
      {
        LOBYTE(v6) = CurrentIrql;
        ExpWaitForSpinLockSharedAndAcquire(v4, v6);
        break;
      }
    }
  }
  else
  {
    LOBYTE(v6) = CurrentIrql;
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v4, v6);
  }
  if ( (*(_DWORD *)(*(_QWORD *)v3 + 56LL) & 0x20) != 0 )
    v7 = ((unsigned int)v3[9] + (unsigned __int64)(unsigned int)v3[10]) << 9;
  else
    v7 = ((unsigned int)v3[10] + ((unsigned int)v3[9] | ((unsigned __int64)(v3[8] & 0xFFC0) << 26))) << 12;
  v8 = v7 + ((unsigned __int64)(unsigned int)v3[8] >> 20);
  if ( CurrentIrql == 17 )
  {
    ExReleaseSpinLockSharedFromDpcLevel(v4);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(v4, 0xBFFFFFFF);
      _InterlockedDecrement(v4);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v4, retaddr);
    }
    if ( KiIrqlFlags )
    {
      LOBYTE(v6) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
    }
    __writecr8(CurrentIrql);
  }
  return v8;
}
