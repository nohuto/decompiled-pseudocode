/*
 * XREFs of UpdateSpriteArea @ 0x14003A40C
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14022C6A8 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     GreBitBltInternal @ 0x14001970C (GreBitBltInternal.c)
 *     GreConvertMemToRedirectionDC @ 0x140039EF4 (GreConvertMemToRedirectionDC.c)
 *     UpdateSprite @ 0x1400CB4D8 (UpdateSprite.c)
 *     GreConvertRedirectionToMemDC @ 0x140330F48 (GreConvertRedirectionToMemDC.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

_UNKNOWN **__fastcall UpdateSpriteArea(
        struct tagWND *a1,
        __int64 a2,
        __int64 a3,
        HDC a4,
        HDC a5,
        __int64 a6,
        __m128i *a7,
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
  LONG v23; // ecx
  int v24; // esi
  HDC v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 UserSessionState; // rax
  int v29; // [rsp+78h] [rbp-90h]
  int v30; // [rsp+88h] [rbp-80h]
  int v31; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v32; // [rsp+9Ch] [rbp-6Ch]
  unsigned int v33; // [rsp+A0h] [rbp-68h]
  _DWORD v34[2]; // [rsp+A8h] [rbp-60h] BYREF
  struct tagSIZE v35; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v36; // [rsp+B8h] [rbp-50h]
  HDC v37; // [rsp+C0h] [rbp-48h]
  __int64 v38; // [rsp+C8h] [rbp-40h]
  __int64 v39; // [rsp+D8h] [rbp-30h]
  __int64 v40; // [rsp+E0h] [rbp-28h]
  __m128i v41; // [rsp+E8h] [rbp-20h] BYREF
  _UNKNOWN *retaddr; // [rsp+160h] [rbp+58h] BYREF

  result = &retaddr;
  v13 = 0LL;
  v31 = 0;
  v15 = *((_QWORD *)a1 + 5);
  v41 = 0LL;
  v36 = a3;
  v37 = a5;
  v18 = (*(_BYTE *)(v15 + 26) & 8) == 0;
  v19 = *(_DWORD *)(v15 + 88);
  v20 = *(_DWORD *)(v15 + 92);
  v33 = v19;
  v32 = v20;
  v38 = a6;
  if ( !v18 && a2 )
  {
    v22 = -v20;
    v41 = *a7;
    v21 = v41;
    v35.cx = *(_DWORD *)(v15 + 96) - *(_DWORD *)(v15 + 88);
    v23 = *(_DWORD *)(v15 + 100) - *(_DWORD *)(v15 + 92);
    v41.m128i_i32[3] += v22;
    v41.m128i_i32[2] -= v19;
    v41.m128i_i32[1] += v22;
    v35.cy = v23;
    v40 = v21.m128i_i64[1];
    v41.m128i_i32[0] = _mm_cvtsi128_si32(v21) - v19;
    GreOffsetRgn(a6, -v19, v22);
    v29 = v21.m128i_i32[1] - a11 + a9;
    v30 = a8 + _mm_cvtsi128_si32(v21) - a10;
    v39 = GreSelectBitmap(a5, a3);
    if ( a5 != a4 )
      v13 = GreSelectBitmap(a4, a2);
    GreSelectVisRgn(a4, a6, 4LL);
    v24 = GreConvertMemToRedirectionDC(a4, &v31);
    EtwTraceWindowRenderingOldToNewRedirectionBitmap(
      *(_QWORD *)a1,
      *(_QWORD *)a1,
      v36,
      v41.m128i_u32[0],
      v41.m128i_i32[1],
      v41.m128i_i32[2],
      v41.m128i_i32[3],
      *(_QWORD *)a1,
      *(_QWORD *)a1,
      a2,
      v30,
      v29,
      v41.m128i_i32[2] + v30 - v41.m128i_i32[0],
      v41.m128i_i32[3] + v29 - v41.m128i_i32[1]);
    v25 = v37;
    GreBitBltInternal(
      a4,
      v41.m128i_i32[0],
      v41.m128i_i32[1],
      v41.m128i_i32[2] - v41.m128i_i32[0],
      v41.m128i_i32[3] - v41.m128i_i32[1],
      v37,
      v30,
      v29,
      0x80CC0020,
      0,
      0);
    if ( v24 )
      GreConvertRedirectionToMemDC(a4);
    v27 = *((_QWORD *)a1 + 5);
    v34[0] = *(_DWORD *)(v27 + 88);
    v34[1] = *(_DWORD *)(v27 + 92);
    UserSessionState = W32GetUserSessionState(v27, v26);
    UpdateSprite(
      *(HDEV *)(*(_QWORD *)(UserSessionState + 57008) + 48LL),
      a1,
      0LL,
      &v35,
      a4,
      (__int64)v34,
      0,
      0LL,
      0x40000000u,
      (__int64)&v41);
    GreSelectVisRgn(a4, v38, 4LL);
    GreOffsetRgn(v38, v33, v32);
    result = (_UNKNOWN **)GreSelectBitmap(v25, v39);
    if ( v13 )
      return (_UNKNOWN **)GreSelectBitmap(a4, v13);
  }
  return result;
}
