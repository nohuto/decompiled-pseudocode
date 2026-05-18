/*
 * XREFs of sub_18001AAC0 @ 0x18001AAC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800508B0 @ 0x1800508B0 (sub_1800508B0.c)
 */

__int64 __fastcall sub_18001AAC0(__int64 a1, int a2, int a3, __int64 a4)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  __int64 v9; // rcx
  __int64 result; // rax
  __m128i si128; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+30h] [rbp-38h]
  int v13; // [rsp+38h] [rbp-30h]
  __int128 v14; // [rsp+3Ch] [rbp-2Ch]
  int v15; // [rsp+4Ch] [rbp-1Ch]
  int v16; // [rsp+50h] [rbp-18h]
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  si128 = _mm_load_si128((const __m128i *)&xmmword_18018D340);
  v12 = 0x100000000LL;
  v13 = 7;
  v14 = xmmword_1800F8600;
  v15 = 0;
  v16 = 2139095039;
  if ( a2 > 5 )
  {
    v6 = a2 - 6;
    if ( !v6 )
    {
      si128.m128i_i32[0] = 6;
      goto LABEL_18;
    }
    v7 = v6 - 1;
    if ( !v7 )
    {
      si128.m128i_i32[0] = 10;
      goto LABEL_18;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      si128.m128i_i32[0] = 7;
      goto LABEL_18;
    }
    if ( v8 != 1 )
      goto LABEL_18;
LABEL_14:
    si128.m128i_i32[0] = 0;
    goto LABEL_18;
  }
  if ( a2 == 5 )
  {
    si128.m128i_i32[0] = 8;
    goto LABEL_18;
  }
  if ( !a2 )
    goto LABEL_14;
  v4 = a2 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 2 )
        si128.m128i_i32[0] = 9;
    }
    else
    {
      si128.m128i_i32[0] = 2;
    }
  }
LABEL_18:
  if ( a3 )
  {
    if ( a3 == 1 )
      si128.m128i_i32[1] = 1;
  }
  else
  {
    si128.m128i_i32[1] = 2;
  }
  if ( (_DWORD)a4 )
  {
    if ( (_DWORD)a4 == 1 )
      si128.m128i_i32[2] = 1;
  }
  else
  {
    si128.m128i_i32[2] = 2;
  }
  v9 = *(_QWORD *)(a1 + 16);
  try
  {
    sub_1800508B0(v9, &si128, 0LL, a4, si128.m128i_i64[0], si128.m128i_i64[1], v12);
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000F1E4(
      retaddr,
      101LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectresampler.cpp",
      2147500037LL);
    return 2147500037LL;
  }
  return result;
}
