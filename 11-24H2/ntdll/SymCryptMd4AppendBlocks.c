/*
 * XREFs of SymCryptMd4AppendBlocks @ 0x18015F430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptMd4AppendBlocks(int *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  int v4; // edi
  int v5; // ebx
  int v6; // r10d
  int v7; // r9d
  int *v8; // r12
  int v9; // ebp
  int v10; // r13d
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // r8d
  int v15; // r9d
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  int v19; // r8d
  int v20; // r10d
  int v21; // r14d
  int v22; // edi
  int v23; // r15d
  int v24; // esi
  int v25; // r12d
  int v26; // r9d
  int v27; // eax
  int v28; // ecx
  int v29; // edx
  int v30; // r8d
  int v31; // r9d
  int v32; // r10d
  int v33; // edx
  int v34; // r8d
  int v35; // r9d
  int v36; // r10d
  int v37; // edx
  int v38; // r11d
  int v39; // r8d
  int v40; // r9d
  int v41; // r10d
  int v42; // edx
  int v43; // ebx
  int v44; // r11d
  int v45; // r8d
  int v46; // r10d
  int v47; // r9d
  int v48; // edx
  int v49; // r8d
  int v50; // r10d
  int v51; // ecx
  int v52; // r9d
  int v53; // edx
  int v54; // r8d
  int v55; // ecx
  int v56; // r10d
  int v57; // edx
  int v58; // r9d
  int v59; // ecx
  int v60; // r11d
  int v61; // r8d
  int v62; // edx
  int v63; // ecx
  int v64; // r10d
  bool v65; // zf
  int v67; // [rsp+0h] [rbp-E8h]
  int v68; // [rsp+4h] [rbp-E4h]
  int v69; // [rsp+8h] [rbp-E0h]
  int v70; // [rsp+Ch] [rbp-DCh]
  int v71; // [rsp+10h] [rbp-D8h]
  int v72; // [rsp+14h] [rbp-D4h]
  int v73; // [rsp+18h] [rbp-D0h]
  int v74; // [rsp+1Ch] [rbp-CCh]
  int v75; // [rsp+20h] [rbp-C8h]
  int v76; // [rsp+24h] [rbp-C4h]
  int v77; // [rsp+28h] [rbp-C0h]
  int v78; // [rsp+2Ch] [rbp-BCh]
  int v79; // [rsp+30h] [rbp-B8h]
  __int64 v80; // [rsp+38h] [rbp-B0h]
  unsigned __int64 v81; // [rsp+40h] [rbp-A8h]
  unsigned __int64 v83; // [rsp+50h] [rbp-98h]

  v4 = *a1;
  v5 = a1[3];
  v6 = a1[1];
  v7 = a1[2];
  if ( a3 >= 0x40 )
  {
    v77 = *a1;
    v8 = (int *)(a2 + 8);
    v81 = a3 >> 6;
    v75 = a1[3];
    v76 = a1[2];
    v83 = -64LL * (a3 >> 6) + a3;
    v74 = a1[1];
    v80 = a2 + 8;
    do
    {
      v9 = v8[6];
      v10 = v8[7];
      v67 = *(v8 - 2);
      v69 = *(v8 - 1);
      v68 = *v8;
      v11 = __ROL4__(v67 + v4 + (v5 ^ v6 & (v5 ^ v7)), 3);
      v79 = v8[2];
      v78 = v8[4];
      v12 = __ROL4__(v69 + v5 + (v7 ^ v11 & (v7 ^ v6)), 7);
      v71 = v8[1];
      v13 = __ROL4__(*v8 + v7 + (v6 ^ v12 & (v6 ^ v11)), 11);
      v70 = v8[3];
      v14 = __ROL4__(v71 + v6 + (v11 ^ v13 & (v12 ^ v11)), 19);
      v15 = __ROL4__(v79 + v11 + (v12 ^ v14 & (v13 ^ v12)), 3);
      v16 = __ROL4__(v70 + v12 + (v13 ^ v15 & (v14 ^ v13)), 7);
      v73 = v8[5];
      v17 = __ROL4__(v78 + v13 + (v14 ^ v16 & (v15 ^ v14)), 11);
      v18 = __ROL4__(v73 + v14 + (v15 ^ v17 & (v16 ^ v15)), 19);
      v19 = __ROL4__(v9 + v15 + (v16 ^ v18 & (v17 ^ v16)), 3);
      v20 = v8[9];
      v21 = v8[8];
      v22 = v8[10];
      v23 = v8[11];
      v24 = v8[12];
      v25 = v8[13];
      v72 = v20;
      v26 = __ROL4__(v10 + v16 + (v17 ^ v19 & (v18 ^ v17)), 7);
      v27 = __ROL4__(v21 + v17 + (v18 ^ v26 & (v19 ^ v18)), 11);
      v28 = __ROL4__(v20 + v18 + (v19 ^ v27 & (v26 ^ v19)), 19);
      v29 = __ROL4__(v22 + v19 + (v26 ^ v28 & (v27 ^ v26)), 3);
      v30 = __ROL4__(v23 + v26 + (v27 ^ v29 & (v28 ^ v27)), 7);
      v31 = __ROL4__(v24 + v27 + (v28 ^ v30 & (v28 ^ v29)), 11);
      v32 = __ROL4__(v25 + v28 + (v29 ^ v31 & (v29 ^ v30)), 19);
      v33 = __ROL4__(v29 + (v31 & v32 | v30 & (v31 | v32)) + v67 + 1518500249, 3);
      v34 = __ROL4__(v79 + (v32 & v33 | v31 & (v32 | v33)) + 1518500249 + v30, 5);
      v35 = __ROL4__(v9 + (v33 & v34 | v32 & (v33 | v34)) + 1518500249 + v31, 9);
      v36 = __ROL4__(v22 + (v34 & v35 | v33 & (v34 | v35)) + 1518500249 + v32, 13);
      v37 = __ROL4__(v33 + (v35 & v36 | v34 & (v35 | v36)) + v69 + 1518500249, 3);
      v38 = __ROL4__(v70 + (v36 & v37 | v35 & (v36 | v37)) + v34 + 1518500249, 5);
      v39 = __ROL4__(v10 + (v37 & v38 | v36 & (v37 | v38)) + v35 + 1518500249, 9);
      v40 = __ROL4__(v23 + (v38 & v39 | v37 & (v38 | v39)) + v36 + 1518500249, 13);
      v41 = __ROL4__(v68 + (v39 & v40 | v38 & (v39 | v40)) + v37 + 1518500249, 3);
      v42 = __ROL4__(v78 + (v40 & v41 | v39 & (v40 | v41)) + v38 + 1518500249, 5);
      v43 = __ROL4__(v21 + (v41 & v42 | v40 & (v41 | v42)) + v39 + 1518500249, 9);
      v44 = __ROL4__(v24 + (v42 & v43 | v41 & (v42 | v43)) + v40 + 1518500249, 13);
      v45 = __ROL4__(v71 + (v43 & v44 | v42 & (v43 | v44)) + v41 + 1518500249, 3);
      v46 = __ROL4__(v73 + (v44 & v45 | v43 & (v44 | v45)) + v42 + 1518500249, 5);
      v47 = __ROL4__(v43 + v72 + (v45 & v46 | v44 & (v45 | v46)) + 1518500249, 9);
      v48 = __ROL4__(v25 + v44 + (v47 & v46 | v45 & (v47 | v46)) + 1518500249, 13);
      v49 = __ROL4__(v45 + (v46 ^ v47 ^ v48) + v67 + 1859775393, 3);
      v50 = __ROL4__(v9 + (v49 ^ v47 ^ v48) + 1859775393 + v46, 9);
      v51 = __ROL4__(v47 + (v49 ^ v48 ^ v50) + v79 + 1859775393, 11);
      v52 = __ROL4__(v22 + (v50 ^ v49 ^ v51) + v48 + 1859775393, 15);
      v53 = __ROL4__(v68 + (v52 ^ v50 ^ v51) + v49 + 1859775393, 3);
      v54 = __ROL4__(v21 + (v51 ^ v52 ^ v53) + v50 + 1859775393, 9);
      v55 = __ROL4__(v51 + (v52 ^ v53 ^ v54) + v78 + 1859775393, 11);
      v56 = __ROL4__(v24 + (v54 ^ v53 ^ v55) + v52 + 1859775393, 15);
      v57 = __ROL4__(v53 + (v56 ^ v54 ^ v55) + v69 + 1859775393, 3);
      v58 = __ROL4__(v10 + v54 + 1859775393 + (v55 ^ v56 ^ v57), 9);
      v59 = __ROL4__(v55 + (v56 ^ v57 ^ v58) + v70 + 1859775393, 11);
      v60 = __ROL4__(v56 + v23 + (v58 ^ v57 ^ v59) + 1859775393, 15);
      v61 = __ROL4__(v57 + (v60 ^ v58 ^ v59) + v71 + 1859775393, 3);
      v62 = __ROL4__(v58 + (v60 ^ v61 ^ v59) + v72 + 1859775393, 9);
      v4 = v61 + v77;
      v77 = v4;
      v63 = __ROL4__(v59 + (v61 ^ v62 ^ v60) + v73 + 1859775393, 11);
      v75 += v62;
      v5 = v75;
      v76 += v63;
      v7 = v76;
      *a1 = v4;
      a1[3] = v75;
      a1[2] = v76;
      v64 = __ROL4__(v25 + v60 + (v61 ^ v62 ^ v63) + 1859775393, 15);
      v8 = (int *)(v80 + 64);
      v6 = v74 + v64;
      v65 = v81-- == 1;
      v74 = v6;
      a1[1] = v6;
      v80 += 64LL;
    }
    while ( !v65 );
    a3 = v83;
  }
  *a4 = a3;
  return 0LL;
}
