/*
 * XREFs of MiGetControlAreaPtes @ 0x1402C2B60
 * Callers:
 *     MiOffsetToProtos @ 0x1402C28D0 (MiOffsetToProtos.c)
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 *     MiPfPrepareSequentialReadList @ 0x140939D28 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall MiGetControlAreaPtes(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  _DWORD *v7; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 v9; // rax
  __int64 i; // rdx
  unsigned __int64 v11; // rbx
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(_DWORD *)(a1 + 56);
  if ( (v4 & 0x20) != 0 || !*(_QWORD *)(a1 + 64) || (v4 & 0x400) != 0 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      v14 = 0LL;
      v15 = a1 + 128;
      if ( a1 != -128 )
      {
        do
        {
          v16 = *(unsigned int *)(v15 + 44);
          v15 = *(_QWORD *)(v15 + 16);
          v14 += v16;
        }
        while ( v15 );
      }
      return v14;
    }
    else
    {
      return *(unsigned int *)(*(_QWORD *)a1 + 8LL) | ((unsigned __int64)(*(_WORD *)(*(_QWORD *)a1 + 12LL) & 0x3FF) << 32);
    }
  }
  else
  {
    v7 = (_DWORD *)(a1 + 72);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(v7);
      v12 = *v7 & 0x7FFFFFFF;
      while ( 1 )
      {
        v13 = v12;
        v12 = _InterlockedCompareExchange(v7, v12 + 1, v12);
        if ( v13 == v12 )
          break;
        if ( v12 < 0 )
        {
          ExpWaitForSpinLockSharedAndAcquire(v7, CurrentIrql, a3, a4);
          break;
        }
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v7, CurrentIrql);
    }
    v9 = *(_QWORD *)(a1 + 280);
    for ( i = 0LL; v9; v9 = *(_QWORD *)(v9 + 8) )
      i = v9;
    v11 = *(unsigned int *)(i - 12)
        + (*(unsigned int *)(i - 20) | ((unsigned __int64)(*(_DWORD *)(i - 24) & 0xFFC0) << 26))
        - (*(_DWORD *)(i - 4) & 0x3FFFFFFF);
    if ( CurrentIrql == 17 )
    {
      ExReleaseSpinLockSharedFromDpcLevel(v7);
      return v11;
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        _InterlockedAnd(v7, 0xBFFFFFFF);
        _InterlockedDecrement(v7);
      }
      else
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v7, retaddr);
      }
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      return v11;
    }
  }
}
