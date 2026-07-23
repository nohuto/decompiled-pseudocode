/*
 * XREFs of adler32_z @ 0x1801536D4
 * Callers:
 *     inflate @ 0x18014FA34 (inflate.c)
 *     deflate @ 0x180150D7C (deflate.c)
 *     deflateResetKeep @ 0x1801510E8 (deflateResetKeep.c)
 *     read_buf @ 0x180152D24 (read_buf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall adler32_z(unsigned int a1, unsigned __int8 *a2, unsigned __int64 a3)
{
  unsigned __int8 *v3; // r11
  unsigned int v4; // r9d
  unsigned int v5; // r10d
  unsigned int v6; // ecx
  unsigned int v7; // edx
  int v8; // eax
  int v10; // eax
  unsigned int v11; // r8d
  unsigned __int64 v12; // rcx
  int v13; // edx
  unsigned int v14; // r9d
  unsigned int v15; // r10d
  unsigned int v16; // r9d
  unsigned int v17; // r10d
  unsigned int v18; // r9d
  unsigned int v19; // r10d
  unsigned int v20; // r9d
  unsigned int v21; // r10d
  unsigned int v22; // r9d
  unsigned int v23; // r10d
  unsigned int v24; // r9d
  unsigned int v25; // r10d
  unsigned int v26; // r9d
  int v27; // r10d
  unsigned int v28; // r9d
  int v29; // r10d
  unsigned int v30; // r9d
  int v31; // r10d
  int v32; // r9d
  int v33; // r10d
  int v34; // r9d
  int v35; // r10d
  int v36; // r9d
  int v37; // r10d
  int v38; // r9d
  int v39; // r10d
  int v40; // r9d
  int v41; // r10d
  int v42; // r9d
  int v43; // eax
  int v44; // r10d
  unsigned __int64 v45; // rcx
  unsigned int v46; // r9d
  unsigned int v47; // r10d
  unsigned int v48; // r9d
  unsigned int v49; // r10d
  unsigned int v50; // r9d
  unsigned int v51; // r10d
  unsigned int v52; // r9d
  unsigned int v53; // r10d
  unsigned int v54; // r9d
  unsigned int v55; // r10d
  unsigned int v56; // r9d
  unsigned int v57; // r10d
  unsigned int v58; // r9d
  int v59; // r10d
  unsigned int v60; // r9d
  int v61; // r10d
  unsigned int v62; // r9d
  int v63; // r10d
  int v64; // r9d
  int v65; // r10d
  int v66; // r9d
  int v67; // r10d
  int v68; // r9d
  int v69; // r10d
  int v70; // r9d
  int v71; // r10d
  int v72; // r9d
  int v73; // r10d
  int v74; // r9d
  int v75; // eax
  int v76; // r10d
  int v77; // eax

  v3 = a2;
  if ( a2 && a3 >= 0x40 && x86_cpu_enable_ssse3 )
    return adler32_simd_();
  v4 = (unsigned __int16)a1;
  v5 = HIWORD(a1);
  if ( a3 == 1 )
  {
    v6 = (unsigned __int16)a1 + *a2;
    v7 = v6 - 65521;
    if ( v6 < 0xFFF1 )
      v7 = v6;
    v8 = v7 + v5 - 65521;
    if ( v7 + v5 < 0xFFF1 )
      v8 = v7 + v5;
    return v7 | (v8 << 16);
  }
  if ( !a2 )
    return 1LL;
  if ( a3 >= 0x10 )
  {
    if ( a3 >= 0x15B0 )
    {
      v12 = a3 / 0x15B0;
      a3 %= 0x15B0uLL;
      do
      {
        v13 = 347;
        do
        {
          v14 = *v3 + v4;
          v15 = v14 + v5;
          v16 = v3[1] + v14;
          v17 = v16 + v15;
          v18 = v3[2] + v16;
          v19 = v18 + v17;
          v20 = v3[3] + v18;
          v21 = v20 + v19;
          v22 = v3[4] + v20;
          v23 = v22 + v21;
          v24 = v3[5] + v22;
          v25 = v24 + v23;
          v26 = v3[6] + v24;
          v27 = v26 + v25;
          v28 = v3[7] + v26;
          v29 = v28 + v27;
          v30 = v3[8] + v28;
          v31 = v30 + v29;
          v32 = v3[9] + v30;
          v33 = v32 + v31;
          v34 = v3[10] + v32;
          v35 = v34 + v33;
          v36 = v3[11] + v34;
          v37 = v36 + v35;
          v38 = v3[12] + v36;
          v39 = v38 + v37;
          v40 = v3[13] + v38;
          v41 = v40 + v39;
          v42 = v3[14] + v40;
          v43 = v3[15];
          v44 = v42 + v41;
          v3 += 16;
          v4 = v43 + v42;
          v5 = v4 + v44;
          --v13;
        }
        while ( v13 );
        v4 %= 0xFFF1u;
        v5 %= 0xFFF1u;
        --v12;
      }
      while ( v12 );
      if ( !a3 )
        return v4 | (v5 << 16);
      if ( a3 < 0x10 )
        goto LABEL_34;
    }
    v45 = a3 >> 4;
    a3 += -16LL * (a3 >> 4);
    do
    {
      v46 = *v3 + v4;
      v47 = v46 + v5;
      v48 = v3[1] + v46;
      v49 = v48 + v47;
      v50 = v3[2] + v48;
      v51 = v50 + v49;
      v52 = v3[3] + v50;
      v53 = v52 + v51;
      v54 = v3[4] + v52;
      v55 = v54 + v53;
      v56 = v3[5] + v54;
      v57 = v56 + v55;
      v58 = v3[6] + v56;
      v59 = v58 + v57;
      v60 = v3[7] + v58;
      v61 = v60 + v59;
      v62 = v3[8] + v60;
      v63 = v62 + v61;
      v64 = v3[9] + v62;
      v65 = v64 + v63;
      v66 = v3[10] + v64;
      v67 = v66 + v65;
      v68 = v3[11] + v66;
      v69 = v68 + v67;
      v70 = v3[12] + v68;
      v71 = v70 + v69;
      v72 = v3[13] + v70;
      v73 = v72 + v71;
      v74 = v3[14] + v72;
      v75 = v3[15];
      v76 = v74 + v73;
      v3 += 16;
      v4 = v75 + v74;
      v5 = v4 + v76;
      --v45;
    }
    while ( v45 );
    if ( a3 )
    {
LABEL_34:
      do
      {
        v77 = *v3++;
        v4 += v77;
        v5 += v4;
        --a3;
      }
      while ( a3 );
    }
    v4 %= 0xFFF1u;
    v5 %= 0xFFF1u;
    return v4 | (v5 << 16);
  }
  for ( ; a3; --a3 )
  {
    v10 = *v3++;
    v4 += v10;
    v5 += v4;
  }
  v11 = v4 - 65521;
  if ( v4 < 0xFFF1 )
    v11 = v4;
  return v11 | ((v5 + 15 * (v5 / 0xFFF1)) << 16);
}
