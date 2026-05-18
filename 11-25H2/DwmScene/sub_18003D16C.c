/*
 * XREFs of sub_18003D16C @ 0x18003D16C
 * Callers:
 *     sub_18003F0EC @ 0x18003F0EC (sub_18003F0EC.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18001E480 @ 0x18001E480 (sub_18001E480.c)
 *     sub_18002752C @ 0x18002752C (sub_18002752C.c)
 *     sub_18003CDE4 @ 0x18003CDE4 (sub_18003CDE4.c)
 *     sub_18003D13C @ 0x18003D13C (sub_18003D13C.c)
 *     sub_18003D7A4 @ 0x18003D7A4 (sub_18003D7A4.c)
 *     sub_18003FE84 @ 0x18003FE84 (sub_18003FE84.c)
 *     sub_18003FF60 @ 0x18003FF60 (sub_18003FF60.c)
 *     sub_1800400F4 @ 0x1800400F4 (sub_1800400F4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18003D16C(float *a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rbp
  unsigned __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rdx
  float v11; // xmm0_4
  __int64 v12; // rcx
  float v13; // xmm1_4
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD v17[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v18; // [rsp+30h] [rbp-18h] BYREF

  v6 = sub_18001E480((__int64)a1, (__int64)a3, 8uLL);
  sub_18003CDE4(a1, &v18, a3, v6);
  if ( *((_QWORD *)&v18 + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v18 + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( *((_QWORD *)a1 + 2) == 0x666666666666666LL )
      std::_Xlength_error("unordered_map/set too long");
    v17[0] = a1 + 2;
    v7 = sub_18002752C(1uLL);
    v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(v7);
    v17[1] = v8;
    sub_18003D13C(v9, (_QWORD *)(v8 + 16), a3);
    v10 = *((_QWORD *)a1 + 2) + 1LL;
    if ( v10 < 0 )
      v11 = (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1))
          + (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1));
    else
      v11 = (float)(int)v10;
    v12 = *((_QWORD *)a1 + 7);
    if ( v12 < 0 )
    {
      v14 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v12 >> 1);
      v13 = (float)(int)v14 + (float)(int)v14;
    }
    else
    {
      v13 = (float)(int)v12;
    }
    if ( (float)(v11 / v13) > *a1 )
    {
      v15 = sub_18003FE84(a1);
      sub_18003FF60(a1, v15);
      v18 = *(_OWORD *)sub_18003CDE4(a1, &v18, (_QWORD *)(v8 + 16), v6);
    }
    *(_QWORD *)a2 = sub_1800400F4(a1, v6, v18, v8, v17[0], 0LL);
    *(_BYTE *)(a2 + 8) = 1;
    sub_18003D7A4(v17);
  }
  return a2;
}
