/*
 * XREFs of sub_180037864 @ 0x180037864
 * Callers:
 *     sub_180045DDC @ 0x180045DDC (sub_180045DDC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 */

__int64 *__fastcall sub_180037864(__int64 a1, _QWORD *a2, unsigned int a3)
{
  int v3; // esi
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 *result; // rax
  _DWORD v10[15]; // [rsp+20h] [rbp-41h]
  __m128i si128; // [rsp+5Ch] [rbp-5h]
  int v12; // [rsp+6Ch] [rbp+Bh]
  int v13; // [rsp+70h] [rbp+Fh]
  int v14; // [rsp+74h] [rbp+13h]
  int v15; // [rsp+78h] [rbp+17h]
  int v16; // [rsp+7Ch] [rbp+1Bh]
  int v17; // [rsp+80h] [rbp+1Fh]

  v3 = 0;
  if ( *a2 )
  {
    v5 = *(_QWORD *)(*a2 + 112LL);
    if ( v5 )
      v6 = *(_DWORD *)(v5 + 20);
    else
      v6 = 0;
    v10[0] = 0;
    v10[1] = 4;
    v10[2] = 4;
    v10[3] = 4;
    v10[6] = 16;
    v10[11] = 16;
    v10[5] = 12;
    v10[13] = 1;
    v16 = 1;
    v10[10] = 12;
    v10[4] = 8;
    v10[7] = 4;
    v10[8] = 4;
    v10[9] = 8;
    v10[12] = 2;
    v10[14] = 2;
    si128 = _mm_load_si128((const __m128i *)&xmmword_18018D430);
    v12 = 2;
    v13 = 4;
    v14 = 8;
    v15 = 4;
    v17 = 2;
    v3 = v10[v6];
  }
  v7 = *(_QWORD *)(a1 + 96) + 64LL;
  v8 = a3;
  result = sub_18001254C((__int64 *)(v7 + 16LL * a3 + 8), a2);
  *(_DWORD *)(v7 + 4 * v8 + 728) = 0;
  *(_DWORD *)(v7 + 4 * v8 + 908) = v3;
  return result;
}
