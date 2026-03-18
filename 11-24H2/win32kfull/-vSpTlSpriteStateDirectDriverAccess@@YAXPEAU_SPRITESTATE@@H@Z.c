/*
 * XREFs of ?vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1400D5A98
 * Callers:
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1400579FC (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x140058164 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1400D57BC (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 */

void __fastcall vSpTlSpriteStateDirectDriverAccess(struct _SPRITESTATE *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rdx

  if ( (_DWORD)a2 )
  {
    v3 = *((_QWORD *)GreGetCurrentThread((__int64)a1, a2) + 34);
    *(_QWORD *)(v3 + 32) = a1;
    v4 = *((_QWORD *)a1 + 150);
    v6 = *((_QWORD *)GreGetCurrentThread(v5, v3) + 34);
    *(_QWORD *)(v6 + 40) = v4;
    v7 = *((_QWORD *)a1 + 151);
    v9 = *((_QWORD *)GreGetCurrentThread(v8, v6) + 34);
    *(_QWORD *)(v9 + 48) = v7;
    v10 = *((_QWORD *)a1 + 152);
    v12 = *((_QWORD *)GreGetCurrentThread(v9, v11) + 34);
    *(_QWORD *)(v12 + 56) = v10;
    v13 = *((_QWORD *)a1 + 154);
    v15 = *((_QWORD *)GreGetCurrentThread(v12, v14) + 34);
    *(_QWORD *)(v15 + 72) = v13;
    v16 = *((_QWORD *)a1 + 155);
    v18 = *((_QWORD *)GreGetCurrentThread(v15, v17) + 34);
    *(_QWORD *)(v18 + 80) = v16;
    v19 = *((_QWORD *)a1 + 156);
    v21 = *((_QWORD *)GreGetCurrentThread(v18, v20) + 34);
    *(_QWORD *)(v21 + 88) = v19;
    v22 = *((_QWORD *)a1 + 157);
    v24 = *((_QWORD *)GreGetCurrentThread(v21, v23) + 34);
    *(_QWORD *)(v24 + 96) = v22;
    v25 = *((_QWORD *)a1 + 158);
    v27 = *((_QWORD *)GreGetCurrentThread(v24, v26) + 34);
    *(_QWORD *)(v27 + 104) = v25;
    v28 = *((_QWORD *)a1 + 159);
    v30 = *((_QWORD *)GreGetCurrentThread(v27, v29) + 34);
    *(_QWORD *)(v30 + 112) = v28;
    v31 = *((_QWORD *)a1 + 160);
    v33 = *((_QWORD *)GreGetCurrentThread(v30, v32) + 34);
    *(_QWORD *)(v33 + 120) = v31;
    v34 = *((_QWORD *)a1 + 161);
    v36 = *((_QWORD *)GreGetCurrentThread(v33, v35) + 34);
    *(_QWORD *)(v36 + 128) = v34;
    v37 = *((_QWORD *)a1 + 162);
    v39 = *((_QWORD *)GreGetCurrentThread(v36, v38) + 34);
    *(_QWORD *)(v39 + 136) = v37;
    v40 = *((_QWORD *)a1 + 164);
    v42 = *((_QWORD *)GreGetCurrentThread(v39, v41) + 34);
    *(_QWORD *)(v42 + 152) = v40;
    v43 = *((_QWORD *)a1 + 163);
    v45 = *((_QWORD *)GreGetCurrentThread(v42, v44) + 34);
    *(_QWORD *)(v45 + 144) = v43;
    v46 = *((_QWORD *)a1 + 165);
    *(_QWORD *)(*((_QWORD *)GreGetCurrentThread(v45, v47) + 34) + 160LL) = v46;
  }
  else
  {
    v48 = *((_QWORD *)GreGetCurrentThread((__int64)a1, a2) + 34);
    *(_QWORD *)(v48 + 32) = 0LL;
    v50 = *((_QWORD *)GreGetCurrentThread(v48, v49) + 34);
    *(_QWORD *)(v50 + 40) = SpStrokeAndFillPath;
    v52 = *((_QWORD *)GreGetCurrentThread(v50, v51) + 34);
    *(_QWORD *)(v52 + 48) = SpStrokePath;
    v54 = *((_QWORD *)GreGetCurrentThread(v52, v53) + 34);
    *(_QWORD *)(v54 + 56) = SpFillPath;
    v56 = *((_QWORD *)GreGetCurrentThread(v54, v55) + 34);
    *(_QWORD *)(v56 + 72) = SpBitBlt;
    v58 = *((_QWORD *)GreGetCurrentThread(v56, v57) + 34);
    *(_QWORD *)(v58 + 80) = SpCopyBits;
    v60 = *((_QWORD *)GreGetCurrentThread(v58, v59) + 34);
    *(_QWORD *)(v60 + 88) = SpStretchBlt;
    v62 = *((_QWORD *)GreGetCurrentThread(v60, v61) + 34);
    *(_QWORD *)(v62 + 96) = SpTextOut;
    v64 = *((_QWORD *)GreGetCurrentThread(v62, v63) + 34);
    *(_QWORD *)(v64 + 104) = SpLineTo;
    v66 = *((_QWORD *)GreGetCurrentThread(v64, v65) + 34);
    *(_QWORD *)(v66 + 112) = SpTransparentBlt;
    v68 = *((_QWORD *)GreGetCurrentThread(v66, v67) + 34);
    *(_QWORD *)(v68 + 120) = SpAlphaBlend;
    v70 = *((_QWORD *)GreGetCurrentThread(v68, v69) + 34);
    *(_QWORD *)(v70 + 128) = SpPlgBlt;
    v72 = *((_QWORD *)GreGetCurrentThread(v70, v71) + 34);
    *(_QWORD *)(v72 + 136) = SpGradientFill;
    v74 = *((_QWORD *)GreGetCurrentThread(v72, v73) + 34);
    *(_QWORD *)(v74 + 152) = SpStretchBltROP;
    v76 = *((_QWORD *)GreGetCurrentThread(v74, v75) + 34);
    *(_QWORD *)(v76 + 144) = SpSaveScreenBits;
    *(_QWORD *)(*((_QWORD *)GreGetCurrentThread(v76, v77) + 34) + 160LL) = SpDrawStream;
  }
}
