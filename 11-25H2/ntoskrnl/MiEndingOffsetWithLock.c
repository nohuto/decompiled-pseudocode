/*
 * XREFs of MiEndingOffsetWithLock @ 0x1402FD558
 * Callers:
 *     MiViewMayContainPage @ 0x140321440 (MiViewMayContainPage.c)
 *     MiReadyFlushMdlToWrite @ 0x14033F528 (MiReadyFlushMdlToWrite.c)
 *     MiPfPrepareReadList @ 0x1409C90BC (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x1409C9C58 (MiPfPrepareSequentialReadList.c)
 *     MiPfAllocateMdls @ 0x1409CA7D8 (MiPfAllocateMdls.c)
 * Callees:
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall MiEndingOffsetWithLock(_QWORD *a1)
{
  _DWORD *v1; // rsi
  _DWORD *v2; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v4; // rdx
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v1 = a1;
  v2 = (_DWORD *)(*a1 + 72LL);
  CurrentIrql = KeGetCurrentIrql();
  v4 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v2);
    v5 = *v2 & 0x7FFFFFFF;
    while ( 1 )
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange(v2, v5 + 1, v5);
      if ( v6 == v5 )
        break;
      if ( v5 < 0 )
      {
        ExpWaitForSpinLockSharedAndAcquire(v2, CurrentIrql);
        break;
      }
    }
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v2, CurrentIrql);
  }
  if ( (*(_DWORD *)(*(_QWORD *)v1 + 56LL) & 0x20) != 0 )
    v7 = ((unsigned int)v1[9] + (unsigned __int64)(unsigned int)v1[10]) << 9;
  else
    v7 = ((unsigned int)v1[10] + ((unsigned int)v1[9] | ((unsigned __int64)(v1[8] & 0xFFC0) << 26))) << 12;
  v8 = v7 + ((unsigned __int64)(unsigned int)v1[8] >> 20);
  if ( CurrentIrql == 17 )
  {
    ExReleaseSpinLockSharedFromDpcLevel(v2);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(v2, 0xBFFFFFFF);
      _InterlockedDecrement(v2);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v2, retaddr);
    }
    if ( KiIrqlFlags )
    {
      LOBYTE(v4) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
    }
    __writecr8(CurrentIrql);
  }
  return v8;
}
