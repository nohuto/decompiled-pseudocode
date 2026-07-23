/*
 * XREFs of HalpCalculateScatterGatherListSize @ 0x140387F80
 * Callers:
 *     HalCalculateScatterGatherListSizeV2 @ 0x140386740 (HalCalculateScatterGatherListSizeV2.c)
 *     HalBuildScatterGatherListV2 @ 0x1403879B0 (HalBuildScatterGatherListV2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpCalculateScatterGatherListSize(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        _DWORD *a6,
        int *a7)
{
  int v7; // r11d
  __int64 v8; // rsi
  int v10; // ebx
  __int16 v11; // r9
  int v12; // eax
  unsigned int v13; // r8d
  int v14; // r9d
  unsigned int v15; // edi
  int v16; // edx
  unsigned int v17; // ecx
  unsigned __int64 v18; // rax
  int v19; // ebx
  bool v20; // cc
  unsigned int v21; // edx
  unsigned int v23; // ecx
  int v24; // ebp
  bool v25; // cc
  unsigned int v26; // ebx
  bool v27; // cc

  v7 = 0;
  v8 = a4;
  if ( *(_DWORD *)(a1 + 156) == 2 )
  {
    v10 = 1;
  }
  else
  {
    v10 = HalpCoreDmaAlignment;
    if ( *(_BYTE *)(a1 + 445) )
      v10 = 1;
  }
  v11 = a3;
  if ( !a2 )
  {
    v18 = (v8 + (unsigned __int64)(a3 & 0xFFF) + 4095) >> 12;
    v26 = v10 - 1;
    if ( (v26 & (unsigned int)a3) != 0 )
    {
      v7 = 1;
      v27 = (unsigned int)v18 <= 1;
    }
    else
    {
      v27 = (unsigned int)v18 <= 1;
      if ( (_DWORD)v18 == 1 )
      {
        if ( (v26 & (unsigned int)v8) != 0 )
          v7 = 1;
        goto LABEL_11;
      }
    }
    if ( !v27 && ((v8 + a3) & v26) != 0 )
      goto LABEL_10;
    goto LABEL_11;
  }
  v12 = 0;
  v13 = *((_DWORD *)a2 + 8) + *((_DWORD *)a2 + 10) + *((_DWORD *)a2 + 11) - a3;
  v14 = v11 & 0xFFF;
  v15 = v13;
  if ( v13 < (unsigned int)v8 )
  {
    while ( 1 )
    {
      a2 = (__int64 *)*a2;
      if ( !a2 )
        goto LABEL_6;
      v23 = (v14 + v15 + 4095) >> 12;
      v24 = v10 - 1;
      v12 += v23;
      if ( ((v10 - 1) & v14) != 0 )
        break;
      v25 = v23 <= 1;
      if ( v23 != 1 )
        goto LABEL_31;
      if ( (v24 & v15) != 0 )
        goto LABEL_27;
LABEL_28:
      v15 = *((_DWORD *)a2 + 10);
      v13 += v15;
      v14 = *((_DWORD *)a2 + 11);
      if ( v13 >= (unsigned int)v8 )
        goto LABEL_6;
    }
    ++v7;
    v25 = v23 <= 1;
LABEL_31:
    if ( v25 || (v24 & (v14 + v15)) == 0 )
      goto LABEL_28;
LABEL_27:
    ++v7;
    goto LABEL_28;
  }
LABEL_6:
  if ( v13 + 4096 < v14 + (int)v8 )
    return 3221225507LL;
  v16 = v8 + v15 + v14 - v13;
  v17 = (unsigned int)(v16 + 4095) >> 12;
  LODWORD(v18) = v17 + v12;
  v19 = v10 - 1;
  if ( (v19 & v14) != 0 )
  {
    ++v7;
    v20 = v17 <= 1;
  }
  else
  {
    v20 = v17 <= 1;
    if ( v17 == 1 )
    {
      if ( (((_DWORD)v8 + v15 - v13) & v19) == 0 )
        goto LABEL_11;
      goto LABEL_10;
    }
  }
  if ( !v20 && (v19 & v16) != 0 )
LABEL_10:
    ++v7;
LABEL_11:
  if ( (unsigned int)v18 > *(_DWORD *)(a1 + 232) )
    return 3221225626LL;
  v21 = 24 * v18 + 16;
  if ( *(_BYTE *)(a1 + 440) || !*(_BYTE *)(a1 + 445) )
  {
    v21 = 24 * v18 + 64;
    if ( v21 < 0xA0 )
      v21 = 160;
  }
  *a5 = v21;
  if ( a6 )
    *a6 = v18;
  if ( a7 )
    *a7 = v7;
  return 0LL;
}
