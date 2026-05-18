/*
 * XREFs of sub_1800187C0 @ 0x1800187C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     sub_180011598 @ 0x180011598 (sub_180011598.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180012344 @ 0x180012344 (sub_180012344.c)
 *     sub_180015E84 @ 0x180015E84 (sub_180015E84.c)
 *     sub_180017138 @ 0x180017138 (sub_180017138.c)
 *     sub_180017338 @ 0x180017338 (sub_180017338.c)
 *     sub_180017768 @ 0x180017768 (sub_180017768.c)
 *     sub_1800182F8 @ 0x1800182F8 (sub_1800182F8.c)
 *     sub_18001832C @ 0x18001832C (sub_18001832C.c)
 *     sub_18001A1F0 @ 0x18001A1F0 (sub_18001A1F0.c)
 *     sub_18001A2CC @ 0x18001A2CC (sub_18001A2CC.c)
 *     sub_18001A748 @ 0x18001A748 (sub_18001A748.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     sub_1800321B0 @ 0x1800321B0 (sub_1800321B0.c)
 *     sub_18003B44C @ 0x18003B44C (sub_18003B44C.c)
 *     sub_18004E420 @ 0x18004E420 (sub_18004E420.c)
 *     sub_180052EE8 @ 0x180052EE8 (sub_180052EE8.c)
 *     sub_1800533FC @ 0x1800533FC (sub_1800533FC.c)
 *     sub_1800534AC @ 0x1800534AC (sub_1800534AC.c)
 *     sub_1800576C8 @ 0x1800576C8 (sub_1800576C8.c)
 *     sub_180058B4C @ 0x180058B4C (sub_180058B4C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800187C0(__int64 a1, __int64 a2, _OWORD *a3, unsigned __int8 a4)
{
  int v4; // r14d
  _QWORD *v8; // r9
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rax
  __m128 v12; // xmm9
  __m128 v13; // xmm10
  __int64 v14; // rax
  float v15; // xmm7_4
  float v16; // xmm8_4
  double v17; // xmm6_8
  int v18; // r9d
  int v19; // r8d
  int v20; // ecx
  int v21; // eax
  __int64 v22; // rdx
  _QWORD *v23; // rax
  __int64 v24; // rdi
  __m128 v25; // xmm1
  __m128 v26; // xmm0
  _QWORD *v27; // rax
  __m128 v28; // xmm2
  __m128 v29; // xmm1
  __int64 v30; // rcx
  char v31; // cl
  __int64 v32; // rax
  __int64 v33; // rax
  float v34; // xmm4_4
  float v35; // xmm3_4
  float v36; // xmm2_4
  __int64 v37; // rax
  __int128 v38; // xmm3
  __int128 v39; // xmm2
  __int128 v40; // xmm0
  __int64 result; // rax
  __int64 v42; // [rsp+20h] [rbp-198h] BYREF
  __int64 v43; // [rsp+28h] [rbp-190h]
  __int64 v44; // [rsp+30h] [rbp-188h] BYREF
  __int64 v45; // [rsp+38h] [rbp-180h]
  float v46; // [rsp+40h] [rbp-178h] BYREF
  __int128 v47; // [rsp+44h] [rbp-174h]
  float v48; // [rsp+54h] [rbp-164h]
  __int128 v49; // [rsp+58h] [rbp-160h]
  int v50; // [rsp+68h] [rbp-150h]
  int v51; // [rsp+6Ch] [rbp-14Ch]
  float v52; // [rsp+70h] [rbp-148h]
  float v53; // [rsp+74h] [rbp-144h]
  float v54; // [rsp+78h] [rbp-140h]
  int v55; // [rsp+7Ch] [rbp-13Ch]
  __int64 v56; // [rsp+80h] [rbp-138h] BYREF
  __int64 v57; // [rsp+88h] [rbp-130h]
  __int64 v58; // [rsp+90h] [rbp-128h] BYREF
  __int64 v59; // [rsp+98h] [rbp-120h] BYREF
  __int64 v60; // [rsp+A0h] [rbp-118h]
  _BYTE v61[64]; // [rsp+A8h] [rbp-110h] BYREF
  __int64 v62; // [rsp+E8h] [rbp-D0h] BYREF
  _BYTE v63[24]; // [rsp+F8h] [rbp-C0h] BYREF
  __int128 v64[9]; // [rsp+110h] [rbp-A8h] BYREF

  v4 = a4;
  try
  {
    sub_180017138(&v58);
    unknown_libname_81(&v59, (_QWORD *)(a2 + 16));
    v8 = unknown_libname_81(&v62, &v59);
    sub_1800321B0(v9, &v42, v9, v8);
    sub_180011598(
      *(_QWORD *)(a1 + 64),
      *(_QWORD *)(a1 + 120),
      *(_DWORD *)(a1 + 136) - *(_DWORD *)(a1 + 128),
      *(_DWORD *)(a1 + 140) - *(_DWORD *)(a1 + 132));
    v10 = v59;
    sub_18002851C(v59 + 16, v63);
    v11 = sub_180012344((__int64)&v46, (__int64)&unk_1801C4028);
    sub_180015E84(v10, &v44, v11);
    sub_18004E420(v44, a2 + 48);
    if ( v45 )
      sub_18001050C(v45);
    v12 = (__m128)COERCE_UNSIGNED_INT((float)(*(int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 88LL))(*(_QWORD *)(a1 + 64)));
    v13 = (__m128)COERCE_UNSIGNED_INT((float)(*(int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 80LL))(*(_QWORD *)(a1 + 64)));
    v44 = *(_QWORD *)(a1 + 144);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 280LL))(*(_QWORD *)(a1 + 64)) )
    {
      *(_BYTE *)(v42 + 465) |= 1u;
      v14 = v42;
      *(_QWORD *)(v42 + 296) = 0LL;
      *(_QWORD *)(v14 + 304) = 0LL;
      v15 = *(float *)&v44 - (float)*(int *)(a1 + 128);
      v16 = *((float *)&v44 + 1) - (float)*(int *)(a1 + 132);
      v17 = *(double *)_mm_unpacklo_ps(v13, v12).m128_u64;
      sub_180058B4C(v42, 0LL, *(_QWORD *)&v17, 1LL);
      v18 = *(_DWORD *)(a1 + 140);
      v19 = *(_DWORD *)(a1 + 132);
      v20 = *(_DWORD *)(a1 + 136);
      v21 = *(_DWORD *)(a1 + 128);
      v22 = v42;
      *(_QWORD *)(v42 + 372) = 0LL;
      *(_DWORD *)(v22 + 380) = v20 - v21;
      *(_DWORD *)(v22 + 384) = v18 - v19;
      *(_BYTE *)(v22 + 388) = 1;
      v23 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 152LL))(*(_QWORD *)(a1 + 64));
      unknown_libname_81(&v56, v23);
      v24 = v56;
      *(_DWORD *)(v56 + 448) = 8 * (v4 ^ 1);
      v25 = (__m128)COERCE_UNSIGNED_INT((float)*(int *)(a1 + 132));
      v26 = (__m128)COERCE_UNSIGNED_INT((float)*(int *)(a1 + 128));
      v27 = (_QWORD *)sub_1800182F8(v24, &v46);
      v28 = 0LL;
      v28.m128_u64[0] = _mm_unpacklo_ps(v26, v25).m128_u64[0];
      v29 = 0LL;
      *(double *)v29.m128_u64 = v17;
      sub_180058B4C(*v27, v28.m128_u64[0], _mm_add_ps(v29, v28).m128_u64[0], 1LL);
      if ( *(_QWORD *)((char *)&v47 + 4) )
        sub_18001050C(*(__int64 *)((char *)&v47 + 4));
      v30 = *(_QWORD *)sub_1800182F8(v24, &v46);
      *(_OWORD *)(v30 + 372) = *(_OWORD *)(a1 + 128);
      *(_BYTE *)(v30 + 388) = 1;
      if ( *(_QWORD *)((char *)&v47 + 4) )
        sub_18001050C(*(__int64 *)((char *)&v47 + 4));
      if ( v57 )
        sub_18001050C(v57);
    }
    else
    {
      v31 = *(_BYTE *)(v42 + 465) | 1;
      if ( !(_BYTE)v4 )
        v31 = *(_BYTE *)(v42 + 465) & 0xFE;
      *(_BYTE *)(v42 + 465) = v31;
      v32 = v42;
      *(_QWORD *)(v42 + 296) = 0LL;
      *(_QWORD *)(v32 + 304) = 0LL;
      v33 = v42;
      *(_OWORD *)(v42 + 372) = *(_OWORD *)(a1 + 128);
      *(_BYTE *)(v33 + 388) = 1;
      v16 = *((float *)&v44 + 1);
      v15 = *(float *)&v44;
    }
    v34 = -*(float *)(a1 + 152);
    v35 = *(float *)(a1 + 148);
    v36 = -*(float *)(a1 + 144);
    v46 = 1.0;
    v47 = 0LL;
    v48 = -1.0;
    v49 = 0LL;
    v50 = 1065353216;
    v51 = 0;
    v52 = v36;
    v53 = v35;
    v54 = v34;
    v55 = 1065353216;
    *(_OWORD *)v61 = *a3;
    *(_OWORD *)&v61[16] = a3[1];
    *(_OWORD *)&v61[32] = a3[2];
    *(_OWORD *)&v61[48] = a3[3];
    sub_180017768((__int64)v64, (__int128 *)v61, &v46);
    sub_180011B04(v42 + 56, &v56);
    v37 = sub_18001832C(v64, (__int64)v61);
    sub_18003B44C(v56, v37);
    if ( v57 )
      sub_18001050C(v57);
    sub_1800576C8(v42);
    v46 = 2.0 / v13.m128_f32[0];
    v47 = 0LL;
    v48 = 2.0 / v12.m128_f32[0];
    v49 = 0LL;
    v50 = 1065353216;
    v51 = 0;
    v52 = (float)((float)(2.0 / v13.m128_f32[0]) * v15) - 1.0;
    v53 = 1.0 - (float)((float)(2.0 / v12.m128_f32[0]) * v16);
    v54 = 0.0;
    v55 = 1065353216;
    *(_OWORD *)&v61[4] = 0LL;
    *(_OWORD *)&v61[24] = 0LL;
    *(_OWORD *)&v61[44] = 0LL;
    v38 = *(unsigned int *)(a1 + 160);
    v39 = *(unsigned int *)(a1 + 156);
    v40 = 0x40000000u;
    *(double *)&v40 = sub_18001A748();
    *(_OWORD *)v61 = v40;
    *(_OWORD *)&v61[16] = 0x40000000u;
    *(_OWORD *)&v61[32] = v39;
    *(_OWORD *)&v61[48] = v38;
    sub_180017768((__int64)v64, (__int128 *)v61, &v46);
    sub_18001A2CC(v42, 5LL);
    sub_18001A1F0(v42, v64);
    sub_180010F44((__int64)v63);
    sub_180052EE8(*(_QWORD *)(a1 + 48), &v42);
    sub_1800534AC(*(_QWORD *)(a1 + 48));
    sub_1800533FC(*(_QWORD *)(a1 + 48), &v42);
    if ( v43 )
      sub_18001050C(v43);
    if ( v60 )
      sub_18001050C(v60);
    sub_180017338(&v58);
    result = 0LL;
  }
  catch ( ... )
  {
    return 2147500037LL;
  }
  return result;
}
