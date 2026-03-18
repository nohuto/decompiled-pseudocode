/*
 * XREFs of ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1400AF620
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x14005C3DC (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     xInsertMetricsPlusRFONTOBJ @ 0x1400ACD2C (xInsertMetricsPlusRFONTOBJ.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1400AD4E8 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1400AF180 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1400AFDC4 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1400C1F00 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1400C1FD8 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?bPartitionInit@ESTROBJ@@QEAAHKIH@Z @ 0x1401963A8 (-bPartitionInit@ESTROBJ@@QEAAHKIH@Z.c)
 *     ?bIsSystemTTGlyph@RFONTOBJ@@QEBAHG@Z @ 0x1401972BC (-bIsSystemTTGlyph@RFONTOBJ@@QEBAHG@Z.c)
 */

struct _GLYPHDATA *__fastcall RFONTOBJ::FindLinkedGlyphDataPlus(
        RFONTOBJ *this,
        struct UDCOBJ *a2,
        struct ESTROBJ *a3,
        unsigned __int16 a4,
        unsigned int a5,
        unsigned int a6,
        int *a7,
        int a8,
        int a9)
{
  int v9; // esi
  __int64 v12; // r13
  __int64 v13; // rax
  int v14; // r15d
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // rbx
  _DWORD *v20; // r14
  struct GPRUN *v21; // r14
  __int64 v22; // r8
  struct GPRUN *Run; // rax
  struct _GLYPHDATA *v24; // rbx
  __int64 v25; // rbx
  struct _GLYPHDATA **v26; // r15
  struct _GLYPHDATA *v27; // rax
  __int64 i; // r15
  _QWORD *v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // r14
  __int64 v32; // r13
  struct RFONTOBJ *v33; // rdx
  struct RFONTOBJ *v34; // r8
  _DWORD *v35; // r14
  struct GPRUN *v36; // r14
  __int64 v37; // r8
  struct GPRUN *v38; // rax
  __int64 v39; // rbx
  struct _GLYPHDATA **v40; // r13
  struct _GLYPHDATA *v41; // rax
  struct _GLYPHDATA *EudcMetricsPlus; // rax
  RFONTOBJ *v44; // rcx
  struct _GLYPHDATA *EudcMetrics; // rax
  __int64 v46; // rax
  int v47; // r15d
  struct _GLYPHDATA *v48; // rax
  __int64 v49; // [rsp+20h] [rbp-10h]
  __int64 v50; // [rsp+78h] [rbp+48h] BYREF
  __int64 v51; // [rsp+80h] [rbp+50h] BYREF

  v9 = a4;
  if ( a3 )
    v12 = *((_QWORD *)a3 + 26);
  else
    v12 = 0LL;
  v49 = v12;
  if ( !*(_DWORD *)(*(_QWORD *)a2 + 304LL) && a8 && (unsigned int)RFONTOBJ::bIsSystemTTGlyph(this, a4) )
  {
    if ( *(_QWORD *)(*(_QWORD *)this + 728LL) )
    {
      if ( a3 && (*((_DWORD *)a3 + 58) & 0x1000) == 0 )
        ESTROBJ::bPartitionInit(a3, a6, 0, 0);
      v50 = *(_QWORD *)(*(_QWORD *)this + 728LL);
      if ( v50
        && (!a9
          ? (EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v50, v9, a3))
          : (EudcMetrics = RFONTOBJ::pgdGetEudcMetricsPlus(
                             (RFONTOBJ *)&v50,
                             (struct RFONTOBJ *)(unsigned __int16)v9,
                             a3)),
            (v24 = EudcMetrics) != 0LL) )
      {
        if ( a3 )
        {
          v46 = a5;
          ++*((_DWORD *)a3 + 62);
          *(_DWORD *)(v12 + 4 * v46) = 1;
LABEL_83:
          *a7 = 0;
        }
      }
      else
      {
        v24 = RFONTOBJ::pgdDefault(this);
      }
      goto LABEL_84;
    }
    return RFONTOBJ::pgdDefault(this);
  }
  v13 = *(_QWORD *)this;
  v14 = *(_DWORD *)(*(_QWORD *)this + 848LL);
  LODWORD(v50) = v14;
  if ( v14 )
  {
    v15 = (unsigned int)(v14 - 1);
    v16 = v15;
    v17 = *(_QWORD *)(*(_QWORD *)(v13 + 752) + 8 * v15);
    v51 = v17;
    if ( v17 )
    {
      v18 = *(_DWORD *)(*(_QWORD *)(v17 + 128) + 52LL);
      if ( (v18 & 8) != 0 && (v18 & 2) == 0 )
      {
        v47 = v15;
        LODWORD(v50) = v15;
        v48 = a9
            ? RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v51, (struct RFONTOBJ *)(unsigned __int16)v9, a3)
            : RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v51, v9, a3);
        v24 = v48;
        if ( v48 )
        {
          if ( v48->fxD )
          {
            if ( a3 )
            {
              *(_DWORD *)(v12 + 4LL * a5) = v47 + 4;
              ++*(_DWORD *)(*((_QWORD *)a3 + 33) + 4 * v16);
              *a7 = 0;
            }
            v51 = 0LL;
LABEL_61:
            v44 = (RFONTOBJ *)&v51;
            goto LABEL_62;
          }
        }
      }
    }
    v51 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v51);
  }
  v19 = *(_QWORD *)(*(_QWORD *)this + 736LL);
  if ( !v19 )
    goto LABEL_23;
  v51 = *(_QWORD *)(*(_QWORD *)this + 736LL);
  if ( !a9 )
  {
    v27 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v51, v9, a3);
LABEL_20:
    v24 = v27;
    goto LABEL_21;
  }
  if ( !*(_QWORD *)(v19 + 480) && !(unsigned int)RFONTOBJ::bAllocateCache((RFONTOBJ *)&v51, a2) )
    goto LABEL_22;
  v20 = *(_DWORD **)(v19 + 480);
  if ( !*v20 )
  {
    v27 = RFONTOBJ::pgdDefault((RFONTOBJ *)&v51);
    goto LABEL_20;
  }
  v21 = (struct GPRUN *)(v20 + 4);
  v22 = (unsigned int)(v9 - *(_DWORD *)v21);
  if ( (unsigned int)v22 < *((_DWORD *)v21 + 1) )
  {
    _mm_lfence();
    v24 = *(struct _GLYPHDATA **)(*((_QWORD *)v21 + 1) + 8 * v22);
    goto LABEL_15;
  }
  Run = RFONTOBJ::gprunFindRun((RFONTOBJ *)&v51, v9);
  v21 = Run;
  v22 = (unsigned int)(v9 - *(_DWORD *)Run);
  if ( (unsigned int)v22 < *((_DWORD *)Run + 1) )
  {
    _mm_lfence();
    v24 = *(struct _GLYPHDATA **)(*((_QWORD *)Run + 1) + 8 * v22);
LABEL_15:
    if ( v24 )
      goto LABEL_47;
    v25 = (unsigned int)v22;
    v26 = (struct _GLYPHDATA **)(*((_QWORD *)v21 + 1) + 8 * v22);
    if ( !*(_QWORD *)(v51 + 480) && !(unsigned int)RFONTOBJ::bAllocateCache((RFONTOBJ *)&v51, a2)
      || !(unsigned int)xInsertMetricsPlusRFONTOBJ((RFONTOBJ *)&v51, v26, v9) )
    {
      goto LABEL_22;
    }
    v24 = *(struct _GLYPHDATA **)(*((_QWORD *)v21 + 1) + 8 * v25);
LABEL_21:
    if ( !v24 )
      goto LABEL_22;
LABEL_47:
    if ( v24->fxD )
    {
      if ( a3 )
      {
        *(_DWORD *)(v12 + 4LL * a5) = 2;
        ++*((_DWORD *)a3 + 63);
        goto LABEL_59;
      }
LABEL_60:
      v51 = 0LL;
      goto LABEL_61;
    }
  }
LABEL_22:
  v51 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v51);
LABEL_23:
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v29 = *(_QWORD **)this;
    if ( (unsigned int)i >= (unsigned int)v50 )
      break;
    v30 = *(_QWORD *)(v29[94] + 8 * i);
    v51 = v30;
    if ( !v30 )
      goto LABEL_42;
    v31 = *(_QWORD *)(v30 + 128);
    v32 = v29[16];
    if ( !*(_DWORD *)(*(_QWORD *)(W32GetSessionState(v29, a2, a3) + 96) + 14172LL)
      && (unsigned __int16)(v9 + 0x2000) <= 0x18FFu
      && (*(_DWORD *)(v31 + 52) & 0x4000) != 0
      && (*(_DWORD *)(v32 + 52) & 0x8000) != 0 )
    {
      goto LABEL_42;
    }
    if ( !a9 )
    {
      v41 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v51, v9, v34);
      goto LABEL_39;
    }
    if ( !*(_QWORD *)(v30 + 480) && !(unsigned int)RFONTOBJ::bAllocateCache((RFONTOBJ *)&v51, v33) )
      goto LABEL_42;
    v35 = *(_DWORD **)(v30 + 480);
    if ( !*v35 )
    {
      v41 = RFONTOBJ::pgdDefault((RFONTOBJ *)&v51);
LABEL_39:
      v24 = v41;
LABEL_40:
      if ( !v24 )
        goto LABEL_42;
      goto LABEL_41;
    }
    v36 = (struct GPRUN *)(v35 + 4);
    v37 = (unsigned int)(v9 - *(_DWORD *)v36);
    if ( (unsigned int)v37 < *((_DWORD *)v36 + 1) )
    {
      _mm_lfence();
      v24 = *(struct _GLYPHDATA **)(*((_QWORD *)v36 + 1) + 8 * v37);
    }
    else
    {
      v38 = RFONTOBJ::gprunFindRun((RFONTOBJ *)&v51, v9);
      v36 = v38;
      v37 = (unsigned int)(v9 - *(_DWORD *)v38);
      if ( (unsigned int)v37 >= *((_DWORD *)v38 + 1) )
        goto LABEL_42;
      _mm_lfence();
      v24 = *(struct _GLYPHDATA **)(*((_QWORD *)v38 + 1) + 8 * v37);
    }
    if ( !v24 )
    {
      v39 = (unsigned int)v37;
      v40 = (struct _GLYPHDATA **)(*((_QWORD *)v36 + 1) + 8 * v37);
      if ( !*(_QWORD *)(v51 + 480) && !(unsigned int)RFONTOBJ::bAllocateCache((RFONTOBJ *)&v51, v33)
        || !(unsigned int)xInsertMetricsPlusRFONTOBJ((RFONTOBJ *)&v51, v40, v9) )
      {
        goto LABEL_42;
      }
      v24 = *(struct _GLYPHDATA **)(*((_QWORD *)v36 + 1) + 8 * v39);
      goto LABEL_40;
    }
LABEL_41:
    if ( v24->fxD )
    {
      if ( a3 )
      {
        *(_DWORD *)(v49 + 4LL * a5) = i + 4;
        ++*(_DWORD *)(*((_QWORD *)a3 + 33) + 4 * i);
LABEL_59:
        *a7 = 0;
      }
      goto LABEL_60;
    }
LABEL_42:
    v51 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v51);
  }
  if ( !v29[93] )
    return 0LL;
  v50 = v29[93];
  if ( a9 )
    EudcMetricsPlus = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v50, (struct RFONTOBJ *)(unsigned __int16)v9, a3);
  else
    EudcMetricsPlus = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v50, v9, a3);
  v24 = EudcMetricsPlus;
  if ( !EudcMetricsPlus || !EudcMetricsPlus->fxD )
  {
    v50 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v50);
    return 0LL;
  }
  if ( a3 )
  {
    *(_DWORD *)(v49 + 4LL * a5) = 3;
    ++*((_DWORD *)a3 + 64);
    goto LABEL_83;
  }
LABEL_84:
  v50 = 0LL;
  v44 = (RFONTOBJ *)&v50;
LABEL_62:
  RFONTOBJ::~RFONTOBJ(v44);
  return v24;
}
