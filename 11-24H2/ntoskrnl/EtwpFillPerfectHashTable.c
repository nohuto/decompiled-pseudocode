/*
 * XREFs of EtwpFillPerfectHashTable @ 0x1409E86E4
 * Callers:
 *     EtwpCreatePerfectHashFunction @ 0x1409E84C0 (EtwpCreatePerfectHashFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpFillPerfectHashTable(
        _WORD *a1,
        unsigned __int16 a2,
        char a3,
        unsigned __int16 a4,
        __int64 a5,
        unsigned __int16 *a6)
{
  int v7; // r15d
  unsigned __int16 v8; // cx
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int16 v12; // r11
  unsigned __int16 v13; // bx
  __int64 v14; // r9
  __int16 v15; // di
  unsigned __int16 v16; // r8
  unsigned __int16 v17; // dx
  unsigned int v18; // ebp
  unsigned __int16 v19; // r8
  unsigned __int16 v20; // dx
  unsigned int v21; // r9d
  unsigned __int16 v22; // dx
  __int64 v24; // rax
  unsigned __int16 i; // cx
  __int64 v26; // r9
  unsigned __int16 v27; // [rsp+38h] [rbp+10h]

  v7 = a4;
  v8 = 0;
  v10 = a5;
  *a6 = 0;
  v11 = 128LL;
  v12 = a4 + 1;
  v27 = a4 + 1;
  v13 = a4 + 1;
  do
  {
    *(_WORD *)(v10 + 2) = -1;
    *(_BYTE *)v10 = -1;
    v10 += 4LL;
    --v11;
  }
  while ( v11 );
  if ( a2 )
  {
    v14 = a2;
    do
    {
      v15 = *a1;
      v16 = 0;
      v17 = v7 & __ROR2__(*a1, a3);
      while ( *(_WORD *)(a5 + 4LL * v17 + 2) != 0xFFFF )
      {
        v24 = v17;
        if ( *(_WORD *)(a5 + 4LL * v17 + 2) == v15 )
          break;
        v17 = *(unsigned __int8 *)(a5 + 4LL * v17);
        ++v16;
        if ( v17 == 255 )
        {
          v17 = v13++;
          *(_BYTE *)(a5 + 4 * v24) = v17;
        }
        if ( v16 > *a6 )
          *a6 = v16;
      }
      ++a1;
      *(_WORD *)(a5 + 4LL * v17 + 2) = v15;
      --v14;
    }
    while ( v14 );
    v12 = v27;
    v8 = 0;
  }
  v18 = v7 + 1;
  v19 = v13 - 1;
  v20 = 0;
  v21 = (unsigned __int16)(v13 - 1);
  if ( v21 > v7 + 1 )
  {
    do
    {
      if ( v20 >= (unsigned __int16)v7 )
        break;
      if ( *(_BYTE *)(a5 + 4LL * v19) == 0xFF )
      {
        while ( *(_WORD *)(a5 + 4LL * v20 + 2) != 0xFFFF )
        {
          if ( ++v20 >= (unsigned __int16)v7 )
            goto LABEL_31;
        }
        *(_WORD *)(a5 + 4LL * v20 + 2) = *(_WORD *)(a5 + 4LL * v19 + 2);
        for ( i = 0; i < v13; ++i )
        {
          if ( *(unsigned __int8 *)(a5 + 4LL * i) == v19 )
          {
            *(_BYTE *)(a5 + 4LL * i) = v20;
            break;
          }
        }
        *(_WORD *)(a5 + 4LL * v19 + 2) = -1;
        if ( v21 == v13 - 1 )
          --v13;
      }
      --v19;
      ++v20;
      v21 = v19;
    }
    while ( v19 > v18 );
LABEL_31:
    v12 = v27;
    v8 = 0;
  }
  v22 = v13 - 1;
  if ( (unsigned __int16)(v13 - 1) > v18 )
  {
    while ( v12 < v22 )
    {
      if ( *(_WORD *)(a5 + 4LL * v12 + 2) == 0xFFFF )
      {
        v26 = v22;
        *(_WORD *)(a5 + 4LL * v12 + 2) = *(_WORD *)(a5 + 4LL * v22 + 2);
        while ( v8 < v13 )
        {
          if ( *(unsigned __int8 *)(a5 + 4LL * v8) == v22 )
          {
            *(_BYTE *)(a5 + 4LL * v8) = v12;
            break;
          }
          ++v8;
        }
        --v22;
        *(_BYTE *)(a5 + 4LL * v12) = *(_BYTE *)(a5 + 4 * v26);
        --v13;
        ++v12;
        v8 = 0;
        if ( v22 <= v18 )
          return v13;
      }
      else
      {
        ++v12;
      }
    }
  }
  return v13;
}
