/*
 * XREFs of ?vAddRoundEndCap@WIDEPENOBJ@pathwide@@QEAAXAEAVWIDENER@2@AEAVLINEDATA@2@HH@Z @ 0x1400EB1E8
 * Callers:
 *     ?vAddEndCap@WIDENER@pathwide@@IEAAXXZ @ 0x1400EA198 (-vAddEndCap@WIDENER@pathwide@@IEAAXXZ.c)
 *     ?vAddStartCap@WIDENER@pathwide@@IEAAXXZ @ 0x1400EAEA0 (-vAddStartCap@WIDENER@pathwide@@IEAAXXZ.c)
 * Callees:
 *     ?vAddNice@pathwide@@YAXAEAVWIDEPATHOBJ@1@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1400E7C88 (-vAddNice@pathwide@@YAXAEAVWIDEPATHOBJ@1@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 *     ?vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1400ED304 (-vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 */

void __fastcall pathwide::WIDEPENOBJ::vAddRoundEndCap(
        pathwide::WIDEPENOBJ *this,
        struct pathwide::WIDENER *a2,
        struct pathwide::LINEDATA *a3,
        int a4,
        int a5)
{
  struct pathwide::LINEDATA *v5; // r14
  _QWORD *v6; // rdi
  struct _POINTFIX *v7; // rbx
  unsigned int v8; // r12d
  pathwide::WIDEPENOBJ *v10; // r13
  struct _POINTFIX *i; // rbx
  __int64 v12; // rcx
  struct _POINTFIX *v13; // rdi
  pathwide::WIDEPATHOBJ *v14; // rsi
  FIX x; // r8d
  struct pathwide::LINEDATA **v16; // rdx
  int v17; // r9d
  struct pathwide::LINEDATA *v18; // rax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  struct _POINTFIX *v22; // r15
  _DWORD *v23; // rcx
  int v24; // eax
  int v25; // ecx
  struct _POINTFIX *v26; // r8
  struct pathwide::LINEDATA *v28; // [rsp+70h] [rbp+50h] BYREF

  v28 = a3;
  v5 = a3;
  v6 = (_QWORD *)*((_QWORD *)a3 + 1);
  v7 = (struct _POINTFIX *)*((_QWORD *)a3 + 2);
  v8 = !(*(_BYTE *)a3 & 1);
  v10 = this;
  if ( !a4 )
    v8 = *(_DWORD *)a3 & 1;
  if ( !a5 && *((_QWORD *)a3 + 3) <= *((_QWORD *)a3 + 4) )
    pathwide::vAddNice(
      (struct pathwide::WIDENER *)((char *)a2 + 1128),
      (struct pathwide::WIDENER *)((char *)a2 + 692),
      *((struct _POINTFIX **)a3 + 2),
      (struct EVECTORFX *)v8);
  for ( i = v7 + 1; ; i = (struct _POINTFIX *)(v6 + 4) )
  {
    v12 = *((_QWORD *)v5 + 1);
    if ( v6 == (_QWORD *)v12 && (unsigned __int64)i <= *((_QWORD *)v5 + 2) )
      break;
    v22 = (struct _POINTFIX *)&v6[(unsigned int)(*(_DWORD *)(v12 + 20) - 1) + 3];
    if ( i < v22 )
    {
      do
      {
        v26 = i++;
        pathwide::vAddNice(
          (struct pathwide::WIDENER *)((char *)a2 + 1128),
          (struct pathwide::WIDENER *)((char *)a2 + 692),
          v26,
          (struct EVECTORFX *)v8);
      }
      while ( i < v22 );
      v5 = v28;
      v10 = this;
    }
    v6 = (_QWORD *)*v6;
    if ( !v6 )
    {
      v6 = *(_QWORD **)(*((_QWORD *)v10 + 1) + 32LL);
      v8 = v8 == 0;
    }
  }
  v13 = (struct _POINTFIX *)((char *)a2 + 692);
  if ( (unsigned __int64)i < *((_QWORD *)v5 + 2) )
  {
    v14 = (struct pathwide::WIDENER *)((char *)a2 + 1128);
    while ( 1 )
    {
      x = v13->x;
      v16 = (struct pathwide::LINEDATA **)i;
      v28 = 0LL;
      ++i;
      v17 = v8;
      if ( ((LOBYTE(v13->y) | (unsigned __int8)x) & 0xF) == 0 )
        break;
LABEL_26:
      v23 = (_DWORD *)*((_QWORD *)v14 + 16);
      if ( (unsigned __int64)v23 >= *((_QWORD *)v14 + 17) )
      {
        pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(v14, v13, (struct EVECTORFX *)v16, v17);
      }
      else
      {
        v24 = *(_DWORD *)v16;
        if ( v17 )
        {
          *v23 = x - v24;
          v25 = v13->y - *((_DWORD *)v16 + 1);
        }
        else
        {
          *v23 = x + v24;
          v25 = *((_DWORD *)v16 + 1) + v13->y;
        }
        *(_DWORD *)(*((_QWORD *)v14 + 16) + 4LL) = v25;
        *((_QWORD *)v14 + 16) += 8LL;
      }
      if ( (unsigned __int64)i >= *((_QWORD *)v5 + 2) )
        goto LABEL_31;
    }
    if ( v8 )
    {
      LODWORD(v18) = -*(_DWORD *)v16;
      v19 = -*((_DWORD *)v16 + 1);
      v28 = (struct pathwide::LINEDATA *)__PAIR64__(v19, (unsigned int)v18);
      v17 = 0;
    }
    else
    {
      v18 = *v16;
      v28 = *v16;
      v19 = HIDWORD(v28);
    }
    if ( (int)v18 > 0 )
    {
      v20 = (_DWORD)v18 - 1;
    }
    else
    {
      if ( (int)v18 >= 0 )
        goto LABEL_16;
      v20 = (_DWORD)v18 + 1;
    }
    LODWORD(v28) = v20;
LABEL_16:
    if ( v19 > 0 )
    {
      v21 = v19 - 1;
    }
    else
    {
      if ( v19 >= 0 )
      {
LABEL_25:
        v16 = &v28;
        goto LABEL_26;
      }
      v21 = v19 + 1;
    }
    HIDWORD(v28) = v21;
    goto LABEL_25;
  }
  v14 = (struct pathwide::WIDENER *)((char *)a2 + 1128);
LABEL_31:
  if ( !a5 && *((_QWORD *)v5 + 3) > *((_QWORD *)v5 + 4) )
    pathwide::vAddNice(v14, (struct pathwide::WIDEPATHOBJ *)v13, i, (struct EVECTORFX *)v8);
}
