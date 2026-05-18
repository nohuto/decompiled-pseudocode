/*
 * XREFs of sub_1800328FC @ 0x1800328FC
 * Callers:
 *     sub_1800152E8 @ 0x1800152E8 (sub_1800152E8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_1800131AC @ 0x1800131AC (sub_1800131AC.c)
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 *     sub_18001E6D4 @ 0x18001E6D4 (sub_18001E6D4.c)
 *     sub_1800251F0 @ 0x1800251F0 (sub_1800251F0.c)
 *     sub_180025218 @ 0x180025218 (sub_180025218.c)
 *     sub_180028584 @ 0x180028584 (sub_180028584.c)
 *     sub_1800287FC @ 0x1800287FC (sub_1800287FC.c)
 *     sub_18002B810 @ 0x18002B810 (sub_18002B810.c)
 *     sub_18002BA98 @ 0x18002BA98 (sub_18002BA98.c)
 *     sub_18002C110 @ 0x18002C110 (sub_18002C110.c)
 *     sub_18002F16C @ 0x18002F16C (sub_18002F16C.c)
 *     sub_1800307B0 @ 0x1800307B0 (sub_1800307B0.c)
 *     sub_180032634 @ 0x180032634 (sub_180032634.c)
 *     sub_1800326D0 @ 0x1800326D0 (sub_1800326D0.c)
 *     sub_1800365FC @ 0x1800365FC (sub_1800365FC.c)
 *     __RTDynamicCast @ 0x1800D4FA0 (__RTDynamicCast.c)
 */

// Hidden C++ exception states: #wind=8
_QWORD *__fastcall sub_1800328FC(__int64 a1, _QWORD *a2)
{
  int v4; // esi
  unsigned int i; // r14d
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  _BYTE *v14; // rdx
  __int64 v15; // r9
  const void *v17; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v18; // [rsp+40h] [rbp-C0h]
  _BYTE v19[16]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v20[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v21[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v22[232]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v23; // [rsp+160h] [rbp+60h] BYREF
  __m128i si128; // [rsp+170h] [rbp+70h]
  _BYTE v25[32]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v26[32]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v27[32]; // [rsp+1C0h] [rbp+C0h] BYREF

  v17 = a2;
  v4 = 0;
  sub_18002F16C((__int64)v20);
  sub_1800287FC(a1 + 112, (__int64)v19);
  for ( i = 0; i < (unsigned int)sub_1800326D0(a1); ++i )
  {
    sub_180032634(a1, &v17, i);
    v6 = (__int64)v17;
    if ( !_RTDynamicCast(
            v17,
            0LL,
            &Spectre::Engine::RenderDevice `RTTI Type Descriptor',
            &Spectre::Engine::RenderDeviceGeneric `RTTI Type Descriptor',
            0) )
    {
      v7 = sub_1800251F0(v6, (__int64)v27);
      v8 = sub_18002BA98((__int64)v21, v7);
      v9 = sub_18002B810(v8, ": Hardware Feature Level ");
      sub_180012444((__int64)v25, v6 + 176);
      v4 |= 2u;
      v10 = sub_18002BA98(v9, (__int64)v25);
      v11 = sub_18002B810(v10, ", Engine Feature Level ");
      v12 = sub_180025218(v6, (__int64)v26);
      v13 = sub_18002BA98(v11, v12);
      sub_18002B810(v13, "; ");
      sub_180013228((__int64)v26);
      sub_180013228((__int64)v25);
      sub_180013228((__int64)v27);
    }
    if ( v18 )
      sub_18001060C(v18);
  }
  v23 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18018D390);
  LOWORD(v23) = 0;
  sub_1800365FC(v22, &v17);
  if ( v17 )
    sub_18001E6D4((__int64)&v23, v17, v18);
  v14 = (_BYTE *)sub_1800131AC((__int64)&v23);
  v15 = 2 * si128.m128i_i64[0];
  *(_OWORD *)a2 = 0LL;
  a2[2] = 0LL;
  a2[3] = 0LL;
  if ( v14 == &v14[v15] )
  {
    a2[2] = 0LL;
    a2[3] = 15LL;
    *(_BYTE *)a2 = 0;
  }
  else
  {
    sub_18002C110(a2, v14, &v14[v15], v15 >> 1);
  }
  sub_180013228((__int64)&v23);
  sub_180028584((__int64)v19);
  sub_1800307B0((__int64)v20);
  return a2;
}
