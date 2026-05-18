/*
 * XREFs of sub_1800925E0 @ 0x1800925E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _o_ceilf @ 0x18000BFBC (_o_ceilf.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_1800107FC @ 0x1800107FC (sub_1800107FC.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     j_unknown_libname_81 @ 0x180012000 (j_unknown_libname_81.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_18001B448 @ 0x18001B448 (sub_18001B448.c)
 *     sub_18001B518 @ 0x18001B518 (sub_18001B518.c)
 *     sub_180026858 @ 0x180026858 (sub_180026858.c)
 *     sub_180027470 @ 0x180027470 (sub_180027470.c)
 *     sub_180027C24 @ 0x180027C24 (sub_180027C24.c)
 *     sub_18002C84C @ 0x18002C84C (sub_18002C84C.c)
 *     sub_1800827C0 @ 0x1800827C0 (sub_1800827C0.c)
 *     sub_180082810 @ 0x180082810 (sub_180082810.c)
 *     sub_18008CBB8 @ 0x18008CBB8 (sub_18008CBB8.c)
 */

// Hidden C++ exception states: #wind=6
char __fastcall sub_1800925E0(__int64 a1, __int64 a2, int a3, int a4, char a5, int a6)
{
  float v8; // xmm1_4
  float v9; // xmm8_4
  float v10; // xmm0_4
  float v11; // xmm9_4
  float v12; // xmm6_4
  int v13; // r14d
  int v14; // r15d
  signed int v15; // r12d
  __int64 *v16; // rsi
  __int64 v17; // rbx
  _QWORD *v18; // rax
  __int64 *v19; // rsi
  __int64 v20; // rbx
  _QWORD *v21; // rax
  __int64 *v22; // r14
  __int64 *v23; // rdi
  __int64 v24; // rax
  signed int i; // esi
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rax
  _QWORD *v30; // rcx
  _BYTE *v31; // rdx
  __int64 v33; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+48h] [rbp-C0h]
  __int64 v36; // [rsp+50h] [rbp-B8h]
  _BYTE v37[32]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v38[4]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v39[32]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v40[4]; // [rsp+C0h] [rbp-48h] BYREF

  v8 = (float)*(int *)(a1 + 376);
  v9 = (float)a3;
  v10 = (float)a3 / v8;
  v11 = (float)a4;
  v12 = (float)a4 / v8;
  *(float *)(a1 + 264) = v10;
  *(float *)(a1 + 268) = v12;
  o_ceilf();
  v13 = (int)v10;
  o_ceilf();
  v14 = (int)v12;
  if ( !(int)v10 )
    v13 = 1;
  if ( !v14 )
    v14 = 1;
  v15 = *(_DWORD *)(a1 + 376);
  v36 = *(_QWORD *)(a2 + 3648);
  sub_1800107FC(v36, &v34);
  v16 = (__int64 *)(a1 + 184);
  sub_180011010((_QWORD *)(a1 + 184), &v34);
  if ( v35 )
    sub_18001050C(v35);
  v17 = *v16;
  v18 = std::string::string(v38, "ImageProcessingBlurX");
  sub_180027C24(v17, (__int64)v18);
  sub_180026858(*v16, v13, v14, a5, a6, 0LL);
  sub_1800107FC(v36, &v34);
  v19 = (__int64 *)(a1 + 200);
  sub_180011010((_QWORD *)(a1 + 200), &v34);
  if ( v35 )
    sub_18001050C(v35);
  v20 = *v19;
  v21 = std::string::string(v38, "ImageProcessingBlurY");
  sub_180027C24(v20, (__int64)v21);
  sub_180026858(*v19, v13, v14, a5, a6, 0LL);
  v22 = (__int64 *)(a1 + 216);
  sub_18008CBB8((__int64 *)(a1 + 216));
  v23 = (__int64 *)(a1 + 240);
  v24 = *v23;
  if ( *v23 != v23[1] )
    v23[1] = v24;
  for ( i = 2; i <= v15; i *= 2 )
  {
    sub_1800107FC(v36, &v34);
    v26 = sub_180027470(v40, i);
    v27 = sub_18001B518((__int64)v39, (__int64)"ImageProcessingBlur Downsample ", v26);
    sub_18001B448((__int64)v38, v27, (__int64)"x");
    sub_180011A5C((__int64)v39);
    sub_180011A5C((__int64)v40);
    v28 = v34;
    v29 = sub_180016F54((__int64)v37, (__int64)v38);
    sub_180027C24(v28, v29);
    o_ceilf();
    o_ceilf();
    sub_180026858(v34, (int)(float)(v9 / (float)i), (int)(float)(v11 / (float)i), a5, a6, 0LL);
    v30 = (_QWORD *)v22[1];
    if ( v30 == (_QWORD *)v22[2] )
    {
      sub_18002C84C(v22, v22[1], &v34);
    }
    else
    {
      j_unknown_libname_81(v30, &v34);
      v22[1] += 16LL;
    }
    *(float *)&v33 = v9 / (float)i;
    *((float *)&v33 + 1) = v11 / (float)i;
    v31 = (_BYTE *)v23[1];
    if ( v31 == (_BYTE *)v23[2] )
      sub_180082810(v23, v31, &v33);
    else
      sub_1800827C0((__int64)v23, &v33);
    LOBYTE(v24) = sub_180011A5C((__int64)v38);
    if ( v35 )
      LOBYTE(v24) = sub_18001050C(v35);
  }
  return v24;
}
