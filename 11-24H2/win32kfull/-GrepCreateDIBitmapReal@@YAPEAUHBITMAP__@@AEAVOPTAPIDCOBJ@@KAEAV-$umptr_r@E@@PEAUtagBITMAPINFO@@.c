/*
 * XREFs of ?GrepCreateDIBitmapReal@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x140018544
 * Callers:
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x140013840 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     GreCreateDIBitmapReal @ 0x140018E94 (GreCreateDIBitmapReal.c)
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x14009583C (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1400C95C8 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     NtGdiCreateDIBitmapInternal @ 0x14017AF20 (NtGdiCreateDIBitmapInternal.c)
 *     ?GrepIcmSetBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x14033B578 (-GrepIcmSetBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x140015954 (--0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x14001F7E4 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028C7C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$ReturnValueTracer@K@@QEAA@K@Z @ 0x14005C3CC (--0-$ReturnValueTracer@K@@QEAA@K@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ @ 0x1400D2008 (-pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x14015C564 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ??$read@E@?$umptr_r@E@@QEBA_NPEAE_K_J@Z @ 0x1401775DC (--$read@E@-$umptr_r@E@@QEBA_NPEAE_K_J@Z.c)
 *     ?GetCachedDpiScaleValue@DC@@QEBAJXZ @ 0x14018D7E0 (-GetCachedDpiScaleValue@DC@@QEBAJXZ.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1402280BC (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     ?apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z @ 0x140228AC0 (-apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall GrepCreateDIBitmapReal(
        OPTAPIDCOBJ *this,
        int a2,
        __int64 *a3,
        unsigned int *a4,
        int a5,
        unsigned int a6,
        void *a7,
        unsigned int a8,
        void *a9,
        char a10,
        unsigned __int64 a11,
        _QWORD *a12)
{
  int v12; // r14d
  unsigned int v13; // ebx
  unsigned int v16; // r13d
  __int64 v17; // rdx
  int v18; // ecx
  int v19; // eax
  unsigned int v20; // r8d
  int v21; // ecx
  int v22; // eax
  unsigned int v23; // edi
  unsigned int v24; // esi
  unsigned int v25; // eax
  unsigned int v26; // edx
  unsigned int v27; // r8d
  __int64 v28; // rsi
  unsigned __int64 v29; // rdi
  _QWORD *v30; // r12
  __int64 v31; // rcx
  __int64 v32; // rbx
  ULONG v34; // ecx
  unsigned int v35; // r13d
  __int64 v36; // rcx
  char *v37; // rax
  char *v38; // rdi
  _BYTE *v39; // rcx
  unsigned int v40; // edx
  char *v41; // rdx
  char v42; // al
  unsigned __int64 v43; // rdi
  void *v44; // rax
  void *v45; // rsi
  unsigned __int64 v46; // r8
  unsigned int CachedDpiScaleValue; // eax
  __int64 v48; // rcx
  float v49; // xmm0_4
  void *v50; // rax
  Gre::Base *v51; // rcx
  struct Gre::Base::SESSION_GLOBALS *v52; // rax
  __int64 v53; // r8
  int v54; // edi
  __int64 v55; // rbx
  Gre::Base *v56; // rcx
  struct Gre::Base::SESSION_GLOBALS *v57; // rax
  __int64 v58; // [rsp+60h] [rbp-A0h]
  void *v59; // [rsp+68h] [rbp-98h] BYREF
  __int64 v60; // [rsp+70h] [rbp-90h] BYREF
  char v61; // [rsp+78h] [rbp-88h]
  int v62; // [rsp+7Ch] [rbp-84h]
  __int64 v63; // [rsp+80h] [rbp-80h] BYREF
  int v64; // [rsp+88h] [rbp-78h]
  int v65; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v66; // [rsp+94h] [rbp-6Ch]
  unsigned int v67; // [rsp+98h] [rbp-68h]
  _BYTE v68[12]; // [rsp+9Ch] [rbp-64h] BYREF
  int v69; // [rsp+A8h] [rbp-58h]
  int v70; // [rsp+ACh] [rbp-54h]
  unsigned int v71; // [rsp+B0h] [rbp-50h]
  int v72; // [rsp+B4h] [rbp-4Ch]
  unsigned int v73; // [rsp+B8h] [rbp-48h]
  void *Src; // [rsp+C0h] [rbp-40h]
  DC *v75[24]; // [rsp+D0h] [rbp-30h] BYREF
  int v76; // [rsp+1A8h] [rbp+A8h] BYREF
  _QWORD *v77; // [rsp+1B0h] [rbp+B0h]

  v77 = a3;
  v76 = a2;
  v12 = a5;
  v13 = 0;
  memset(v68, 0, sizeof(v68));
  v70 = 0;
  if ( a5 != 1 )
  {
    if ( a5 == 3 )
    {
      if ( (a10 & 1) == 0 )
        goto LABEL_122;
    }
    else if ( a5 )
    {
      goto LABEL_122;
    }
  }
  if ( !a7 && (a10 & 8) != 0 )
    goto LABEL_122;
  if ( !a4 )
    goto LABEL_122;
  v16 = a6;
  if ( a6 < 0x28 )
    goto LABEL_122;
  v17 = *a4;
  v72 = v17;
  if ( a6 < (unsigned int)v17 )
    goto LABEL_122;
  if ( (unsigned int)v17 < 0x28 )
    goto LABEL_122;
  if ( a4[4] - 4 <= 1 )
    goto LABEL_122;
  v18 = a4[1];
  if ( v18 <= 0 )
    goto LABEL_122;
  v19 = a4[2];
  if ( !v19 )
    goto LABEL_122;
  v69 = 0;
  v66 = v18;
  if ( v19 < 0 )
  {
    v19 = -v19;
    v69 = 1;
  }
  v20 = a4[4];
  v21 = *((unsigned __int16 *)a4 + 7);
  v67 = v19;
  v71 = a4[8];
  v65 = v21;
  v73 = v20;
  Src = (char *)a4 + v17;
  v76 = 0;
  if ( v20 )
  {
    if ( v20 == 3 )
    {
      if ( a6 < 0x34 || a5 )
        goto LABEL_122;
      v24 = 2;
      v25 = a4[10];
      v26 = a4[11];
      v23 = 512;
      Src = a4 + 10;
      v27 = a4[12];
      if ( (_WORD)v21 == 16 )
      {
        v65 = 4;
      }
      else
      {
        if ( v21 != 32 )
          goto LABEL_122;
        v65 = 6;
      }
      goto LABEL_26;
    }
    if ( v20 != 10 || !OPTAPIDCOBJ::bValid(this) )
      goto LABEL_122;
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v75, (struct Gre::Base::SESSION_GLOBALS **)this);
    if ( (unsigned int)DC::bIsCMYKColor(v75[0]) )
    {
      switch ( v65 )
      {
        case 1:
          v65 = 1;
          v13 = 2;
          goto LABEL_97;
        case 4:
          v65 = 2;
          v13 = 16;
          goto LABEL_97;
        case 8:
          v65 = 3;
          v13 = 256;
LABEL_97:
          v24 = 1;
          v23 = 1024;
LABEL_98:
          APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v75);
          goto LABEL_49;
        case 32:
          v65 = 6;
          v24 = 16;
          v23 = 512;
          goto LABEL_98;
      }
    }
    EngSetLastError(0x57u);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v75);
    return 0LL;
  }
  switch ( v21 )
  {
    case 1:
      v65 = 1;
      v13 = 2;
LABEL_48:
      v24 = 1;
      v23 = 1024;
LABEL_49:
      v25 = v76;
      v27 = v76;
      v26 = v76;
      goto LABEL_26;
    case 4:
      v65 = 2;
      v13 = 16;
      goto LABEL_48;
    case 8:
      v65 = 3;
      v13 = 256;
      goto LABEL_48;
  }
  v22 = 0;
  v23 = 512;
  if ( a5 != 1 )
    v22 = a5;
  v12 = v22;
  if ( (_WORD)v21 != 16 )
  {
    if ( (_WORD)v21 == 24 )
    {
      v65 = 5;
      goto LABEL_25;
    }
    if ( v21 == 32 )
    {
      v65 = 6;
LABEL_25:
      v24 = 8;
      v25 = 0;
      v26 = 0;
      v27 = 0;
      goto LABEL_26;
    }
LABEL_122:
    EngSetLastError(0x57u);
    return 0LL;
  }
  v65 = 4;
  v25 = 31744;
  v26 = 992;
  v27 = 31;
  v24 = 2;
LABEL_26:
  v64 = 0;
  v63 = 0LL;
  if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v63, v24, v13, 0LL, v25, v26, v27, v23, 1) )
  {
LABEL_45:
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v63);
    return 0LL;
  }
  v28 = 0LL;
  v29 = a3[1] - a3[2];
  *(_QWORD *)&v68[4] = *(_QWORD *)v63;
  v60 = 0LL;
  v61 = 0;
  v62 = 0;
  v58 = 0LL;
  v59 = 0LL;
  if ( (a10 & 2) != 0 )
  {
    *(_DWORD *)(v63 + 24) |= 0x8000u;
    v28 = *a3;
    v58 = a3[2];
    v59 = a7;
    if ( !v28 )
      goto LABEL_44;
    *a3 = 0LL;
    a3[1] = 0LL;
    a3[2] = 0LL;
    *((_WORD *)a3 + 12) = 0;
  }
  else if ( *((_QWORD *)this + 13) && OPTAPIDCOBJ::bValid(this) )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v75, (struct Gre::Base::SESSION_GLOBALS **)this);
    if ( (*(_DWORD *)(*((_QWORD *)v75[0] + 6) + 40LL) & 0x8000) != 0 )
      v69 |= 0x40000u;
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v75);
  }
  v30 = a12;
  v76 = a10 & 8;
  if ( !SURFMEM::bCreateDIB(
          (SURFMEM *)&v60,
          (struct _DEVBITMAPINFO *)&v65,
          (void *)(v28 + v58),
          v59,
          a8,
          a9,
          a11,
          0,
          1,
          v76 != 0,
          a12 != 0LL) )
    goto LABEL_44;
  v31 = v60;
  if ( !*(_WORD *)(v60 + 100) && *(_QWORD *)(v60 + 192) && *(_DWORD *)(v60 + 64) != v29 )
    goto LABEL_44;
  if ( *v77 )
  {
    v46 = *(unsigned int *)(v60 + 64);
    if ( v46 > v29 )
      goto LABEL_42;
    umptr_r<unsigned char>::read<unsigned char>(v77, *(_QWORD *)(v60 + 72), v46, 0LL);
    v31 = v60;
  }
  if ( v71 && v71 < v13 )
  {
    v13 = v71;
  }
  else if ( !v13 )
  {
    goto LABEL_39;
  }
  v35 = v16 - v72;
  if ( v12 )
  {
    if ( v12 != 1 )
      goto LABEL_39;
    v43 = 2LL * v13;
    if ( v43 <= 0xFFFFFFFF && v35 >= v43 )
    {
      if ( OPTAPIDCOBJ::bValid(this) )
      {
        APIDCOBJ::APIDCOBJ((APIDCOBJ *)v75, (struct Gre::Base::SESSION_GLOBALS **)this);
        v44 = (void *)AllocFreeTmpBuffer(2 * v13);
        v45 = v44;
        if ( v44 )
        {
          memmove(v44, Src, 2LL * v13);
          v52 = Gre::Base::Globals(v51);
          SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v59, v52);
          v53 = *((_QWORD *)XDCOBJ::pSurfaceEff((XDCOBJ *)v75) + 16);
          if ( !v53 )
            v53 = *(_QWORD *)(*((_QWORD *)v75[0] + 6) + 1792LL);
          XEPALOBJ::vGetEntriesFrom(&v63, *((_QWORD *)v75[0] + 11), v53, v45, v13);
          FreeTmpBuffer(v45);
          GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
            (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
            (__int64)v59);
          APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v75);
          goto LABEL_68;
        }
        EngSetLastError(0xEu);
        APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v75);
      }
LABEL_44:
      SURFMEM::~SURFMEM((SURFMEM *)&v60);
      goto LABEL_45;
    }
    goto LABEL_42;
  }
  if ( 4 * (unsigned __int64)v13 > 0xFFFFFFFF || (v36 = 4 * v13, v35 < (unsigned int)v36) )
  {
LABEL_42:
    v34 = 87;
LABEL_43:
    EngSetLastError(v34);
    goto LABEL_44;
  }
  v37 = (char *)AllocFreeTmpBuffer(v36);
  v38 = v37;
  if ( !v37 )
  {
    v34 = 14;
    goto LABEL_43;
  }
  memmove(v37, Src, 4LL * v13);
  v39 = *(_BYTE **)(v63 + 112);
  v40 = *(_DWORD *)(v63 + 28);
  if ( v73 - 10 <= 2 )
  {
    if ( v13 > v40 )
      v13 = *(_DWORD *)(v63 + 28);
    memmove(v39, v38, 4LL * v13);
  }
  else if ( v13 <= v40 || (v13 = *(_DWORD *)(v63 + 28), v40) )
  {
    v41 = v38 + 1;
    do
    {
      v39[3] = 0;
      v39[2] = *(v41 - 1);
      *v39 = v41[1];
      v39 += 4;
      v42 = *v41;
      v41 += 4;
      *(v39 - 3) = v42;
      --v13;
    }
    while ( v13 );
  }
  XEPALOBJ::vUpdateTime((XEPALOBJ *)&v63);
  FreeTmpBuffer(v38);
  if ( (a10 & 4) == 0 || v65 != 3 )
  {
LABEL_68:
    v31 = v60;
    goto LABEL_39;
  }
  v54 = 0;
  if ( !OPTAPIDCOBJ::bValid(this) )
    goto LABEL_44;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v75, (struct Gre::Base::SESSION_GLOBALS **)this);
  v55 = *((_QWORD *)v75[0] + 6);
  v57 = Gre::Base::Globals(v56);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v59, v57);
  if ( *(_DWORD *)(v55 + 2092) == 3 && (*(_DWORD *)(v55 + 2156) & 0x100) != 0 && (*(_DWORD *)(v55 + 40) & 1) != 0 )
  {
    v54 = 1;
    XEPALOBJ::apalColorSet((XEPALOBJ *)&v63, *(struct PALETTE **)(v55 + 1792));
  }
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    (__int64)v59);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v75);
  if ( !v54 )
    goto LABEL_44;
  v31 = v60;
LABEL_39:
  if ( v30 )
  {
    if ( v76 )
      *v30 = 0LL;
    else
      *v30 = *(_QWORD *)(v31 + 72);
  }
  *(_DWORD *)(v31 + 112) |= 0x4000000u;
  v61 |= 1u;
  v64 = 1;
  if ( (a10 & 0x10) != 0 && OPTAPIDCOBJ::bValid(this) )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v75, (struct Gre::Base::SESSION_GLOBALS **)this);
    CachedDpiScaleValue = DC::GetCachedDpiScaleValue(v75[0]);
    ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v76, CachedDpiScaleValue);
    if ( v76 > 1 )
    {
      LODWORD(v59) = v66 / v76;
      v48 = v60;
      v49 = (float)v76;
      HIDWORD(v59) = v67 / v76;
      v50 = v59;
      *(_DWORD *)(v60 + 116) |= 0x800u;
      *(_QWORD *)(v48 + 668) = v50;
      *(float *)(v48 + 660) = v49;
      *(float *)(v48 + 664) = v49;
    }
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v75);
  }
  v32 = *(_QWORD *)(v60 + 32);
  SURFMEM::~SURFMEM((SURFMEM *)&v60);
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v63);
  return v32;
}
