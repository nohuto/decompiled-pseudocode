/*
 * XREFs of RtlpHpSegPageRangeCoalesce @ 0x140360140
 * Callers:
 *     RtlpHpSegContextCompact @ 0x14035E4C0 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegPageRangeShrink @ 0x140363BF0 (RtlpHpSegPageRangeShrink.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpEnvCompactionSchedule @ 0x14035ED20 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpSegPageRangeCommit @ 0x14035F6F0 (RtlpHpSegPageRangeCommit.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     RtlpHpSegLockAcquire @ 0x1403640F4 (RtlpHpSegLockAcquire.c)
 *     RtlRbRemoveNode @ 0x140365870 (RtlRbRemoveNode.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall RtlpHpSegPageRangeCoalesce(__int64 a1, __int64 a2, int a3, unsigned __int8 *a4)
{
  __int64 v7; // rsi
  __int64 v8; // rdx
  unsigned int v9; // r14d
  __int64 v10; // r15
  _RTL_RB_TREE *v11; // rbp
  __int16 *v12; // r12
  __int64 v13; // rax
  __int64 v14; // rbp
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rbp
  __int64 v19; // rcx
  _BYTE *v21; // r15
  unsigned __int64 v22; // rbp
  unsigned __int16 v23; // ax
  char v24; // dl
  __int64 v25; // rcx
  unsigned __int16 v26; // ax
  int v27; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int8 *v28; // [rsp+88h] [rbp+20h]

  v28 = a4;
  v27 = 0;
  while ( 1 )
  {
    v7 = 0LL;
    v8 = (a2 - (a2 & *(_QWORD *)a1)) >> 5;
    v9 = (unsigned __int16)~*(_WORD *)(a2 + 28);
    if ( (unsigned int)v8 + (unsigned __int8)HIBYTE(*(_DWORD *)(a2 + 28)) < 0x100 )
    {
      v7 = a2 + 32LL * (unsigned __int8)HIBYTE(*(_DWORD *)(a2 + 28));
      if ( (*(_BYTE *)(v7 + 24) & 1) != 0 )
        v7 = 0LL;
    }
    if ( (unsigned int)v8 <= *(unsigned __int8 *)(a1 + 10) )
    {
      v11 = (_RTL_RB_TREE *)(a1 + 96);
LABEL_9:
      v12 = (__int16 *)(a1 + 22);
      goto LABEL_10;
    }
    v10 = a2 - 32;
    if ( (*(_BYTE *)(a2 - 8) & 2) == 0 )
      v10 += -32LL * *(unsigned __int8 *)(v10 + 26);
    v11 = (_RTL_RB_TREE *)(a1 + 96);
    if ( (*(_BYTE *)(v10 + 24) & 1) != 0 )
      goto LABEL_9;
    RtlRbRemoveNode(v11, (PRTL_BALANCED_NODE)v10);
    v12 = (__int16 *)(a1 + 22);
    *(_OWORD *)v10 = 0LL;
    *(_QWORD *)(v10 + 16) = 0LL;
    v26 = ~(unsigned __int16)*(_DWORD *)(v10 + 28);
    *(_DWORD *)v10 = -857879331;
    _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16), -(__int64)v26);
    *(_BYTE *)(v10 + 31) += *(_BYTE *)(a2 + 31);
    v9 += (unsigned __int16)~*(_WORD *)(v10 + 28);
    *(_WORD *)(v10 + 28) = ~(_WORD)v9;
    *(_BYTE *)(a2 + 24) &= (*(_BYTE *)(a2 + 31) <= 1u) - 4;
    a2 = v10;
    *(_BYTE *)(32LL * ((unsigned int)*(unsigned __int8 *)(v10 + 31) - 1) + v10 + 26) = *(_BYTE *)(v10 + 31) - 1;
LABEL_10:
    *(_BYTE *)(a2 + 24) |= 0x11u;
    if ( v7 )
    {
      RtlRbRemoveNode(v11, (PRTL_BALANCED_NODE)v7);
      *(_OWORD *)v7 = 0LL;
      *(_QWORD *)(v7 + 16) = 0LL;
      v23 = ~(unsigned __int16)*(_DWORD *)(v7 + 28);
      *(_DWORD *)v7 = -857879331;
      _InterlockedAdd64((volatile signed __int64 *)(*v12 + a1 + 16), -(__int64)v23);
      if ( *(_BYTE *)(a2 + 31) != 1 )
      {
        v12 = (__int16 *)(a1 + 22);
        *(_BYTE *)(32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1) + a2 + 24) &= ~1u;
      }
      *(_BYTE *)(a2 + 31) += *(_BYTE *)(v7 + 31);
      v9 += (unsigned __int16)~*(_WORD *)(v7 + 28);
      *(_WORD *)(a2 + 28) = ~(_WORD)v9;
      *(_BYTE *)(v7 + 24) &= ~2u;
      v24 = *(_BYTE *)(a2 + 31) - 1;
      v25 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1);
      *(_BYTE *)(v25 + a2 + 24) |= 1u;
      *(_BYTE *)(v25 + a2 + 26) = v24;
    }
    if ( !v9 )
      break;
    if ( !a3 && (*(_BYTE *)(a1 + 13) & 8) == 0 )
    {
      v13 = *v12;
      v14 = *(_QWORD *)(v13 + a1 + 16) + *(_QWORD *)(v13 + a1 + 24);
      v15 = *(_QWORD *)(v13 + a1 + 8);
      v16 = v15 >> *(_BYTE *)(a1 + 11);
      if ( v16 <= 8 )
        v16 = 8LL;
      v17 = v15 >> *(_BYTE *)(a1 + 12);
      if ( v17 <= 8 )
        v17 = 8LL;
      v18 = v9 + v14;
      if ( v18 <= v16 || (int)RtlpHpEnvCompactionSchedule(*(_QWORD **)(a1 + 56)) >= 0 && v18 <= v17 )
        break;
    }
    v21 = v28;
    v22 = *v28;
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v22);
      __writecr8(v22);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 64));
      KeAbPostRelease(a1 + 64);
      KeLeaveGuardedRegion();
    }
    RtlpHpSegPageRangeCommit(a1, a2, 0, -(*(unsigned __int8 *)(a2 + 31) << *(_BYTE *)(a1 + 9)), 0, &v27);
    *v21 = RtlpHpSegLockAcquire(a1);
    *(_BYTE *)(a2 + 24) &= ~0x10u;
  }
  v19 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1);
  *(_BYTE *)(v19 + a2 + 24) &= ~1u;
  *(_BYTE *)(a2 + 24) &= 0xEEu;
  return a2;
}
