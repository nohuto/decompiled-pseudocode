/*
 * XREFs of sub_18008DA68 @ 0x18008DA68
 * Callers:
 *     sub_18008FA60 @ 0x18008FA60 (sub_18008FA60.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_18001E5E0 @ 0x18001E5E0 (sub_18001E5E0.c)
 *     sub_18008D8EC @ 0x18008D8EC (sub_18008D8EC.c)
 *     sub_18008D9E8 @ 0x18008D9E8 (sub_18008D9E8.c)
 *     sub_18008DD6C @ 0x18008DD6C (sub_18008DD6C.c)
 *     sub_180090A60 @ 0x180090A60 (sub_180090A60.c)
 *     sub_180090AFC @ 0x180090AFC (sub_180090AFC.c)
 *     sub_180090CDC @ 0x180090CDC (sub_180090CDC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18008DA68(__int64 a1, __int64 a2, __int64 a3)
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

  v5 = sub_1800138F8(a3);
  v8 = sub_18001E5E0(v7, v5, *(_QWORD *)(v6 + 16));
  sub_18008D8EC(v9, v21, a3, v8);
  if ( v21[1] )
  {
    *(_QWORD *)a2 = v21[1];
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( qword_1801C9A70 == 0x492492492492492LL )
      std::_Xlength_error("unordered_map/set too long");
    v20[0] = &qword_1801C9A68;
    v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
    v20[1] = v10;
    sub_18008D9E8(v11, v10 + 16, a3);
    v12 = qword_1801C9A70 + 1;
    if ( qword_1801C9A70 + 1 < 0 )
      v13 = (float)(int)(v12 & 1 | (v12 >> 1)) + (float)(int)(v12 & 1 | (v12 >> 1));
    else
      v13 = (float)(int)v12;
    v14 = qword_1801C9A98;
    if ( qword_1801C9A98 < 0 )
    {
      v14 = qword_1801C9A98 & 1;
      v15 = (float)(int)(v14 | ((unsigned __int64)qword_1801C9A98 >> 1))
          + (float)(int)(v14 | ((unsigned __int64)qword_1801C9A98 >> 1));
    }
    else
    {
      v15 = (float)(int)qword_1801C9A98;
    }
    if ( (float)(v13 / v15) > *(float *)&dword_1801C9A60 )
    {
      v16 = sub_180090A60(v14, v12);
      sub_180090AFC(v17, v16);
      *(_OWORD *)v21 = *(_OWORD *)sub_18008D8EC(v18, v21, v10 + 16, v8);
    }
    *(_QWORD *)a2 = sub_180090CDC(v14, v8, v21[0], v10, v20[0], 0LL);
    *(_BYTE *)(a2 + 8) = 1;
    sub_18008DD6C(v20);
  }
  return a2;
}
