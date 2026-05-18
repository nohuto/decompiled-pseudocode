/*
 * XREFs of sub_18006406C @ 0x18006406C
 * Callers:
 *     sub_180061EC0 @ 0x180061EC0 (sub_180061EC0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18001B294 @ 0x18001B294 (sub_18001B294.c)
 *     sub_180032500 @ 0x180032500 (sub_180032500.c)
 *     sub_18004C6D4 @ 0x18004C6D4 (sub_18004C6D4.c)
 *     sub_18005DB54 @ 0x18005DB54 (sub_18005DB54.c)
 *     sub_180062674 @ 0x180062674 (sub_180062674.c)
 *     sub_18007C298 @ 0x18007C298 (sub_18007C298.c)
 *     sub_18007C364 @ 0x18007C364 (sub_18007C364.c)
 *     sub_18007C95C @ 0x18007C95C (sub_18007C95C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006406C(const __m128i *a1, __int64 a2, int a3)
{
  __int64 v5; // rdi
  unsigned int v6; // r13d
  unsigned int v7; // r12d
  __m128 v8; // xmm6
  int v9; // eax
  char v10; // si
  char v11; // bl
  float v12; // xmm11_4
  float v13; // xmm9_4
  float v14; // xmm8_4
  float v15; // xmm7_4
  float v16; // xmm6_4
  float v17; // xmm15_4
  float v18; // xmm13_4
  char v19; // al
  float v20; // xmm12_4
  int v21; // r15d
  int v22; // xmm14_4
  int v23; // ebx
  double v24; // xmm0_8
  double v25; // xmm0_8
  float v26; // xmm7_4
  double v27; // xmm0_8
  float v28; // xmm6_4
  __int64 v29; // rax
  double v30; // xmm0_8
  float v31; // xmm7_4
  double v32; // xmm0_8
  float v33; // xmm6_4
  __int64 v34; // rax
  double v35; // xmm0_8
  __int128 v36; // xmm6
  __int128 v37; // xmm0
  __int64 v38; // rbx
  __int64 v39; // r8
  __int64 v40; // r8
  __int64 v41; // r8
  __int64 v42; // r8
  __int64 v43; // r8
  __int64 v44; // r8
  __int64 v45; // r8
  __int64 v46; // r8
  __int64 result; // rax
  float v48; // [rsp+28h] [rbp-E0h]
  float v49; // [rsp+2Ch] [rbp-DCh]
  float v50; // [rsp+30h] [rbp-D8h]
  float v51; // [rsp+34h] [rbp-D4h]
  __int128 v52; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v53; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v54; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v55; // [rsp+60h] [rbp-A8h]
  float v56; // [rsp+68h] [rbp-A0h]
  float v57; // [rsp+6Ch] [rbp-9Ch]
  float v58; // [rsp+70h] [rbp-98h]
  float v59; // [rsp+74h] [rbp-94h]
  float v60; // [rsp+78h] [rbp-90h]
  float v61; // [rsp+7Ch] [rbp-8Ch]
  int v62; // [rsp+80h] [rbp-88h]
  float v63; // [rsp+84h] [rbp-84h]
  __m128 v64; // [rsp+88h] [rbp-80h]
  char v65; // [rsp+178h] [rbp+70h]
  char v66; // [rsp+180h] [rbp+78h]
  float v67; // [rsp+190h] [rbp+88h]

  v5 = sub_180032500((__int64)a1, a3);
  v6 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 72LL))(v5, &unk_1801C52D8, 0LL);
  v7 = sub_18005DB54(v5);
  v65 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801C5298, 0LL);
  v66 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801C5918, 0LL);
  v8 = (__m128)_mm_loadu_si128(a1 + 89);
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 88LL))(a2);
  v64 = _mm_mul_ps(
          v8,
          _mm_shuffle_ps((__m128)COERCE_UNSIGNED_INT((float)v9), (__m128)COERCE_UNSIGNED_INT((float)v9), 0));
  v10 = 1;
  if ( _mm_movemask_ps(_mm_cmpneq_ps((__m128)xmmword_1800F8660, (__m128)a1[89])) )
    a1[88].m128i_i8[1] = 1;
  else
    v64.m128_i32[1] = 0;
  v11 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801C5178, 0LL);
  v12 = 1.0;
  if ( v11
    && (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801C5198, 0LL) )
  {
    v13 = 1.0;
    v48 = 1.0;
  }
  else
  {
    v13 = 0.0;
    v48 = 0.0;
    if ( !v11 )
      goto LABEL_10;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801C51B8, 0LL) )
  {
    v14 = 1.0;
    v49 = 1.0;
    goto LABEL_11;
  }
LABEL_10:
  v14 = 0.0;
  v49 = 0.0;
  if ( !v11 )
    goto LABEL_13;
LABEL_11:
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801C51D8, 0LL) )
  {
LABEL_13:
    v15 = 0.0;
    v50 = 0.0;
    if ( !v11 )
      goto LABEL_16;
    goto LABEL_14;
  }
  v15 = 1.0;
  v50 = 1.0;
LABEL_14:
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801C51F8, 0LL) )
  {
    v16 = 1.0;
    v51 = 1.0;
    goto LABEL_17;
  }
LABEL_16:
  v16 = 0.0;
  v51 = 0.0;
  if ( !v11 )
    goto LABEL_19;
LABEL_17:
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801C5218, 0LL) )
  {
LABEL_19:
    v17 = 0.0;
    if ( !v11 )
      goto LABEL_22;
    goto LABEL_20;
  }
  v17 = 1.0;
LABEL_20:
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801C5238, 0LL) )
  {
    v18 = 1.0;
    goto LABEL_23;
  }
LABEL_22:
  v18 = 0.0;
  if ( !v11 )
  {
LABEL_30:
    v19 = 1;
    goto LABEL_31;
  }
LABEL_23:
  if ( v13 == 0.0 || v14 == 0.0 || v15 == 0.0 || v16 == 0.0 || v17 == 0.0 || v18 == 0.0 )
    goto LABEL_30;
  v19 = 0;
LABEL_31:
  if ( v7 || v6 != 2 || v19 )
    a1[88].m128i_i8[1] = 1;
  v52 = xmmword_1800FA0C0;
  v53 = xmmword_1800FA0C0;
  v67 = 0.0;
  v20 = 1.0;
  v21 = (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801C7A38, 0LL);
  v22 = 0;
  v23 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 72LL))(v5, &unk_1801C7A58, 0LL);
  if ( (_BYTE)v21 )
  {
    v24 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_1801C7A18);
    v20 = *(float *)&v24 / 100.0;
    a1[88].m128i_i8[1] = 1;
  }
  if ( v23 )
  {
    if ( v23 == 2 )
      v22 = 1065353216;
    a1[88].m128i_i8[1] = 1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801C7AD8, 0LL) )
  {
    v25 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_1801C7AB8);
    v26 = *(float *)&v25;
    v27 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_1801C7A98);
    v28 = *(float *)&v27;
    *(float *)&v27 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_1801C7A78);
    v29 = sub_18001B294((__int64)&v54, *(float *)&v27, v28, v26);
    *(_QWORD *)&v52 = *(_QWORD *)v29;
    DWORD2(v52) = *(_DWORD *)(v29 + 8);
    HIDWORD(v52) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_1801C7AF8);
    a1[88].m128i_i8[1] = 1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801C7B78, 0LL) )
  {
    v30 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_1801C7B58);
    v31 = *(float *)&v30;
    v32 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_1801C7B38);
    v33 = *(float *)&v32;
    *(float *)&v32 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_1801C7B18);
    v34 = sub_18001B294((__int64)&v54, *(float *)&v32, v33, v31);
    *(_QWORD *)&v53 = *(_QWORD *)v34;
    DWORD2(v53) = *(_DWORD *)(v34 + 8);
    HIDWORD(v53) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_1801C7B98);
    a1[88].m128i_i8[1] = 1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801C7BD8, 0LL) )
  {
    v35 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_1801C7BB8);
    v12 = *(float *)&v35 / 100.0;
    v67 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_1801C7BF8);
    a1[88].m128i_i8[1] = 1;
  }
  v36 = *(_OWORD *)sub_180062674((int *)&v52, &v54);
  v37 = *(_OWORD *)sub_180062674((int *)&v53, &v54);
  v53 = v36;
  v52 = v37;
  v56 = v12;
  v57 = v12;
  v58 = v12;
  v59 = v67;
  v60 = v20;
  v61 = (float)v21;
  v62 = v22;
  v63 = (float)(v23 != 0);
  sub_18004C6D4(a1[32].m128i_i64[0], &v54);
  v38 = v54;
  sub_18007C364(v54, &unk_1801C85D8, v6);
  sub_18007C364(v38, &unk_1801C85F8, v7);
  LOBYTE(v39) = v65;
  sub_18007C298(v38, &unk_1801C8618, v39);
  if ( v48 == 0.0 )
    v40 = 0LL;
  else
    LOBYTE(v40) = 1;
  sub_18007C298(v38, &unk_1801C8638, v40);
  if ( v49 == 0.0 )
    v41 = 0LL;
  else
    LOBYTE(v41) = 1;
  sub_18007C298(v38, &unk_1801C8658, v41);
  if ( v50 == 0.0 )
    v42 = 0LL;
  else
    LOBYTE(v42) = 1;
  sub_18007C298(v38, &unk_1801C8678, v42);
  if ( v51 == 0.0 )
    v43 = 0LL;
  else
    LOBYTE(v43) = 1;
  sub_18007C298(v38, &unk_1801C8698, v43);
  if ( v17 == 0.0 )
    v44 = 0LL;
  else
    LOBYTE(v44) = 1;
  sub_18007C298(v38, &unk_1801C86B8, v44);
  if ( v18 == 0.0 )
    v10 = 0;
  LOBYTE(v45) = v10;
  sub_18007C298(v38, &unk_1801C86D8, v45);
  LOBYTE(v46) = v66;
  sub_18007C298(v38, &unk_1801C8798, v46);
  sub_18007C95C(v38, &unk_1801C86F8);
  sub_18007C95C(v38, &unk_1801C8718);
  sub_18007C95C(v38, &unk_1801C8738);
  sub_18007C95C(v38, &unk_1801C8758);
  result = sub_18007C95C(v38, &unk_1801C8778);
  if ( v55 )
    return sub_18001060C(v55);
  return result;
}
