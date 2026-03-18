/*
 * XREFs of GrePlgBlt @ 0x1C0290660
 * Callers:
 *     NtGdiPlgBlt @ 0x1C0290D50 (NtGdiPlgBlt.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004CC34 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C007A418 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C007A4FC (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1C007A578 (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?bEqualExtents@BLTRECORD@@QEBAHXZ @ 0x1C007A5C4 (-bEqualExtents@BLTRECORD@@QEBAHXZ.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C007A614 (--1BLTRECORD@@QEAA@XZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C007E42C (--1SURFREF@@QEAA@XZ.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00BDB6C (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C00C237C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00C2470 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00C33E0 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00C3A60 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00F98B0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00FB100 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C00FEE00 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0102AF0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@AEAVXDCOBJ@@0@Z @ 0x1C028E190 (--0DEVLOCKBLTOBJ@@QEAA@AEAVXDCOBJ@@0@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C028E310 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bRotated@BLTRECORD@@QEAAHXZ @ 0x1C028EE1C (-bRotated@BLTRECORD@@QEAAHXZ.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C028EE94 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vExtrema@BLTRECORD@@QEAAXXZ @ 0x1C028EF10 (-vExtrema@BLTRECORD@@QEAAXXZ.c)
 */

__int64 __fastcall GrePlgBlt(
        HDC a1,
        struct _POINTL *a2,
        HDC a3,
        LONG a4,
        LONG a5,
        int a6,
        int a7,
        HSURF a8,
        int a9,
        int a10,
        int a11)
{
  unsigned int v12; // edi
  __int64 v15; // rdx
  DC *v16; // r8
  int valid; // eax
  __int64 v19; // r9
  __int64 v20; // rdx
  struct SURFACE *v21; // rax
  struct SURFACE *v22; // rax
  __int64 v23; // rdx
  struct DC *v24; // r8
  unsigned int v25; // ebx
  int v26; // eax
  __int64 v27; // rcx
  unsigned int v28; // eax
  __int64 v29; // rdx
  struct DC *v30; // r8
  unsigned int v31; // ebx
  unsigned __int8 v32; // r9
  __int64 v33; // rdx
  struct DC *v34; // r8
  ULONG v35; // ecx
  DC *v36[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v37[32]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v38[2]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v39[32]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v40[32]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v41; // [rsp+E0h] [rbp-20h]
  _BYTE v42[24]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v43[288]; // [rsp+100h] [rbp+0h] BYREF
  struct _POINTL v44[2]; // [rsp+220h] [rbp+120h] BYREF
  __int64 v45; // [rsp+230h] [rbp+130h] BYREF
  __int64 v46; // [rsp+240h] [rbp+140h]
  __int64 v47; // [rsp+248h] [rbp+148h]
  __int64 v48; // [rsp+250h] [rbp+150h]
  __int64 v49; // [rsp+258h] [rbp+158h]
  struct SURFACE *v50; // [rsp+260h] [rbp+160h]
  struct SURFACE *v51; // [rsp+268h] [rbp+168h]
  __int64 v52; // [rsp+270h] [rbp+170h]
  _BYTE v53[8]; // [rsp+278h] [rbp+178h] BYREF
  __int64 v54; // [rsp+280h] [rbp+180h]
  struct _POINTFIX v55[7]; // [rsp+290h] [rbp+190h] BYREF
  int v56; // [rsp+2C8h] [rbp+1C8h]
  int v57; // [rsp+2CCh] [rbp+1CCh]
  int v58; // [rsp+2D0h] [rbp+1D0h]
  int v59; // [rsp+2D4h] [rbp+1D4h]
  int v60; // [rsp+2D8h] [rbp+1D8h]
  int v61; // [rsp+2DCh] [rbp+1DCh]
  int v62; // [rsp+2E0h] [rbp+1E0h]
  int v63; // [rsp+2E4h] [rbp+1E4h]
  int v64; // [rsp+2F0h] [rbp+1F0h]
  int v65; // [rsp+2F4h] [rbp+1F4h]

  v12 = 0;
  v52 = 0LL;
  v65 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v36, a1);
  DCOBJ::DCOBJ((DCOBJ *)v38, a3);
  if ( !v36[0] || !v38[0] || (*((_DWORD *)v36[0] + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    goto LABEL_57;
  }
  bSpDwmValidateSurface((struct XDCOBJ *)v38, a4, a5, a6, a7);
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v43, (struct XDCOBJ *)v36, (struct XDCOBJ *)v38);
  if ( (v43[112] & 1) == 0 )
  {
    if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v36) || (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v38) )
      v12 = 1;
    goto LABEL_8;
  }
  valid = XDCOBJ::bValidSurf((XDCOBJ *)v36);
  v19 = v38[0];
  if ( !valid
    || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v38)
    || (*(_DWORD *)(*(_QWORD *)(v19 + 496) + 112LL) & 0x10000000) != 0 )
  {
    v16 = v36[0];
    v20 = *((_QWORD *)v36[0] + 122);
    if ( (*(_DWORD *)(v20 + 152) & 0x1000) != 0 )
    {
      GreDCSelectBrush(v36[0], *(_QWORD *)(v20 + 160));
      v16 = v36[0];
      v19 = v38[0];
    }
    v15 = *(_QWORD *)(v19 + 976);
    if ( (*(_DWORD *)(v15 + 152) & 0x1000) != 0 )
    {
      GreDCSelectBrush(v19, *(_QWORD *)(v15 + 160));
      v16 = v36[0];
      v19 = v38[0];
    }
    if ( (*((_DWORD *)v16 + 8) == 2 || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v38))
      && (*((_DWORD *)v16 + 9) & 0xE0) != 0 )
    {
      EXFORMOBJ::vInit((EXFORMOBJ *)v44, (struct XDCOBJ *)v36, 0x204u, 0);
      if ( !EXFORMOBJ::bXform((EXFORMOBJ *)v44, a2, v55, 3uLL) )
      {
LABEL_53:
        v35 = 87;
LABEL_54:
        EngSetLastError(v35);
        goto LABEL_26;
      }
      BLTRECORD::vExtrema((BLTRECORD *)v44);
      BLTRECORD::vBound((BLTRECORD *)v44, (struct ERECTL *)v42);
      XDCOBJ::vAccumulate((XDCOBJ *)v36, (struct ERECTL *)v42);
      v16 = v36[0];
      v19 = v38[0];
    }
    if ( (*(_DWORD *)(v19 + 36) & 1) == 0 )
    {
      LOBYTE(v12) = *((_QWORD *)v16 + 62) == 0LL;
LABEL_8:
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v43, v15, v16);
      DCOBJ::~DCOBJ((DCOBJ *)v38);
      DCOBJ::~DCOBJ((DCOBJ *)v36);
      BLTRECORD::~BLTRECORD((BLTRECORD *)v44);
      return v12;
    }
  }
  v21 = XDCOBJ::pSurfaceEff((XDCOBJ *)v38);
  if ( !(unsigned int)SrcSurfaceAccessCheck(v21)
    || (v22 = XDCOBJ::pSurfaceEff((XDCOBJ *)v36), !(unsigned int)DestSurfaceAccessCheck(v22)) )
  {
    v35 = 5;
    goto LABEL_54;
  }
  EXFORMOBJ::vInit((EXFORMOBJ *)v44, (struct XDCOBJ *)v36, 0x204u, 0);
  v50 = XDCOBJ::pSurfaceEff((XDCOBJ *)v36);
  v46 = *((_QWORD *)v50 + 16);
  v47 = *((_QWORD *)v36[0] + 11);
  EXFORMOBJ::vInit((EXFORMOBJ *)&v45, (struct XDCOBJ *)v38, 0x204u, 0);
  v51 = XDCOBJ::pSurfaceEff((XDCOBJ *)v38);
  v48 = *((_QWORD *)v51 + 16);
  v49 = *(_QWORD *)(v38[0] + 88LL);
  if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                       (Gre::Base *)v53,
                       0LL,
                       *((_DWORD *)v36[0] + 30),
                       v48,
                       v46,
                       v49,
                       v47,
                       *(_DWORD *)(*((_QWORD *)v36[0] + 122) + 184LL),
                       *(_DWORD *)(*((_QWORD *)v36[0] + 122) + 176LL),
                       a11,
                       0) )
  {
    v65 |= 2u;
    v54 = 0LL;
    if ( (*(_DWORD *)(v45 + 32) & 1) != 0 && (unsigned int)BLTRECORD::Src(v44, a4, a5, a6, a7) )
    {
      if ( a8 )
      {
        SURFREF::SURFREF((SURFREF *)v40, a8);
        if ( !v41 )
        {
          EngSetLastError(6u);
          SURFREF::~SURFREF((SURFREF *)v40);
          goto LABEL_26;
        }
        INC_SHARE_REF_CNT(v41);
        v25 = 65540;
        v65 |= 0x30000u;
        v52 = v41;
        v64 = 43724;
        if ( *(_WORD *)(v41 + 100) || *(_DWORD *)(v41 + 96) != 1 )
        {
          EngSetLastError(6u);
          if ( v41 )
            DEC_SHARE_REF_CNT(v41);
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v40);
          v31 = 0;
          goto LABEL_51;
        }
        v60 = a9;
        v62 = a9 + v58 - v56;
        v61 = a10;
        v63 = a10 + v59 - v57;
        DEC_SHARE_REF_CNT(v41);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v40);
      }
      else
      {
        v52 = 0LL;
        v25 = 4;
        v64 = 52428;
      }
      if ( EXFORMOBJ::bXform((EXFORMOBJ *)v44, a2, v55, 3uLL) )
      {
        v26 = BLTRECORD::bRotated((BLTRECORD *)v44);
        v27 = *((_QWORD *)v36[0] + 122);
        if ( v26 )
        {
          v28 = BLTRECORD::bRotate(
                  (struct _POINTFIX *)v44,
                  (struct DCOBJ *)v36,
                  (struct DCOBJ *)v38,
                  v25,
                  *(_BYTE *)(v27 + 215));
        }
        else
        {
          v32 = *(_BYTE *)(v27 + 215);
          if ( v32 != 4 && BLTRECORD::bEqualExtents((BLTRECORD *)v44) )
          {
            v31 = BLTRECORD::bBitBlt((BLTRECORD *)v44, v36, (struct DCOBJ *)v38, v25);
            DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v43, v33, v34);
            if ( v38[0] )
              XDCOBJ::vUnlockFast((XDCOBJ *)v38);
            UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v39);
            if ( v36[0] )
              XDCOBJ::vUnlockFast((XDCOBJ *)v36);
            UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v37);
            goto LABEL_52;
          }
          v28 = BLTRECORD::bStretch((BLTRECORD *)v44, (struct DCOBJ *)v36, (struct DCOBJ *)v38, v25, v32);
        }
        v31 = v28;
LABEL_51:
        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v43, v29, v30);
        DCOBJ::~DCOBJ((DCOBJ *)v38);
        DCOBJ::~DCOBJ((DCOBJ *)v36);
LABEL_52:
        BLTRECORD::~BLTRECORD((BLTRECORD *)v44);
        return v31;
      }
    }
    goto LABEL_53;
  }
LABEL_26:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v43, v23, v24);
LABEL_57:
  DCOBJ::~DCOBJ((DCOBJ *)v38);
  DCOBJ::~DCOBJ((DCOBJ *)v36);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v44);
  return 0LL;
}
