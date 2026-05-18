/*
 * XREFs of sub_180085A68 @ 0x180085A68
 * Callers:
 *     sub_180086B74 @ 0x180086B74 (sub_180086B74.c)
 *     sub_180086BB4 @ 0x180086BB4 (sub_180086BB4.c)
 * Callees:
 *     sub_180075A3C @ 0x180075A3C (sub_180075A3C.c)
 *     sub_180085190 @ 0x180085190 (sub_180085190.c)
 *     sub_180085630 @ 0x180085630 (sub_180085630.c)
 *     sub_180086BE4 @ 0x180086BE4 (sub_180086BE4.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180085A68(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r13
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __m128 v14; // [rsp+20h] [rbp-50h] BYREF
  __int128 v15; // [rsp+30h] [rbp-40h]
  __int128 v16; // [rsp+40h] [rbp-30h] BYREF
  __int64 v17[4]; // [rsp+50h] [rbp-20h] BYREF

  sub_180085190(v17);
  v5 = 0LL;
  HIDWORD(v15) = 1065353216;
  do
  {
    v6 = 0LL;
    *((float *)&v15 + 2) = (float)(int)v5 * 0.14285715;
    v7 = v5 << 10;
    do
    {
      v8 = 0LL;
      *((float *)&v15 + 1) = (float)(int)v6 * 0.14285715;
      v9 = v7;
      do
      {
        *(float *)&v15 = (float)(int)v8 * 0.14285715;
        v16 = v15;
        v10 = *(_QWORD *)(a3 + 56);
        if ( !v10 )
        {
          std::_Xbad_function_call();
          JUMPOUT(0x180085C5CLL);
        }
        (*(void (__fastcall **)(__int64, __m128 *, __int128 *))(*(_QWORD *)v10 + 16LL))(v10, &v14, &v16);
        v14 = _mm_min_ps(_mm_max_ps(v14, (__m128)xmmword_1800F8190), (__m128)xmmword_1800F8180);
        *(__m128 *)(v17[0] + v9) = v14;
        ++v8;
        v9 += 16LL;
      }
      while ( v8 < 8 );
      ++v6;
      v7 += 128LL;
    }
    while ( v6 < 8 );
    ++v5;
  }
  while ( v5 < 8 );
  sub_180086BE4(a1, 8LL, v17);
  sub_180085630(a1);
  result = sub_180075A3C((__int64)v17);
  v13 = *(_QWORD *)(a3 + 56);
  if ( v13 )
  {
    LOBYTE(v12) = v13 != a3;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 32LL))(v13, v12);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
  return result;
}
