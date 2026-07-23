/*
 * XREFs of RtlpHpSegFreeRangeInsert @ 0x140364FD0
 * Callers:
 *     RtlpHpSegLargeRangeAllocate @ 0x14035D204 (RtlpHpSegLargeRangeAllocate.c)
 *     RtlpHpSegPageRangeAllocate @ 0x14035DE94 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegContextCompact @ 0x14035E4C0 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegContextReserve @ 0x1406036A8 (RtlpHpSegContextReserve.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1403651C0 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall RtlpHpSegFreeRangeInsert(_RTL_RB_TREE *a1, __int64 a2, int a3)
{
  _RTL_BALANCED_NODE *Root; // r9
  $7D93978C745EB1C2D28075BAF55422B4 v6; // cl
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
  _RTL_BALANCED_NODE *v17; // rdx
  BOOLEAN v18; // cl
  _RTL_BALANCED_NODE *v19; // rcx
  __int64 result; // rax

  if ( !a3 && (BYTE5(a1->Min) & 0x10) != 0 && *(unsigned __int8 *)(a2 + 31) == 256 - BYTE2(a1->Min) )
  {
    result = a2 & (__int64)a1->Root;
    *(_DWORD *)a2 = -857879297;
  }
  else
  {
    if ( (BYTE5(a1->Min) & 7) != 0 )
    {
      Root = a1->Root;
      v6 = a1->0;
      v7 = *(unsigned __int8 *)(a2 + 31) << *(_BYTE *)&v6;
      v8 = 0;
      v9 = (a2 & (unsigned __int64)Root) + ((__int64)(a2 - (a2 & (unsigned __int64)Root)) >> 5 << *(_BYTE *)&v6);
      v10 = v9 & (unsigned __int64)Root;
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
    v17 = a1[6].Root;
    if ( ((__int64)a1[6].Min & 1) == 0 )
    {
LABEL_13:
      v18 = 0;
      if ( !v17 )
        goto LABEL_18;
      while ( 1 )
      {
        if ( *(_DWORD *)(a2 + 28) < HIDWORD(v17[1].Left) )
        {
          v19 = v17->Children[0];
          if ( ((__int64)a1[6].Min & 1) != 0 )
          {
            if ( !v19 )
              goto LABEL_32;
            v19 = (_RTL_BALANCED_NODE *)((unsigned __int64)v17 ^ (unsigned __int64)v19);
          }
          if ( !v19 )
            goto LABEL_32;
        }
        else
        {
          v19 = v17->Children[1];
          if ( ((__int64)a1[6].Min & 1) != 0 )
          {
            if ( !v19 )
              goto LABEL_17;
            v19 = (_RTL_BALANCED_NODE *)((unsigned __int64)v17 ^ (unsigned __int64)v19);
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
      v17 = (_RTL_BALANCED_NODE *)((unsigned __int64)&a1[6] ^ (unsigned __int64)v17);
      goto LABEL_13;
    }
LABEL_32:
    v18 = 0;
LABEL_18:
    RtlRbInsertNodeEx(a1 + 6, v17, v18, (PRTL_BALANCED_NODE)a2);
    _InterlockedAdd64(
      (volatile signed __int64 *)((char *)&a1[1] + SHIWORD(a1[1].Root)),
      (unsigned __int16)~*(_WORD *)(a2 + 28));
    return 0LL;
  }
  return result;
}
