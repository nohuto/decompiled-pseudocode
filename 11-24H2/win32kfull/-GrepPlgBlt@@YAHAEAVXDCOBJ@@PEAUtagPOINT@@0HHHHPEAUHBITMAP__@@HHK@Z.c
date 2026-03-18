/*
 * XREFs of ?GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z @ 0x1403050D8
 * Callers:
 *     NtGdiPlgBlt @ 0x140305D30 (NtGdiPlgBlt.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x14000FB40 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x140013568 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@K@Z @ 0x1400158E8 (-bBitBlt@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@K@Z.c)
 *     ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x140015954 (--0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x14001980C (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x14001C294 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x14001C920 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x14001D0CC (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x14001D230 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x14001F1E8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?bEqualExtents@BLTRECORD@@QEBAHXZ @ 0x1400C36B4 (-bEqualExtents@BLTRECORD@@QEBAHXZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1400C384C (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1400C5620 (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x1400CE708 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ @ 0x1400D2008 (-pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1400D2238 (--1BLTRECORD@@QEAA@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1400D245C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z @ 0x1400D2508 (-bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z.c)
 *     ??0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1400DF75C (--0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?vInit@EXFORMOBJ@@QEAAXPEAUMATRIX@@K@Z @ 0x140174EB0 (-vInit@EXFORMOBJ@@QEAAXPEAUMATRIX@@K@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z @ 0x1401EFCB4 (-bRotate@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z.c)
 *     ?vExtrema@BLTRECORD@@QEAAXXZ @ 0x1401F0490 (-vExtrema@BLTRECORD@@QEAAXXZ.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1401F0518 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall GrepPlgBlt(
        struct XDCOBJ *a1,
        const struct _POINTL *a2,
        struct XDCOBJ *a3,
        LONG a4,
        int a5,
        unsigned int a6,
        int a7,
        HSURF a8,
        int a9,
        int a10,
        unsigned int a11)
{
  __int64 v11; // rax
  unsigned int v12; // ebx
  int v17; // r14d
  __int64 v18; // rdx
  __int64 v19; // rdx
  DC *v20; // r8
  struct MATRIX *inited; // rax
  struct SURFACE *v22; // rax
  struct MATRIX *v23; // rax
  struct MATRIX *v24; // rax
  struct SURFACE *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // rax
  unsigned int v29; // r15d
  struct SURFACE *v30; // rbx
  __int64 v31; // rax
  struct Gre::Base::SESSION_GLOBALS **v32; // rcx
  struct SURFACE *v33; // rbx
  struct SURFACE *v34; // rbx
  __int64 v35; // rax
  ULONG v36; // ecx
  _BYTE v38[16]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v39[32]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v40; // [rsp+98h] [rbp-68h]
  _BYTE v41[112]; // [rsp+A0h] [rbp-60h] BYREF
  struct SURFACE *v42; // [rsp+110h] [rbp+10h]
  _BYTE v43[112]; // [rsp+120h] [rbp+20h] BYREF
  struct SURFACE *v44; // [rsp+190h] [rbp+90h]
  _BYTE v45[112]; // [rsp+1A0h] [rbp+A0h] BYREF
  struct SURFACE *v46; // [rsp+210h] [rbp+110h]
  _BYTE v47[112]; // [rsp+220h] [rbp+120h] BYREF
  int v48; // [rsp+290h] [rbp+190h]
  struct Gre::Base::SESSION_GLOBALS *v49[16]; // [rsp+380h] [rbp+280h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v50[16]; // [rsp+400h] [rbp+300h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v51[16]; // [rsp+480h] [rbp+380h] BYREF
  _BYTE v52[8]; // [rsp+500h] [rbp+400h] BYREF
  __int64 v53; // [rsp+508h] [rbp+408h] BYREF
  __int64 v54; // [rsp+510h] [rbp+410h]
  __int64 v55; // [rsp+518h] [rbp+418h]
  __int64 v56; // [rsp+520h] [rbp+420h]
  __int64 v57; // [rsp+528h] [rbp+428h]
  struct SURFACE *v58; // [rsp+530h] [rbp+430h]
  struct SURFACE *v59; // [rsp+538h] [rbp+438h]
  __int64 v60; // [rsp+540h] [rbp+440h]
  _BYTE v61[8]; // [rsp+548h] [rbp+448h] BYREF
  __int64 v62; // [rsp+550h] [rbp+450h]
  struct _POINTFIX v63; // [rsp+560h] [rbp+460h] BYREF
  int v64; // [rsp+568h] [rbp+468h]
  int v65; // [rsp+56Ch] [rbp+46Ch]
  int v66; // [rsp+570h] [rbp+470h]
  int v67; // [rsp+574h] [rbp+474h]
  FIX v68; // [rsp+580h] [rbp+480h]
  FIX v69; // [rsp+584h] [rbp+484h]
  int v70; // [rsp+588h] [rbp+488h]
  int v71; // [rsp+58Ch] [rbp+48Ch]
  int v72; // [rsp+598h] [rbp+498h]
  int v73; // [rsp+59Ch] [rbp+49Ch]
  int v74; // [rsp+5A0h] [rbp+4A0h]
  int v75; // [rsp+5A4h] [rbp+4A4h]
  int v76; // [rsp+5A8h] [rbp+4A8h]
  int v77; // [rsp+5ACh] [rbp+4ACh]
  int v78; // [rsp+5B0h] [rbp+4B0h]
  int v79; // [rsp+5B4h] [rbp+4B4h]
  int v80; // [rsp+5C0h] [rbp+4C0h]
  int v81; // [rsp+5C4h] [rbp+4C4h]

  v11 = *(_QWORD *)a1;
  v12 = 0;
  v60 = 0LL;
  v81 = 0;
  if ( (*(_DWORD *)(v11 + 36) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
LABEL_8:
    BLTRECORD::~BLTRECORD((BLTRECORD *)v52);
    return v12;
  }
  bSpDwmValidateSurface(a3, a4, a5, a6, a7);
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v47);
  if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v47, (struct _ERESOURCE ***)a1, a3) )
  {
    if ( (unsigned int)XDCOBJ::bFullScreen(a1) || (unsigned int)XDCOBJ::bFullScreen(a3) )
      v12 = 1;
    goto LABEL_7;
  }
  v17 = 1;
  if ( !(unsigned int)XDCOBJ::bValidSurf(a1) || !(unsigned int)XDCOBJ::bValidSurf(a3) || (v48 & 0x800000) == 0 )
  {
    v18 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
    if ( (*(_DWORD *)(v18 + 152) & 0x1000) != 0 )
      GreDCSelectBrush(*(_QWORD *)a1, *(_QWORD *)(v18 + 160));
    v19 = *(_QWORD *)(*(_QWORD *)a3 + 976LL);
    if ( (*(_DWORD *)(v19 + 152) & 0x1000) != 0 )
      GreDCSelectBrush(*(_QWORD *)a3, *(_QWORD *)(v19 + 160));
    v20 = *(DC **)a1;
    if ( (*(_DWORD *)(*(_QWORD *)a1 + 32LL) == 2 || !(unsigned int)XDCOBJ::bValidSurf(a3))
      && (*((_DWORD *)v20 + 9) & 0xE0) != 0 )
    {
      inited = DC::InitXform(v20, 0x204u);
      EXFORMOBJ::vInit((EXFORMOBJ *)v52, inited, 0);
      if ( !EXFORMOBJ::bXform((EXFORMOBJ *)v52, a2, &v63, 3uLL) )
      {
LABEL_52:
        v36 = 87;
LABEL_54:
        EngSetLastError(v36);
        goto LABEL_55;
      }
      BLTRECORD::vExtrema((BLTRECORD *)v52);
      BLTRECORD::vBound((BLTRECORD *)v52, (struct ERECTL *)v38);
      XDCOBJ::vAccumulate(a1, (struct ERECTL *)v38);
    }
    if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 1) == 0 )
    {
      LOBYTE(v12) = *(_QWORD *)(*(_QWORD *)a1 + 496LL) == 0LL;
LABEL_7:
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v47);
      goto LABEL_8;
    }
  }
  if ( (v48 & 0x400000) == 0 || (v22 = XDCOBJ::pSurfaceEff(a1), !(unsigned int)DestSurfaceAccessCheck(v22)) )
  {
    v36 = 5;
    goto LABEL_54;
  }
  v23 = DC::InitXform(*(DC **)a1, 0x204u);
  EXFORMOBJ::vInit((EXFORMOBJ *)v52, v23, 0);
  v58 = XDCOBJ::pSurfaceEff(a1);
  v54 = *((_QWORD *)v58 + 16);
  v55 = *(_QWORD *)(*(_QWORD *)a1 + 88LL);
  v24 = DC::InitXform(*(DC **)a3, 0x204u);
  EXFORMOBJ::vInit((EXFORMOBJ *)&v53, v24, 0);
  v25 = XDCOBJ::pSurfaceEff(a3);
  v26 = *(_QWORD *)a1;
  v59 = v25;
  v27 = *((_QWORD *)v25 + 16);
  v28 = *(_QWORD *)a3;
  v56 = v27;
  v57 = *(_QWORD *)(v28 + 88);
  if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                       (Gre::Base *)v61,
                       0LL,
                       *(_DWORD *)(v26 + 120),
                       v27,
                       v54,
                       v57,
                       v55,
                       *(_DWORD *)(*(_QWORD *)(v26 + 976) + 184LL),
                       *(_DWORD *)(*(_QWORD *)(v26 + 976) + 176LL),
                       a11,
                       0) )
  {
    v81 |= 2u;
    v62 = 0LL;
    if ( (*(_BYTE *)(v53 + 32) & 1) != 0 && (unsigned int)BLTRECORD::Src((BLTRECORD *)v52, a4, a5, a6, a7) )
    {
      if ( a8 )
      {
        SURFREF::SURFREF((SURFREF *)v39, a8);
        if ( !v40
          || (INC_SHARE_REF_CNT(v40), v29 = 65540, v81 |= 0x30000u, v60 = v40, v80 = 43724, *(_WORD *)(v40 + 100))
          || *(_DWORD *)(v40 + 96) != 1 )
        {
          EngSetLastError(6u);
          SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v39);
          goto LABEL_7;
        }
        v76 = a9;
        v78 = a9 + v74 - v72;
        v77 = a10;
        v79 = a10 + v75 - v73;
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v39);
      }
      else
      {
        v60 = 0LL;
        v29 = 4;
        v80 = 52428;
      }
      if ( EXFORMOBJ::bXform((EXFORMOBJ *)v52, a2, &v63, 3uLL) )
      {
        if ( v65 == v63.y
          && v66 == v63.x
          && (v63.x & 0xF) == 0
          && (v63.y & 0xF) == 0
          && (v64 & 0xF) == 0
          && (v65 & 0xF) == 0
          && (v66 & 0xF) == 0
          && (v67 & 0xF) == 0 )
        {
          v17 = 0;
          v71 = v67 >> 4;
          v68 = v63.x >> 4;
          v69 = v63.y >> 4;
          v70 = v64 >> 4;
        }
        if ( v17 )
        {
          OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v49, (struct Gre::Base::SESSION_GLOBALS **)a3);
          v30 = XDCOBJ::pSurfaceEff(a3);
          APIDCOBJ::APIDCOBJ((APIDCOBJ *)v41, v49);
          v31 = *(_QWORD *)a1;
          v42 = v30;
          v12 = BLTRECORD::bRotate(
                  (BLTRECORD *)v52,
                  (struct Gre::Base::SESSION_GLOBALS **)a1,
                  (struct BLTRECORD::PROXYDCOBJ *)v41,
                  v29,
                  *(_BYTE *)(*(_QWORD *)(v31 + 976) + 215LL));
          APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v41);
          v32 = v49;
        }
        else if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 215LL) == 4
               || !BLTRECORD::bEqualExtents((BLTRECORD *)v52) )
        {
          OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v51, (struct Gre::Base::SESSION_GLOBALS **)a3);
          v34 = XDCOBJ::pSurfaceEff(a3);
          APIDCOBJ::APIDCOBJ((APIDCOBJ *)v45, v51);
          v35 = *(_QWORD *)a1;
          v46 = v34;
          v12 = BLTRECORD::bStretch(
                  (BLTRECORD *)v52,
                  a1,
                  (struct BLTRECORD::PROXYDCOBJ *)v45,
                  v29,
                  *(_BYTE *)(*(_QWORD *)(v35 + 976) + 215LL));
          APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v45);
          v32 = v51;
        }
        else
        {
          OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v50, (struct Gre::Base::SESSION_GLOBALS **)a3);
          v33 = XDCOBJ::pSurfaceEff(a3);
          APIDCOBJ::APIDCOBJ((APIDCOBJ *)v43, v50);
          v44 = v33;
          v12 = BLTRECORD::bBitBlt((BLTRECORD *)v52, a1, (struct BLTRECORD::PROXYDCOBJ *)v43, v29);
          APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v43);
          v32 = v50;
        }
        OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v32);
        goto LABEL_7;
      }
    }
    goto LABEL_52;
  }
LABEL_55:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v47);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v52);
  return 0LL;
}
