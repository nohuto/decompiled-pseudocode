/*
 * XREFs of sub_18005E820 @ 0x18005E820
 * Callers:
 *     sub_1800152E8 @ 0x1800152E8 (sub_1800152E8.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18001C2A8 @ 0x18001C2A8 (sub_18001C2A8.c)
 *     sub_18002F488 @ 0x18002F488 (sub_18002F488.c)
 *     sub_18005E7F4 @ 0x18005E7F4 (sub_18005E7F4.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18005E820(__int64 a1, int a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  _QWORD v12[2]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v14[2]; // [rsp+50h] [rbp-10h] BYREF

  v13[0] = *a5;
  v13[1] = a5[1];
  *a5 = 0LL;
  a5[1] = 0LL;
  v14[0] = *a4;
  v14[1] = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  v12[0] = *a3;
  v12[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  sub_18002F488(a1, a2, v12, v14, v13);
  *(_QWORD *)a1 = &Spectre::Engine::ViewerEngine::`vftable';
  *(_WORD *)(a1 + 1409) = 0;
  *(_QWORD *)(a1 + 1412) = 1065353216LL;
  *(_BYTE *)(a1 + 1420) = 0;
  *(_OWORD *)(a1 + 1424) = xmmword_1800F8660;
  sub_18005E7F4(a1 + 1440);
  sub_18001C2A8((struct _Mtx_internal_imp_t *)(a1 + 1504));
  v8 = a3[1];
  if ( v8 )
    sub_18001060C(v8);
  v9 = a4[1];
  if ( v9 )
    sub_18001060C(v9);
  v10 = a5[1];
  if ( v10 )
    sub_18001060C(v10);
  return a1;
}
