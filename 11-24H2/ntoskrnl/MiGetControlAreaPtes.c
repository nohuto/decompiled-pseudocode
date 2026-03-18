/*
 * XREFs of MiGetControlAreaPtes @ 0x140319FD0
 * Callers:
 *     MiOffsetToProtos @ 0x140319D40 (MiOffsetToProtos.c)
 *     MiMapViewOfDataSection @ 0x1408E0820 (MiMapViewOfDataSection.c)
 *     MiPfPrepareSequentialReadList @ 0x140956378 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall MiGetControlAreaPtes(__int64 a1)
{
  int v1; // eax
  _DWORD *v4; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 v6; // rax
  __int64 i; // rdx
  unsigned __int64 v8; // rbx
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_DWORD *)(a1 + 56);
  if ( (v1 & 0x20) != 0 || !*(_QWORD *)(a1 + 64) || (v1 & 0x400) != 0 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      v11 = 0LL;
      v12 = a1 + 128;
      if ( a1 != -128 )
      {
        do
        {
          v13 = *(unsigned int *)(v12 + 44);
          v12 = *(_QWORD *)(v12 + 16);
          v11 += v13;
        }
        while ( v12 );
      }
      return v11;
    }
    else
    {
      return *(unsigned int *)(*(_QWORD *)a1 + 8LL) | ((unsigned __int64)(*(_WORD *)(*(_QWORD *)a1 + 12LL) & 0x3FF) << 32);
    }
  }
  else
  {
    v4 = (_DWORD *)(a1 + 72);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(v4);
      v9 = *v4 & 0x7FFFFFFF;
      while ( 1 )
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange(v4, v9 + 1, v9);
        if ( v10 == v9 )
          break;
        if ( v9 < 0 )
        {
          ExpWaitForSpinLockSharedAndAcquire(v4, CurrentIrql);
          break;
        }
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v4, CurrentIrql);
    }
    v6 = *(_QWORD *)(a1 + 280);
    for ( i = 0LL; v6; v6 = *(_QWORD *)(v6 + 8) )
      i = v6;
    v8 = *(unsigned int *)(i - 12)
       + (*(unsigned int *)(i - 20) | ((unsigned __int64)(*(_DWORD *)(i - 24) & 0xFFC0) << 26))
       - (*(_DWORD *)(i - 4) & 0x3FFFFFFF);
    if ( CurrentIrql == 17 )
    {
      ExReleaseSpinLockSharedFromDpcLevel(v4);
      return v8;
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
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      return v8;
    }
  }
}
