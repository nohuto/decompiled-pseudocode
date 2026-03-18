/*
 * XREFs of rotate::bScalePlgDDALToPlgDDA @ 0x140144B24
 * Callers:
 *     ?bInitPlgDDA@rotate@@YAHPEAU_PLGDDA@1@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x140143410 (-bInitPlgDDA@rotate@@YAHPEAU_PLGDDA@1@PEAU_RECTL@@1PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall rotate::bScalePlgDDALToPlgDDA(_QWORD *a1, _DWORD *a2)
{
  signed __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  signed __int64 v9; // rcx
  __int64 v10; // rax
  signed __int64 v11; // rcx
  __int64 v12; // rax
  signed __int64 v13; // rcx
  __int64 v14; // rax
  signed __int64 v15; // rcx
  __int64 v16; // rax
  signed __int64 v17; // rcx
  __int64 v18; // rax
  CCHAR MostSignificantBit; // al
  signed __int64 v21; // rcx
  __int64 v22; // rax
  signed __int64 v23; // rcx
  __int64 v24; // rax
  signed __int64 v25; // rcx
  __int64 v26; // rax
  signed __int64 v27; // rcx
  __int64 v28; // rax
  signed __int64 v29; // rcx
  __int64 v30; // rax
  signed __int64 v31; // rcx
  __int64 v32; // rax
  signed __int64 v33; // rcx
  __int64 v34; // rax
  signed __int64 v35; // rcx
  __int64 v36; // rax
  signed __int64 v37; // rcx
  __int64 v38; // rax
  signed __int64 v39; // rcx
  __int64 v40; // rax
  signed __int64 v41; // rcx
  __int64 v42; // rax
  signed __int64 v43; // rcx
  __int64 v44; // rax
  signed __int64 v45; // rcx
  __int64 v46; // rax
  signed __int64 v47; // rcx
  __int64 v48; // rax
  signed __int64 v49; // rcx
  __int64 v50; // rax
  signed __int64 v51; // rcx
  __int64 v52; // rax
  signed __int64 v53; // rcx
  __int64 v54; // rax
  signed __int64 v55; // rcx
  __int64 v56; // rax
  signed __int64 v57; // rcx
  __int64 v58; // rax
  signed __int64 v59; // rcx
  __int64 v60; // rax
  signed __int64 v61; // rcx
  __int64 v62; // rax
  CCHAR v63; // al
  CCHAR v64; // al
  CCHAR v65; // al
  CCHAR v66; // al
  CCHAR v67; // al
  CCHAR v68; // al
  CCHAR v69; // al
  CCHAR v70; // al
  CCHAR v71; // al
  CCHAR v72; // al
  CCHAR v73; // al
  CCHAR v74; // al
  CCHAR v75; // al
  CCHAR v76; // al
  CCHAR v77; // al
  CCHAR v78; // al
  CCHAR v79; // al
  CCHAR v80; // al
  CCHAR v81; // al
  CCHAR v82; // al
  CCHAR v83; // al

  memset_0(a2, 0, 0x18CuLL);
  v4 = a1[35];
  if ( (unsigned __int64)(a1[1] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[1] = *((_DWORD *)a1 + 2);
  if ( v4 > 0x7FFFFFFF )
    v5 = (__int64)a1[2] >> (RtlFindMostSignificantBit(v4) - 30);
  else
    LODWORD(v5) = *((_DWORD *)a1 + 4);
  a2[2] = v5;
  if ( (unsigned __int64)(a1[3] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[3] = *((_DWORD *)a1 + 6);
  if ( v4 > 0x7FFFFFFF )
    v6 = (__int64)a1[4] >> (RtlFindMostSignificantBit(v4) - 30);
  else
    LODWORD(v6) = *((_DWORD *)a1 + 8);
  a2[4] = v6;
  if ( (unsigned __int64)(a1[5] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[5] = *((_DWORD *)a1 + 10);
  if ( v4 > 0x7FFFFFFF )
    v7 = (__int64)a1[6] >> (RtlFindMostSignificantBit(v4) - 30);
  else
    LODWORD(v7) = *((_DWORD *)a1 + 12);
  a2[6] = v7;
  if ( (unsigned __int64)(a1[7] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[7] = *((_DWORD *)a1 + 14);
  if ( v4 > 0x7FFFFFFF )
    v8 = (__int64)a1[8] >> (RtlFindMostSignificantBit(v4) - 30);
  else
    LODWORD(v8) = *((_DWORD *)a1 + 16);
  a2[8] = v8;
  if ( (unsigned __int64)(a1[9] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[9] = *((_DWORD *)a1 + 18);
  v9 = a1[83];
  if ( v9 > 0x7FFFFFFF )
    v10 = (__int64)a1[10] >> (RtlFindMostSignificantBit(v9) - 30);
  else
    LODWORD(v10) = *((_DWORD *)a1 + 20);
  a2[10] = v10;
  if ( (unsigned __int64)(a1[11] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[11] = *((_DWORD *)a1 + 22);
  v11 = a1[86];
  if ( v11 > 0x7FFFFFFF )
    v12 = (__int64)a1[12] >> (RtlFindMostSignificantBit(v11) - 30);
  else
    LODWORD(v12) = *((_DWORD *)a1 + 24);
  a2[12] = v12;
  if ( (unsigned __int64)(a1[13] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[13] = *((_DWORD *)a1 + 26);
  v13 = a1[86];
  if ( v13 > 0x7FFFFFFF )
    v14 = (__int64)a1[14] >> (RtlFindMostSignificantBit(v13) - 30);
  else
    LODWORD(v14) = *((_DWORD *)a1 + 28);
  a2[14] = v14;
  if ( (unsigned __int64)(a1[15] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[15] = *((_DWORD *)a1 + 30);
  v15 = a1[83];
  if ( v15 > 0x7FFFFFFF )
    v16 = (__int64)a1[16] >> (RtlFindMostSignificantBit(v15) - 30);
  else
    LODWORD(v16) = *((_DWORD *)a1 + 32);
  a2[16] = v16;
  if ( (unsigned __int64)(a1[33] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[33] = *((_DWORD *)a1 + 66);
  v17 = a1[35];
  if ( v17 > 0x7FFFFFFF )
  {
    MostSignificantBit = RtlFindMostSignificantBit(v17);
    a2[34] = (__int64)a1[34] >> (MostSignificantBit - 30);
    v18 = (__int64)a1[35] >> (MostSignificantBit - 30);
  }
  else
  {
    a2[34] = *((_DWORD *)a1 + 68);
    LODWORD(v18) = *((_DWORD *)a1 + 70);
  }
  a2[35] = v18;
  if ( (unsigned __int64)(a1[36] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[36] = *((_DWORD *)a1 + 72);
  v21 = a1[38];
  if ( v21 > 0x7FFFFFFF )
  {
    v63 = RtlFindMostSignificantBit(v21);
    a2[37] = (__int64)a1[37] >> (v63 - 30);
    v22 = (__int64)a1[38] >> (v63 - 30);
  }
  else
  {
    a2[37] = *((_DWORD *)a1 + 74);
    LODWORD(v22) = *((_DWORD *)a1 + 76);
  }
  a2[38] = v22;
  if ( (unsigned __int64)(a1[39] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[39] = *((_DWORD *)a1 + 78);
  v23 = a1[41];
  if ( v23 > 0x7FFFFFFF )
  {
    v64 = RtlFindMostSignificantBit(v23);
    a2[40] = (__int64)a1[40] >> (v64 - 30);
    v24 = (__int64)a1[41] >> (v64 - 30);
  }
  else
  {
    a2[40] = *((_DWORD *)a1 + 80);
    LODWORD(v24) = *((_DWORD *)a1 + 82);
  }
  a2[41] = v24;
  if ( (unsigned __int64)(a1[42] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[42] = *((_DWORD *)a1 + 84);
  v25 = a1[44];
  if ( v25 > 0x7FFFFFFF )
  {
    v65 = RtlFindMostSignificantBit(v25);
    a2[43] = (__int64)a1[43] >> (v65 - 30);
    v26 = (__int64)a1[44] >> (v65 - 30);
  }
  else
  {
    a2[43] = *((_DWORD *)a1 + 86);
    LODWORD(v26) = *((_DWORD *)a1 + 88);
  }
  a2[44] = v26;
  if ( (unsigned __int64)(a1[45] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[45] = *((_DWORD *)a1 + 90);
  v27 = a1[47];
  if ( v27 > 0x7FFFFFFF )
  {
    v66 = RtlFindMostSignificantBit(v27);
    a2[46] = (__int64)a1[46] >> (v66 - 30);
    v28 = (__int64)a1[47] >> (v66 - 30);
  }
  else
  {
    a2[46] = *((_DWORD *)a1 + 92);
    LODWORD(v28) = *((_DWORD *)a1 + 94);
  }
  a2[47] = v28;
  if ( (unsigned __int64)(a1[48] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[48] = *((_DWORD *)a1 + 96);
  v29 = a1[50];
  if ( v29 > 0x7FFFFFFF )
  {
    v67 = RtlFindMostSignificantBit(v29);
    a2[49] = (__int64)a1[49] >> (v67 - 30);
    v30 = (__int64)a1[50] >> (v67 - 30);
  }
  else
  {
    a2[49] = *((_DWORD *)a1 + 98);
    LODWORD(v30) = *((_DWORD *)a1 + 100);
  }
  a2[50] = v30;
  if ( (unsigned __int64)(a1[51] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[51] = *((_DWORD *)a1 + 102);
  v31 = a1[53];
  if ( v31 > 0x7FFFFFFF )
  {
    v68 = RtlFindMostSignificantBit(v31);
    a2[52] = (__int64)a1[52] >> (v68 - 30);
    v32 = (__int64)a1[53] >> (v68 - 30);
  }
  else
  {
    a2[52] = *((_DWORD *)a1 + 104);
    LODWORD(v32) = *((_DWORD *)a1 + 106);
  }
  a2[53] = v32;
  if ( (unsigned __int64)(a1[54] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[54] = *((_DWORD *)a1 + 108);
  v33 = a1[56];
  if ( v33 > 0x7FFFFFFF )
  {
    v69 = RtlFindMostSignificantBit(v33);
    a2[55] = (__int64)a1[55] >> (v69 - 30);
    v34 = (__int64)a1[56] >> (v69 - 30);
  }
  else
  {
    a2[55] = *((_DWORD *)a1 + 110);
    LODWORD(v34) = *((_DWORD *)a1 + 112);
  }
  a2[56] = v34;
  if ( (unsigned __int64)(a1[57] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[57] = *((_DWORD *)a1 + 114);
  v35 = a1[59];
  if ( v35 > 0x7FFFFFFF )
  {
    v70 = RtlFindMostSignificantBit(v35);
    a2[58] = (__int64)a1[58] >> (v70 - 30);
    v36 = (__int64)a1[59] >> (v70 - 30);
  }
  else
  {
    a2[58] = *((_DWORD *)a1 + 116);
    LODWORD(v36) = *((_DWORD *)a1 + 118);
  }
  a2[59] = v36;
  if ( (unsigned __int64)(a1[60] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[60] = *((_DWORD *)a1 + 120);
  v37 = a1[62];
  if ( v37 > 0x7FFFFFFF )
  {
    v71 = RtlFindMostSignificantBit(v37);
    a2[61] = (__int64)a1[61] >> (v71 - 30);
    v38 = (__int64)a1[62] >> (v71 - 30);
  }
  else
  {
    a2[61] = *((_DWORD *)a1 + 122);
    LODWORD(v38) = *((_DWORD *)a1 + 124);
  }
  a2[62] = v38;
  if ( (unsigned __int64)(a1[63] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[63] = *((_DWORD *)a1 + 126);
  v39 = a1[65];
  if ( v39 > 0x7FFFFFFF )
  {
    v72 = RtlFindMostSignificantBit(v39);
    a2[64] = (__int64)a1[64] >> (v72 - 30);
    v40 = (__int64)a1[65] >> (v72 - 30);
  }
  else
  {
    a2[64] = *((_DWORD *)a1 + 128);
    LODWORD(v40) = *((_DWORD *)a1 + 130);
  }
  a2[65] = v40;
  if ( (unsigned __int64)(a1[66] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[66] = *((_DWORD *)a1 + 132);
  v41 = a1[68];
  if ( v41 > 0x7FFFFFFF )
  {
    v73 = RtlFindMostSignificantBit(v41);
    a2[67] = (__int64)a1[67] >> (v73 - 30);
    v42 = (__int64)a1[68] >> (v73 - 30);
  }
  else
  {
    a2[67] = *((_DWORD *)a1 + 134);
    LODWORD(v42) = *((_DWORD *)a1 + 136);
  }
  a2[68] = v42;
  if ( (unsigned __int64)(a1[69] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[69] = *((_DWORD *)a1 + 138);
  v43 = a1[71];
  if ( v43 > 0x7FFFFFFF )
  {
    v74 = RtlFindMostSignificantBit(v43);
    a2[70] = (__int64)a1[70] >> (v74 - 30);
    v44 = (__int64)a1[71] >> (v74 - 30);
  }
  else
  {
    a2[70] = *((_DWORD *)a1 + 140);
    LODWORD(v44) = *((_DWORD *)a1 + 142);
  }
  a2[71] = v44;
  if ( (unsigned __int64)(a1[72] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[72] = *((_DWORD *)a1 + 144);
  v45 = a1[74];
  if ( v45 > 0x7FFFFFFF )
  {
    v75 = RtlFindMostSignificantBit(v45);
    a2[73] = (__int64)a1[73] >> (v75 - 30);
    v46 = (__int64)a1[74] >> (v75 - 30);
  }
  else
  {
    a2[73] = *((_DWORD *)a1 + 146);
    LODWORD(v46) = *((_DWORD *)a1 + 148);
  }
  a2[74] = v46;
  if ( (unsigned __int64)(a1[75] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[75] = *((_DWORD *)a1 + 150);
  v47 = a1[77];
  if ( v47 > 0x7FFFFFFF )
  {
    v76 = RtlFindMostSignificantBit(v47);
    a2[76] = (__int64)a1[76] >> (v76 - 30);
    v48 = (__int64)a1[77] >> (v76 - 30);
  }
  else
  {
    a2[76] = *((_DWORD *)a1 + 152);
    LODWORD(v48) = *((_DWORD *)a1 + 154);
  }
  a2[77] = v48;
  if ( (unsigned __int64)(a1[78] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[78] = *((_DWORD *)a1 + 156);
  v49 = a1[80];
  if ( v49 > 0x7FFFFFFF )
  {
    v77 = RtlFindMostSignificantBit(v49);
    a2[79] = (__int64)a1[79] >> (v77 - 30);
    v50 = (__int64)a1[80] >> (v77 - 30);
  }
  else
  {
    a2[79] = *((_DWORD *)a1 + 158);
    LODWORD(v50) = *((_DWORD *)a1 + 160);
  }
  a2[80] = v50;
  if ( (unsigned __int64)(a1[81] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[81] = *((_DWORD *)a1 + 162);
  v51 = a1[83];
  if ( v51 > 0x7FFFFFFF )
  {
    v78 = RtlFindMostSignificantBit(v51);
    a2[82] = (__int64)a1[82] >> (v78 - 30);
    v52 = (__int64)a1[83] >> (v78 - 30);
  }
  else
  {
    a2[82] = *((_DWORD *)a1 + 164);
    LODWORD(v52) = *((_DWORD *)a1 + 166);
  }
  a2[83] = v52;
  if ( (unsigned __int64)(a1[84] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[84] = *((_DWORD *)a1 + 168);
  v53 = a1[86];
  if ( v53 > 0x7FFFFFFF )
  {
    v79 = RtlFindMostSignificantBit(v53);
    a2[85] = (__int64)a1[85] >> (v79 - 30);
    v54 = (__int64)a1[86] >> (v79 - 30);
  }
  else
  {
    a2[85] = *((_DWORD *)a1 + 170);
    LODWORD(v54) = *((_DWORD *)a1 + 172);
  }
  a2[86] = v54;
  if ( (unsigned __int64)(a1[87] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[87] = *((_DWORD *)a1 + 174);
  v55 = a1[89];
  if ( v55 > 0x7FFFFFFF )
  {
    v80 = RtlFindMostSignificantBit(v55);
    a2[88] = (__int64)a1[88] >> (v80 - 30);
    v56 = (__int64)a1[89] >> (v80 - 30);
  }
  else
  {
    a2[88] = *((_DWORD *)a1 + 176);
    LODWORD(v56) = *((_DWORD *)a1 + 178);
  }
  a2[89] = v56;
  if ( (unsigned __int64)(a1[90] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[90] = *((_DWORD *)a1 + 180);
  v57 = a1[92];
  if ( v57 > 0x7FFFFFFF )
  {
    v81 = RtlFindMostSignificantBit(v57);
    a2[91] = (__int64)a1[91] >> (v81 - 30);
    v58 = (__int64)a1[92] >> (v81 - 30);
  }
  else
  {
    a2[91] = *((_DWORD *)a1 + 182);
    LODWORD(v58) = *((_DWORD *)a1 + 184);
  }
  a2[92] = v58;
  if ( (unsigned __int64)(a1[93] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[93] = *((_DWORD *)a1 + 186);
  v59 = a1[95];
  if ( v59 > 0x7FFFFFFF )
  {
    v82 = RtlFindMostSignificantBit(v59);
    a2[94] = (__int64)a1[94] >> (v82 - 30);
    v60 = (__int64)a1[95] >> (v82 - 30);
  }
  else
  {
    a2[94] = *((_DWORD *)a1 + 188);
    LODWORD(v60) = *((_DWORD *)a1 + 190);
  }
  a2[95] = v60;
  if ( (unsigned __int64)(a1[96] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[96] = *((_DWORD *)a1 + 192);
  v61 = a1[98];
  if ( v61 > 0x7FFFFFFF )
  {
    v83 = RtlFindMostSignificantBit(v61);
    a2[97] = (__int64)a1[97] >> (v83 - 30);
    v62 = (__int64)a1[98] >> (v83 - 30);
  }
  else
  {
    a2[97] = *((_DWORD *)a1 + 194);
    LODWORD(v62) = *((_DWORD *)a1 + 196);
  }
  a2[98] = v62;
  return 1LL;
}
