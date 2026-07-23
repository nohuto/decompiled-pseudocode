/*
 * XREFs of RtlpComputeCrcInternal @ 0x1800F3670
 * Callers:
 *     RtlCrc32 @ 0x1800F3610 (RtlCrc32.c)
 *     RtlCrc64 @ 0x18010FD80 (RtlCrc64.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpComputeCrcInternal(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // r14
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // r11
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rcx
  char v13; // cl
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rdi
  unsigned __int64 v17; // r12
  __int64 v18; // rax
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // r11
  __int64 v25; // rcx
  __int64 v26; // r11
  __int64 v27; // rcx
  __int64 v28; // r11
  __int64 v29; // rcx
  __int64 v30; // rcx
  unsigned __int64 v31; // r11
  unsigned __int64 v32; // r11
  unsigned __int64 v33; // r11
  unsigned __int64 v34; // r11
  unsigned __int64 v35; // r11
  unsigned __int64 v36; // r11
  unsigned __int64 v37; // r11
  unsigned __int64 v38; // r11
  unsigned __int64 v39; // r11
  unsigned __int64 v40; // r11
  unsigned __int64 v41; // r11
  unsigned __int64 v42; // r11
  unsigned __int64 v43; // r11
  unsigned __int64 v44; // r11
  unsigned __int64 v45; // r11
  unsigned __int64 v46; // r11
  unsigned __int64 v47; // r11
  unsigned __int64 v48; // r11
  unsigned __int64 v49; // r11
  unsigned __int64 v50; // r11
  unsigned __int64 v51; // r11
  unsigned __int64 v52; // r11
  unsigned __int64 v53; // r11
  unsigned __int64 v54; // r11
  unsigned __int64 v55; // r11
  unsigned __int64 v56; // r11
  unsigned __int64 v57; // r11
  unsigned __int64 v58; // r11
  unsigned __int64 v59; // r11
  unsigned __int64 v60; // r11
  unsigned __int64 v61; // r11
  unsigned __int64 v62; // rdx
  char v63; // al

  v4 = a4[4];
  v6 = 0LL;
  v7 = a3 ^ v4;
  v9 = a1;
  v10 = -(int)a1 & 7;
  if ( (-(int)a1 & 7) != 0 )
  {
    v62 = 0LL;
    if ( v10 > a2 )
      v10 = a2;
    if ( v10 )
    {
      do
      {
        v63 = *(_BYTE *)(v62 + a1);
        ++v62;
        v7 = *(_QWORD *)(a4[1] + 8LL * (unsigned __int8)(v7 ^ v63)) ^ (v7 >> 8);
      }
      while ( v62 < v10 );
    }
    a2 -= v10;
    v9 = v10 + a1;
  }
  v11 = a2 - (a2 & 0x1F);
  if ( v11 >= 0x40 )
  {
    a2 &= 0x1Fu;
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    v17 = v11 + v9 - 32;
    if ( v9 < v17 )
    {
      v18 = a4[2];
      do
      {
        _mm_prefetch((const char *)(v9 + 256), 2);
        v19 = *(_QWORD *)(v9 + 8) ^ v14;
        v20 = *(_QWORD *)v9 ^ v7;
        v21 = *(_QWORD *)(v9 + 16) ^ v16;
        v22 = *(_QWORD *)(v9 + 24) ^ v15;
        v23 = (unsigned __int8)v20;
        v20 >>= 8;
        v24 = *(_QWORD *)(v18 + 8 * v23 + 14336);
        v25 = (unsigned __int8)v20;
        v20 >>= 8;
        v26 = *(_QWORD *)(v18 + 8 * v25 + 12288) ^ v24;
        v27 = (unsigned __int8)v20;
        v20 >>= 8;
        v28 = *(_QWORD *)(v18 + 8 * v27 + 10240) ^ v26;
        v29 = (unsigned __int8)v20;
        v20 >>= 8;
        v9 += 32LL;
        v7 = *(_QWORD *)(v18 + 8 * (v20 >> 24)) ^ *(_QWORD *)(v18 + 8LL * BYTE2(v20) + 2048) ^ *(_QWORD *)(v18 + 8LL * BYTE1(v20) + 4096) ^ *(_QWORD *)(v18 + 8LL * (unsigned __int8)v20 + 6144) ^ *(_QWORD *)(v18 + 8 * v29 + 0x2000) ^ v28;
        v14 = *(_QWORD *)(v18 + 8 * HIBYTE(v19)) ^ *(_QWORD *)(v18 + 8LL * BYTE6(v19) + 2048) ^ *(_QWORD *)(v18 + 8LL * BYTE5(v19) + 4096) ^ *(_QWORD *)(v18 + 8LL * BYTE4(v19) + 6144) ^ *(_QWORD *)(v18 + 8LL * BYTE3(v19) + 0x2000) ^ *(_QWORD *)(v18 + 8LL * BYTE2(v19) + 10240) ^ *(_QWORD *)(v18 + 8LL * BYTE1(v19) + 12288) ^ *(_QWORD *)(v18 + 8LL * (unsigned __int8)v19 + 14336);
        v16 = *(_QWORD *)(v18 + 8 * HIBYTE(v21)) ^ *(_QWORD *)(v18 + 8LL * BYTE6(v21) + 2048) ^ *(_QWORD *)(v18 + 8LL * BYTE5(v21) + 4096) ^ *(_QWORD *)(v18 + 8LL * BYTE4(v21) + 6144) ^ *(_QWORD *)(v18 + 8LL * BYTE3(v21) + 0x2000) ^ *(_QWORD *)(v18 + 8LL * BYTE2(v21) + 10240) ^ *(_QWORD *)(v18 + 8LL * BYTE1(v21) + 12288) ^ *(_QWORD *)(v18 + 8LL * (unsigned __int8)v21 + 14336);
        v15 = *(_QWORD *)(v18 + 8 * HIBYTE(v22)) ^ *(_QWORD *)(v18 + 8LL * BYTE6(v22) + 2048) ^ *(_QWORD *)(v18 + 8LL * BYTE5(v22) + 4096) ^ *(_QWORD *)(v18 + 8LL * BYTE4(v22) + 6144) ^ *(_QWORD *)(v18 + 8LL * BYTE3(v22) + 0x2000) ^ *(_QWORD *)(v18 + 8LL * BYTE2(v22) + 10240) ^ *(_QWORD *)(v18 + 8LL * BYTE1(v22) + 12288) ^ *(_QWORD *)(v18 + 8LL * (unsigned __int8)v22 + 14336);
      }
      while ( v9 < v17 );
      v6 = 0LL;
    }
    v30 = a4[1];
    v31 = *(_QWORD *)(v30 + 8LL * (unsigned __int8)(*(_BYTE *)v9 ^ v7)) ^ ((*(_QWORD *)v9 ^ v7) >> 8);
    v32 = *(_QWORD *)(v30 + 8LL * (unsigned __int8)v31) ^ (v31 >> 8);
    v33 = *(_QWORD *)(v30 + 8LL * (unsigned __int8)v32) ^ (v32 >> 8);
    v34 = *(_QWORD *)(v30 + 8LL * (unsigned __int8)v33) ^ (v33 >> 8);
    v35 = *(_QWORD *)(v30 + 8LL * (unsigned __int8)v34) ^ (v34 >> 8);
    v36 = *(_QWORD *)(v30 + 8LL * (unsigned __int8)v35) ^ (v35 >> 8);
    v37 = *(_QWORD *)(v30 + 8LL * (unsigned __int8)v36) ^ (v36 >> 8);
    v38 = v14 ^ *(_QWORD *)(v9 + 8) ^ *(_QWORD *)(v30 + 8LL * (unsigned __int8)v37) ^ (v37 >> 8);
    v39 = *(_QWORD *)(v30 + 8LL * (unsigned __int8)v38) ^ (v38 >> 8);
    v40 = *(_QWORD *)(v30 + 8LL * (unsigned __int8)v39) ^ (v39 >> 8);
    v41 = *(_QWORD *)(v30 + 8LL * (unsigned __int8)v40) ^ (v40 >> 8);
    v42 = *(_QWORD *)(v30 + 8LL * (unsigned __int8)v41) ^ (v41 >> 8);
    v43 = *(_QWORD *)(v30 + 8LL * (unsigned __int8)v42) ^ (v42 >> 8);
    v44 = *(_QWORD *)(v30 + 8LL * (unsigned __int8)v43) ^ (v43 >> 8);
    v45 = *(_QWORD *)(v30 + 8LL * (unsigned __int8)v44) ^ (v44 >> 8);
    v46 = v16 ^ *(_QWORD *)(v9 + 16) ^ *(_QWORD *)(v30 + 8LL * (unsigned __int8)v45) ^ (v45 >> 8);
    v47 = *(_QWORD *)(v30 + 8LL * (unsigned __int8)v46) ^ (v46 >> 8);
    v48 = *(_QWORD *)(v30 + 8LL * (unsigned __int8)v47) ^ (v47 >> 8);
    v49 = *(_QWORD *)(v30 + 8LL * (unsigned __int8)v48) ^ (v48 >> 8);
    v50 = *(_QWORD *)(v30 + 8LL * (unsigned __int8)v49) ^ (v49 >> 8);
    v51 = *(_QWORD *)(v30 + 8LL * (unsigned __int8)v50) ^ (v50 >> 8);
    v52 = *(_QWORD *)(v30 + 8LL * (unsigned __int8)v51) ^ (v51 >> 8);
    v53 = *(_QWORD *)(v30 + 8LL * (unsigned __int8)v52) ^ (v52 >> 8);
    v54 = v15 ^ *(_QWORD *)(v9 + 24) ^ *(_QWORD *)(v30 + 8LL * (unsigned __int8)v53) ^ (v53 >> 8);
    v55 = *(_QWORD *)(v30 + 8LL * (unsigned __int8)v54) ^ (v54 >> 8);
    v56 = *(_QWORD *)(v30 + 8LL * (unsigned __int8)v55) ^ (v55 >> 8);
    v57 = *(_QWORD *)(v30 + 8LL * (unsigned __int8)v56) ^ (v56 >> 8);
    v58 = *(_QWORD *)(v30 + 8LL * (unsigned __int8)v57) ^ (v57 >> 8);
    v59 = *(_QWORD *)(v30 + 8LL * (unsigned __int8)v58) ^ (v58 >> 8);
    v60 = *(_QWORD *)(v30 + 8LL * (unsigned __int8)v59) ^ (v59 >> 8);
    v61 = *(_QWORD *)(v30 + 8LL * (unsigned __int8)v60) ^ (v60 >> 8);
    v7 = *(_QWORD *)(v30 + 8LL * (unsigned __int8)v61) ^ (v61 >> 8);
    v9 += 32LL;
  }
  if ( a2 )
  {
    do
    {
      v13 = *(_BYTE *)(v6 + v9);
      ++v6;
      v7 = *(_QWORD *)(a4[1] + 8LL * (unsigned __int8)(v7 ^ v13)) ^ (v7 >> 8);
    }
    while ( v6 < a2 );
  }
  return v7 ^ v4;
}
