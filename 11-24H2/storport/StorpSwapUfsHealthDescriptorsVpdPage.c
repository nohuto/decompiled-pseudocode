/*
 * XREFs of StorpSwapUfsHealthDescriptorsVpdPage @ 0x1400B1E6C
 * Callers:
 *     StorpTelemetrySendAdapterSurfaceUfsHealthInfo @ 0x1400B99D8 (StorpTelemetrySendAdapterSurfaceUfsHealthInfo.c)
 * Callees:
 *     <none>
 */

char __fastcall StorpSwapUfsHealthDescriptorsVpdPage(_BYTE *a1)
{
  char v2; // dl
  char v3; // al
  char v4; // dl
  char v5; // al
  char v6; // cl
  char v7; // al
  char v8; // cl
  char v9; // al
  char v10; // cl
  char v11; // al
  char v12; // cl
  char v13; // al
  char v14; // cl
  char v15; // al
  char v16; // cl
  char v17; // al
  char v18; // cl
  char v19; // al
  char v20; // cl
  char v21; // al
  char v22; // cl
  char v23; // al
  char v24; // cl
  char v25; // al
  char v26; // cl
  char v27; // al
  char v28; // cl
  char v29; // al
  char v30; // cl
  char v31; // al
  char v32; // cl
  char v33; // al
  char v34; // cl
  char v35; // al
  char v36; // cl
  char v37; // al
  char v38; // cl
  char v39; // al
  char v40; // cl
  char v41; // al
  char v42; // cl
  char v43; // al
  char v44; // cl
  char v45; // al
  char v46; // cl
  char v47; // al
  char v48; // cl
  char v49; // al
  char v50; // cl
  char v51; // al
  char v52; // cl
  char v53; // al
  char v54; // cl
  char v55; // al
  char v56; // cl
  char v57; // al
  char v58; // cl
  char v59; // al
  char v60; // cl
  char v61; // al
  char v62; // cl
  char v63; // al
  char v64; // cl
  char v65; // al
  char v66; // cl
  char v67; // al
  char v68; // cl
  char v69; // al
  char v70; // cl
  char v71; // al
  char v72; // cl
  char v73; // al
  char v74; // cl
  char v75; // al
  char v76; // cl
  char v77; // al
  char v78; // cl
  char v79; // al
  char v80; // cl
  char v81; // al
  char v82; // cl
  char v83; // al
  char v84; // cl
  char v85; // al
  char v86; // cl
  char v87; // al
  char v88; // cl
  char v89; // al
  char v90; // cl
  char v91; // al
  char v92; // cl
  char v93; // al
  char v94; // cl
  char v95; // al
  char v96; // cl
  char v97; // al
  char v98; // cl
  char v99; // al
  char v100; // cl
  char v101; // al
  char v102; // cl
  char v103; // al
  char v104; // cl
  char v105; // al
  char v106; // cl
  char v107; // al
  char v108; // cl
  char v109; // al
  char v110; // cl
  char v111; // al
  char v112; // cl
  char result; // al
  char v114; // cl

  v2 = a1[2];
  a1[2] = a1[3];
  v3 = a1[509];
  a1[3] = v2;
  v4 = a1[508];
  a1[508] = v3;
  v5 = a1[16];
  a1[509] = v4;
  v6 = a1[19];
  a1[19] = v5;
  v7 = a1[17];
  a1[16] = v6;
  v8 = a1[18];
  a1[18] = v7;
  v9 = a1[20];
  a1[17] = v8;
  v10 = a1[23];
  a1[23] = v9;
  v11 = a1[21];
  a1[20] = v10;
  v12 = a1[22];
  a1[22] = v11;
  v13 = a1[24];
  a1[21] = v12;
  v14 = a1[27];
  a1[27] = v13;
  v15 = a1[25];
  a1[24] = v14;
  v16 = a1[26];
  a1[26] = v15;
  v17 = a1[32];
  a1[25] = v16;
  v18 = a1[35];
  a1[35] = v17;
  v19 = a1[33];
  a1[32] = v18;
  v20 = a1[34];
  a1[34] = v19;
  v21 = a1[36];
  a1[33] = v20;
  v22 = a1[39];
  a1[39] = v21;
  v23 = a1[37];
  a1[36] = v22;
  v24 = a1[38];
  a1[38] = v23;
  v25 = a1[40];
  a1[37] = v24;
  v26 = a1[43];
  a1[43] = v25;
  v27 = a1[41];
  a1[40] = v26;
  v28 = a1[42];
  a1[42] = v27;
  v29 = a1[112];
  a1[41] = v28;
  v30 = a1[115];
  a1[115] = v29;
  v31 = a1[113];
  a1[112] = v30;
  v32 = a1[114];
  a1[114] = v31;
  v33 = a1[120];
  a1[113] = v32;
  v34 = a1[123];
  a1[123] = v33;
  v35 = a1[121];
  a1[120] = v34;
  v36 = a1[122];
  a1[122] = v35;
  v37 = a1[124];
  a1[121] = v36;
  v38 = a1[127];
  a1[127] = v37;
  v39 = a1[125];
  a1[124] = v38;
  v40 = a1[126];
  a1[126] = v39;
  a1[125] = v40;
  v41 = a1[144];
  a1[144] = a1[147];
  v42 = a1[146];
  a1[147] = v41;
  v43 = a1[145];
  a1[145] = v42;
  v44 = a1[163];
  a1[146] = v43;
  v45 = a1[160];
  a1[160] = v44;
  v46 = a1[162];
  a1[163] = v45;
  v47 = a1[161];
  a1[161] = v46;
  v48 = a1[179];
  a1[162] = v47;
  v49 = a1[176];
  a1[176] = v48;
  v50 = a1[178];
  a1[179] = v49;
  v51 = a1[177];
  a1[177] = v50;
  v52 = a1[183];
  a1[178] = v51;
  v53 = a1[180];
  a1[180] = v52;
  v54 = a1[182];
  a1[183] = v53;
  v55 = a1[181];
  a1[181] = v54;
  v56 = a1[187];
  a1[182] = v55;
  v57 = a1[184];
  a1[184] = v56;
  v58 = a1[186];
  a1[187] = v57;
  v59 = a1[185];
  a1[185] = v58;
  v60 = a1[55];
  a1[186] = v59;
  v61 = a1[48];
  a1[48] = v60;
  v62 = a1[54];
  a1[55] = v61;
  v63 = a1[49];
  a1[49] = v62;
  v64 = a1[53];
  a1[54] = v63;
  v65 = a1[50];
  a1[50] = v64;
  v66 = a1[52];
  a1[53] = v65;
  v67 = a1[51];
  a1[51] = v66;
  v68 = a1[71];
  a1[52] = v67;
  v69 = a1[64];
  a1[64] = v68;
  v70 = a1[70];
  a1[71] = v69;
  v71 = a1[65];
  a1[65] = v70;
  v72 = a1[69];
  a1[70] = v71;
  v73 = a1[66];
  a1[66] = v72;
  v74 = a1[68];
  a1[69] = v73;
  v75 = a1[67];
  a1[67] = v74;
  v76 = a1[87];
  a1[68] = v75;
  v77 = a1[80];
  a1[80] = v76;
  v78 = a1[86];
  a1[87] = v77;
  v79 = a1[81];
  a1[81] = v78;
  v80 = a1[85];
  a1[86] = v79;
  a1[85] = a1[82];
  v81 = a1[83];
  a1[82] = v80;
  v82 = a1[84];
  a1[84] = v81;
  v83 = a1[88];
  a1[83] = v82;
  v84 = a1[95];
  a1[95] = v83;
  v85 = a1[89];
  a1[88] = v84;
  v86 = a1[94];
  a1[94] = v85;
  v87 = a1[90];
  a1[89] = v86;
  v88 = a1[93];
  a1[93] = v87;
  v89 = a1[91];
  a1[90] = v88;
  v90 = a1[92];
  a1[92] = v89;
  v91 = a1[96];
  a1[91] = v90;
  v92 = a1[103];
  a1[103] = v91;
  v93 = a1[97];
  a1[96] = v92;
  v94 = a1[102];
  a1[102] = v93;
  v95 = a1[98];
  a1[97] = v94;
  v96 = a1[101];
  a1[101] = v95;
  v97 = a1[99];
  a1[98] = v96;
  v98 = a1[100];
  a1[100] = v97;
  v99 = a1[128];
  a1[99] = v98;
  v100 = a1[135];
  a1[135] = v99;
  v101 = a1[129];
  a1[128] = v100;
  v102 = a1[134];
  a1[134] = v101;
  v103 = a1[130];
  a1[129] = v102;
  v104 = a1[133];
  a1[133] = v103;
  v105 = a1[131];
  a1[130] = v104;
  v106 = a1[132];
  a1[132] = v105;
  v107 = a1[136];
  a1[131] = v106;
  v108 = a1[143];
  a1[143] = v107;
  v109 = a1[137];
  a1[136] = v108;
  v110 = a1[142];
  a1[142] = v109;
  v111 = a1[138];
  a1[137] = v110;
  v112 = a1[141];
  a1[141] = v111;
  result = a1[139];
  a1[138] = v112;
  v114 = a1[140];
  a1[140] = result;
  a1[139] = v114;
  return result;
}
