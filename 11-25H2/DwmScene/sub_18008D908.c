/*
 * XREFs of sub_18008D908 @ 0x18008D908
 * Callers:
 *     sub_18008F900 @ 0x18008F900 (sub_18008F900.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_18001E480 @ 0x18001E480 (sub_18001E480.c)
 *     sub_18008D78C @ 0x18008D78C (sub_18008D78C.c)
 *     sub_18008D888 @ 0x18008D888 (sub_18008D888.c)
 *     sub_18008DC0C @ 0x18008DC0C (sub_18008DC0C.c)
 *     sub_180090900 @ 0x180090900 (sub_180090900.c)
 *     sub_18009099C @ 0x18009099C (sub_18009099C.c)
 *     sub_180090B7C @ 0x180090B7C (sub_180090B7C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18008D908(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  float v13; // xmm0_4
  __int64 v14; // rcx
  float v15; // xmm1_4
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  _QWORD v20[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v21[3]; // [rsp+30h] [rbp-18h] BYREF

  v5 = sub_1800137F8(a3);
  v8 = sub_18001E480(v7, v5, *(_QWORD *)(v6 + 16));
  sub_18008D78C(v9, v21, a3, v8);
  if ( v21[1] )
  {
    *(_QWORD *)a2 = v21[1];
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( qword_1801C8A60 == 0x492492492492492LL )
      std::_Xlength_error("unordered_map/set too long");
    v20[0] = &qword_1801C8A58;
    v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
    v20[1] = v10;
    sub_18008D888(v11, v10 + 16, a3);
    v12 = qword_1801C8A60 + 1;
    if ( qword_1801C8A60 + 1 < 0 )
      v13 = (float)(int)(v12 & 1 | (v12 >> 1)) + (float)(int)(v12 & 1 | (v12 >> 1));
    else
      v13 = (float)(int)v12;
    v14 = qword_1801C8A88;
    if ( qword_1801C8A88 < 0 )
    {
      v14 = qword_1801C8A88 & 1;
      v15 = (float)(int)(v14 | ((unsigned __int64)qword_1801C8A88 >> 1))
          + (float)(int)(v14 | ((unsigned __int64)qword_1801C8A88 >> 1));
    }
    else
    {
      v15 = (float)(int)qword_1801C8A88;
    }
    if ( (float)(v13 / v15) > *(float *)&dword_1801C8A50 )
    {
      v16 = sub_180090900(v14, v12);
      sub_18009099C(v17, v16);
      *(_OWORD *)v21 = *(_OWORD *)sub_18008D78C(v18, v21, v10 + 16, v8);
    }
    *(_QWORD *)a2 = sub_180090B7C(v14, v8, v21[0], v10, v20[0], 0LL);
    *(_BYTE *)(a2 + 8) = 1;
    sub_18008DC0C(v20);
  }
  return a2;
}
