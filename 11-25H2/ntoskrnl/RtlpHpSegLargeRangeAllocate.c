/*
 * XREFs of RtlpHpSegLargeRangeAllocate @ 0x1402F8FE0
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x1402F8BBC (RtlpHpSegPageRangeAllocate.c)
 * Callees:
 *     RtlpHpSegFreeRangeInsert @ 0x1402E2180 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegFreeRangeRemove @ 0x1402E3940 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpSegPageRangeSplit @ 0x1402F8F30 (RtlpHpSegPageRangeSplit.c)
 */

unsigned __int64 __fastcall RtlpHpSegLargeRangeAllocate(__int64 a1, unsigned __int64 i, int a3, int a4)
{
  char v4; // bp
  unsigned int v6; // r11d
  unsigned int v9; // r8d
  unsigned __int8 v10; // al
  _QWORD **v11; // rax
  unsigned __int64 v12; // rcx
  _QWORD *v13; // rcx
  unsigned int v14; // ebx
  unsigned __int64 j; // rcx
  __int64 v17; // r9
  unsigned __int64 v18; // r10
  int v19; // ebx
  __int16 *v20; // rdx
  __int64 v21; // rbx

  v4 = *(_BYTE *)(a1 + 8);
  v6 = a3 << v4;
  while ( 1 )
  {
    v9 = *(unsigned __int8 *)(i + 31) << v4;
    if ( !a4 )
      goto LABEL_25;
    v10 = *(_BYTE *)(i + 30);
    if ( v10 <= 2u )
      break;
LABEL_4:
    v11 = *(_QWORD ***)(i + 8);
    v12 = i;
    if ( v11 )
    {
      v13 = *v11;
      for ( i = *(_QWORD *)(i + 8); v13; v13 = (_QWORD *)*v13 )
        i = (unsigned __int64)v13;
    }
    else
    {
      while ( 1 )
      {
        i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !i || *(_QWORD *)i == v12 )
          break;
        v12 = i;
      }
    }
    if ( !i )
      return 0LL;
  }
  if ( !v10 && (v6 <= (v9 & 0x1FFFFF) || (v9 & 0x1FFFFF) == 0) )
  {
    v14 = 0;
LABEL_21:
    RtlpHpSegFreeRangeRemove(a1, i);
    goto LABEL_22;
  }
LABEL_25:
  v17 = (i & *(_QWORD *)a1) + ((__int64)(i - (i & *(_QWORD *)a1)) >> 5 << v4);
  v18 = v17 + v9;
  v19 = v17;
  v20 = (__int16 *)(*(_QWORD *)((v17 & *(_QWORD *)a1) + 0x18)
                  + 2 * ((v17 - ((unsigned __int64)v17 & *(_QWORD *)a1)) >> 21));
  for ( j = (v17 + 0x200000) & 0xFFFFFFFFFFE00000uLL; ; j += 0x200000LL )
  {
    if ( *v20 < 0 )
    {
      if ( j >= v18 )
        j = v17 + v9;
      if ( (int)j - v19 >= v6 )
        break;
    }
    if ( j >= v18 )
      goto LABEL_4;
    v19 = j;
    ++v20;
  }
  v14 = v19 - v17;
  if ( a4 )
    goto LABEL_21;
LABEL_22:
  if ( v14 )
  {
    LOBYTE(j) = *(_BYTE *)(a1 + 8);
    v21 = RtlpHpSegPageRangeSplit(j, i, v14 >> j);
    RtlpHpSegFreeRangeInsert((_RTL_RB_TREE *)a1, i, 0);
    return v21;
  }
  return i;
}
