/*
 * XREFs of ?GrepMaskBltDevLocked@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKAEAVDEVLOCKBLTOBJ@@AEAVBLTRECORD@@PEAVSURFACE@@@Z @ 0x1400C2F30
 * Callers:
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x1400C3880 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x14000FB40 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x140013568 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@K@Z @ 0x1400158E8 (-bBitBlt@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@K@Z.c)
 *     ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x140015954 (--0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x14001980C (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x14001F7E4 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     ?bEqualExtents@BLTRECORD@@QEBAHXZ @ 0x1400C36B4 (-bEqualExtents@BLTRECORD@@QEBAHXZ.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1400C5620 (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?Trg@BLTRECORD@@QEAAHHHHH@Z @ 0x1400C5684 (-Trg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?bXform@DC@@QEBA_NAEBVEXFORMOBJ@@AEAVERECTL@@@Z @ 0x1400C5718 (-bXform@DC@@QEBA_NAEBVEXFORMOBJ@@AEAVERECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x1400CE708 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ @ 0x1400D2008 (-pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ.c)
 *     ?bInFullScreen@DC@@QEBAHXZ @ 0x1400D243C (-bInFullScreen@DC@@QEBAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1400D245C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z @ 0x1400D2508 (-bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z.c)
 *     ??0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1400DF75C (--0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1400E7958 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x14016E720 (-vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vInit@EXFORMOBJ@@QEAAXPEAUMATRIX@@K@Z @ 0x140174EB0 (-vInit@EXFORMOBJ@@QEAAXPEAUMATRIX@@K@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z @ 0x1401EFCB4 (-bRotate@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z.c)
 *     ?TrgPlg@BLTRECORD@@QEAAHHHHH@Z @ 0x140224B70 (-TrgPlg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?Msk@BLTRECORD@@QEAAHHHHH@Z @ 0x140308EE0 (-Msk@BLTRECORD@@QEAAHHHHH@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall GrepMaskBltDevLocked(
        DC **a1,
        int a2,
        int a3,
        int a4,
        int a5,
        struct OPTAPIDCOBJ *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        unsigned int a11,
        unsigned int a12,
        struct DEVLOCKBLTOBJ *a13,
        struct BLTRECORD *a14,
        struct SURFACE *a15)
{
  unsigned int v15; // r15d
  DC *v18; // r8
  int v19; // ecx
  struct MATRIX *v20; // rax
  int v21; // ecx
  int v22; // ecx
  int v23; // ebx
  char v24; // di
  unsigned int v25; // eax
  unsigned int v26; // ebx
  ULONG v28; // ecx
  struct SURFACE *v29; // rbx
  DC *v30; // rax
  unsigned int v31; // eax
  struct MATRIX *v32; // rax
  char *v33; // rbx
  ULONG v34; // ecx
  struct SURFACE *v35; // rbx
  DC *v36; // rcx
  struct MATRIX *inited; // rax
  int v38; // edx
  __int64 v39; // rdx
  int v40; // ecx
  struct SURFACE *v41; // rbx
  DC *v42; // rax
  int v45[4]; // [rsp+70h] [rbp-90h] BYREF
  DC *v46[14]; // [rsp+80h] [rbp-80h] BYREF
  struct SURFACE *v47; // [rsp+F0h] [rbp-10h]
  struct Gre::Base::SESSION_GLOBALS *v48[16]; // [rsp+100h] [rbp+0h] BYREF
  _DWORD v49[4]; // [rsp+180h] [rbp+80h] BYREF

  v15 = 1;
  v45[0] = a4;
  if ( (*((_DWORD *)a13 + 28) & 1) != 0 )
  {
    *((_QWORD *)a14 + 6) = *((_QWORD *)*a1 + 62);
    *(_QWORD *)a14 = DC::InitXform(*a1, 0x204u);
    *((_QWORD *)a14 + 2) = *(_QWORD *)(*((_QWORD *)a14 + 6) + 128LL);
    *((_QWORD *)a14 + 3) = *((_QWORD *)*a1 + 11);
    if ( (a12 & 0xD4) == 0 )
    {
      *((_QWORD *)a14 + 7) = 0LL;
      if ( (a12 & 0x10000) != 0 )
      {
        if ( *((_QWORD *)a6 + 13) )
        {
          if ( !OPTAPIDCOBJ::bValid((HDC *)a6) )
          {
            v34 = 6;
            goto LABEL_41;
          }
          APIDCOBJ::APIDCOBJ((APIDCOBJ *)v46, (struct Gre::Base::SESSION_GLOBALS **)a6);
          inited = DC::InitXform(v46[0], 0x204u);
          v33 = (char *)a14 + 8;
          EXFORMOBJ::vInit((struct BLTRECORD *)((char *)a14 + 8), inited, 0);
          APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v46);
          v24 = 0;
        }
        else
        {
          v24 = 1;
          v32 = DC::InitXform(*a1, 0x204u);
          v33 = (char *)a14 + 8;
          EXFORMOBJ::vInit((struct BLTRECORD *)((char *)a14 + 8), v32, 0);
        }
        if ( (*(_BYTE *)(*(_QWORD *)v33 + 32LL) & 1) == 0 )
          goto LABEL_40;
        v23 = v45[0];
        if ( !(unsigned int)BLTRECORD::Msk(a14, a9, a10, v45[0], a5) )
          goto LABEL_40;
        goto LABEL_16;
      }
LABEL_15:
      v23 = v45[0];
      v24 = 0;
LABEL_16:
      if ( (a12 & 0xE8) != 0 )
      {
        v38 = *(_DWORD *)(*((_QWORD *)*a1 + 122) + 152LL);
        *((_QWORD *)a14 + 10) = (char *)*a1 + 1200;
        if ( (v38 & 0x1000) != 0 )
          GreDCSelectBrush(*a1, *(_QWORD *)(*((_QWORD *)*a1 + 122) + 160LL));
        v39 = *((_QWORD *)*a1 + 122);
        v40 = *(_DWORD *)(v39 + 152);
        if ( (v40 & 1) != 0 || (*((_DWORD *)*a1 + 79) & 1) != 0 )
        {
          *(_DWORD *)(v39 + 152) = v40 & 0xFFFFFFFE;
          *((_DWORD *)*a1 + 79) &= ~1u;
          EBRUSHOBJ::vInitBrush(
            *((_QWORD *)a14 + 10),
            *a1,
            *((_QWORD *)*a1 + 17),
            *((_QWORD *)a14 + 3),
            *((_QWORD *)a14 + 2),
            *((_QWORD *)a14 + 6),
            1);
        }
        *((_QWORD *)a14 + 23) = *((_QWORD *)*a1 + 149);
      }
      else
      {
        *((_QWORD *)a14 + 10) = 0LL;
      }
      if ( !(unsigned int)DestSurfaceAccessCheck(*((struct SURFACE **)*a1 + 62)) )
      {
        v34 = 5;
        goto LABEL_41;
      }
      if ( (*(_BYTE *)(*(_QWORD *)a14 + 32LL) & 1) != 0 )
      {
        if ( (unsigned int)BLTRECORD::Trg(a14, a2, a3, v23, a5) )
        {
          if ( (a12 & 0xD4) == 0 || (unsigned int)BLTRECORD::bEqualExtents(a14) )
          {
            if ( v24 )
            {
              OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v48, (struct XDCOBJ *)a1);
              v35 = XDCOBJ::pSurfaceEff((XDCOBJ *)a1);
              APIDCOBJ::APIDCOBJ((APIDCOBJ *)v46, v48);
              v47 = v35;
              v31 = BLTRECORD::bBitBlt(a14, (struct XDCOBJ *)a1, (struct BLTRECORD::PROXYDCOBJ *)v46, a12);
              goto LABEL_43;
            }
            APIDCOBJ::APIDCOBJ((APIDCOBJ *)v46, (struct Gre::Base::SESSION_GLOBALS **)a6);
            v47 = a15;
            v25 = BLTRECORD::bBitBlt(a14, (struct XDCOBJ *)a1, (struct BLTRECORD::PROXYDCOBJ *)v46, a12);
          }
          else
          {
            if ( v24 )
            {
              OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v48, (struct XDCOBJ *)a1);
              v29 = XDCOBJ::pSurfaceEff((XDCOBJ *)a1);
              APIDCOBJ::APIDCOBJ((APIDCOBJ *)v46, v48);
              v30 = *a1;
              v47 = v29;
              v31 = BLTRECORD::bStretch(
                      a14,
                      (struct XDCOBJ *)a1,
                      (struct BLTRECORD::PROXYDCOBJ *)v46,
                      a12,
                      *(_BYTE *)(*((_QWORD *)v30 + 122) + 215LL));
LABEL_43:
              v26 = v31;
              APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v46);
              OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v48);
              return v26;
            }
            APIDCOBJ::APIDCOBJ((APIDCOBJ *)v46, (struct Gre::Base::SESSION_GLOBALS **)a6);
            v47 = a15;
            v25 = BLTRECORD::bStretch(
                    a14,
                    (struct XDCOBJ *)a1,
                    (struct BLTRECORD::PROXYDCOBJ *)v46,
                    a12,
                    *(_BYTE *)(*((_QWORD *)*a1 + 122) + 215LL));
          }
LABEL_24:
          v26 = v25;
          APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v46);
          return v26;
        }
      }
      else if ( (unsigned int)BLTRECORD::TrgPlg(a14, a2, a3, v23, a5) )
      {
        if ( v24 )
        {
          OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v48, (struct XDCOBJ *)a1);
          v41 = XDCOBJ::pSurfaceEff((XDCOBJ *)a1);
          APIDCOBJ::APIDCOBJ((APIDCOBJ *)v46, v48);
          v42 = *a1;
          v47 = v41;
          v31 = BLTRECORD::bRotate(
                  a14,
                  (struct XDCOBJ *)a1,
                  (struct BLTRECORD::PROXYDCOBJ *)v46,
                  a12,
                  *(_BYTE *)(*((_QWORD *)v42 + 122) + 215LL));
          goto LABEL_43;
        }
        APIDCOBJ::APIDCOBJ((APIDCOBJ *)v46, (struct Gre::Base::SESSION_GLOBALS **)a6);
        v47 = a15;
        v25 = BLTRECORD::bRotate(
                a14,
                (struct XDCOBJ *)a1,
                (struct BLTRECORD::PROXYDCOBJ *)v46,
                a12,
                *(_BYTE *)(*((_QWORD *)*a1 + 122) + 215LL));
        goto LABEL_24;
      }
LABEL_40:
      v34 = 87;
LABEL_41:
      EngSetLastError(v34);
      return 0LL;
    }
    if ( !OPTAPIDCOBJ::bValid((HDC *)a6) )
      goto LABEL_40;
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v46, (struct Gre::Base::SESSION_GLOBALS **)a6);
    v18 = v46[0];
    if ( v46[0] && *((_QWORD *)v46[0] + 62) && !(unsigned int)DC::bInFullScreen(v46[0]) )
    {
      v19 = *((_DWORD *)a13 + 28);
      if ( (v19 & 0x800000) != 0 )
      {
LABEL_8:
        if ( (v19 & 0x400000) != 0 )
        {
          *((_QWORD *)a14 + 7) = a15;
          *((_QWORD *)a14 + 4) = *((_QWORD *)a15 + 16);
          *((_QWORD *)a14 + 5) = *((_QWORD *)v18 + 11);
          v20 = DC::InitXform(v18, 0x204u);
          *((_QWORD *)a14 + 1) = v20;
          if ( (*((_BYTE *)v20 + 32) & 1) != 0 && (unsigned int)BLTRECORD::Src(a14, a7, a8, a4, a5) )
          {
            if ( (a12 & 0x10000) != 0 )
            {
              v21 = a9 + *((_DWORD *)a14 + 40) - *((_DWORD *)a14 + 38);
              *((_DWORD *)a14 + 42) = a9;
              *((_DWORD *)a14 + 44) = v21;
              v22 = *((_DWORD *)a14 + 41) - *((_DWORD *)a14 + 39);
              *((_DWORD *)a14 + 43) = a10;
              *((_DWORD *)a14 + 45) = a10 + v22;
            }
            if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                 (struct BLTRECORD *)((char *)a14 + 72),
                                 0LL,
                                 *((_DWORD *)*a1 + 30),
                                 *((_QWORD *)a14 + 4),
                                 *((_QWORD *)a14 + 2),
                                 *((_QWORD *)a14 + 5),
                                 *((_QWORD *)a14 + 3),
                                 *(_DWORD *)(*((_QWORD *)*a1 + 122) + 184LL),
                                 *(_DWORD *)(*((_QWORD *)*a1 + 122) + 176LL),
                                 a11,
                                 0) )
            {
              *((_DWORD *)a14 + 49) |= 2u;
              APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v46);
              goto LABEL_15;
            }
            goto LABEL_31;
          }
          v28 = 87;
        }
        else
        {
          v28 = 5;
        }
        EngSetLastError(v28);
LABEL_31:
        v15 = 0;
LABEL_32:
        APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v46);
        return v15;
      }
    }
    else
    {
      v19 = *((_DWORD *)a13 + 28);
      if ( (v19 & 0x800000) != 0 )
        goto LABEL_27;
    }
    if ( *((_DWORD *)*a1 + 8) == 2 && (*((_DWORD *)*a1 + 9) & 0xE0) != 0 )
    {
      DC::QuickInitXform(*a1, v45, 516LL);
      v49[0] = a2;
      v49[3] = a3 + a5;
      v36 = *a1;
      v49[1] = a3;
      v49[2] = a4 + a2;
      if ( DC::bXform(v36, (const struct EXFORMOBJ *)v45, (struct ERECTL *)v49) )
      {
        ERECTL::vOrder((ERECTL *)v49);
        XDCOBJ::vAccumulate((XDCOBJ *)a1, (struct ERECTL *)v49);
        XDCOBJ::vAccumulateTight((XDCOBJ *)a1, (struct ERECTL *)v49);
      }
      goto LABEL_32;
    }
LABEL_27:
    if ( (*((_DWORD *)v18 + 9) & 1) == 0 )
      goto LABEL_31;
    goto LABEL_8;
  }
  return XDCOBJ::bFullScreen((XDCOBJ *)a1);
}
