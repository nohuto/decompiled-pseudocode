/*
 * XREFs of ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x1400C3880
 * Callers:
 *     ?GrepPolyPatBlt@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x140016D8C (-GrepPolyPatBlt@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     NtGdiMaskBlt @ 0x1400C3730 (NtGdiMaskBlt.c)
 *     GrePatBlt @ 0x1400C4060 (GrePatBlt.c)
 *     ?GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z @ 0x1400C4DA4 (-GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x140172FB0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x140015954 (--0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x14001C294 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x14001C920 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x14001D0CC (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x14001D230 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x14001F1E8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x14001F7E4 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     ?GrepMaskBltDevLocked@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKAEAVDEVLOCKBLTOBJ@@AEAVBLTRECORD@@PEAVSURFACE@@@Z @ 0x1400C2F30 (-GrepMaskBltDevLocked@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKAEAVDEVLOCKBLTOBJ@@AEAVBLTRECOR.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1400C384C (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?bXform@DC@@QEBA_NAEBVEXFORMOBJ@@AEAVERECTL@@@Z @ 0x1400C5718 (-bXform@DC@@QEBA_NAEBVEXFORMOBJ@@AEAVERECTL@@@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1400D076C (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ @ 0x1400D2008 (-pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1400D2238 (--1BLTRECORD@@QEAA@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1400D245C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1400E7958 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall GrepMaskBlt(
        DC **a1,
        int a2,
        int a3,
        int a4,
        int a5,
        struct Gre::Base::SESSION_GLOBALS **a6,
        LONG a7,
        int a8,
        HBITMAP a9,
        int a10,
        int a11,
        unsigned int a12,
        unsigned int a13)
{
  unsigned int v13; // ebx
  int v18; // r8d
  HSURF v19; // r9
  char v20; // r10
  __int64 v21; // r11
  unsigned int v22; // esi
  struct SURFACE *v23; // rax
  DC *v25; // rcx
  int v26; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v27[32]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v28; // [rsp+B0h] [rbp-50h]
  _BYTE v29[112]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v30[352]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v31[352]; // [rsp+290h] [rbp+190h] BYREF
  _DWORD v32[4]; // [rsp+3F0h] [rbp+2F0h] BYREF
  _BYTE v33[64]; // [rsp+400h] [rbp+300h] BYREF
  __int64 v34; // [rsp+440h] [rbp+340h]
  unsigned int v35; // [rsp+4C0h] [rbp+3C0h]
  int v36; // [rsp+4C4h] [rbp+3C4h]

  v13 = 0;
  v34 = 0LL;
  v36 = 0;
  v26 = a4;
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)a1) )
  {
    if ( !v18 )
    {
      if ( (v20 & 0xE0) != 0 )
      {
        DC::QuickInitXform(v21, &v26, 516LL);
        v25 = *a1;
        v32[2] = a2 + a4;
        v32[0] = a2;
        v32[3] = a3 + a5;
        v32[1] = a3;
        if ( !DC::bXform(v25, (const struct EXFORMOBJ *)&v26, (struct ERECTL *)v32) )
          goto LABEL_12;
        ERECTL::vOrder((ERECTL *)v32);
        XDCOBJ::vAccumulate((XDCOBJ *)a1, (struct ERECTL *)v32);
      }
      v13 = 1;
      goto LABEL_12;
    }
    goto LABEL_15;
  }
  if ( v18 )
  {
LABEL_15:
    EngSetLastError(0x57u);
    goto LABEL_12;
  }
  if ( !v19 || BYTE2(a12) == HIBYTE(a12) )
  {
    v22 = (unsigned __int8)gajRop3[BYTE2(a12)];
    v35 = BYTE2(a12) | (BYTE2(a12) << 8);
  }
  else
  {
    SURFREF::SURFREF((SURFREF *)v27, v19);
    if ( !v28 || (v34 = v28, *(_WORD *)(v28 + 100)) || *(_DWORD *)(v28 + 96) != 1 )
    {
      EngSetLastError(6u);
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v27);
      goto LABEL_12;
    }
    INC_SHARE_REF_CNT(v28);
    v36 |= 0x30000u;
    v35 = HIWORD(a12);
    v22 = (unsigned __int8)gajRop3[BYTE2(a12)] | (unsigned __int8)gajRop3[(unsigned __int64)HIWORD(a12) >> 8] | 0x10000;
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v27);
  }
  if ( (v22 & 0xD4) != 0 && OPTAPIDCOBJ::bValid((HDC *)a6) )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v29, a6);
    bSpDwmValidateSurface((struct XDCOBJ *)v29, a7, a8, v26, a5);
    DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v30);
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v30, (struct _ERESOURCE ***)a1, (struct XDCOBJ *)v29);
    v23 = XDCOBJ::pSurfaceEff((XDCOBJ *)v29);
    v13 = GrepMaskBltDevLocked(
            a1,
            a2,
            a3,
            v26,
            a5,
            (struct OPTAPIDCOBJ *)a6,
            a7,
            a8,
            a10,
            a11,
            a13,
            v22,
            (struct DEVLOCKBLTOBJ *)v30,
            (struct BLTRECORD *)v33,
            v23);
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v30);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v29);
  }
  else
  {
    DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v31);
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v31, (struct XDCOBJ *)a1);
    v13 = GrepMaskBltDevLocked(
            a1,
            a2,
            a3,
            v26,
            a5,
            (struct OPTAPIDCOBJ *)a6,
            a7,
            a8,
            a10,
            a11,
            a13,
            v22,
            (struct DEVLOCKBLTOBJ *)v31,
            (struct BLTRECORD *)v33,
            0LL);
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v31);
  }
LABEL_12:
  BLTRECORD::~BLTRECORD((BLTRECORD *)v33);
  return v13;
}
