/*
 * XREFs of MiComputeMaximumFaultCluster @ 0x14040EB50
 * Callers:
 *     MiDispatchFault @ 0x1402142B0 (MiDispatchFault.c)
 * Callees:
 *     MiUnlockVadTree @ 0x140261370 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1402DEE70 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402FC070 (MiLocateAddress.c)
 *     MiFaultListPagesRemaining @ 0x14040ED80 (MiFaultListPagesRemaining.c)
 *     KiIsTraceMemoryAccess @ 0x14040EE10 (KiIsTraceMemoryAccess.c)
 *     KiRspInIstStack @ 0x14040EE44 (KiRspInIstStack.c)
 *     MiGetAnyMultiplexedVm @ 0x140442630 (MiGetAnyMultiplexedVm.c)
 */

__int64 __fastcall MiComputeMaximumFaultCluster(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // r14
  char *v6; // rax
  unsigned __int64 v7; // rsi
  __int16 v9; // ax
  char IsTraceMemoryAccess; // cl
  void *v11; // r15
  unsigned __int64 v12; // r11
  int v13; // ecx
  __int64 v15; // r15
  __int64 v16; // r9
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // r14
  struct _LIST_ENTRY *Address; // rbx
  char v20; // cl
  _QWORD *v21; // rdx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rsi

  v4 = *(_QWORD *)(a1 + 16);
  v5 = a2;
  v6 = (char *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
  v7 = *(_QWORD *)a1 & 0xFFFFFFFFFFFFF000uLL;
  if ( v4 != (v4 & 0xFFFFFFFFFFFFFFFEuLL) )
  {
    v12 = MiFaultListPagesRemaining();
    v13 = 1;
    goto LABEL_11;
  }
  if ( (v4 & 1) != 0 )
  {
    v20 = *v6;
    if ( *v6 == 1 || v20 == 3 || v20 == 6 )
      return 1LL;
  }
  else if ( v4 )
  {
    v9 = *(_WORD *)(v4 + 368);
    IsTraceMemoryAccess = 0;
    if ( v9 == 16 )
    {
      if ( (*(_DWORD *)(v4 + 376) & 0x200) != 0
        || (v15 = *(_QWORD *)(v4 + 384), !(unsigned int)KiRspInIstStack(3LL, v15, a3, a4))
        && !(unsigned int)KiRspInIstStack(2LL, v15, a3, v16) )
      {
        v11 = &ExpInterlockedPopEntrySListFault;
        IsTraceMemoryAccess = KiIsTraceMemoryAccess(*(_QWORD *)(v4 + 360), a2, a3, a4);
        goto LABEL_7;
      }
    }
    else if ( v9 == 51 )
    {
      v11 = (void *)qword_140FC6480;
LABEL_7:
      if ( *(void **)(v4 + 360) == v11 || IsTraceMemoryAccess )
        return 1LL;
    }
  }
  v12 = 1LL;
  if ( (unsigned __int8)((unsigned __int64)*(unsigned int *)(a1 + 80) >> 9) > 1uLL )
    v12 = (unsigned __int8)((unsigned __int64)*(unsigned int *)(a1 + 80) >> 9);
  v13 = 0;
LABEL_11:
  if ( v12 == 1 )
    return 1LL;
  if ( v5 )
  {
    if ( v5 > v12 )
      v5 = v12;
    v12 = v5;
  }
  v17 = 512LL - (((unsigned int)(v7 >> 9) >> 3) & 0x1FF);
  v18 = v17;
  if ( v12 <= v17 )
    v18 = v12;
  if ( v7 >= 0xFFFF800000000000uLL )
  {
    if ( !v13 )
    {
      v17 = 1LL;
      if ( *(_QWORD *)(a1 + 56) == MiGetAnyMultiplexedVm(2LL) )
      {
        v21 = P;
        if ( P )
        {
          do
          {
            v22 = v21[11] & 0xFFFFFFFFFFFFF000uLL;
            if ( v7 < v22 + v21[4] )
            {
              if ( v7 >= v22 )
                break;
              v21 = (_QWORD *)*v21;
            }
            else
            {
              v21 = (_QWORD *)v21[1];
            }
          }
          while ( v21 );
          if ( v21 )
          {
            v17 = 8LL;
            v23 = (v7 - (v21[11] & 0xFFFFFFFFFFFFF000uLL)) >> 12;
            if ( (v21[4] >> 12) - v23 < 8 )
              v17 = (v21[4] >> 12) - v23;
          }
        }
      }
    }
    goto LABEL_26;
  }
  Address = *(struct _LIST_ENTRY **)(a1 + 88);
  if ( Address
    || (MiLockVadTree(1, 0xFFFFF68000000000uLL, a3), Address = MiLocateAddress(v7), MiUnlockVadTree(1, 0x11u), Address) )
  {
    v17 = (HIDWORD(Address[1].Blink) | ((unsigned __int64)BYTE1(Address[2].Flink) << 32)) - (v7 >> 12) + 1;
LABEL_26:
    if ( v18 > v17 )
      return v17;
    return v18;
  }
  if ( v18 > 1 )
    return 1LL;
  return v18;
}
