/*
 * XREFs of MiGetControlAreaPtes @ 0x1402BBFC0
 * Callers:
 *     MiOffsetToProtos @ 0x1402BBD30 (MiOffsetToProtos.c)
 *     MiMapViewOfDataSection @ 0x1408FEC20 (MiMapViewOfDataSection.c)
 *     MiPfPrepareSequentialReadList @ 0x1409C9C58 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall MiGetControlAreaPtes(__int64 a1)
{
  int v1; // eax
  _DWORD *v4; // rbx
  unsigned __int8 CurrentIrql; // si
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  __int64 v8; // rax
  __int64 i; // rdx
  unsigned __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

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
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(v4);
      v6 = *v4 & 0x7FFFFFFF;
      while ( 1 )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange(v4, v6 + 1, v6);
        if ( v7 == v6 )
          break;
        if ( v6 < 0 )
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
    v8 = *(_QWORD *)(a1 + 280);
    for ( i = 0LL; v8; v8 = *(_QWORD *)(v8 + 8) )
      i = v8;
    v10 = *(unsigned int *)(i - 12)
        + (*(unsigned int *)(i - 20) | ((unsigned __int64)(*(_DWORD *)(i - 24) & 0xFFC0) << 26))
        - (*(_DWORD *)(i - 4) & 0x3FFFFFFF);
    if ( CurrentIrql == 17 )
    {
      ExReleaseSpinLockSharedFromDpcLevel(v4);
      return v10;
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
      return v10;
    }
  }
}
