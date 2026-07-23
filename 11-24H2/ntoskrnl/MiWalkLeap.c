/*
 * XREFs of MiWalkLeap @ 0x140339C60
 * Callers:
 *     MiComputePxeWalkAction @ 0x14023FE60 (MiComputePxeWalkAction.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiPeriodicGoodCitizen @ 0x14023D8A0 (MiPeriodicGoodCitizen.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiGetNextVad @ 0x140291ACC (MiGetNextVad.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

__int64 __fastcall MiWalkLeap(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  unsigned __int64 i; // rsi
  unsigned __int64 j; // rdi
  int v9; // r12d
  _DWORD *v10; // rcx
  signed __int32 v11; // eax
  __int64 v12; // rdx
  signed __int32 v13; // ett
  _KPROCESS *Process; // r8
  unsigned __int64 Flink; // rbx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // r8d
  unsigned __int64 *k; // rdx
  int v23; // ecx
  __int64 v24; // rcx

  v5 = (int)a3;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 184LL) & 0xF) != 0 )
    return 2LL;
  for ( i = a2; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
  {
    if ( i > 0xFFFFF6FFFFFFFFFFuLL )
      break;
  }
  for ( j = a2; j >= 0xFFFFF68000000000uLL; j = (__int64)(j << 25) >> 16 )
  {
    if ( j > 0xFFFFF6FFFFFFFFFFuLL )
      break;
  }
  v9 = 0;
  v10 = (_DWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v10);
    v11 = *v10 & 0x7FFFFFFF;
    while ( 1 )
    {
      v12 = (unsigned int)(v11 + 1);
      v13 = v11;
      v11 = _InterlockedCompareExchange(v10, v12, v11);
      if ( v13 == v11 )
        break;
      if ( v11 < 0 )
      {
        LOBYTE(v12) = -1;
        ExpWaitForSpinLockSharedAndAcquire(v10, v12, a3, a4);
        break;
      }
    }
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v10, 0xFFu);
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  Flink = (unsigned __int64)Process[3].Header.WaitListHead.Flink;
  if ( !Flink )
    goto LABEL_17;
  v16 = j >> 12;
  if ( j >> 12 >= (*(unsigned int *)(Flink + 24) | ((unsigned __int64)*(unsigned __int8 *)(Flink + 32) << 32))
    && v16 <= (*(unsigned int *)(Flink + 28) | ((unsigned __int64)*(unsigned __int8 *)(Flink + 33) << 32)) )
  {
    goto LABEL_28;
  }
  Flink = *(_QWORD *)&Process[3].Header.Lock;
  if ( Flink )
  {
    do
    {
      if ( v16 > (*(unsigned int *)(Flink + 28) | ((unsigned __int64)*(unsigned __int8 *)(Flink + 33) << 32)) )
      {
        Flink = *(_QWORD *)(Flink + 8);
      }
      else
      {
        if ( v16 >= (*(unsigned int *)(Flink + 24) | ((unsigned __int64)*(unsigned __int8 *)(Flink + 32) << 32)) )
          break;
        Flink = *(_QWORD *)Flink;
      }
    }
    while ( Flink );
    if ( Flink )
    {
      Process[3].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)Flink;
      do
      {
LABEL_28:
        v23 = *(_DWORD *)(Flink + 48);
        if ( (*(_BYTE *)(Flink + 48) & 0x70) != 0x30
          && (v23 & 0x70) != 0x10
          && ((v23 & 0x200000) == 0 || (v23 & 0x800000) == 0 && (v23 & 0x180000u) < 0x100000)
          && (v23 & 0x70) != 0x50 )
        {
          break;
        }
        ++v9;
        j = ((*(unsigned int *)(Flink + 28) | ((unsigned __int64)*(unsigned __int8 *)(Flink + 33) << 32)) << 12) | 0xFFF;
        if ( !(_BYTE)v9 && MiPeriodicGoodCitizen((int *)a1, a2) )
          break;
        Flink = MiGetNextVad(Flink);
      }
      while ( Flink );
    }
  }
LABEL_17:
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
  if ( i == j )
    return 2LL;
  v17 = ((j >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (int)v5 > 0 )
  {
    v24 = (unsigned int)v5;
    do
    {
      v17 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v24;
    }
    while ( v24 );
  }
  v18 = v17 + 8;
  v19 = v5;
  v20 = *(_QWORD *)(a1 + 8 * v5 + 128) < v17 + 8 ? 4 : 0;
  if ( ((a2 ^ v17) & 0xFFFFFFFFF000LL) != 0 )
  {
    for ( ; v18 >= 0xFFFFF68000000000uLL; v18 = (__int64)(v18 << 25) >> 16 )
    {
      if ( v18 > 0xFFFFF6FFFFFFFFFFuLL )
        break;
    }
    *(_QWORD *)(a1 + 80) = v18;
    v19 = v5;
    v18 = (a2 & 0xFFFFFFFFFFFFF000uLL | 0xFF8) + 8;
  }
  *(_QWORD *)(a1 + 96 + 8 * v19) = v18;
  for ( k = (unsigned __int64 *)(a1 + 96 + 8 * v19); v19; --v19 )
  {
    --k;
    v18 = (__int64)(v18 << 25) >> 16;
    *k = v18;
  }
  *(_DWORD *)(a1 + 12) = 0;
  return v20;
}
