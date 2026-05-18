/*
 * XREFs of sub_1800298C4 @ 0x1800298C4
 * Callers:
 *     sub_1800BC6D0 @ 0x1800BC6D0 (sub_1800BC6D0.c)
 *     sub_1800CB0C4 @ 0x1800CB0C4 (sub_1800CB0C4.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180015274 @ 0x180015274 (sub_180015274.c)
 *     sub_18001C2A8 @ 0x18001C2A8 (sub_18001C2A8.c)
 *     sub_1800295E0 @ 0x1800295E0 (sub_1800295E0.c)
 *     sub_180029664 @ 0x180029664 (sub_180029664.c)
 *     sub_1800296D8 @ 0x1800296D8 (sub_1800296D8.c)
 *     sub_18002974C @ 0x18002974C (sub_18002974C.c)
 *     sub_18002986C @ 0x18002986C (sub_18002986C.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall sub_1800298C4(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 *v10; // rcx
  char v11; // bl
  __int64 v12; // rcx
  __int64 v13; // rcx
  char v15; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+28h] [rbp-50h]
  __int64 v17; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+38h] [rbp-40h]

  v8 = unknown_libname_81(&v17, a3);
  sub_18002986C((_QWORD *)a1, v8);
  *(_QWORD *)a1 = &Spectre::Engine::RenderOutput::`vftable';
  sub_180015274((_QWORD *)(a1 + 80), a3);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_BYTE *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 164) = 0LL;
  *(_QWORD *)(a1 + 172) = 0LL;
  *(_QWORD *)(a1 + 180) = 0LL;
  *(_DWORD *)(a1 + 188) = 0;
  *(_DWORD *)(a1 + 192) = 1065353216;
  *(_DWORD *)(a1 + 196) = 1065353216;
  *(_DWORD *)(a1 + 200) = 3;
  sub_1800296D8((_QWORD *)(a1 + 208));
  *(_WORD *)(a1 + 236) = 256;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_DWORD *)(a1 + 296) = 2;
  sub_18001C2A8((struct _Mtx_internal_imp_t *)(a1 + 304));
  if ( *(_DWORD *)(a2 + 24) == 1 )
  {
    v9 = *a4;
    v18 = a4[1];
    *a4 = 0LL;
    a4[1] = 0LL;
    v10 = &v17;
    v11 = 1;
  }
  else
  {
    v16 = 0LL;
    v10 = (__int64 *)&v15;
    v11 = 2;
    v9 = 0LL;
  }
  *(_QWORD *)(a1 + 336) = v9;
  *(_QWORD *)(a1 + 344) = v10[1];
  *v10 = 0LL;
  v10[1] = 0LL;
  if ( (v11 & 2) != 0 )
  {
    v11 &= ~2u;
    if ( v16 )
      sub_18001060C(v16);
  }
  if ( (v11 & 1) != 0 && v18 )
    sub_18001060C(v18);
  *(_BYTE *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 360) = 1LL;
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_QWORD *)(a1 + 384) = 0LL;
  sub_1800295E0((_QWORD *)(a1 + 392));
  sub_180029664((_QWORD *)(a1 + 408));
  sub_18002974C((_QWORD *)(a1 + 424));
  *(_QWORD *)(a1 + 432) = 1LL;
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 272) = 0x8000000000000000uLL;
  *(_QWORD *)(a1 + 280) = 0x8000000000000000uLL;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_DWORD *)(a1 + 224) = 21;
  *(_DWORD *)(a1 + 228) = 21;
  *(_DWORD *)(a1 + 232) = 16;
  v12 = a3[1];
  if ( v12 )
    sub_18001060C(v12);
  v13 = a4[1];
  if ( v13 )
    sub_18001060C(v13);
  return a1;
}
