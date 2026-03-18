/*
 * XREFs of ?bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z @ 0x1400D2508
 * Callers:
 *     ?GrepMaskBltDevLocked@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKAEAVDEVLOCKBLTOBJ@@AEAVBLTRECORD@@PEAVSURFACE@@@Z @ 0x1400C2F30 (-GrepMaskBltDevLocked@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKAEAVDEVLOCKBLTOBJ@@AEAVBLTRECOR.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400D0DEC (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z @ 0x1403050D8 (-GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333333@Z @ 0x140006E74 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvid.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@K@Z @ 0x1400158E8 (-bBitBlt@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@K@Z.c)
 *     ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x140015954 (--0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x140016CFC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x14001980C (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0XCLIPOBJ@@QEAA@XZ @ 0x140059708 (--0XCLIPOBJ@@QEAA@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1400C71EC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ @ 0x1400D2008 (-pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1400D245C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400D3E30 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?pSurfaceEff@PROXYDCOBJ@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1400D3F30 (-pSurfaceEff@PROXYDCOBJ@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1400D4898 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     ??0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1400DF75C (--0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 *     ?vOrderStupid@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x14019D770 (-vOrderStupid@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KJJ@Z @ 0x1401DCC04 (-bBitBlt@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KJJ@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x140305FC8 (-bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall BLTRECORD::bStretch(
        BLTRECORD *this,
        struct XDCOBJ *a2,
        struct BLTRECORD::PROXYDCOBJ *a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  int v5; // eax
  int v7; // edx
  int v11; // edx
  int v12; // eax
  __int64 v13; // rcx
  char *v14; // r14
  int v15; // r8d
  __int64 v16; // rdi
  char v17; // r9
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  __int64 v22; // r8
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct REGION *v32; // rdx
  struct ECLIPOBJ *v33; // rdx
  _DWORD *v34; // rbx
  BOOL (__stdcall *v35)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD); // r15
  __int64 v36; // rdx
  int v37; // r10d
  __int64 v38; // r8
  __int64 v39; // r8
  __int64 v40; // rax
  int v41; // r9d
  __int64 v42; // r11
  __int16 v43; // cx
  __int64 v44; // r12
  __int64 v45; // rax
  int v46; // ecx
  struct SURFACE *v47; // rax
  int v48; // edx
  int v49; // ecx
  int v50; // ecx
  BLTRECORD *v51; // rcx
  int *v52; // rdx
  __int64 v53; // rcx
  unsigned int v54; // r14d
  __int64 v55; // rcx
  int v56; // r8d
  struct SURFACE *v57; // rbx
  __int64 v58; // r9
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int32 v61; // r9d
  __int64 v62; // rax
  int v63; // ecx
  int v64; // r9d
  char v65; // [rsp+70h] [rbp-90h]
  __m128i v66; // [rsp+78h] [rbp-88h] BYREF
  int v67; // [rsp+88h] [rbp-78h]
  int v68; // [rsp+8Ch] [rbp-74h]
  int v69; // [rsp+90h] [rbp-70h]
  int v70; // [rsp+94h] [rbp-6Ch]
  int v71; // [rsp+98h] [rbp-68h]
  int v72; // [rsp+9Ch] [rbp-64h]
  int v73; // [rsp+A0h] [rbp-60h]
  _BYTE v74[112]; // [rsp+B0h] [rbp-50h] BYREF
  struct SURFACE *v75; // [rsp+120h] [rbp+20h]
  struct Gre::Base::SESSION_GLOBALS *v76[16]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v77[4]; // [rsp+1B0h] [rbp+B0h] BYREF
  __m128i v78[9]; // [rsp+1B4h] [rbp+B4h] BYREF

  v5 = *((_DWORD *)this + 34);
  v7 = *((_DWORD *)this + 32);
  if ( v7 > v5 )
  {
    *((_DWORD *)this + 32) = v5 + 1;
    *((_DWORD *)this + 34) = v7 + 1;
    *((_DWORD *)this + 49) ^= 8u;
  }
  v11 = *((_DWORD *)this + 33);
  v12 = *((_DWORD *)this + 35);
  if ( v11 > v12 )
  {
    *((_DWORD *)this + 33) = v12 + 1;
    *((_DWORD *)this + 35) = v11 + 1;
    *((_DWORD *)this + 49) ^= 0x10u;
  }
  if ( (a4 & 0xD4) != 0 )
  {
    v13 = *(_QWORD *)a3;
    v14 = 0LL;
    if ( !*(_QWORD *)a3 )
      goto LABEL_22;
    v15 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
    v16 = *(_QWORD *)(*((_QWORD *)this + 6) + 48LL);
    if ( (v15 & 0x200) == 0 || !v16 || (v17 = 1, (*(_DWORD *)(v16 + 40) & 0x20000) == 0) )
      v17 = 0;
    v65 = v17;
    if ( *(_QWORD *)(*(_QWORD *)a2 + 48LL) != *(_QWORD *)(v13 + 48)
      && (v15 & 0x4000) == 0
      && !_bittest((const signed __int32 *)(v13 + 36), 0xEu)
      && !v17
      && (*((_WORD *)XDCOBJ::pSurfaceEff(a2) + 50) || *((_QWORD *)XDCOBJ::pSurfaceEff(a2) + 3))
      && (*((_WORD *)BLTRECORD::PROXYDCOBJ::pSurfaceEff(a3) + 50)
       || *((_QWORD *)BLTRECORD::PROXYDCOBJ::pSurfaceEff(a3) + 3)) )
    {
      goto LABEL_22;
    }
    v18 = *((_DWORD *)this + 42);
    v19 = *((_DWORD *)this + 44);
    if ( v18 > v19 )
    {
      *((_DWORD *)this + 42) = v19 + 1;
      *((_DWORD *)this + 44) = v18 + 1;
    }
    v20 = *((_DWORD *)this + 43);
    v21 = *((_DWORD *)this + 45);
    if ( v20 > v21 )
    {
      *((_DWORD *)this + 43) = v21 + 1;
      *((_DWORD *)this + 45) = v20 + 1;
    }
    if ( BLTRECORD::pSurfMskOut(this) )
    {
      v58 = *((unsigned int *)this + 42);
      if ( (int)v58 < 0
        || *((int *)this + 43) < 0
        || (v59 = *((_QWORD *)this + 8), *((_DWORD *)this + 44) > *(_DWORD *)(v59 + 56))
        || *((_DWORD *)this + 45) > *(_DWORD *)(v59 + 60) )
      {
        if ( (unsigned int)dword_140398BB8 > 5
          && (unsigned __int8)tlgKeywordOn(&dword_140398BB8, 0x200000000000LL, v22, v58) )
        {
          v67 = *((_DWORD *)this + 41);
          v68 = *((_DWORD *)this + 40);
          v69 = *((_DWORD *)this + 39);
          v70 = *((_DWORD *)this + 38);
          v71 = *((_DWORD *)this + 45);
          v72 = *((_DWORD *)this + 44);
          v73 = *((_DWORD *)this + 43);
          v66.m128i_i32[0] = v61;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v60,
            (__int64)&unk_14036A030);
        }
        goto LABEL_22;
      }
    }
    v23 = *((_DWORD *)this + 38);
    v24 = *((_DWORD *)this + 40);
    if ( v23 > v24 )
    {
      *((_DWORD *)this + 38) = v24 + 1;
      *((_DWORD *)this + 40) = v23 + 1;
      *((_DWORD *)this + 49) ^= 8u;
    }
    v25 = *((_DWORD *)this + 39);
    v26 = *((_DWORD *)this + 41);
    if ( v25 > v26 )
    {
      *((_DWORD *)this + 39) = v26 + 1;
      *((_DWORD *)this + 41) = v25 + 1;
      *((_DWORD *)this + 49) ^= 0x10u;
    }
    if ( a5 != 4
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL) != 2
      && !BLTRECORD::pSurfMskOut(this)
      && (*((_DWORD *)this + 49) & 0x18) == 0 )
    {
      v48 = *((_DWORD *)this + 34) + *((_DWORD *)this + 38) - *((_DWORD *)this + 40) - *((_DWORD *)this + 32);
      v49 = *((_DWORD *)this + 35) + *((_DWORD *)this + 39) - *((_DWORD *)this + 41) - *((_DWORD *)this + 33);
      if ( (unsigned int)(v48 + 1) <= 2 && (unsigned int)(v49 + 1) <= 2 )
        return BLTRECORD::bBitBlt(this, a2, a3, a4, v48, v49);
    }
    if ( !*(_QWORD *)(*(_QWORD *)a2 + 496LL) || !*(_QWORD *)(*(_QWORD *)a3 + 496LL) )
      return 1LL;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0xE0) != 0 )
      XDCOBJ::vAccumulate(a2, (BLTRECORD *)((char *)this + 128));
    v28 = *(_QWORD *)a2;
    v29 = *(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1;
    *((_DWORD *)this + 32) += *(_DWORD *)(*(_QWORD *)a2 + 8 * v29 + 1016);
    *((_DWORD *)this + 34) += *(_DWORD *)(v28 + 8 * v29 + 1016);
    *((_DWORD *)this + 33) += *(_DWORD *)(v28 + 8 * v29 + 1020);
    *((_DWORD *)this + 35) += *(_DWORD *)(v28 + 8 * v29 + 1020);
    v30 = *(_QWORD *)a3;
    v31 = *(_DWORD *)(*(_QWORD *)a3 + 40LL) & 1;
    *((_DWORD *)this + 38) += *(_DWORD *)(*(_QWORD *)a3 + 8 * v31 + 1016);
    *((_DWORD *)this + 40) += *(_DWORD *)(v30 + 8 * v31 + 1016);
    *((_DWORD *)this + 39) += *(_DWORD *)(v30 + 8 * v31 + 1020);
    *((_DWORD *)this + 41) += *(_DWORD *)(v30 + 8 * v31 + 1020);
    XDCOBJ::prgnEffRao((DC **)a2);
    XCLIPOBJ::XCLIPOBJ((XCLIPOBJ *)v77);
    XCLIPOBJ::vSetup((XCLIPOBJ *)v77, v32, (BLTRECORD *)((char *)this + 128), 0);
    if ( (unsigned int)ERECTL::bEmpty((ERECTL *)v78) )
      return 1LL;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0xE0) != 0
      && ((a4 & 0xE8) == 0 || (v62 = *((_QWORD *)this + 10)) != 0 && (*(_DWORD *)(v62 + 120) & 0x100) == 0) )
    {
      v66 = v78[0];
      XDCOBJ::vAccumulateTight(a2, v33, &v66);
    }
    BLTRECORD::PROXYDCOBJ::pSurfaceEff(a3);
    v34 = *(_DWORD **)(*((_QWORD *)this + 7) + 48LL);
    if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 1) != 0 )
      BLTRECORD::PROXYDCOBJ::pSurfaceEff(a3);
    if ( (*(_DWORD *)(*((_QWORD *)this + 6) + 112LL) & 0x2000) != 0 )
      v35 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))(v16 + 3232);
    else
      v35 = EngStretchBltROP;
    if ( v65 )
      goto LABEL_43;
    if ( a5 == 4 && (*(_BYTE *)(v16 + 1808) & 0x10) == 0 )
      v35 = EngStretchBltROP;
    v36 = *((_QWORD *)this + 7);
    v37 = 0;
    if ( *(_WORD *)(v36 + 100) == 1 && v34 && (v34[10] & 0x20000) != 0 )
    {
      v63 = v34[644];
      if ( *((_DWORD *)this + 38) < v63
        || (v64 = v34[645], *((_DWORD *)this + 39) < v64)
        || *((_DWORD *)this + 40) > *(_DWORD *)(v36 + 56) + v63
        || (v38 = *((_QWORD *)this + 7), *((_DWORD *)this + 41) > v64 + *(_DWORD *)(v36 + 60)) )
      {
        v37 = 1;
        v38 = *((_QWORD *)this + 7);
      }
    }
    else if ( *((int *)this + 38) < 0
           || *((int *)this + 39) < 0
           || *((_DWORD *)this + 40) > *(_DWORD *)(v36 + 56)
           || (v38 = *((_QWORD *)this + 7), *((_DWORD *)this + 41) > *(_DWORD *)(v36 + 60)) )
    {
      v38 = *((_QWORD *)this + 7);
      goto LABEL_63;
    }
    if ( !v37 )
    {
LABEL_42:
      if ( *((_QWORD *)this + 6) == v36 && (unsigned int)bIntersect((char *)this + 152, (char *)this + 128, v38) )
        v35 = EngStretchBltROP;
LABEL_43:
      if ( (*((_DWORD *)this + 49) & 8) != 0 )
      {
        v46 = *((_DWORD *)this + 32);
        *((_DWORD *)this + 32) = *((_DWORD *)this + 34);
        *((_DWORD *)this + 34) = v46;
      }
      if ( (*((_DWORD *)this + 49) & 0x10) != 0 )
      {
        v50 = *((_DWORD *)this + 33);
        *((_DWORD *)this + 33) = *((_DWORD *)this + 35);
        *((_DWORD *)this + 35) = v50;
      }
      v39 = 0LL;
      ++*(_DWORD *)(*((_QWORD *)this + 6) + 92LL);
      v40 = *(_QWORD *)a2;
      v41 = *((_DWORD *)this + 48);
      v42 = *((_QWORD *)this + 10);
      v43 = *(_WORD *)(*(_QWORD *)a2 + 178LL);
      v44 = *(_QWORD *)a2 + 1192LL;
      v45 = v40 + 176;
      if ( v43 >= 0 )
        v39 = v45;
      v66.m128i_i64[0] = *((_QWORD *)this + 9);
      if ( v41 != 52428 )
      {
        v47 = BLTRECORD::pSurfMskOut(this);
        if ( v47 )
          v14 = (char *)v47 + 24;
      }
      return ((__int64 (__fastcall *)(__int64, __int64, char *, _BYTE *, __int64, __int64, __int64, char *, char *, char *, _DWORD, __int64, int))v35)(
               (*((_QWORD *)this + 6) + 24LL) & -(__int64)(*((_QWORD *)this + 6) != 0LL),
               (*((_QWORD *)this + 7) + 24LL) & -(__int64)(*((_QWORD *)this + 7) != 0LL),
               v14,
               v77,
               v66.m128i_i64[0],
               v39,
               v44,
               (char *)this + 128,
               (char *)this + 152,
               (char *)this + 168,
               a5,
               v42,
               v41);
    }
LABEL_63:
    v35 = EngStretchBltROP;
    v36 = v38;
    goto LABEL_42;
  }
  BLTRECORD::vOrderStupid(this, (BLTRECORD *)((char *)this + 168));
  v54 = 0;
  if ( BLTRECORD::pSurfMskOut(v51) )
  {
    if ( *v52 < 0
      || *(int *)(v53 + 172) < 0
      || (v55 = *(_QWORD *)(v53 + 64), *((_DWORD *)this + 44) > *(_DWORD *)(v55 + 56))
      || *((_DWORD *)this + 45) > *(_DWORD *)(v55 + 60) )
    {
LABEL_22:
      EngSetLastError(0x57u);
      return 0LL;
    }
  }
  v66.m128i_i64[0] = 0LL;
  v66.m128i_i8[8] = 0;
  v66.m128i_i32[3] = 0;
  if ( (a4 & 0x10000) == 0 || (unsigned int)BLTRECORD::bStretch(this, (struct SURFMEM *)&v66, a5) )
  {
    v56 = *((_DWORD *)this + 35) + *((_DWORD *)this + 39) - *((_DWORD *)this + 33);
    *((_DWORD *)this + 40) = *((_DWORD *)this + 34) + *((_DWORD *)this + 38) - *((_DWORD *)this + 32);
    *((_DWORD *)this + 41) = v56;
    OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v76, a2);
    v57 = XDCOBJ::pSurfaceEff(a2);
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v74, v76);
    v75 = v57;
    v54 = BLTRECORD::bBitBlt(this, a2, (struct BLTRECORD::PROXYDCOBJ *)v74, a4);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v74);
    OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v76);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v66);
  return v54;
}
