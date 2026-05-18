/*
 * XREFs of sub_1800CF0C4 @ 0x1800CF0C4
 * Callers:
 *     sub_1800CFF0C @ 0x1800CFF0C (sub_1800CFF0C.c)
 * Callees:
 *     sub_180030580 @ 0x180030580 (sub_180030580.c)
 *     sub_1800CEFF8 @ 0x1800CEFF8 (sub_1800CEFF8.c)
 *     sub_1800CF278 @ 0x1800CF278 (sub_1800CF278.c)
 *     sub_1800CFCF4 @ 0x1800CFCF4 (sub_1800CFCF4.c)
 *     sub_1800CFF0C @ 0x1800CFF0C (sub_1800CFF0C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800CF0C4(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD **v6; // r12
  _QWORD *v7; // r14
  _QWORD *v8; // rax
  __int64 v9; // rsi
  _QWORD *v10; // rbx
  __int64 result; // rax
  _QWORD **v12; // rdx
  __int64 v13; // r8
  _QWORD *v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // [rsp+20h] [rbp-38h] BYREF
  __int64 v18; // [rsp+28h] [rbp-30h]
  __int128 v19; // [rsp+30h] [rbp-28h]

  v6 = *(_QWORD ***)a1;
  v7 = **(_QWORD ***)a1;
  while ( v7 != v6 )
  {
    if ( a2 == a3 )
    {
      v8 = (_QWORD *)v7[1];
      *v8 = v6;
      v6[1] = v8;
      v9 = 0LL;
      do
      {
        v10 = (_QWORD *)*v7;
        result = sub_1800CF278(a1, v7);
        v7 = v10;
        ++v9;
      }
      while ( v10 != v6 );
      *(_QWORD *)(a1 + 8) -= v9;
      return result;
    }
    sub_180030580((__int64)(v7 + 2), (__int64)(a2 + 2));
    sub_1800CFF0C(v7 + 6, a2 + 6);
    v7 = (_QWORD *)*v7;
    a2 = (_QWORD *)*a2;
  }
  v17 = a1;
  v18 = 0LL;
  v19 = 0LL;
  sub_1800CEFF8(&v17, a2, a3);
  v12 = *(_QWORD ***)a1;
  v13 = v18;
  if ( v18 )
  {
    v14 = v12[1];
    v15 = *((_QWORD *)&v19 + 1);
    *(_QWORD *)(*((_QWORD *)&v19 + 1) + 8LL) = v14;
    *v14 = v15;
    v16 = (_QWORD *)v19;
    *(_QWORD *)v19 = v12;
    v12[1] = v16;
    *(_QWORD *)(a1 + 8) += v13;
    v18 = 0LL;
  }
  return sub_1800CFCF4(&v17, v12);
}
