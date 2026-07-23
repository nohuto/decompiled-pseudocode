/*
 * XREFs of RtlAppendPathElement @ 0x1800A76A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlMultiAppendUnicodeStringBuffer @ 0x1800A6610 (RtlMultiAppendUnicodeStringBuffer.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall RtlAppendPathElement(int a1, unsigned __int16 *a2, __m128i *a3)
{
  __int128 v3; // xmm2
  __int16 v5; // bx
  char v6; // r9
  __int16 v7; // r11
  __int16 v8; // di
  __int16 v9; // si
  __int64 result; // rax
  int v11; // r10d
  __int16 v12; // dx
  __m128i v13; // xmm1
  unsigned int i; // ecx
  __int16 *v15; // r14
  __int16 v16; // r8
  __int16 v17; // r8
  __int16 *v18; // xmm0_8
  unsigned __int16 v19; // r8
  __int16 v20; // r9
  const wchar_t *v21; // rax
  __int16 *v22; // rax
  __m128i v23; // [rsp+28h] [rbp-39h]
  __int128 v24; // [rsp+38h] [rbp-29h]
  __int128 v25; // [rsp+48h] [rbp-19h]
  _OWORD v26[3]; // [rsp+58h] [rbp-9h] BYREF
  int v27; // [rsp+88h] [rbp+27h] BYREF
  __int16 v28; // [rsp+8Ch] [rbp+2Bh]
  __int16 v29; // [rsp+8Eh] [rbp+2Dh] BYREF

  v3 = RtlpEmptyString;
  v27 = 0;
  v5 = 0;
  v29 = 0;
  v6 = a1;
  v28 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v24 = RtlpEmptyString;
  *(_QWORD *)&v25 = RtlpEmptyString;
  if ( (a1 & 0xFFFFFFFC) != 0 || !a2 || !a3 )
    return 3221225485LL;
  v11 = a1 & 1;
  v12 = v11 != 0 ? 92 : 47;
  if ( !a3->m128i_i16[0] )
    return 0LL;
  v13 = *a3;
  v23 = *a3;
  if ( *a2 )
  {
    for ( i = 0; i < 3 && i < *a2 >> 1; ++i )
    {
      v15 = (__int16 *)*((_QWORD *)a2 + 1);
      v16 = v15[i];
      if ( v16 == v12 || v16 == 92 )
      {
        if ( (v6 & 2) != 0 )
        {
          v7 = v15[i];
          LOWORD(v27) = v7;
        }
        else
        {
          v7 = *v15;
          LOWORD(v27) = *v15;
        }
        break;
      }
    }
    v17 = *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * ((unsigned __int64)*a2 >> 1) - 2);
    if ( v17 == v12 || v17 == 92 )
    {
      v8 = *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * ((unsigned __int64)*a2 >> 1) - 2);
      HIWORD(v27) = v8;
    }
  }
  v18 = (__int16 *)_mm_srli_si128(v13, 8).m128i_u64[0];
  if ( *v18 == v12 || *v18 == 92 )
  {
    v9 = *v18;
    v28 = *v18;
  }
  v19 = _mm_cvtsi128_si32(v13);
  v20 = v18[((unsigned __int64)v19 >> 1) - 1];
  if ( v20 == v12 || v20 == 92 )
  {
    v5 = v18[((unsigned __int64)v19 >> 1) - 1];
    v29 = v5;
  }
  if ( v8 )
  {
    if ( !v5 )
    {
      LOWORD(v25) = 2;
      v21 = (const wchar_t *)&v27 + 1;
      if ( v11 )
        v21 = L"\\";
      *((_QWORD *)&v25 + 1) = v21;
      v3 = v25;
    }
    if ( v9 )
    {
      v23.m128i_i64[1] = (__int64)(v18 + 1);
      v23.m128i_i16[1] -= 2;
      v23.m128i_i16[0] = v19 - 2;
      v13 = v23;
    }
  }
  else if ( !v9 )
  {
    LOWORD(v24) = 2;
    *((_QWORD *)&v24 + 1) = L"\\";
    if ( !v11 )
    {
      if ( v5 )
      {
        v22 = &v29;
      }
      else
      {
        if ( !v7 )
          goto LABEL_30;
        v22 = (__int16 *)&v27;
      }
      *((_QWORD *)&v24 + 1) = v22;
    }
  }
LABEL_30:
  v26[0] = v24;
  v26[1] = v13;
  v26[2] = v3;
  result = RtlMultiAppendUnicodeStringBuffer(a2, 3, (__int64)v26);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
