/*
 * XREFs of sub_1800C6A94 @ 0x1800C6A94
 * Callers:
 *     sub_1800C6C50 @ 0x1800C6C50 (sub_1800C6C50.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_18001B4B0 @ 0x18001B4B0 (sub_18001B4B0.c)
 *     sub_18001CC24 @ 0x18001CC24 (sub_18001CC24.c)
 *     sub_1800C61F4 @ 0x1800C61F4 (sub_1800C61F4.c)
 *     sub_1800C621C @ 0x1800C621C (sub_1800C621C.c)
 *     sub_1800C6324 @ 0x1800C6324 (sub_1800C6324.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_1800C6A94(_QWORD *a1, __int64 *a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int128 v12; // [rsp+20h] [rbp-39h] BYREF
  __int64 v13; // [rsp+30h] [rbp-29h]
  unsigned __int64 v14[2]; // [rsp+40h] [rbp-19h] BYREF
  __int128 v15; // [rsp+50h] [rbp-9h] BYREF
  int v16; // [rsp+60h] [rbp+7h]
  int v17; // [rsp+64h] [rbp+Bh]
  int v18; // [rsp+68h] [rbp+Fh]
  int v19; // [rsp+6Ch] [rbp+13h]
  _OWORD v20[2]; // [rsp+70h] [rbp+17h] BYREF

  v14[1] = (unsigned __int64)a1;
  v12 = 0LL;
  v13 = 0LL;
  v4 = 0xAAAAAAAAAAAAAAABuLL * ((a2[1] - *a2) >> 4);
  v14[0] = v4;
  if ( v4 )
  {
    if ( v4 > 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    sub_1800C6324((__int64)&v12, v14);
  }
  v20[0] = 0LL;
  v20[1] = _mm_load_si128((const __m128i *)&xmmword_18018C3B0);
  LOBYTE(v20[0]) = 0;
  v5 = *a2;
  v6 = a2[1];
  while ( v5 != v6 )
  {
    *(_QWORD *)&v15 = sub_1800137F8(v5);
    DWORD2(v15) = *(_DWORD *)(v5 + 32);
    HIDWORD(v15) = *(_DWORD *)&asc_18018B110[24 * *(unsigned __int8 *)(v5 + 40) - 24 + 4 * *(int *)(v5 + 36)];
    v16 = *(_DWORD *)(v5 + 44);
    v17 = 0;
    v18 = 0;
    v19 = 0;
    if ( *((_QWORD *)&v12 + 1) == v13 )
      sub_1800C621C((const void **)&v12, *((_BYTE **)&v12 + 1), (__int64)&v15);
    else
      sub_1800C61F4((__int64)&v12, &v15);
    v7 = sub_18001B4B0((__int64 *)&v15, v5, (__int64)&unk_180105F88);
    sub_18001CC24((__int64)v20, (__int64)v7);
    sub_180011A5C((__int64)&v15);
    v5 += 48LL;
  }
  v8 = v13;
  v13 = 0LL;
  v9 = *((_QWORD *)&v12 + 1);
  v10 = v12;
  v12 = 0uLL;
  *a1 = v10;
  a1[1] = v9;
  a1[2] = v8;
  sub_180016F54((__int64)(a1 + 3), (__int64)v20);
  sub_180011A5C((__int64)v20);
  return a1;
}
