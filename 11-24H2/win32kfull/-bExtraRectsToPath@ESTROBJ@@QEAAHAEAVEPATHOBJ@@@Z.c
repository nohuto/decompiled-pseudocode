/*
 * XREFs of ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x14031149C
 * Callers:
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x140059DF0 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKA.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1400AB9EC (-cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 *     bFToL @ 0x1400E8DB0 (bFToL.c)
 *     ?GetLinkedRfontOnIndex@ESTROBJ@@QEAAPEAVRFONT@@JAEAVRFONTOBJ@@@Z @ 0x1403112D8 (-GetLinkedRfontOnIndex@ESTROBJ@@QEAAPEAVRFONT@@JAEAVRFONTOBJ@@@Z.c)
 *     ?bAddPgmToPath@@YAHAEAVEPATHOBJ@@JJJJJJ@Z @ 0x14031140C (-bAddPgmToPath@@YAHAEAVEPATHOBJ@@JJJJJJ@Z.c)
 */

__int64 __fastcall ESTROBJ::bExtraRectsToPath(ESTROBJ *this, struct EPATHOBJ *a2)
{
  struct EPATHOBJ *v3; // r10
  unsigned int v4; // r14d
  _DWORD *v5; // r8
  int v6; // r13d
  int v7; // ecx
  int v8; // edx
  int v9; // r9d
  int v10; // r11d
  int v11; // r13d
  int v12; // ecx
  int v13; // edx
  int v14; // r9d
  int v15; // r11d
  int v16; // eax
  unsigned int v17; // ebx
  unsigned int v18; // edi
  struct _GLYPHPOS *v20; // r10
  RFONTOBJ *v21; // rcx
  unsigned int v22; // r9d
  unsigned int v23; // r12d
  unsigned int v24; // r13d
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdx
  int v28; // r9d
  __int64 v29; // r12
  _DWORD *v30; // rcx
  struct RFONT *LinkedRfontOnIndex; // rax
  unsigned int GlyphData; // eax
  unsigned int v33; // eax
  float *v34; // r8
  LONG y; // eax
  LONG x; // edx
  GLYPHDEF *pgdf; // rbx
  int v38; // esi
  float v39; // xmm3_4
  int v40; // r9d
  int pgb; // edi
  int v42; // eax
  double v43; // xmm1_8
  double v44; // xmm0_8
  float v45; // xmm2_4
  unsigned int v46; // r8d
  int v47; // eax
  double v48; // xmm1_8
  unsigned int v49; // r8d
  unsigned int v50; // r8d
  int v51; // edi
  bool v52; // zf
  int v53; // esi
  struct EPATHOBJ *v54; // rbx
  struct EXFORMOBJR *v55; // [rsp+30h] [rbp-59h]
  int v56; // [rsp+40h] [rbp-49h] BYREF
  struct RFONT *v57; // [rsp+48h] [rbp-41h] BYREF
  int v58; // [rsp+50h] [rbp-39h]
  int v59; // [rsp+54h] [rbp-35h]
  int v60; // [rsp+58h] [rbp-31h]
  int v61; // [rsp+5Ch] [rbp-2Dh]
  int v62; // [rsp+60h] [rbp-29h]
  int v63; // [rsp+64h] [rbp-25h]
  int v64; // [rsp+68h] [rbp-21h]
  int v65; // [rsp+6Ch] [rbp-1Dh]
  int v66; // [rsp+70h] [rbp-19h]
  unsigned int v67; // [rsp+74h] [rbp-15h]
  unsigned int v68; // [rsp+78h] [rbp-11h]
  struct _GLYPHPOS *v69; // [rsp+80h] [rbp-9h]
  int v70; // [rsp+88h] [rbp-1h]
  float *v71; // [rsp+90h] [rbp+7h]
  RFONTOBJ *v72; // [rsp+98h] [rbp+Fh]
  int v73; // [rsp+F0h] [rbp+67h] BYREF
  struct EPATHOBJ *v74; // [rsp+F8h] [rbp+6Fh]
  int v75; // [rsp+100h] [rbp+77h] BYREF
  int v76; // [rsp+108h] [rbp+7Fh] BYREF

  v74 = a2;
  v3 = a2;
  v4 = 0;
  v5 = (_DWORD *)**((_QWORD **)this + 7);
  v6 = v5[68];
  v7 = v5[70];
  v8 = v5[71];
  v9 = v5[74];
  v10 = v5[75];
  v58 = 16 * v5[69];
  v60 = 16 * v5[72];
  v11 = 16 * v6;
  v12 = 16 * v7;
  v13 = 16 * v8;
  v14 = 16 * v9;
  v15 = 16 * v10;
  v59 = 16 * v5[73];
  v16 = *((_DWORD *)this + 58);
  v70 = v11;
  v64 = v12;
  v63 = v13;
  v66 = v14;
  v65 = v15;
  if ( (v16 & 8) != 0 )
  {
    v20 = (struct _GLYPHPOS *)*((_QWORD *)this + 8);
    v21 = 0LL;
    v22 = *(_DWORD *)this;
    v23 = 0;
    v69 = v20;
    v24 = v22;
    v72 = 0LL;
    v57 = 0LL;
    while ( 1 )
    {
      v68 = v22;
      if ( !v22 )
        break;
      v25 = *((_DWORD *)this + 58);
      if ( (v25 & 2) == 0 )
      {
        if ( (v25 & 0x1400) != 0 )
        {
          if ( !v23 )
          {
            v26 = *((_QWORD *)this + 26);
            v27 = *(_DWORD *)this - v22;
            v28 = *(_DWORD *)(v26 + 4 * v27);
            v29 = (unsigned int)(v27 + 1);
            if ( (unsigned int)v29 < *(_DWORD *)this )
            {
              v30 = (_DWORD *)(v26 + 4 * v29);
              do
              {
                if ( *v30 != v28 )
                  break;
                LODWORD(v29) = v29 + 1;
                ++v30;
              }
              while ( (unsigned int)v29 < *(_DWORD *)this );
            }
            v23 = v29 - v27;
            LinkedRfontOnIndex = ESTROBJ::GetLinkedRfontOnIndex(this, v27, *((struct RFONTOBJ **)this + 7));
            v21 = (RFONTOBJ *)&v57;
            v57 = LinkedRfontOnIndex;
            v72 = (RFONTOBJ *)&v57;
          }
          GlyphData = RFONTOBJ::cGetGlyphData(v21, v23, v20);
          v24 = GlyphData;
          if ( !GlyphData )
          {
LABEL_33:
            v57 = 0LL;
            RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v57);
            return 0LL;
          }
          v23 -= GlyphData;
        }
        else
        {
          v24 = RFONTOBJ::cGetGlyphData(*((RFONTOBJ **)this + 7), v22, v20);
          if ( !v24 )
            goto LABEL_33;
        }
        v20 = v69;
      }
      v33 = 0;
      v34 = (float *)(**((_QWORD **)this + 7) + 392LL);
      v71 = v34;
      while ( 1 )
      {
        v67 = v33;
        if ( v33 >= v24 )
          break;
        y = v20->ptl.y;
        x = v20->ptl.x;
        pgdf = v20->pgdf;
        v38 = *((_DWORD *)this + 58);
        v39 = *v34;
        v40 = 16 * y;
        pgb = (int)pgdf[2].pgb;
        v75 = 0;
        if ( (v38 & 0x100) != 0 )
          v40 = y;
        v42 = 16 * x;
        *(_QWORD *)&v43 = COERCE_UNSIGNED_INT((float)pgb);
        if ( (v38 & 0x100) != 0 )
          v42 = x;
        v61 = v40;
        v62 = v42;
        HIDWORD(v44) = 0;
        *(float *)&v44 = *(float *)&v43 * v39;
        bFToL(v44, &v75, 0);
        v73 = 0;
        v45 = v71[1];
        *(float *)&v43 = *(float *)&v43 * v45;
        bFToL(v43, &v73, v46);
        v47 = HIDWORD(pgdf[2].ppo) - pgb;
        v56 = 0;
        *(_QWORD *)&v48 = COERCE_UNSIGNED_INT((float)v47);
        HIDWORD(v44) = 0;
        *(float *)&v44 = *(float *)&v48 * v39;
        bFToL(v44, &v56, v49);
        *(float *)&v48 = *(float *)&v48 * v45;
        v76 = 0;
        bFToL(v48, &v76, v50);
        v51 = v61;
        v52 = (v38 & 0x20) == 0;
        v53 = v62;
        v54 = v74;
        if ( !v52 )
        {
          LODWORD(v55) = v59;
          if ( !bAddPgmToPath(v74, v62 + v75 + v70, v61 + v73 + v58, v56, v76, v60, v55) )
            goto LABEL_33;
        }
        if ( (*((_DWORD *)this + 58) & 0x80u) != 0 )
        {
          LODWORD(v55) = v65;
          if ( !bAddPgmToPath(v54, v75 + v53 + v64, v73 + v51 + v63, v56, v76, v66, v55) )
            goto LABEL_33;
        }
        v34 = v71;
        v33 = v67 + 1;
        v20 = ++v69;
      }
      v21 = v72;
      v22 = v68 - v24;
    }
    v57 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v57);
  }
  else
  {
    v17 = (*((_DWORD *)this + 18) + 8) & 0xFFFFFFF0;
    v18 = (*((_DWORD *)this + 19) + 8) & 0xFFFFFFF0;
    if ( (v16 & 0x20) != 0 )
    {
      LODWORD(v55) = v59;
      if ( !bAddPgmToPath(v3, v17 + v11, v18 + v58, *((_DWORD *)this + 22), *((_DWORD *)this + 23), v60, v55) )
        return 0LL;
      v3 = v74;
      v12 = v64;
      v13 = v63;
      v14 = v66;
      v15 = v65;
    }
    if ( (*((_DWORD *)this + 58) & 0x80u) != 0 )
    {
      LODWORD(v55) = v15;
      LOBYTE(v4) = bAddPgmToPath(v3, v17 + v12, v18 + v13, *((_DWORD *)this + 22), *((_DWORD *)this + 23), v14, v55);
      return v4;
    }
  }
  return 1LL;
}
