/*
 * XREFs of GreGradientFill @ 0x1400C87D4
 * Callers:
 *     ?FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z @ 0x14007D0F8 (-FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z.c)
 *     NtGdiGradientFill @ 0x1400C7940 (NtGdiGradientFill.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x14000FB40 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x140016CFC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x14001C294 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x14001D0CC (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??0XCLIPOBJ@@QEAA@XZ @ 0x140059708 (--0XCLIPOBJ@@QEAA@XZ.c)
 *     bCvtPts1 @ 0x1400C5774 (bCvtPts1.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1400C71EC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bCalcMeshExtent@@YAHPEAU_TRIVERTEX@@KPEAXKKPEAU_RECTL@@@Z @ 0x1400C85E4 (-bCalcMeshExtent@@YAHPEAU_TRIVERTEX@@KPEAXKKPEAU_RECTL@@@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C8FBC (--0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400CB47C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x1400CE708 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1400D076C (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400D3E30 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1400D3E50 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     PALLOCNOZ @ 0x140125A4C (PALLOCNOZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreGradientFill(
        Gre::Base *a1,
        struct _TRIVERTEX *a2,
        unsigned int a3,
        _DWORD *a4,
        unsigned int a5,
        unsigned __int8 a6)
{
  unsigned int v6; // edi
  struct _TRIVERTEX *v7; // r14
  _DWORD *v8; // r13
  __int64 v9; // r15
  __int64 v12; // rcx
  unsigned int v13; // esi
  __int64 v14; // r10
  struct _TRIVERTEX *v15; // rbx
  LONG x; // edx
  int v17; // eax
  LONG y; // r9d
  char *v19; // rcx
  int v20; // esi
  struct REGION *v21; // rdx
  struct ECLIPOBJ *v22; // rdx
  DC *v23; // r13
  __int64 v24; // r13
  _DWORD *v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // r8
  char *v28; // rax
  __int64 v29; // rax
  BOOL (__stdcall *v30)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG); // rax
  struct ECLIPOBJ *v32; // rdx
  unsigned __int64 v33; // rax
  ULONG v34; // ecx
  int inited; // eax
  unsigned __int64 v36; // rcx
  unsigned int v37; // eax
  unsigned __int64 v38; // rbx
  unsigned int v39; // eax
  struct _TRIVERTEX *v40; // rax
  unsigned int v41; // r9d
  _DWORD *v42; // r8
  unsigned int i; // r10d
  __int64 v44; // r11
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r11
  __int64 v48; // rbx
  COLOR16 Alpha; // ax
  __int64 v50; // rdx
  __int64 v51; // rcx
  unsigned int v52; // r11d
  __int64 v53; // rax
  __int64 v54; // rdx
  int v55; // [rsp+60h] [rbp-A0h] BYREF
  int v56; // [rsp+64h] [rbp-9Ch]
  unsigned int v57; // [rsp+68h] [rbp-98h]
  __int64 v58; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v59; // [rsp+78h] [rbp-88h]
  __int64 v60; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v61; // [rsp+88h] [rbp-78h]
  __m128i v62; // [rsp+90h] [rbp-70h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v63; // [rsp+A0h] [rbp-60h]
  DC *v64[14]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v65[352]; // [rsp+120h] [rbp+20h] BYREF
  struct _RECTL si128; // [rsp+280h] [rbp+180h] BYREF
  _BYTE v67[4]; // [rsp+290h] [rbp+190h] BYREF
  _BYTE v68[156]; // [rsp+294h] [rbp+194h] BYREF

  v6 = 0;
  v7 = 0LL;
  v57 = a6;
  v8 = a4;
  v61 = a4;
  v9 = a3;
  v63 = Gre::Base::Globals(a1);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v64, (HDC)a1, v63);
  if ( !v64[0] || (*((_DWORD *)v64[0] + 9) & 0x10000) != 0 )
  {
    v20 = 0;
    goto LABEL_34;
  }
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v65);
  if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v65, (struct XDCOBJ *)v64) )
  {
    v20 = XDCOBJ::bFullScreen((XDCOBJ *)v64);
    goto LABEL_32;
  }
  DC::QuickInitXform(v64[0], &v60, 516LL);
  v12 = v60;
  if ( (*(_BYTE *)(v60 + 32) & 1) == 0 && a6 <= 1u )
  {
    v33 = 2LL * a5;
    if ( v33 > 0xFFFFFFFF
      || (v36 = 12LL * (unsigned int)v33, v36 > 0xFFFFFFFF)
      || (v13 = 2 * a5, v37 = v9 + 2 * a5, v59 = 2 * a5, v37 < 2 * a5)
      || (v38 = 16LL * v37, v38 > 0xFFFFFFFF)
      || (v39 = v38 + v36, (int)v38 + (int)v36 < (unsigned int)v36) )
    {
      v34 = 534;
    }
    else
    {
      if ( v39 <= 0x2710000 )
      {
        v40 = (struct _TRIVERTEX *)PALLOCNOZ(v39, 1886221383LL);
        v7 = v40;
        if ( v40 )
        {
          v41 = 0;
          v42 = (LONG *)((char *)&v40->x + (unsigned int)v38);
          if ( (_DWORD)v9 )
          {
            v54 = v9;
            v41 = v9;
            do
            {
              *v40 = *(struct _TRIVERTEX *)((char *)v40 + (char *)a2 - (char *)v7);
              ++v40;
              --v54;
            }
            while ( v54 );
          }
          for ( i = 0; i < a5; ++i )
          {
            v44 = (unsigned int)v61[2 * i];
            v45 = (unsigned int)v61[2 * i + 1];
            v55 = v61[2 * i + 1];
            v57 = v44;
            if ( (unsigned int)v44 >= (unsigned int)v9 || (unsigned int)v45 >= (unsigned int)v9 )
            {
              EngSetLastError(0x57u);
              Win32FreePool(v7);
              DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v65);
              goto LABEL_35;
            }
            v46 = v41;
            v47 = v44;
            v48 = v41 + 1;
            v7[v46].x = a2[v45].x;
            v7[v46].y = a2[v47].y;
            v7[v48].x = a2[v47].x;
            v7[v48].y = a2[v45].y;
            if ( a6 == 1 )
            {
              v7[v41].Red = a2[v47].Red;
              v7[v41].Green = a2[v47].Green;
              v7[v41].Blue = a2[v47].Blue;
              v7[v41].Alpha = a2[v47].Alpha;
              v7[v41 + 1].Red = a2[v45].Red;
              v7[v41 + 1].Green = a2[v45].Green;
              v7[v41 + 1].Blue = a2[v45].Blue;
              Alpha = a2[v45].Alpha;
            }
            else
            {
              v7[v41].Red = a2[v45].Red;
              v7[v41].Green = a2[v45].Green;
              v7[v41].Blue = a2[v45].Blue;
              v7[v41].Alpha = a2[v45].Alpha;
              v7[v41 + 1].Red = a2[v47].Red;
              v7[v41 + 1].Green = a2[v47].Green;
              v7[v41 + 1].Blue = a2[v47].Blue;
              Alpha = a2[v47].Alpha;
            }
            v7[v41 + 1].Alpha = Alpha;
            v50 = 2 * i;
            v51 = 3 * v50;
            v42[v51] = v57;
            v52 = v41 + 1;
            v42[v51 + 1] = v41;
            v42[v51 + 2] = v41 + 1;
            LODWORD(v51) = v55;
            v53 = 3LL * (unsigned int)(v50 + 1);
            v42[v53 + 1] = v41;
            v41 += 2;
            v42[v53] = v51;
            v42[v53 + 2] = v52;
          }
          v12 = v60;
          v8 = v42;
          v61 = v42;
          a2 = v7;
          v57 = 2;
          LODWORD(v9) = v41;
          goto LABEL_6;
        }
      }
      v34 = 8;
    }
    EngSetLastError(v34);
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v65);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v64);
    return 0LL;
  }
  v13 = a5;
  v59 = a5;
LABEL_6:
  si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
  if ( (_DWORD)v9 )
  {
    v14 = (unsigned int)v9;
    v15 = a2;
    v58 = (unsigned int)v9;
    while ( 1 )
    {
      x = v15->x;
      v17 = *(_DWORD *)(v12 + 32) & 0x43;
      y = v15->y;
      v55 = v15->x;
      v56 = y;
      if ( (_BYTE)v17 != 67 )
      {
        bCvtPts1(v12, (__int64)&v55, 1LL);
        y = v56;
        x = v55;
        v14 = v58;
      }
      if ( (*(_DWORD *)(*((_QWORD *)v64[0] + 122) + 108LL) & 1) != 0 )
        ++x;
      v19 = (char *)v64[0] + 1024;
      if ( (*((_DWORD *)v64[0] + 10) & 1) == 0 )
        v19 = (char *)v64[0] + 1016;
      v15->x = x + *(_DWORD *)v19;
      v15->y = y + *((_DWORD *)v64[0] + 2 * (*((_DWORD *)v64[0] + 10) & 1) + 255);
      ++v15;
      v58 = --v14;
      if ( !v14 )
        break;
      v12 = v60;
    }
  }
  v20 = bCalcMeshExtent(a2, v9, v8, v13, v57, &si128);
  if ( !v20 )
    goto LABEL_32;
  XDCOBJ::prgnEffRao(v64);
  XCLIPOBJ::XCLIPOBJ((XCLIPOBJ *)v67);
  XCLIPOBJ::vSetup((XCLIPOBJ *)v67, v21, (const struct ERECTL *)&si128, 0);
  if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v68) )
  {
    v23 = v64[0];
    if ( (*((_DWORD *)v64[0] + 9) & 0xE0) != 0 )
    {
      v62 = (__m128i)si128;
      XDCOBJ::vAccumulate((XDCOBJ *)v64, v22, (struct ERECTL *)&v62);
      XDCOBJ::vAccumulateTight((XDCOBJ *)v64, v32, &v62);
      v23 = v64[0];
    }
    v24 = *((_QWORD *)v23 + 62);
    if ( v24 )
    {
      ++*(_DWORD *)(v24 + 92);
      v25 = (_DWORD *)(v24 + 96);
      v26 = *(_QWORD *)(v24 + 48);
      v58 = 0LL;
      v62.m128i_i64[0] = v24 + 96;
      if ( (*(_DWORD *)(v26 + 40) & 0x80u) != 0 )
      {
        v62.m128i_i64[0] = v24 + 96;
      }
      else if ( *v25 > 3u )
      {
        v27 = 0LL;
LABEL_24:
        v28 = (char *)v64[0] + 1024;
        if ( (*((_DWORD *)v64[0] + 10) & 1) == 0 )
          v28 = (char *)v64[0] + 1016;
        v29 = *(_QWORD *)v28;
        v55 = -(int)v29;
        v56 = -HIDWORD(v29);
        if ( *v25 != 3 && (*(_DWORD *)(v24 + 112) & 0x20000) != 0 )
          v30 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(v26 + 3224);
        else
          v30 = EngGradientFill;
        if ( !v20
          || (v20 = 1,
              !((unsigned int (__fastcall *)(__int64, _BYTE *, __int64, struct _TRIVERTEX *, _DWORD, _DWORD *, unsigned int, struct _RECTL *, int *, unsigned int))v30)(
                 v24 + 24,
                 v67,
                 v27,
                 a2,
                 v9,
                 v61,
                 v59,
                 &si128,
                 &v55,
                 v57)) )
        {
          v20 = 0;
        }
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v58);
        goto LABEL_32;
      }
      inited = EXLATEOBJ::bInitXlateObj(
                 (Gre::Base *)&v58,
                 *(_QWORD *)(*((_QWORD *)v64[0] + 122) + 248LL),
                 *((_DWORD *)v64[0] + 30),
                 *((_QWORD *)v63 + 472),
                 *(_QWORD *)(v24 + 128),
                 *((_QWORD *)v64[0] + 11),
                 *((_QWORD *)v64[0] + 11),
                 *(_DWORD *)(*((_QWORD *)v64[0] + 122) + 184LL),
                 *(_DWORD *)(*((_QWORD *)v64[0] + 122) + 176LL),
                 0,
                 0);
      v27 = v58;
      v20 = inited;
      v25 = (_DWORD *)v62.m128i_i64[0];
      goto LABEL_24;
    }
  }
  v20 = 1;
LABEL_32:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v65);
  if ( v7 )
    Win32FreePool(v7);
LABEL_34:
  v6 = v20;
LABEL_35:
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v64);
  return v6;
}
