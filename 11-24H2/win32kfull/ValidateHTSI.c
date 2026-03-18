/*
 * XREFs of ValidateHTSI @ 0x14013BF78
 * Callers:
 *     AAHalftoneBitmap @ 0x14013A0D8 (AAHalftoneBitmap.c)
 * Callees:
 *     ValidateRGBBitFields @ 0x1401A10D8 (ValidateRGBBitFields.c)
 */

__int64 __fastcall ValidateHTSI(__int64 a1, int a2)
{
  int v3; // edx
  __int64 v4; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __m128i *v8; // rcx
  unsigned int v9; // r9d
  unsigned __int8 v10; // r11
  char v11; // bl
  int v12; // eax
  int v13; // edx
  __int128 *v14; // rax
  __m128i v15; // [rsp+20h] [rbp-20h]
  __int128 v16; // [rsp+20h] [rbp-20h]
  _DWORD *v17; // [rsp+30h] [rbp-10h]
  __int64 v18; // [rsp+30h] [rbp-10h]

  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        v4 = *(_QWORD *)(a1 + 32);
        if ( v4 )
        {
          if ( *(_BYTE *)(v4 + 10) != 1 )
            return 4294967286LL;
        }
      }
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 40);
      if ( !v6 )
        return 4294967259LL;
      *(_QWORD *)(a1 + 56) = 0LL;
      if ( *(_BYTE *)(v6 + 10) != 1
        && *(_BYTE *)(v6 + 10) != 2
        && *(_BYTE *)(v6 + 10) != 5
        && *(_BYTE *)(v6 + 10) != 6
        && *(unsigned __int8 *)(v6 + 10) != 252
        && *(unsigned __int8 *)(v6 + 10) != 253 )
      {
        if ( *(unsigned __int8 *)(v6 + 10) == 254 )
        {
          v14 = *(__int128 **)(v6 + 32);
          if ( v14 )
          {
            v18 = *((_QWORD *)v14 + 2);
            v16 = *v14;
            if ( v18 )
            {
              if ( *(_QWORD *)((char *)&v16 + 4) == 0x100000000FFLL && BYTE2(v16) == 1 && !(_BYTE)v16 )
                *(_QWORD *)(a1 + 56) = v18;
            }
          }
        }
        else if ( *(unsigned __int8 *)(v6 + 10) != 255 )
        {
          return 4294967285LL;
        }
      }
    }
    return 1LL;
  }
  v7 = *(_QWORD *)(a1 + 24);
  if ( !v7 )
    return 4294967260LL;
  v8 = *(__m128i **)(v7 + 32);
  if ( !v8 )
    return 4294967279LL;
  v9 = 2;
  v10 = _mm_cvtsi128_si32(*v8);
  v15 = *v8;
  v17 = (_DWORD *)v8[1].m128i_i64[0];
  if ( v10 > 2u )
    return 4294967267LL;
  v11 = 4;
  *(_BYTE *)(a1 + 84) = v15.m128i_i8[3];
  v12 = *(unsigned __int8 *)(v7 + 10);
  *(_BYTE *)(a1 + 65) = v12;
  switch ( v12 )
  {
    case 1:
LABEL_22:
      if ( v15.m128i_i8[1] == 1 )
      {
        if ( v15.m128i_i8[2] < 3u )
          return 4294967272LL;
        if ( v15.m128i_i8[3] > 5u )
          return 4294967273LL;
        if ( !v17 )
          return 4294967278LL;
        if ( v15.m128i_i32[2] <= v9 && v15.m128i_i32[2] )
        {
          if ( v15.m128i_i32[1] != 255 )
            return 4294967274LL;
          return (unsigned int)ValidateRGBBitFields(a1 + 64) != 0 ? 1 : -18;
        }
      }
      return 4294967276LL;
    case 2:
      v9 = 16;
      goto LABEL_22;
    case 3:
      v9 = 256;
      goto LABEL_22;
    case 4:
      v11 = 2;
      goto LABEL_17;
    case 5:
      if ( !v10 && *(__int16 *)((char *)v15.m128i_i16 + 1) == 769 && v15.m128i_i8[3] <= 5u && v15.m128i_i32[1] == 255 )
      {
        v13 = *(_DWORD *)&SrcOrderTable[4 * v15.m128i_u8[3]];
        *(_DWORD *)(a1 + 72) = 255 << (8 * BYTE1(v13));
        *(_DWORD *)(a1 + 76) = 255 << (8 * BYTE2(v13));
        *(_DWORD *)(a1 + 80) = 255 << (8 * HIBYTE(v13));
        return (unsigned int)ValidateRGBBitFields(a1 + 64) != 0 ? 1 : -18;
      }
      return 4294967272LL;
    case 6:
LABEL_17:
      if ( !v10 && v15.m128i_i8[2] == v11 && v15.m128i_i32[2] == 3 && v17 )
      {
        *(_DWORD *)(a1 + 72) = *v17;
        *(_DWORD *)(a1 + 76) = v17[1];
        *(_DWORD *)(a1 + 80) = v17[2];
        return (unsigned int)ValidateRGBBitFields(a1 + 64) != 0 ? 1 : -18;
      }
      return 4294967278LL;
  }
  return 4294967287LL;
}
