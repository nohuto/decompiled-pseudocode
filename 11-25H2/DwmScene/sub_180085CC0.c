/*
 * XREFs of sub_180085CC0 @ 0x180085CC0
 * Callers:
 *     sub_180085B04 @ 0x180085B04 (sub_180085B04.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_18004D7E4 @ 0x18004D7E4 (sub_18004D7E4.c)
 *     sub_18004D880 @ 0x18004D880 (sub_18004D880.c)
 *     sub_18004DDE8 @ 0x18004DDE8 (sub_18004DDE8.c)
 *     sub_180084E20 @ 0x180084E20 (sub_180084E20.c)
 *     sub_180084FC8 @ 0x180084FC8 (sub_180084FC8.c)
 *     sub_180085020 @ 0x180085020 (sub_180085020.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_180085CC0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  _BYTE *v9; // rax
  __int64 v10; // rdx
  int v11; // eax
  const __m128i *v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rsi
  __int64 v15; // r8
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  float v20; // xmm2_4
  float v21; // xmm1_4
  __int64 v22; // r9
  char v24[4]; // [rsp+20h] [rbp-E0h] BYREF
  int v25; // [rsp+24h] [rbp-DCh] BYREF
  int v26; // [rsp+28h] [rbp-D8h] BYREF
  int v27; // [rsp+2Ch] [rbp-D4h] BYREF
  _QWORD v28[30]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v29; // [rsp+120h] [rbp+20h] BYREF
  __int64 v30; // [rsp+130h] [rbp+30h]
  __int64 v31; // [rsp+138h] [rbp+38h]

  v5 = 0LL;
  v6 = 0LL;
  *(_DWORD *)(a3 + 32) = 2;
  v7 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 15LL;
  LOBYTE(v29) = 0;
  while ( 1 )
  {
    v8 = sub_18004D7E4(a2, (__int64)&v29);
    if ( !(unsigned __int8)std::ios_base::operator bool(v8 + *(int *)(*(_QWORD *)v8 + 4LL)) )
      break;
    if ( v30 )
    {
      v9 = (_BYTE *)sub_1800137F8((__int64)&v29);
      if ( v10 != 1 || (*v9 != 13 ? (v11 = *v9 < 0xDu ? -1 : 1) : (v11 = 0), v11) )
      {
        v12 = (const __m128i *)sub_1800137F8((__int64)&v29);
        if ( v12->m128i_i8[0] != 35 )
        {
          v14 = (_QWORD *)(a3 + 8);
          if ( v5 )
          {
            sub_18004D880(v28, (__int64)&v29);
            v27 = 0;
            v26 = 0;
            v25 = 0;
            v18 = std::istream::operator>>(v28, &v27);
            v19 = std::istream::operator>>(v18, &v26);
            std::istream::operator>>(v19, &v25);
            v20 = (float)v25;
            v21 = (float)v26;
            v22 = *v14 + 16 * (v7 / v5 / v5 + v5 * (v7 / v5 % v5 + v5 * (v7 % v5)));
            *(float *)v22 = (float)v27;
            *(float *)(v22 + 4) = v21;
            *(float *)(v22 + 8) = v20;
            *(_DWORD *)(v22 + 12) = 1065353216;
            ++v7;
            sub_18004DDE8((__int64)v28);
            if ( v7 == v6 )
              break;
          }
          else
          {
            v24[0] = 32;
            v5 = sub_180085020(v12, (const __m128i *)((char *)v12 + v13), v24) + 1;
            v6 = v5 * v5 * v5;
            v16 = (__int64)(*(_QWORD *)(a3 + 16) - *(_QWORD *)(a3 + 8)) >> 4;
            if ( v6 < v16 )
            {
              v17 = *v14 + 16 * v6;
              goto LABEL_17;
            }
            if ( v6 > v16 )
            {
              if ( v6 <= (__int64)(*(_QWORD *)(a3 + 24) - *(_QWORD *)(a3 + 8)) >> 4 )
              {
                v17 = sub_180084FC8(*(_QWORD *)(a3 + 16), v6 - v16, a3 + 8);
LABEL_17:
                *(_QWORD *)(a3 + 16) = v17;
              }
              else
              {
                sub_180084E20(a3 + 8, v5 * v5 * v5, v15);
              }
            }
          }
        }
      }
    }
  }
  *(_QWORD *)a3 = v5;
  return sub_180011A5C((__int64)&v29);
}
