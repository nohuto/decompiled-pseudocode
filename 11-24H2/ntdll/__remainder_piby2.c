/*
 * XREFs of __remainder_piby2 @ 0x180128420
 * Callers:
 *     cos @ 0x1801222A0 (cos.c)
 *     sin @ 0x180122630 (sin.c)
 *     tan @ 0x180125230 (tan.c)
 * Callees:
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall _remainder_piby2(double a1, double *a2, double *a3, int *a4)
{
  int v6; // r11d
  int v8; // r10d
  __int64 v9; // r9
  int v10; // r11d
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r8
  __int64 v27; // rcx
  __int16 v28; // bx
  int v29; // r9d
  __int64 v30; // rdx
  __int64 v31; // rbx
  unsigned int v32; // esi
  int v33; // ebx
  __int64 v34; // rcx
  int v35; // esi
  unsigned __int64 v36; // rdx
  _QWORD *v37; // r8
  __int64 v38; // rcx
  __int64 v39; // r8
  _QWORD *v40; // rax
  unsigned __int64 v41; // r8
  int v42; // r11d
  __int64 v43; // rcx
  __int64 v44; // rdx
  unsigned __int64 v45; // rax
  double v46; // xmm8_8
  double v47; // xmm7_8
  double v48; // xmm7_8
  unsigned __int64 result; // rax
  double v50; // xmm5_8
  _QWORD v51[499]; // [rsp+20h] [rbp-E8h] BYREF

  v51[18] = 0LL;
  v6 = ((*(_QWORD *)&a1 >> 52) & 0x7FF) - 1023;
  v8 = v6 / 10;
  v9 = v6 / 10;
  v10 = v6 % 10;
  v11 = ((qword_1801CBB00[v8 + 18] * (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000uLL)) >> 10)
      + qword_1801CBB00[v9 + 17] * (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL);
  v51[17] = (LOWORD(qword_1801CBB00[v8 + 18]) * LOWORD(a1)) & 0x3FF;
  v51[16] = v11 & 0x3FF;
  v12 = (v11 >> 10) + qword_1801CBB00[v8 + 16] * (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL);
  v51[15] = ((unsigned __int16)(v11 >> 10) + LOWORD(qword_1801CBB00[v8 + 16]) * LOWORD(a1)) & 0x3FF;
  v13 = (v12 >> 10) + qword_1801CBB00[v8 + 15] * (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL);
  v51[14] = ((unsigned __int16)(v12 >> 10) + LOWORD(qword_1801CBB00[v8 + 15]) * LOWORD(a1)) & 0x3FF;
  v14 = (v13 >> 10) + qword_1801CBB00[v8 + 14] * (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL);
  v51[13] = ((unsigned __int16)(v13 >> 10) + LOWORD(qword_1801CBB00[v8 + 14]) * LOWORD(a1)) & 0x3FF;
  v15 = (v14 >> 10) + qword_1801CBB00[v8 + 13] * (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL);
  v51[12] = ((unsigned __int16)(v14 >> 10) + LOWORD(qword_1801CBB00[v8 + 13]) * LOWORD(a1)) & 0x3FF;
  v16 = (v15 >> 10) + qword_1801CBB00[v8 + 12] * (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL);
  v51[11] = ((unsigned __int16)(v15 >> 10) + LOWORD(qword_1801CBB00[v8 + 12]) * LOWORD(a1)) & 0x3FF;
  v17 = (v16 >> 10) + qword_1801CBB00[v8 + 11] * (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL);
  v51[10] = ((unsigned __int16)(v16 >> 10) + LOWORD(qword_1801CBB00[v8 + 11]) * LOWORD(a1)) & 0x3FF;
  v18 = (v17 >> 10) + qword_1801CBB00[v8 + 10] * (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL);
  v51[9] = ((unsigned __int16)(v17 >> 10) + LOWORD(qword_1801CBB00[v8 + 10]) * LOWORD(a1)) & 0x3FF;
  v19 = (v18 >> 10) + qword_1801CBB00[v8 + 9] * (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL);
  v51[8] = ((unsigned __int16)(v18 >> 10) + LOWORD(qword_1801CBB00[v8 + 9]) * LOWORD(a1)) & 0x3FF;
  v20 = (v19 >> 10) + qword_1801CBB00[v8 + 8] * (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL);
  v51[7] = ((unsigned __int16)(v19 >> 10) + LOWORD(qword_1801CBB00[v8 + 8]) * LOWORD(a1)) & 0x3FF;
  v21 = (v20 >> 10) + qword_1801CBB00[v8 + 7] * (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL);
  v51[6] = ((unsigned __int16)(v20 >> 10) + LOWORD(qword_1801CBB00[v8 + 7]) * LOWORD(a1)) & 0x3FF;
  v22 = (v21 >> 10) + qword_1801CBB00[v8 + 6] * (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL);
  v51[5] = ((unsigned __int16)(v21 >> 10) + LOWORD(qword_1801CBB00[v8 + 6]) * LOWORD(a1)) & 0x3FF;
  v23 = (v22 >> 10) + qword_1801CBB00[v8 + 5] * (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL);
  v51[4] = ((unsigned __int16)(v22 >> 10) + LOWORD(qword_1801CBB00[v8 + 5]) * LOWORD(a1)) & 0x3FF;
  v24 = (v23 >> 10) + qword_1801CBB00[v8 + 4] * (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL);
  v51[3] = ((unsigned __int16)(v23 >> 10) + LOWORD(qword_1801CBB00[v8 + 4]) * LOWORD(a1)) & 0x3FF;
  v25 = (v24 >> 10) + qword_1801CBB00[v8 + 3] * (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL);
  v51[2] = ((unsigned __int16)(v24 >> 10) + LOWORD(qword_1801CBB00[v8 + 3]) * LOWORD(a1)) & 0x3FF;
  v26 = ((v25 >> 10) + qword_1801CBB00[v8 + 2] * (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL)) >> 10;
  v51[1] = ((unsigned __int16)(v25 >> 10) + LOWORD(qword_1801CBB00[v8 + 2]) * LOWORD(a1)) & 0x3FF;
  v27 = v8 + 1;
  v28 = LOWORD(qword_1801CBB00[v9]) * LOWORD(a1);
  v29 = 1;
  v30 = ((_WORD)v26 + LOWORD(qword_1801CBB00[v27]) * LOWORD(a1)) & 0x3FF;
  v31 = ((unsigned __int16)((v26 + qword_1801CBB00[v27] * (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL)) >> 10)
       + v28) & 0x3FF;
  v51[0] = v30;
  v32 = ((v30 | (unsigned __int64)(v31 << 10)) >> (10 - (unsigned __int8)v10 - 1)) & 7;
  v33 = v32 >> 1;
  v34 = (1LL << (10 - (unsigned __int8)v10)) - 1;
  v35 = v32 & 1;
  if ( v35 )
  {
    v36 = v34 & ~v30;
    *a4 = ((_BYTE)v33 + 1) & 3;
    if ( v36 < 0x20000000000000LL )
    {
      v37 = v51;
      do
      {
        v38 = v37[1];
        ++v37;
        ++v29;
        v36 = (v36 << 10) | ~(_WORD)v38 & 0x3FF;
      }
      while ( v36 < 0x20000000000000LL );
    }
    v39 = ~v51[v29];
  }
  else
  {
    *a4 = v33;
    v40 = v51;
    v36 = v34 & v30;
    do
    {
      v36 = *++v40 | (v36 << 10);
      ++v29;
    }
    while ( v36 < 0x20000000000000LL );
    v39 = v51[v29];
  }
  v41 = v39 << 54;
  v42 = v10 - 10 * v29 + 52;
  do
  {
    ++v42;
    v41 = (v41 >> 1) | (v36 << 63);
    v36 >>= 1;
  }
  while ( v36 >= 0x20000000000000LL );
  v43 = (__int64)v42 << 52;
  v44 = (v43 + 0x3FF0000000000000LL) | v36 & 0xFFFFFFFFFFFFFLL;
  v45 = v44 | 0x8000000000000000uLL;
  if ( !v35 )
    v45 = v44;
  v46 = *(double *)&v45;
  v47 = COERCE_DOUBLE((v43 + 0x3CA0000000000000LL) | (v41 >> 12)) - COERCE_DOUBLE(v43 + 0x3CA0000000000000LL);
  if ( v35 )
    v48 = v47 * -2.0;
  else
    v48 = v47 + v47;
  result = v45 & 0xFFFFFFFFF8000000uLL;
  v50 = COERCE_DOUBLE(*(_QWORD *)&v46 & 0xFFFFFFFFF8000000uLL) * 1.570796310901642
      - v46 * 1.570796326794897
      + (v46 - COERCE_DOUBLE(*(_QWORD *)&v46 & 0xFFFFFFFFF8000000uLL)) * 1.570796310901642
      + COERCE_DOUBLE(*(_QWORD *)&v46 & 0xFFFFFFFFF8000000uLL) * 0.00000001589325471229586
      + (v46 - COERCE_DOUBLE(*(_QWORD *)&v46 & 0xFFFFFFFFF8000000uLL)) * 0.00000001589325471229586
      + v48 * 1.570796326794897
      + v46 * 6.123233995736765e-17;
  *a2 = v50 + v46 * 1.570796326794897;
  *a3 = v46 * 1.570796326794897 - (v50 + v46 * 1.570796326794897) + v50;
  return result;
}
