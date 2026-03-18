/*
 * XREFs of RtlpHpSegFreeRangeInsert @ 0x1402BD890
 * Callers:
 *     RtlpHpSegContextCompact @ 0x1402B4260 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegPageRangeAllocate @ 0x1402C17F4 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegLargeRangeAllocate @ 0x1402C2C60 (RtlpHpSegLargeRangeAllocate.c)
 *     RtlpHpSegContextReserve @ 0x140606068 (RtlpHpSegContextReserve.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1402BDA80 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall RtlpHpSegFreeRangeInsert(__int64 *a1, __int64 a2, int a3)
{
  __int64 v5; // r9
  char v6; // cl
  unsigned int v7; // r10d
  int v8; // r11d
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  unsigned __int64 v12; // r9
  __int16 *v13; // rcx
  int v14; // eax
  unsigned int i; // edx
  char v16; // dl
  __int64 v17; // rdx
  unsigned __int8 v18; // cl
  __int64 v19; // rcx
  __int64 result; // rax

  if ( !a3 && (*((_BYTE *)a1 + 13) & 0x10) != 0 && *(unsigned __int8 *)(a2 + 31) == 256 - *((unsigned __int8 *)a1 + 10) )
  {
    result = a2 & *a1;
    *(_DWORD *)a2 = -857879297;
  }
  else
  {
    if ( (*((_BYTE *)a1 + 13) & 7) != 0 )
    {
      v5 = *a1;
      v6 = *((_BYTE *)a1 + 8);
      v7 = *(unsigned __int8 *)(a2 + 31) << v6;
      v8 = 0;
      v9 = (a2 & v5) + ((a2 - (a2 & v5)) >> 5 << v6);
      v10 = v9 & v5;
      LODWORD(v9) = v9 - v10;
      v11 = *(_QWORD *)(v10 + 24);
      v12 = v11 + 2 * ((unsigned __int64)((unsigned int)v9 + v7 - 1) >> 21);
      v13 = (__int16 *)(v11 + 2 * ((unsigned __int64)(unsigned int)v9 >> 21));
      v14 = 0;
      for ( i = ((__int64)(2 * ((unsigned __int64)((unsigned int)v9 + v7 - 1) >> 21)
                         - 2 * ((unsigned __int64)(unsigned int)v9 >> 21)) >> 1)
              + 1; (unsigned __int64)v13 <= v12; ++v13 )
      {
        if ( (*v13 & 0x7FF) != 0 )
        {
          if ( *v13 < 0 )
            ++v14;
        }
        else
        {
          ++v8;
        }
      }
      if ( v14 == i )
      {
        v16 = i > ((unsigned __int64)v7 + 0x1FFFFF) >> 21;
      }
      else if ( v14 )
      {
        v16 = 2;
      }
      else
      {
        v16 = (v8 == 0) + 3;
      }
    }
    else
    {
      v16 = 4;
    }
    *(_BYTE *)(a2 + 30) = v16;
    v17 = a1[12];
    if ( (a1[13] & 1) == 0 )
    {
LABEL_13:
      v18 = 0;
      if ( !v17 )
        goto LABEL_18;
      while ( 1 )
      {
        if ( *(_DWORD *)(a2 + 28) < *(_DWORD *)(v17 + 28) )
        {
          v19 = *(_QWORD *)v17;
          if ( (a1[13] & 1) != 0 )
          {
            if ( !v19 )
              goto LABEL_32;
            v19 ^= v17;
          }
          if ( !v19 )
            goto LABEL_32;
        }
        else
        {
          v19 = *(_QWORD *)(v17 + 8);
          if ( (a1[13] & 1) != 0 )
          {
            if ( !v19 )
              goto LABEL_17;
            v19 ^= v17;
          }
          if ( !v19 )
          {
LABEL_17:
            v18 = 1;
            goto LABEL_18;
          }
        }
        v17 = v19;
      }
    }
    if ( v17 )
    {
      v17 ^= (unsigned __int64)(a1 + 12);
      goto LABEL_13;
    }
LABEL_32:
    v18 = 0;
LABEL_18:
    RtlRbInsertNodeEx(a1 + 12, v17, v18, a2);
    _InterlockedAdd64((__int64 *)((char *)a1 + *((__int16 *)a1 + 11) + 16), (unsigned __int16)~*(_WORD *)(a2 + 28));
    return 0LL;
  }
  return result;
}
