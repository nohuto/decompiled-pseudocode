/*
 * XREFs of sub_1800D1EA8 @ 0x1800D1EA8
 * Callers:
 *     sub_1800D2064 @ 0x1800D2064 (sub_1800D2064.c)
 * Callees:
 *     sub_1800108F8 @ 0x1800108F8 (sub_1800108F8.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180011820 @ 0x180011820 (sub_180011820.c)
 *     sub_180012040 @ 0x180012040 (sub_180012040.c)
 *     sub_180012284 @ 0x180012284 (sub_180012284.c)
 *     sub_180012F40 @ 0x180012F40 (sub_180012F40.c)
 *     sub_18008C6CC @ 0x18008C6CC (sub_18008C6CC.c)
 */

void __fastcall sub_1800D1EA8(__int64 *a1, __int64 *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rdi
  __int64 v7; // r14
  __int64 v10; // rcx
  __int64 v11; // rcx
  _QWORD *v12; // rsi
  _QWORD *v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF
  __int64 v19; // [rsp+68h] [rbp+10h]

  if ( a4 )
  {
    v4 = a1[1];
    v7 = *a1;
    if ( a4 <= (a1[2] - v4) >> 4 )
    {
      v15 = 2 * a4;
      if ( a4 >= (v4 - (__int64)a2) >> 4 )
      {
        a1[1] = (__int64)sub_180012284((__int64)a2, v4, &a2[v15]);
        v17 = v4;
      }
      else
      {
        v16 = (__int64 *)(v4 - v15 * 8);
        a1[1] = (__int64)sub_180012284(v4 - v15 * 8, a1[1], (_QWORD *)a1[1]);
        while ( v16 != a2 )
        {
          v16 -= 2;
          sub_180011010(&v16[v15], v16);
        }
        v17 = (__int64)&a2[v15];
      }
      sub_180012040((__int64)a2, v17);
      sub_18008C6CC(a3, a4, a2);
    }
    else
    {
      v10 = (v4 - v7) >> 4;
      if ( a4 > 0xFFFFFFFFFFFFFFFLL - v10 )
        std::_Xlength_error("vector too long");
      v19 = v10 + a4;
      v18 = sub_180011820(a1, v10 + a4);
      v12 = (_QWORD *)sub_1800108F8(v11, &v18);
      sub_18008C6CC(a3, a4, &v12[2 * (((__int64)a2 - v7) >> 4)]);
      if ( a4 == 1 && a2 == (__int64 *)v4 )
      {
        v13 = v12;
        v14 = v7;
      }
      else
      {
        sub_180012284(v7, (__int64)a2, v12);
        v14 = (__int64)a2;
        v13 = &v12[2 * (((__int64)a2 - v7) >> 4) + 2 * a4];
      }
      sub_180012284(v14, v4, v13);
      sub_180012F40((__int64)a1, (__int64)v12, v19, v18);
    }
  }
}
