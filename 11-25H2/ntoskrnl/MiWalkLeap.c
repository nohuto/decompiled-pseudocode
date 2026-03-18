/*
 * XREFs of MiWalkLeap @ 0x1402B50C0
 * Callers:
 *     MiComputePxeWalkAction @ 0x1402B48B0 (MiComputePxeWalkAction.c)
 * Callees:
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiGetNextVad @ 0x1402A96D8 (MiGetNextVad.c)
 *     MiPeriodicGoodCitizen @ 0x1402B22F0 (MiPeriodicGoodCitizen.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480 (ExpWaitForSpinLockSharedAndAcquire.c)
 */

__int64 __fastcall MiWalkLeap(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v4; // r15
  unsigned __int64 i; // rsi
  unsigned __int64 j; // rdi
  int v8; // r12d
  _DWORD *v9; // rcx
  signed __int32 v10; // eax
  __int64 v11; // rdx
  signed __int32 v12; // ett
  _KPROCESS *Process; // r8
  unsigned __int64 Flink; // rbx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // r8d
  unsigned __int64 *k; // rdx
  int v22; // ecx
  __int64 v23; // rcx

  v4 = a3;
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
  v8 = 0;
  v9 = (_DWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v9);
    v10 = *v9 & 0x7FFFFFFF;
    while ( 1 )
    {
      v11 = (unsigned int)(v10 + 1);
      v12 = v10;
      v10 = _InterlockedCompareExchange(v9, v11, v10);
      if ( v12 == v10 )
        break;
      if ( v10 < 0 )
      {
        LOBYTE(v11) = -1;
        ExpWaitForSpinLockSharedAndAcquire(v9, v11);
        break;
      }
    }
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v9, 0xFFu);
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  Flink = (unsigned __int64)Process[3].Header.WaitListHead.Flink;
  if ( !Flink )
    goto LABEL_15;
  v15 = j >> 12;
  if ( j >> 12 >= (*(unsigned int *)(Flink + 24) | ((unsigned __int64)*(unsigned __int8 *)(Flink + 32) << 32))
    && v15 <= (*(unsigned int *)(Flink + 28) | ((unsigned __int64)*(unsigned __int8 *)(Flink + 33) << 32)) )
  {
    goto LABEL_33;
  }
  Flink = *(_QWORD *)&Process[3].Header.Lock;
  if ( Flink )
  {
    do
    {
      if ( v15 > (*(unsigned int *)(Flink + 28) | ((unsigned __int64)*(unsigned __int8 *)(Flink + 33) << 32)) )
      {
        Flink = *(_QWORD *)(Flink + 8);
      }
      else
      {
        if ( v15 >= (*(unsigned int *)(Flink + 24) | ((unsigned __int64)*(unsigned __int8 *)(Flink + 32) << 32)) )
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
LABEL_33:
        v22 = *(_DWORD *)(Flink + 48);
        if ( (*(_BYTE *)(Flink + 48) & 0x70) != 0x30
          && (v22 & 0x70) != 0x10
          && ((v22 & 0x200000) == 0 || (v22 & 0x800000) == 0 && (v22 & 0x180000u) < 0x100000)
          && (v22 & 0x70) != 0x50 )
        {
          break;
        }
        ++v8;
        j = ((*(unsigned int *)(Flink + 28) | ((unsigned __int64)*(unsigned __int8 *)(Flink + 33) << 32)) << 12) | 0xFFF;
        if ( !(_BYTE)v8 && MiPeriodicGoodCitizen((int *)a1, a2) )
          break;
        Flink = MiGetNextVad(Flink);
      }
      while ( Flink );
    }
  }
LABEL_15:
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
  if ( i == j )
    return 2LL;
  v16 = ((j >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (int)v4 > 0 )
  {
    v23 = (unsigned int)v4;
    do
    {
      v16 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v23;
    }
    while ( v23 );
  }
  v17 = v16 + 8;
  v18 = v4;
  v19 = *(_QWORD *)(a1 + 8 * v4 + 128) < v16 + 8 ? 4 : 0;
  if ( ((a2 ^ v16) & 0xFFFFFFFFF000LL) != 0 )
  {
    for ( ; v17 >= 0xFFFFF68000000000uLL; v17 = (__int64)(v17 << 25) >> 16 )
    {
      if ( v17 > 0xFFFFF6FFFFFFFFFFuLL )
        break;
    }
    *(_QWORD *)(a1 + 80) = v17;
    v18 = v4;
    v17 = (a2 & 0xFFFFFFFFFFFFF000uLL | 0xFF8) + 8;
  }
  *(_QWORD *)(a1 + 96 + 8 * v18) = v17;
  for ( k = (unsigned __int64 *)(a1 + 96 + 8 * v18); v18; --v18 )
  {
    --k;
    v17 = (__int64)(v17 << 25) >> 16;
    *k = v17;
  }
  *(_DWORD *)(a1 + 12) = 0;
  return v19;
}
