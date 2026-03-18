/*
 * XREFs of ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x14005C3DC
 * Callers:
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z @ 0x1400AE350 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z @ 0x1400AE8F0 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVUDCOBJ@@PEAVESTROBJ@@@Z @ 0x1400AEEE0 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVUDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVUDCOBJ@@_NPEAVESTROBJ@@@Z @ 0x1400AF42C (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVUDCOBJ@@_NPEAVESTROBJ@@@Z.c)
 *     ?GrepGetCharABCWidthsW@@YAHAEAVUDCOBJ@@IKPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z @ 0x1400B04DC (-GrepGetCharABCWidthsW@@YAHAEAVUDCOBJ@@IKPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z.c)
 * Callees:
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x14002B4D0 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x14005CB24 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400A3DC0 (--$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400A3EA8 (--$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1400AD4E8 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1400AF620 (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1400C1F00 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1400C1FD8 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     PALLOCMEM @ 0x1400FEC9C (PALLOCMEM.c)
 *     ?vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ @ 0x14017C22C (-vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ.c)
 *     ??0?$SEMOBJ@$0P@@@QEAA@PEAVRFONT@@@Z @ 0x140184224 (--0-$SEMOBJ@$0P@@@QEAA@PEAVRFONT@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0P@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140195C64 (--$GreReleaseSemaphoreCommon@$0P@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bPartitionInit@ESTROBJ@@QEAAHKIH@Z @ 0x1401963A8 (-bPartitionInit@ESTROBJ@@QEAAHKIH@Z.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVUDCOBJ@@@Z @ 0x1401DCED4 (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVUDCOBJ@@@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z @ 0x14025B70C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

struct _GLYPHDATA *__fastcall RFONTOBJ::wpgdGetLinkMetricsPlus(
        RFONTOBJ *this,
        struct UDCOBJ *a2,
        struct ESTROBJ *a3,
        char *a4,
        char *a5,
        unsigned int a6,
        int *a7,
        int a8)
{
  char *v12; // rbx
  const unsigned __int16 *v13; // r15
  __int64 SessionState; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // r13
  int v21; // ebx
  __int64 v22; // r8
  HSEMAPHORE v23; // rbx
  struct _GRETHREAD *v24; // rax
  struct _GRETHREAD *v25; // r15
  __int64 v26; // rdx
  char v27; // cl
  __int64 v28; // rcx
  unsigned int v29; // edx
  unsigned int v30; // edx
  __int64 v31; // r8
  __int64 v32; // r12
  unsigned int v33; // ecx
  unsigned int v34; // edx
  __int64 v35; // r15
  __int64 v36; // rcx
  struct _GRETHREAD *v37; // rax
  bool v38; // zf
  _DWORD *v39; // rbx
  int v40; // ecx
  unsigned __int16 v41; // r9
  int v42; // r15d
  signed __int64 v43; // rbx
  int *v44; // r12
  struct UDCOBJ *v45; // r14
  __int64 v46; // rbx
  struct _GLYPHDATA *result; // rax
  struct RFONTOBJ *v48; // r8
  __int64 v49; // rcx
  __int64 v50; // r12
  size_t v51; // r8
  char *v52; // rcx
  _DWORD *v53; // r15
  int v54; // eax
  __int64 v55; // kr00_8
  __int64 v56; // r9
  __int64 v57; // rax
  struct RFONTOBJ *v58; // r8
  unsigned __int16 v59; // dx
  struct _GLYPHDATA *EudcMetrics; // rax
  struct _GLYPHDATA *v61; // rbx
  __int64 v62; // rax
  unsigned __int16 v63; // dx
  HSEMAPHORE v64; // rbx
  struct _GRETHREAD *v65; // rax
  unsigned __int64 v66; // rcx
  int v67; // r8d
  int v68; // eax
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 i; // r15
  __int64 v73; // rcx
  __int64 v74; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v75[3]; // [rsp+58h] [rbp-18h]
  struct UDCOBJ *v76; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v77; // [rsp+C8h] [rbp+58h] BYREF

  v76 = a2;
  v12 = a4;
  v13 = (const unsigned __int16 *)&a5[2 * a6];
  SessionState = W32GetSessionState(a5, a2, a3);
  v17 = 0LL;
  v18 = *(_QWORD *)(SessionState + 96);
  v19 = *(_QWORD *)a2;
  v20 = v18 + 4872;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 308LL)
    || !*(_DWORD *)(v20 + 8640) && !*(_QWORD *)(v20 + 8656) && !*(_QWORD *)(v20 + 8664) && !*(_DWORD *)(v19 + 304) )
  {
    return RFONTOBJ::pgdDefault(this);
  }
  if ( a4 >= (char *)v13 )
  {
LABEL_7:
    if ( v12 == (char *)v13 )
      return RFONTOBJ::pgdDefault(this);
  }
  else
  {
    while ( 1 )
    {
      v17 = *(unsigned __int16 *)v12;
      v15 = 128LL;
      if ( (unsigned __int16)v17 < 0x80u )
        break;
      v15 = 159LL;
      if ( (unsigned __int16)v17 <= 0x9Fu )
      {
        v12 += 2;
        if ( v12 < (char *)v13 )
          continue;
      }
      goto LABEL_7;
    }
  }
  if ( !*(_DWORD *)(v19 + 304) && *(_DWORD *)(*(_QWORD *)this + 716LL) && !*(_QWORD *)(*(_QWORD *)this + 728LL) )
    RFONTOBJ::bInitSystemTT(this, a2);
  if ( !*(_QWORD *)(*(_QWORD *)this + 856LL) )
    return RFONTOBJ::pgdDefault(this);
  if ( *(_DWORD *)(*(_QWORD *)a2 + 304LL) )
  {
LABEL_14:
    v23 = *(HSEMAPHORE *)(*(_QWORD *)this + 856LL);
    GreAcquireSemaphoreInternal(v23);
    v24 = GreGetCurrentThreadCrossSessionCheck();
    v25 = v24;
    if ( v24 )
    {
      v26 = *(_QWORD *)v24;
      if ( (*(_QWORD *)v24 & 0xFFFFFFFFFFFF8000uLL) != 0 && (v26 & 0x8000) == 0 )
      {
        v66 = 0LL;
        v67 = 37;
        do
        {
          v68 = v66;
          if ( !_bittest64(&v26, v66) )
            v68 = v67;
          ++v66;
          v67 = v68;
        }
        while ( v66 < 0x40 );
        if ( v68 > 15 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v66, v26, (unsigned int)v68);
      }
      v27 = *((_BYTE *)v25 + 23);
      *((_BYTE *)v25 + 23) = v27 + 1;
      if ( !v27 )
        *(_QWORD *)v25 |= 0x8000uLL;
    }
    if ( (*(_DWORD *)(*(_QWORD *)this + 720LL) & 1) == 0 )
    {
      GreAcquirePushLockShared2<16,0>(v20);
      _InterlockedIncrement((volatile signed __int32 *)(v20 + 8636));
      GreReleasePushLockShared2<16,0>(v20);
      RFONTOBJ::vInitEUDC(this, a2);
      v28 = *(_QWORD *)this;
      v29 = *(_DWORD *)(*(_QWORD *)this + 848LL);
      if ( v29 > 0x20 )
      {
        RFONTOBJ::vLockSystemTTGlyphCache(this);
        v69 = *(_QWORD *)(*(_QWORD *)this + 736LL);
        if ( v69 )
        {
          GreAcquireSemaphore<5,RFONT *>(v69);
          v77 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v77);
        }
        v70 = *(_QWORD *)(*(_QWORD *)this + 744LL);
        if ( v70 )
        {
          GreAcquireSemaphore<5,RFONT *>(v70);
          v77 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v77);
        }
        v71 = *(_QWORD *)this;
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(*(_QWORD *)this + 848LL); i = (unsigned int)(i + 1) )
        {
          v73 = *(_QWORD *)(*(_QWORD *)(v71 + 752) + 8 * i);
          if ( v73 )
          {
            GreAcquireSemaphore<5,RFONT *>(v73);
            v77 = 0LL;
            RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v77);
          }
          v71 = *(_QWORD *)this;
        }
      }
      else
      {
        v75[0] = *(_QWORD *)(v28 + 744);
        v75[1] = *(_QWORD *)(v28 + 736);
        v30 = v29 + 2;
        if ( v30 )
        {
          v31 = v30;
          v32 = 0LL;
          v77 = v30;
          while ( 1 )
          {
            v33 = *(unsigned __int8 *)(v32 + *(_QWORD *)this + 864);
            v34 = *(_DWORD *)(*(_QWORD *)this + 848LL);
            if ( v33 < v34 )
              break;
            v49 = v33 - v34;
            if ( (unsigned int)v49 < 2 )
            {
              _mm_lfence();
              v35 = v75[v49];
LABEL_24:
              if ( v35 )
              {
                v36 = *(_QWORD *)(*(_QWORD *)this + 728LL);
                if ( v36 && *(_QWORD *)(v36 + 120) < *(_QWORD *)(v35 + 120) )
                  RFONTOBJ::vLockSystemTTGlyphCache(this);
                GreAcquireSemaphore<5,RFONT *>(v35);
                v74 = 0LL;
                RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v74);
                v31 = v77;
              }
            }
            ++v32;
            v77 = --v31;
            if ( !v31 )
              goto LABEL_28;
          }
          _mm_lfence();
          v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 752LL)
                          + 8LL * *(unsigned __int8 *)(v32 + *(_QWORD *)this + 864));
          goto LABEL_24;
        }
LABEL_28:
        RFONTOBJ::vLockSystemTTGlyphCache(this);
      }
      *(_DWORD *)(*(_QWORD *)this + 720LL) |= 1u;
    }
    if ( v23 )
    {
      EtwTraceGreLockReleaseSemaphore(L"RFONT_EUDC", v23);
      v37 = GreGetCurrentThreadCrossSessionCheck();
      if ( v37 )
      {
        v38 = (*((_BYTE *)v37 + 23))-- == 1;
        if ( v38 )
          *(_QWORD *)v37 &= ~0x8000uLL;
        if ( !*(_QWORD *)v37 )
          GrepOnAllLocksReleased();
      }
      GreReleaseSemaphoreExclusiveInternal(v23);
    }
    if ( a3 )
    {
      v39 = (_DWORD *)((char *)a3 + 232);
      v40 = *((_DWORD *)a3 + 58);
      if ( (v40 & 0x400) == 0 )
      {
        v50 = *(unsigned int *)(*(_QWORD *)this + 848LL);
        *((_DWORD *)a3 + 1) &= 0xFFFFFFCF;
        if ( (v40 & 0x1000) != 0 )
        {
          v53 = (_DWORD *)((char *)a3 + 232);
        }
        else
        {
          v51 = 4LL * a6;
          v52 = (char *)(*((_QWORD *)a3 + 8) + 24LL * a6);
          *((_QWORD *)a3 + 26) = v52;
          *((_QWORD *)a3 + 25) = &v52[v51];
          memset_0(v52, 0, v51);
          *v39 |= 0x1000u;
          v53 = (_DWORD *)((char *)a3 + 232);
          *((_QWORD *)a3 + 33) = 0LL;
          *(_QWORD *)((char *)a3 + 252) = 0LL;
          *((_DWORD *)a3 + 62) = 0;
        }
        if ( (unsigned int)v50 >= 0xA )
        {
          v62 = PALLOCMEM((unsigned int)(4 * v50), 1718382187LL);
          *((_QWORD *)a3 + 33) = v62;
          if ( !v62 )
            return RFONTOBJ::pgdDefault(this);
          *v39 |= 0x800u;
        }
        else
        {
          *((_QWORD *)a3 + 33) = (char *)a3 + 272;
          memset_0((char *)a3 + 272, 0, 4 * v50);
        }
        *v53 |= 0x400u;
      }
    }
    v41 = *(_WORD *)a4;
    v42 = a8;
    v43 = a4 - a5;
    v44 = a7;
    v45 = v76;
    v46 = v43 >> 1;
    result = RFONTOBJ::FindLinkedGlyphDataPlus(this, v76, a3, v41, v46, a6, a7, 0, a8);
    if ( result )
      return result;
    v63 = *(_WORD *)(v20 + 8600);
    result = v42 ? RFONTOBJ::pgdGetEudcMetricsPlus(this, v63, v48) : RFONTOBJ::pgdGetEudcMetrics(this, v63, v48);
    if ( result )
      return result;
    result = RFONTOBJ::FindLinkedGlyphDataPlus(this, v45, a3, *(_WORD *)(v20 + 8600), v46, a6, v44, 1, v42);
    if ( result )
      return result;
    return RFONTOBJ::pgdDefault(this);
  }
  v21 = *(unsigned __int16 *)a4;
  v22 = *(_QWORD *)(W32GetSessionState(v17, v15, v16) + 96);
  if ( !*(_DWORD *)(*(_QWORD *)this + 716LL)
    || (v54 = *(unsigned __int16 *)(v22 + 14088), (unsigned __int16)v21 < (unsigned __int16)v54)
    || (unsigned __int16)v21 > *(_WORD *)(v22 + 14090)
    || (v55 = v21 - v54,
        v56 = (v21 - v54) / 32,
        v57 = *(_QWORD *)(v22 + 14096),
        v22 = 0x80000000 >> (v55 % 32),
        ((unsigned int)v22 & *(_DWORD *)(v57 + 4 * v56)) == 0) )
  {
    if ( !(unsigned int)RFONTOBJ::bIsLinkedGlyph(this, *(unsigned __int16 *)a4, v22) )
    {
      if ( *(_QWORD *)(*(_QWORD *)this + 728LL) )
      {
        SEMOBJ<15>::SEMOBJ<15>(&a5, *(_QWORD *)this);
        RFONTOBJ::vLockSystemTTGlyphCache(this);
        v64 = (HSEMAPHORE)a5;
        if ( a5 )
        {
          EtwTraceGreLockReleaseSemaphore(L"RFONT_EUDC", a5);
          v65 = GreGetCurrentThreadCrossSessionCheck();
          if ( v65 )
          {
            v38 = (*((_BYTE *)v65 + 23))-- == 1;
            if ( v38 )
              *(_QWORD *)v65 &= ~0x8000uLL;
            if ( !*(_QWORD *)v65 )
              GrepOnAllLocksReleased();
          }
          GreReleaseSemaphoreExclusiveInternal(v64);
        }
      }
      return RFONTOBJ::pgdDefault(this);
    }
    goto LABEL_14;
  }
  if ( !*(_QWORD *)(*(_QWORD *)this + 728LL) )
    return RFONTOBJ::pgdDefault(this);
  SEMOBJ<15>::SEMOBJ<15>(&v76, *(_QWORD *)this);
  RFONTOBJ::vLockSystemTTGlyphCache(this);
  if ( v76 )
    GreReleaseSemaphoreCommon<15,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal);
  if ( a3 && !_bittest((const signed __int32 *)a3 + 58, 0xCu) )
    ESTROBJ::bPartitionInit(a3, a6, 0, 0);
  v76 = *(struct UDCOBJ **)(*(_QWORD *)this + 728LL);
  if ( v76
    && ((v59 = *(_WORD *)a4, !a8)
      ? (EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v76, v59, v58))
      : (EudcMetrics = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v76, v59, v58)),
        (v61 = EudcMetrics) != 0LL) )
  {
    if ( a3 )
    {
      ++*((_DWORD *)a3 + 62);
      *(_DWORD *)(*((_QWORD *)a3 + 26) + 4 * ((a4 - a5) >> 1)) = 1;
      *a7 = 0;
    }
  }
  else
  {
    v61 = RFONTOBJ::pgdDefault(this);
  }
  v76 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v76);
  return v61;
}
