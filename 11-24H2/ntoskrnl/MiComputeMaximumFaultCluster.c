/*
 * XREFs of MiComputeMaximumFaultCluster @ 0x140406D50
 * Callers:
 *     MiDispatchFault @ 0x140333520 (MiDispatchFault.c)
 * Callees:
 *     MiLockVadTree @ 0x140240750 (MiLockVadTree.c)
 *     MiUnlockVadTree @ 0x140291980 (MiUnlockVadTree.c)
 *     MiLocateAddress @ 0x140344F70 (MiLocateAddress.c)
 *     MiFaultListPagesRemaining @ 0x140406F80 (MiFaultListPagesRemaining.c)
 *     KiIsTraceMemoryAccess @ 0x140407010 (KiIsTraceMemoryAccess.c)
 *     KiRspInIstStack @ 0x140407044 (KiRspInIstStack.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
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
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // r14
  struct _LIST_ENTRY *Address; // rbx
  char v19; // cl
  _QWORD *v20; // rdx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rsi

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
    v19 = *v6;
    if ( *v6 == 1 || v19 == 3 || v19 == 6 )
      return 1LL;
  }
  else if ( v4 )
  {
    v9 = *(_WORD *)(v4 + 368);
    IsTraceMemoryAccess = 0;
    if ( v9 == 16 )
    {
      if ( (*(_DWORD *)(v4 + 376) & 0x200) != 0
        || (v15 = *(_QWORD *)(v4 + 384), !(unsigned int)KiRspInIstStack(3LL, v15))
        && !(unsigned int)KiRspInIstStack(2LL, v15) )
      {
        v11 = &ExpInterlockedPopEntrySListFault;
        IsTraceMemoryAccess = KiIsTraceMemoryAccess(*(_QWORD *)(v4 + 360), a2, a3, a4);
        goto LABEL_7;
      }
    }
    else if ( v9 == 51 )
    {
      v11 = (void *)qword_140FC7500;
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
  v16 = 512LL - (((unsigned int)(v7 >> 9) >> 3) & 0x1FF);
  v17 = v16;
  if ( v12 <= v16 )
    v17 = v12;
  if ( v7 >= 0xFFFF800000000000uLL )
  {
    if ( !v13 )
    {
      v16 = 1LL;
      if ( *(_QWORD *)(a1 + 56) == MiGetAnyMultiplexedVm(2LL) )
      {
        v20 = P;
        if ( P )
        {
          do
          {
            v21 = v20[11] & 0xFFFFFFFFFFFFF000uLL;
            if ( v7 < v21 + v20[4] )
            {
              if ( v7 >= v21 )
                break;
              v20 = (_QWORD *)*v20;
            }
            else
            {
              v20 = (_QWORD *)v20[1];
            }
          }
          while ( v20 );
          if ( v20 )
          {
            v16 = 8LL;
            v22 = (v7 - (v20[11] & 0xFFFFFFFFFFFFF000uLL)) >> 12;
            if ( (v20[4] >> 12) - v22 < 8 )
              v16 = (v20[4] >> 12) - v22;
          }
        }
      }
    }
    goto LABEL_26;
  }
  Address = *(struct _LIST_ENTRY **)(a1 + 88);
  if ( Address
    || (MiLockVadTree(1, 0xFFFFF68000000000uLL, a3, a4),
        Address = MiLocateAddress(v7),
        MiUnlockVadTree(1, 0x11u),
        Address) )
  {
    v16 = (HIDWORD(Address[1].Blink) | ((unsigned __int64)BYTE1(Address[2].Flink) << 32)) - (v7 >> 12) + 1;
LABEL_26:
    if ( v17 > v16 )
      return v16;
    return v17;
  }
  if ( v17 > 1 )
    return 1LL;
  return v17;
}
