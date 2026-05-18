/*
 * XREFs of sub_180048B78 @ 0x180048B78
 * Callers:
 *     sub_180048A70 @ 0x180048A70 (sub_180048A70.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _o__fdclass @ 0x18000BF2A (_o__fdclass.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_1800138DC @ 0x1800138DC (sub_1800138DC.c)
 *     sub_180013ACC @ 0x180013ACC (sub_180013ACC.c)
 *     sub_180013D0C @ 0x180013D0C (sub_180013D0C.c)
 *     sub_18001C99C @ 0x18001C99C (sub_18001C99C.c)
 *     GsDriverEntry @ 0x18003AED0 (GsDriverEntry.c)
 *     sub_180045A88 @ 0x180045A88 (sub_180045A88.c)
 *     sub_18004791C @ 0x18004791C (sub_18004791C.c)
 *     sub_180049010 @ 0x180049010 (sub_180049010.c)
 *     sub_180049058 @ 0x180049058 (sub_180049058.c)
 *     sub_1800699F0 @ 0x1800699F0 (sub_1800699F0.c)
 *     sub_180069B2C @ 0x180069B2C (sub_180069B2C.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_180048B78(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 *a5,
        unsigned int a6,
        int a7,
        __int128 *a8,
        __int64 a9,
        float *a10,
        char a11)
{
  __int64 v13; // r15
  __int64 v15; // rdx
  char v16; // al
  char v17; // dl
  __int64 v18; // rsi
  __int64 v19; // rbx
  _QWORD *v20; // rax
  int v21; // edi
  __int64 v22; // rdi
  __int64 *v23; // rax
  __int64 v24; // r15
  __int64 v25; // rcx
  char v26; // r12
  float v27; // xmm2_4
  __m128 v28; // xmm1
  __m128 v29; // xmm2
  unsigned __int64 **v30; // rax
  __int64 v31; // rcx
  __int128 v33; // [rsp+28h] [rbp-D1h] BYREF
  __int64 v34; // [rsp+38h] [rbp-C1h] BYREF
  __int64 v35; // [rsp+40h] [rbp-B9h]
  __int64 v36; // [rsp+48h] [rbp-B1h]
  __int64 v37; // [rsp+50h] [rbp-A9h] BYREF
  __int64 *v38; // [rsp+58h] [rbp-A1h]
  __int64 v39; // [rsp+60h] [rbp-99h]
  __int128 v40; // [rsp+68h] [rbp-91h] BYREF
  __int128 v41; // [rsp+78h] [rbp-81h]
  __int128 v42; // [rsp+88h] [rbp-71h]
  __int128 v43; // [rsp+98h] [rbp-61h]
  __int64 v44; // [rsp+A8h] [rbp-51h]
  __int64 v45; // [rsp+B0h] [rbp-49h]
  _OWORD v46[2]; // [rsp+B8h] [rbp-41h] BYREF

  v13 = a2;
  v39 = a2;
  v44 = a2;
  v37 = a3;
  v38 = a5;
  v45 = (__int64)a5;
  LODWORD(v36) = 0;
  v40 = *a8;
  v41 = a8[1];
  v42 = a8[2];
  v43 = a8[3];
  LOBYTE(v15) = sub_180049058(&v40);
  v16 = sub_180049010(&v40, v15);
  if ( v17 && v16 )
  {
    v18 = a1 + 56;
  }
  else
  {
    v40 = xmmword_1800F7620;
    v41 = xmmword_1800F7630;
    v42 = xmmword_1800F7640;
    v43 = xmmword_1800F7650;
    std::string::string(
      v46,
      "LOADED TRANSFORM IS NOT VALID Node ID=%.16X has a transform that is non-affine or not finite. Elements of the matr"
      "ix are either NaN or infinite. The matrix has been set to identity ");
    v18 = a1 + 56;
    sub_180011B04(a1 + 56, &v33);
    sub_1800137F8((__int64)v46);
    sub_18001C99C(&stru_1801B8308, 4);
    if ( *((_QWORD *)&v33 + 1) )
      sub_18001050C(*((__int64 *)&v33 + 1));
    sub_180011A5C((__int64)v46);
  }
  sub_180011B04(v18, &v33);
  GsDriverEntry(v33, (__int64)&v40);
  if ( *((_QWORD *)&v33 + 1) )
    sub_18001050C(*((__int64 *)&v33 + 1));
  v19 = sub_1800699F0(a3 + 816, a6, a4);
  v34 = a1;
  v20 = sub_18004791C(v46, &v34, &v37);
  v33 = 0LL;
  v33 = *(_OWORD *)v20;
  *v20 = 0LL;
  v20[1] = 0LL;
  ((void (__fastcall *)(__int64, __int64, __int64, __int128 *))sub_180069B2C)(a3 + 816, v13, v19, &v33);
  LODWORD(v36) = 1;
  if ( *((_QWORD *)&v46[0] + 1) )
    sub_18001050C(*((__int64 *)&v46[0] + 1));
  if ( *(_BYTE *)(a1 + 72) )
  {
    LODWORD(v37) = *(_DWORD *)(*v38 + 120);
    v21 = v37;
    sub_18001C99C(&stru_1801B8308, 3);
    sub_18001C99C(&stru_1801B8308, 3);
    sub_18001C99C(&stru_1801B8308, 3);
    if ( v21 )
    {
      sub_180011B04(v18, &v33);
      sub_180013D0C(v33, &v34);
      if ( *((_QWORD *)&v33 + 1) )
        sub_18001050C(*((__int64 *)&v33 + 1));
      v22 = v34;
      if ( v34 )
      {
        v24 = v35;
      }
      else
      {
        sub_180011B04(v18, &v33);
        v23 = sub_180013ACC(v33, v46);
        v22 = *v23;
        v24 = v23[1];
        *v23 = 0LL;
        v23[1] = 0LL;
        v34 = v22;
        v25 = v35;
        v35 = v24;
        if ( v25 )
          sub_18001050C(v25);
        if ( *((_QWORD *)&v46[0] + 1) )
          sub_18001050C(*((__int64 *)&v46[0] + 1));
        if ( *((_QWORD *)&v33 + 1) )
          sub_18001050C(*((__int64 *)&v33 + 1));
      }
      v26 = a11;
      if ( !a11 )
        goto LABEL_32;
      if ( (__int16)o__fdclass() > 0 || (__int16)o__fdclass() > 0 )
      {
        std::string::string(
          v46,
          "LOADED BOUNDS ARE NOT FINITE! Node ID=%.16X has a bounding box that is not finite. Elements of the bounding bo"
          "x are either NaN or infinite The Bounding will be recalculated.");
        sub_1800137F8((__int64)v46);
        sub_18001C99C(&stru_1801B8308, 4);
        v26 = 0;
        sub_180011A5C((__int64)v46);
      }
      if ( (v27 = *a10, *a10 == 0.0) && a10[1] == 0.0 && a10[2] == 0.0 || !v26 )
      {
LABEL_32:
        v30 = (unsigned __int64 **)sub_180045A88(*v38, v46, 0);
        sub_1800138DC(v22 + 88, (unsigned int)v37, *v30);
        if ( *((_QWORD *)&v46[0] + 1) )
          sub_18001050C(*((__int64 *)&v46[0] + 1));
      }
      else
      {
        *(_QWORD *)&v46[0] = *(_QWORD *)a9;
        DWORD2(v46[0]) = *(_DWORD *)(a9 + 8);
        *((float *)v46 + 3) = v27;
        v28 = (__m128)*((unsigned int *)a10 + 1);
        v29 = (__m128)*((unsigned int *)a10 + 2);
        *(_OWORD *)(v22 + 88) = v46[0];
        *(_QWORD *)(v22 + 104) = _mm_unpacklo_ps(v28, v29).m128_u64[0];
      }
      if ( v24 )
        sub_18001050C(v24);
      v13 = v39;
    }
  }
  v31 = v38[1];
  if ( v31 )
    sub_18001050C(v31);
  return v13;
}
