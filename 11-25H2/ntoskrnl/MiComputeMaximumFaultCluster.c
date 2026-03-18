/*
 * XREFs of MiComputeMaximumFaultCluster @ 0x1403E1520
 * Callers:
 *     MiDispatchFault @ 0x14023F750 (MiDispatchFault.c)
 * Callees:
 *     MiUnlockVadTree @ 0x1402A8690 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402B57D0 (MiLocateAddress.c)
 *     MiFaultListPagesRemaining @ 0x1403E1750 (MiFaultListPagesRemaining.c)
 *     KiIsTraceMemoryAccess @ 0x1403E17E0 (KiIsTraceMemoryAccess.c)
 *     KiRspInIstStack @ 0x1403E2C50 (KiRspInIstStack.c)
 *     MiGetAnyMultiplexedVm @ 0x1404423A0 (MiGetAnyMultiplexedVm.c)
 */

__int64 __fastcall MiComputeMaximumFaultCluster(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // r15
  char *v6; // rax
  unsigned __int64 v7; // rbp
  __int16 v9; // ax
  char IsTraceMemoryAccess; // cl
  void *v11; // rsi
  unsigned __int64 v12; // r11
  int v13; // ecx
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rsi
  struct _LIST_ENTRY *Address; // rbx
  __int64 v18; // rsi
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rdx
  char v22; // cl
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rbp

  v4 = *(_QWORD *)(a1 + 16);
  v5 = a2;
  v6 = (char *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
  v7 = *(_QWORD *)a1 & 0xFFFFFFFFFFFFF000uLL;
  if ( v4 != (v4 & 0xFFFFFFFFFFFFFFFEuLL) )
  {
    v12 = MiFaultListPagesRemaining();
    v13 = 1;
    goto LABEL_12;
  }
  if ( (v4 & 1) != 0 )
  {
    v22 = *v6;
    if ( *v6 == 1 || v22 == 3 || v22 == 6 )
      return 1LL;
  }
  else if ( v4 )
  {
    v9 = *(_WORD *)(v4 + 368);
    IsTraceMemoryAccess = 0;
    if ( v9 == 16 )
    {
      if ( (*(_DWORD *)(v4 + 376) & 0x200) != 0
        || (v18 = *(_QWORD *)(v4 + 384), !(unsigned int)KiRspInIstStack(3LL, v18, a3, a4))
        && !(unsigned int)KiRspInIstStack(2LL, v18, v19, v20) )
      {
        v11 = &ExpInterlockedPopEntrySListFault;
        IsTraceMemoryAccess = KiIsTraceMemoryAccess(*(_QWORD *)(v4 + 360), a2, a3, a4);
        goto LABEL_7;
      }
    }
    else if ( v9 == 51 )
    {
      v11 = (void *)qword_140FC64C0;
LABEL_7:
      if ( *(void **)(v4 + 360) == v11 || IsTraceMemoryAccess )
        return 1LL;
    }
  }
  v12 = 1LL;
  if ( (unsigned __int8)((unsigned __int64)*(unsigned int *)(a1 + 80) >> 9) > 1uLL )
    v12 = (unsigned __int8)((unsigned __int64)*(unsigned int *)(a1 + 80) >> 9);
  v13 = 0;
LABEL_12:
  if ( v12 == 1 )
    return 1LL;
  if ( v5 )
  {
    if ( v5 > v12 )
      v5 = v12;
    v12 = v5;
  }
  v15 = 512LL - (((unsigned int)(v7 >> 9) >> 3) & 0x1FF);
  v16 = v15;
  if ( v12 <= v15 )
    v16 = v12;
  if ( v7 >= 0xFFFF800000000000uLL )
  {
    if ( !v13 )
    {
      v15 = 1LL;
      if ( *(_QWORD *)(a1 + 56) == MiGetAnyMultiplexedVm(2LL) )
      {
        v21 = P;
        if ( P )
        {
          do
          {
            v23 = v21[11] & 0xFFFFFFFFFFFFF000uLL;
            if ( v7 < v23 + v21[4] )
            {
              if ( v7 >= v23 )
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
            v15 = 8LL;
            v24 = (v7 - (v21[11] & 0xFFFFFFFFFFFFF000uLL)) >> 12;
            if ( (v21[4] >> 12) - v24 < 8 )
              v15 = (v21[4] >> 12) - v24;
          }
        }
      }
    }
    goto LABEL_24;
  }
  Address = *(struct _LIST_ENTRY **)(a1 + 88);
  if ( Address
    || (MiLockVadTree(1, 0xFFFFF68000000000uLL), Address = MiLocateAddress(v7), MiUnlockVadTree(1, 0x11u), Address) )
  {
    v15 = (HIDWORD(Address[1].Blink) | ((unsigned __int64)BYTE1(Address[2].Flink) << 32)) - (v7 >> 12) + 1;
LABEL_24:
    if ( v16 > v15 )
      return v15;
    return v16;
  }
  if ( v16 > 1 )
    return 1LL;
  return v16;
}
