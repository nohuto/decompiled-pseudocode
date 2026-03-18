/*
 * XREFs of ?vAddEndCap@WIDENER@pathwide@@IEAAXXZ @ 0x1400EA198
 * Callers:
 *     ?bWiden@WIDENER@pathwide@@IEAAHXZ @ 0x1400EA4E0 (-bWiden@WIDENER@pathwide@@IEAAHXZ.c)
 * Callees:
 *     ?vVecSquareCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z @ 0x1400C11DC (-vVecSquareCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z.c)
 *     ?vVecPerpCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z @ 0x1400E9FB4 (-vVecPerpCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z.c)
 *     ?vAddRoundEndCap@WIDEPENOBJ@pathwide@@QEAAXAEAVWIDENER@2@AEAVLINEDATA@2@HH@Z @ 0x1400EB1E8 (-vAddRoundEndCap@WIDEPENOBJ@pathwide@@QEAAXAEAVWIDENER@2@AEAVLINEDATA@2@HH@Z.c)
 *     ?vVecDrawCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z @ 0x1400EB4FC (-vVecDrawCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z.c)
 *     ?vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1400ED304 (-vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 */

void __fastcall pathwide::WIDENER::vAddEndCap(pathwide::WIDENER *this)
{
  int v2; // ecx
  struct pathwide::LINEDATA *v3; // rdx
  int v4; // ecx
  __int64 v5; // rbx
  pathwide::WIDEPATHOBJ *v6; // rsi
  _DWORD *v7; // rdx
  _DWORD *v8; // r14
  _DWORD *v9; // rcx
  int v10; // ecx
  int v11; // ecx
  struct pathwide::LINEDATA *v12; // rdx
  __int64 v13; // rbx
  _DWORD *v14; // rdx
  const struct _POINTFIX *v15; // rdi
  __int64 v16; // rbx
  _DWORD *v17; // rcx
  struct pathwide::LINEDATA *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // esi
  int v23; // r14d
  __int64 v24; // rax
  pathwide::WIDEPATHOBJ *v25; // rbx
  const struct _POINTFIX *v26; // rdi
  _DWORD *v27; // rdx
  __int64 v28; // rax
  int v29; // r15d
  int v30; // r12d
  _DWORD *v31; // rdx
  const struct _POINTFIX *v32; // rdx
  struct EVECTORFX *v33; // r8
  int v34; // r9d
  pathwide::WIDEPATHOBJ *v35; // rcx
  __int64 v36; // [rsp+60h] [rbp+30h] BYREF
  __int64 v37; // [rsp+68h] [rbp+38h] BYREF

  v2 = *((_DWORD *)this + 321);
  if ( !v2 )
  {
    v3 = (struct pathwide::LINEDATA *)*((_QWORD *)this + 88);
    v4 = *(_DWORD *)v3;
    if ( (*((_DWORD *)this + 10) & 0x10) != 0 )
    {
      if ( (v4 & 8) == 0 )
        pathwide::WIDENER::vVecDrawCompute(this, v3);
      v5 = *(_QWORD *)(*((_QWORD *)this + 88) + 72LL);
    }
    else
    {
      if ( (v4 & 4) == 0 )
        pathwide::WIDENER::vVecPerpCompute(this, v3);
      v5 = *(_QWORD *)(*((_QWORD *)this + 88) + 64LL);
    }
    v6 = (pathwide::WIDENER *)((char *)this + 1128);
    v36 = v5;
    v7 = (_DWORD *)*((_QWORD *)this + 157);
    v8 = (_DWORD *)((char *)this + 692);
    if ( (unsigned __int64)v7 >= *((_QWORD *)this + 158) )
    {
      pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(
        (pathwide::WIDENER *)((char *)this + 1128),
        (const struct _POINTFIX *)((char *)this + 692),
        (struct EVECTORFX *)&v36,
        0);
    }
    else
    {
      *v7 = v5 + *v8;
      *(_DWORD *)(*((_QWORD *)this + 157) + 4LL) = HIDWORD(v5) + *((_DWORD *)this + 174);
      *((_QWORD *)this + 157) += 8LL;
    }
    pathwide::WIDEPENOBJ::vAddRoundEndCap(
      (pathwide::WIDENER *)((char *)this + 816),
      this,
      *((struct pathwide::LINEDATA **)this + 88),
      0,
      *((_DWORD *)this + 10) & 0x10);
    v9 = (_DWORD *)*((_QWORD *)this + 157);
    if ( (unsigned __int64)v9 < *((_QWORD *)this + 158) )
    {
      *v9 = *v8 - v5;
      v10 = *((_DWORD *)this + 174) - HIDWORD(v5);
LABEL_10:
      *(_DWORD *)(*((_QWORD *)v6 + 16) + 4LL) = v10;
      *((_QWORD *)v6 + 16) += 8LL;
      return;
    }
    v32 = (const struct _POINTFIX *)((char *)this + 692);
LABEL_34:
    v33 = (struct EVECTORFX *)&v36;
    v34 = 1;
    v35 = v6;
LABEL_35:
    pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(v35, v32, v33, v34);
    return;
  }
  v11 = v2 - 1;
  if ( !v11 )
  {
    v18 = (struct pathwide::LINEDATA *)*((_QWORD *)this + 88);
    if ( (*(_DWORD *)v18 & 2) == 0 )
      pathwide::WIDENER::vVecSquareCompute(this, v18);
    v19 = *((_QWORD *)this + 88);
    v36 = *(_QWORD *)(v19 + 56);
    v37 = v36;
    if ( (*(_DWORD *)v19 & 4) == 0 )
      pathwide::WIDENER::vVecPerpCompute(this, (struct pathwide::LINEDATA *)v19);
    v20 = *((_QWORD *)this + 88);
    v21 = *(_QWORD *)(v20 + 64);
    v22 = v21 + v36;
    v23 = HIDWORD(v21) + HIDWORD(v36);
    LODWORD(v36) = v21 + v36;
    LODWORD(v21) = *(_DWORD *)v20;
    HIDWORD(v36) += HIDWORD(v21);
    if ( (v21 & 4) == 0 )
      pathwide::WIDENER::vVecPerpCompute(this, (struct pathwide::LINEDATA *)v20);
    v24 = *((_QWORD *)this + 88);
    v25 = (pathwide::WIDENER *)((char *)this + 1128);
    v26 = (const struct _POINTFIX *)((char *)this + 692);
    v27 = (_DWORD *)*((_QWORD *)v25 + 16);
    v28 = *(_QWORD *)(v24 + 64);
    v29 = v37 - v28;
    v30 = HIDWORD(v37) - HIDWORD(v28);
    LODWORD(v37) = v37 - v28;
    HIDWORD(v37) -= HIDWORD(v28);
    if ( (unsigned __int64)v27 >= *((_QWORD *)v25 + 17) )
    {
      pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(v25, v26, (struct EVECTORFX *)&v36, 0);
    }
    else
    {
      *v27 = v22 + v26->x;
      *(_DWORD *)(*((_QWORD *)v25 + 16) + 4LL) = v23 + v26->y;
      *((_QWORD *)v25 + 16) += 8LL;
    }
    v31 = (_DWORD *)*((_QWORD *)v25 + 16);
    if ( (unsigned __int64)v31 < *((_QWORD *)v25 + 17) )
    {
      *v31 = v29 + v26->x;
      *(_DWORD *)(*((_QWORD *)v25 + 16) + 4LL) = v30 + v26->y;
      *((_QWORD *)v25 + 16) += 8LL;
      return;
    }
    v34 = 0;
    v33 = (struct EVECTORFX *)&v37;
    v32 = v26;
    v35 = v25;
    goto LABEL_35;
  }
  if ( v11 == 1 )
  {
    v12 = (struct pathwide::LINEDATA *)*((_QWORD *)this + 88);
    if ( (*(_DWORD *)v12 & 4) == 0 )
      pathwide::WIDENER::vVecPerpCompute(this, v12);
    v13 = *((_QWORD *)this + 88);
    v6 = (pathwide::WIDENER *)((char *)this + 1128);
    v14 = (_DWORD *)*((_QWORD *)this + 157);
    v15 = (const struct _POINTFIX *)((char *)this + 692);
    v16 = *(_QWORD *)(v13 + 64);
    v36 = v16;
    if ( (unsigned __int64)v14 >= *((_QWORD *)v6 + 17) )
    {
      pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(v6, v15, (struct EVECTORFX *)&v36, 0);
    }
    else
    {
      *v14 = v16 + v15->x;
      *(_DWORD *)(*((_QWORD *)v6 + 16) + 4LL) = HIDWORD(v16) + v15->y;
      *((_QWORD *)v6 + 16) += 8LL;
    }
    v17 = (_DWORD *)*((_QWORD *)v6 + 16);
    if ( (unsigned __int64)v17 < *((_QWORD *)v6 + 17) )
    {
      *v17 = v15->x - v16;
      v10 = v15->y - HIDWORD(v16);
      goto LABEL_10;
    }
    v32 = v15;
    goto LABEL_34;
  }
}
