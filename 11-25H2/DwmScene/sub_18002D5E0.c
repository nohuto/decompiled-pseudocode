/*
 * XREFs of sub_18002D5E0 @ 0x18002D5E0
 * Callers:
 *     sub_180033C94 @ 0x180033C94 (sub_180033C94.c)
 * Callees:
 *     sub_1800108F8 @ 0x1800108F8 (sub_1800108F8.c)
 *     sub_180010AA8 @ 0x180010AA8 (sub_180010AA8.c)
 *     sub_180010C7C @ 0x180010C7C (sub_180010C7C.c)
 *     sub_180011820 @ 0x180011820 (sub_180011820.c)
 *     sub_18001185C @ 0x18001185C (sub_18001185C.c)
 *     sub_18002E264 @ 0x18002E264 (sub_18002E264.c)
 *     sub_1800305B8 @ 0x1800305B8 (sub_1800305B8.c)
 */

void __fastcall sub_18002D5E0(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rdi
  __int64 v7; // r14
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF
  __int64 v19; // [rsp+68h] [rbp+10h]

  if ( a4 )
  {
    v4 = a1[1];
    v7 = *a1;
    if ( a4 <= (a1[2] - v4) >> 4 )
    {
      v15 = 16 * a4;
      if ( a4 >= (v4 - a2) >> 4 )
      {
        a1[1] = sub_180010C7C(a2, v4, v15 + a2);
        v17 = v4;
      }
      else
      {
        v16 = v4 - v15;
        a1[1] = sub_180010C7C(v4 - v15, a1[1], a1[1]);
        while ( v16 != a2 )
        {
          v16 -= 16LL;
          sub_1800305B8(v15 + v16, v16);
        }
        v17 = v15 + a2;
      }
      sub_180010AA8(a2, v17);
      sub_18002E264(a3, a4, a2);
    }
    else
    {
      v10 = (v4 - v7) >> 4;
      if ( a4 > 0xFFFFFFFFFFFFFFFLL - v10 )
        std::_Xlength_error("vector too long");
      v19 = v10 + a4;
      v18 = sub_180011820(a1, v10 + a4);
      v12 = sub_1800108F8(v11, &v18);
      sub_18002E264(a3, a4, v12 + 16 * ((a2 - v7) >> 4));
      if ( a4 == 1 && a2 == v4 )
      {
        v13 = v12;
        v14 = v7;
      }
      else
      {
        sub_180010C7C(v7, a2, v12);
        v14 = a2;
        v13 = v12 + 16 * (((a2 - v7) >> 4) + a4);
      }
      sub_180010C7C(v14, v4, v13);
      sub_18001185C((__int64)a1, v12, v19, v18);
    }
  }
}
