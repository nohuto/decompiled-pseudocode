/*
 * XREFs of RtlpComputeCrcInternal @ 0x140449440
 * Callers:
 *     RtlCrc32 @ 0x1404493B0 (RtlCrc32.c)
 *     IopLiveDumpWriteDumpFile @ 0x1404957D4 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpBufferDumpData @ 0x1405967F8 (IopLiveDumpBufferDumpData.c)
 *     PopEnsureErratumSubscribed @ 0x1405D0700 (PopEnsureErratumSubscribed.c)
 *     RtlCrc64 @ 0x1405E7EE0 (RtlCrc64.c)
 *     MdlInvariantPostProcessing1 @ 0x140610090 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x14061029C (MdlInvariantPreProcessing1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpComputeCrcInternal(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // r15
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdx
  char v12; // cl
  unsigned __int64 v14; // rdx
  __int64 v15; // r12
  __int64 v16; // r13
  __int64 v17; // r8
  __int64 v18; // rbp
  __int64 v19; // r14
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rbp
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r12
  __int64 v26; // rcx
  __int64 v27; // r12
  __int64 v28; // rcx
  __int64 v29; // r12
  __int64 v30; // rcx
  __int64 v31; // rdx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // r9
  char v64; // cl
  __int64 v65; // [rsp+48h] [rbp+10h]

  v5 = 0LL;
  v65 = *(_QWORD *)(a4 + 32);
  v4 = v65;
  v6 = a3 ^ v65;
  v7 = a4;
  v8 = a2;
  v9 = a1;
  v10 = -(int)a1 & 7;
  if ( (-(int)a1 & 7) != 0 )
  {
    v63 = 0LL;
    if ( v10 > a2 )
      v10 = a2;
    if ( v10 )
    {
      do
      {
        v64 = *(_BYTE *)(v63 + v9);
        ++v63;
        v6 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 8LL * (unsigned __int8)(v6 ^ v64)) ^ (v6 >> 8);
      }
      while ( v63 < v10 );
    }
    v8 = a2 - v10;
    v9 += v10;
  }
  v11 = v8 - (v8 & 0x1F);
  if ( v11 >= 0x40 )
  {
    v14 = v9 + v11 - 32;
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    v8 &= 0x1Fu;
    if ( v9 < v14 )
    {
      v18 = 0LL;
      v19 = *(_QWORD *)(v7 + 16);
      do
      {
        _mm_prefetch((const char *)(v9 + 256), 2);
        v20 = *(_QWORD *)(v9 + 16) ^ v16;
        v21 = *(_QWORD *)(v9 + 8) ^ v15;
        v22 = *(_QWORD *)(v9 + 24) ^ v18;
        v23 = *(_QWORD *)v9 ^ v6;
        v24 = (unsigned __int8)v21;
        v21 >>= 8;
        v25 = *(_QWORD *)(v19 + 8 * v24 + 14336);
        v26 = (unsigned __int8)v21;
        v21 >>= 8;
        v27 = *(_QWORD *)(v19 + 8 * v26 + 12288) ^ v25;
        v28 = (unsigned __int8)v21;
        v21 >>= 8;
        v29 = *(_QWORD *)(v19 + 8 * v28 + 10240) ^ v27;
        v30 = (unsigned __int8)v21;
        v21 >>= 8;
        v9 += 32LL;
        v6 = *(_QWORD *)(v19 + 8 * HIBYTE(v23)) ^ *(_QWORD *)(v19 + 8LL * BYTE6(v23) + 2048) ^ *(_QWORD *)(v19 + 8LL * BYTE5(v23) + 4096) ^ *(_QWORD *)(v19 + 8LL * BYTE4(v23) + 6144) ^ *(_QWORD *)(v19 + 8LL * BYTE3(v23) + 0x2000) ^ *(_QWORD *)(v19 + 8LL * BYTE2(v23) + 10240) ^ *(_QWORD *)(v19 + 8LL * BYTE1(v23) + 12288) ^ *(_QWORD *)(v19 + 8LL * (unsigned __int8)v23 + 14336);
        v15 = *(_QWORD *)(v19 + 8 * (v21 >> 24)) ^ *(_QWORD *)(v19 + 8LL * BYTE2(v21) + 2048) ^ *(_QWORD *)(v19 + 8LL * BYTE1(v21) + 4096) ^ *(_QWORD *)(v19 + 8LL * (unsigned __int8)v21 + 6144) ^ *(_QWORD *)(v19 + 8 * v30 + 0x2000) ^ v29;
        v16 = *(_QWORD *)(v19 + 8 * HIBYTE(v20)) ^ *(_QWORD *)(v19 + 8LL * BYTE6(v20) + 2048) ^ *(_QWORD *)(v19 + 8LL * BYTE5(v20) + 4096) ^ *(_QWORD *)(v19 + 8LL * BYTE4(v20) + 6144) ^ *(_QWORD *)(v19 + 8LL * BYTE3(v20) + 0x2000) ^ *(_QWORD *)(v19 + 8LL * BYTE2(v20) + 10240) ^ *(_QWORD *)(v19 + 8LL * BYTE1(v20) + 12288) ^ *(_QWORD *)(v19 + 8LL * (unsigned __int8)v20 + 14336);
        v18 = *(_QWORD *)(v19 + 8 * HIBYTE(v22)) ^ *(_QWORD *)(v19 + 8LL * BYTE6(v22) + 2048) ^ *(_QWORD *)(v19 + 8LL * BYTE5(v22) + 4096) ^ *(_QWORD *)(v19 + 8LL * BYTE4(v22) + 6144) ^ *(_QWORD *)(v19 + 8LL * BYTE3(v22) + 0x2000) ^ *(_QWORD *)(v19 + 8LL * BYTE2(v22) + 10240) ^ *(_QWORD *)(v19 + 8LL * BYTE1(v22) + 12288) ^ *(_QWORD *)(v19 + 8LL * (unsigned __int8)v22 + 14336);
      }
      while ( v9 < v14 );
      v7 = a4;
      v17 = v18;
      v4 = v65;
    }
    v31 = *(_QWORD *)(v7 + 8);
    v32 = *(_QWORD *)(v31 + 8LL * (unsigned __int8)(*(_BYTE *)v9 ^ v6)) ^ ((*(_QWORD *)v9 ^ v6) >> 8);
    v33 = *(_QWORD *)(v31 + 8LL * (unsigned __int8)v32) ^ (v32 >> 8);
    v34 = *(_QWORD *)(v31 + 8LL * (unsigned __int8)v33) ^ (v33 >> 8);
    v35 = *(_QWORD *)(v31 + 8LL * (unsigned __int8)v34) ^ (v34 >> 8);
    v36 = *(_QWORD *)(v31 + 8LL * (unsigned __int8)v35) ^ (v35 >> 8);
    v37 = *(_QWORD *)(v31 + 8LL * (unsigned __int8)v36) ^ (v36 >> 8);
    v38 = *(_QWORD *)(v31 + 8LL * (unsigned __int8)v37) ^ (v37 >> 8);
    v39 = v15 ^ *(_QWORD *)(v9 + 8) ^ *(_QWORD *)(v31 + 8LL * (unsigned __int8)v38) ^ (v38 >> 8);
    v40 = *(_QWORD *)(v31 + 8LL * (unsigned __int8)v39) ^ (v39 >> 8);
    v41 = *(_QWORD *)(v31 + 8LL * (unsigned __int8)v40) ^ (v40 >> 8);
    v42 = *(_QWORD *)(v31 + 8LL * (unsigned __int8)v41) ^ (v41 >> 8);
    v43 = *(_QWORD *)(v31 + 8LL * (unsigned __int8)v42) ^ (v42 >> 8);
    v44 = *(_QWORD *)(v31 + 8LL * (unsigned __int8)v43) ^ (v43 >> 8);
    v45 = *(_QWORD *)(v31 + 8LL * (unsigned __int8)v44) ^ (v44 >> 8);
    v46 = *(_QWORD *)(v31 + 8LL * (unsigned __int8)v45) ^ (v45 >> 8);
    v47 = v16 ^ *(_QWORD *)(v9 + 16) ^ *(_QWORD *)(v31 + 8LL * (unsigned __int8)v46) ^ (v46 >> 8);
    v48 = *(_QWORD *)(v31 + 8LL * (unsigned __int8)v47) ^ (v47 >> 8);
    v49 = *(_QWORD *)(v31 + 8LL * (unsigned __int8)v48) ^ (v48 >> 8);
    v50 = *(_QWORD *)(v31 + 8LL * (unsigned __int8)v49) ^ (v49 >> 8);
    v51 = *(_QWORD *)(v31 + 8LL * (unsigned __int8)v50) ^ (v50 >> 8);
    v52 = *(_QWORD *)(v31 + 8LL * (unsigned __int8)v51) ^ (v51 >> 8);
    v53 = *(_QWORD *)(v31 + 8LL * (unsigned __int8)v52) ^ (v52 >> 8);
    v54 = *(_QWORD *)(v31 + 8LL * (unsigned __int8)v53) ^ (v53 >> 8);
    v55 = v17 ^ *(_QWORD *)(v9 + 24) ^ *(_QWORD *)(v31 + 8LL * (unsigned __int8)v54) ^ (v54 >> 8);
    v56 = *(_QWORD *)(v31 + 8LL * (unsigned __int8)v55) ^ (v55 >> 8);
    v57 = *(_QWORD *)(v31 + 8LL * (unsigned __int8)v56) ^ (v56 >> 8);
    v58 = *(_QWORD *)(v31 + 8LL * (unsigned __int8)v57) ^ (v57 >> 8);
    v59 = *(_QWORD *)(v31 + 8LL * (unsigned __int8)v58) ^ (v58 >> 8);
    v60 = *(_QWORD *)(v31 + 8LL * (unsigned __int8)v59) ^ (v59 >> 8);
    v61 = *(_QWORD *)(v31 + 8LL * (unsigned __int8)v60) ^ (v60 >> 8);
    v62 = *(_QWORD *)(v31 + 8LL * (unsigned __int8)v61) ^ (v61 >> 8);
    v6 = *(_QWORD *)(v31 + 8LL * (unsigned __int8)v62) ^ (v62 >> 8);
    v9 += 32LL;
  }
  if ( v8 )
  {
    do
    {
      v12 = *(_BYTE *)(v5 + v9);
      ++v5;
      v6 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 8LL * (unsigned __int8)(v6 ^ v12)) ^ (v6 >> 8);
    }
    while ( v5 < v8 );
  }
  return v4 ^ v6;
}
