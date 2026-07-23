/*
 * XREFs of RtlpHpSegLargeRangeAllocate @ 0x1800D3258
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x180067200 (RtlpHpSegPageRangeAllocate.c)
 * Callees:
 *     RtlpHpSegFreeRangeRemove @ 0x180067840 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpSegFreeRangeInsert @ 0x180069560 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegPageRangeSplit @ 0x1800D3400 (RtlpHpSegPageRangeSplit.c)
 */

unsigned __int64 __fastcall RtlpHpSegLargeRangeAllocate(__int64 a1, unsigned __int64 i, int a3, int a4)
{
  char v4; // bp
  unsigned int v6; // r11d
  unsigned int v9; // r8d
  unsigned __int8 v10; // al
  _QWORD **v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // r9
  unsigned __int64 v14; // r10
  int v15; // ebx
  __int16 *v16; // rdx
  unsigned __int64 j; // rcx
  unsigned int v18; // ebx
  __int64 v19; // rbx
  _QWORD *v21; // rcx

  v4 = *(_BYTE *)(a1 + 8);
  v6 = a3 << v4;
  while ( 1 )
  {
    v9 = *(unsigned __int8 *)(i + 31) << v4;
    if ( !a4 )
      goto LABEL_8;
    v10 = *(_BYTE *)(i + 30);
    if ( v10 <= 2u )
      break;
LABEL_4:
    v11 = *(_QWORD ***)(i + 8);
    v12 = i;
    if ( v11 )
    {
      v21 = *v11;
      for ( i = *(_QWORD *)(i + 8); v21; v21 = (_QWORD *)*v21 )
        i = (unsigned __int64)v21;
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
    v18 = 0;
LABEL_14:
    RtlpHpSegFreeRangeRemove(a1, i);
    goto LABEL_15;
  }
LABEL_8:
  v13 = (i & *(_QWORD *)a1) + ((__int64)(i - (i & *(_QWORD *)a1)) >> 5 << v4);
  v14 = v13 + v9;
  v15 = v13;
  v16 = (__int16 *)(*(_QWORD *)((v13 & *(_QWORD *)a1) + 0x18)
                  + 2 * ((v13 - ((unsigned __int64)v13 & *(_QWORD *)a1)) >> 21));
  for ( j = (v13 + 0x200000) & 0xFFFFFFFFFFE00000uLL; ; j += 0x200000LL )
  {
    if ( *v16 < 0 )
    {
      if ( j >= v14 )
        j = v13 + v9;
      if ( (int)j - v15 >= v6 )
        break;
    }
    if ( j >= v14 )
      goto LABEL_4;
    v15 = j;
    ++v16;
  }
  v18 = v15 - v13;
  if ( a4 )
    goto LABEL_14;
LABEL_15:
  if ( v18 )
  {
    LOBYTE(j) = *(_BYTE *)(a1 + 8);
    v19 = RtlpHpSegPageRangeSplit(j, i, v18 >> j);
    RtlpHpSegFreeRangeInsert(a1, i, 0);
    return v19;
  }
  return i;
}
