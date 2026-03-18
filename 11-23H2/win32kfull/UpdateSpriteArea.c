/*
 * XREFs of UpdateSpriteArea @ 0x1C00836B4
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00F88D0 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     GreConvertMemToRedirectionDC @ 0x1C008399C (GreConvertMemToRedirectionDC.c)
 *     UpdateSprite @ 0x1C00B5498 (UpdateSprite.c)
 *     NtGdiBitBltInternal @ 0x1C0105030 (NtGdiBitBltInternal.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     GreConvertRedirectionToMemDC @ 0x1C02AD224 (GreConvertRedirectionToMemDC.c)
 */

_UNKNOWN **__fastcall UpdateSpriteArea(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        HDC a4,
        __int64 a5,
        __int64 a6,
        _OWORD *a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  _UNKNOWN **result; // rax
  __int64 v13; // r15
  __int64 v15; // rdx
  bool v18; // zf
  unsigned int v19; // r9d
  unsigned int v20; // r8d
  __m128i v21; // xmm6
  __int64 v22; // r8
  int v23; // ecx
  int v24; // esi
  __int64 v25; // rdi
  __int64 v26; // r8
  __int64 v27; // rcx
  int v28; // [rsp+78h] [rbp-90h]
  int v29; // [rsp+88h] [rbp-80h]
  unsigned int v30; // [rsp+9Ch] [rbp-6Ch]
  unsigned int v31; // [rsp+A0h] [rbp-68h]
  _DWORD v32[2]; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD v33[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v34; // [rsp+B8h] [rbp-50h]
  __int64 v35; // [rsp+C0h] [rbp-48h]
  __int64 v36; // [rsp+C8h] [rbp-40h]
  __int64 v37; // [rsp+D8h] [rbp-30h]
  __int64 v38; // [rsp+E0h] [rbp-28h]
  int v39[4]; // [rsp+E8h] [rbp-20h] BYREF
  _UNKNOWN *retaddr; // [rsp+160h] [rbp+58h] BYREF

  result = &retaddr;
  v13 = 0LL;
  v15 = a1[5];
  *(_OWORD *)v39 = 0LL;
  v34 = a3;
  v35 = a5;
  v18 = (*(_BYTE *)(v15 + 26) & 8) == 0;
  v19 = *(_DWORD *)(v15 + 88);
  v20 = *(_DWORD *)(v15 + 92);
  v31 = v19;
  v30 = v20;
  v36 = a6;
  if ( !v18 && a2 )
  {
    v22 = -v20;
    *(_OWORD *)v39 = *a7;
    v21 = *(__m128i *)v39;
    v33[0] = *(_DWORD *)(v15 + 96) - *(_DWORD *)(v15 + 88);
    v23 = *(_DWORD *)(v15 + 100) - *(_DWORD *)(v15 + 92);
    v39[3] += v22;
    v39[2] -= v19;
    v39[1] += v22;
    v33[1] = v23;
    v38 = v21.m128i_i64[1];
    v39[0] = _mm_cvtsi128_si32(v21) - v19;
    GreOffsetRgn(a6, -v19, v22);
    v29 = a8 + _mm_cvtsi128_si32(v21) - a10;
    v37 = GreSelectBitmap(a5, a3);
    if ( (HDC)a5 != a4 )
      v13 = GreSelectBitmap(a4, a2);
    GreSelectVisRgn(a4, a6, 4LL);
    v24 = GreConvertMemToRedirectionDC(a4);
    EtwTraceWindowRenderingOldToNewRedirectionBitmap(
      *a1,
      *a1,
      v34,
      (unsigned int)v39[0],
      v39[1],
      v39[2],
      v39[3],
      *a1,
      *a1,
      a2,
      v29,
      v21.m128i_i32[1] - a11 + a9,
      v39[2] + v29 - v39[0],
      v39[3] + v21.m128i_i32[1] - a11 + a9 - v39[1],
      v21.m128i_i32[1] - a11 + a9);
    v25 = v35;
    NtGdiBitBltInternal(a4, v39[0], v39[1], v39[2] - v39[0], v39[3] - v39[1], v35, v29, v28, -2134114272, 0, 0);
    if ( v24 )
      GreConvertRedirectionToMemDC(a4);
    v27 = a1[5];
    v32[0] = *(_DWORD *)(v27 + 88);
    v32[1] = *(_DWORD *)(v27 + 92);
    UpdateSprite(*(_QWORD *)(gpDispInfo + 40LL), a1, v26, 0LL, 0LL, v33, a4, v32, 0, 0LL, 0x40000000, v39);
    GreSelectVisRgn(a4, v36, 4LL);
    GreOffsetRgn(v36, v31, v30);
    result = (_UNKNOWN **)GreSelectBitmap(v25, v37);
    if ( v13 )
      return (_UNKNOWN **)GreSelectBitmap(a4, v13);
  }
  return result;
}
