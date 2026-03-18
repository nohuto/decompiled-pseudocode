/*
 * XREFs of GrePatBlt @ 0x1400C4060
 * Callers:
 *     xxxDrawState @ 0x14003A7F0 (xxxDrawState.c)
 *     xxxDrawCaptionBar @ 0x14006E51C (xxxDrawCaptionBar.c)
 *     xxxSoundSentry @ 0x14010312C (xxxSoundSentry.c)
 *     xxxPaintMenuBar @ 0x1401D8150 (xxxPaintMenuBar.c)
 *     EraseBitmap @ 0x140207758 (EraseBitmap.c)
 *     ?DrawThumb2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z @ 0x140257074 (-DrawThumb2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z.c)
 *     ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1402E15B0 (-InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z.c)
 *     ?MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1402E8DA0 (-MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1402E9060 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     MNEraseBackground @ 0x1402E93D4 (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1402E951C (xxxMNDrawFullNC.c)
 * Callees:
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x140017510 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140018F7C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x14001980C (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x14001C920 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x14001D1D8 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x1400C3880 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 *     bCvtPts1 @ 0x1400C5774 (bCvtPts1.c)
 *     ?bInFullScreen@DC@@QEBAHXZ @ 0x1400D243C (-bInFullScreen@DC@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall GrePatBlt(HDC a1, int a2, unsigned int a3, int a4, int a5, int a6)
{
  unsigned int locked; // ebx
  ROP4 v10; // esi
  LONG right; // edx
  DC *v12; // rdi
  LONG left; // r8d
  LONG top; // r9d
  LONG bottom; // r10d
  int v16; // eax
  DC *v17; // rcx
  int v18; // eax
  DC *v19; // rcx
  int v20; // eax
  DC *v21; // rcx
  struct SURFACE *v22; // rdi
  __int64 v23; // rdx
  int v25; // eax
  LONG v26; // eax
  __int64 v27; // [rsp+78h] [rbp-88h] BYREF
  DC *v28[14]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v29; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v30; // [rsp+100h] [rbp+0h]
  int v31; // [rsp+108h] [rbp+8h]
  _QWORD v32[14]; // [rsp+110h] [rbp+10h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v33[16]; // [rsp+180h] [rbp+80h] BYREF
  RECTL v34; // [rsp+200h] [rbp+100h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v28, a1);
  locked = 0;
  if ( v28[0] )
  {
    v10 = (BYTE2(a6) << 8) | BYTE2(a6);
    if ( ((BYTE2(a6) ^ (unsigned __int8)(4 * BYTE2(a6))) & 0xCC) == 0 )
    {
      DC::QuickInitXform(v28[0], &v27, 516LL);
      if ( (*(_BYTE *)(v27 + 32) & 1) == 0 )
      {
        OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v33, 0LL);
        locked = GrepMaskBlt(v28, a2, a3, a4, a5, v33, 0, 0, 0LL, 0, 0, v10 << 16, 0);
        OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v33);
        goto LABEL_41;
      }
      right = a4 + a2;
      v12 = v28[0];
      left = a2;
      v34.left = a2;
      top = a3;
      v34.top = a3;
      v34.right = a4 + a2;
      v34.bottom = a3 + a5;
      if ( (*(_BYTE *)(v27 + 32) & 0x43) == 0x43
        || (v25 = bCvtPts1(v27, &v34, 2LL, a3), right = v34.right, top = v34.top, left = v34.left, v25) )
      {
        if ( (*(_BYTE *)(*((_QWORD *)v12 + 122) + 108LL) & 1) != 0 )
        {
          ++left;
          ++right;
          v34.left = left;
          v34.right = right;
        }
      }
      if ( left > right )
      {
        v26 = left;
        v34.left = right;
        left = right;
        v34.right = v26;
        right = v26;
      }
      bottom = v34.bottom;
      if ( top > v34.bottom )
      {
        v34.top = v34.bottom;
        v34.bottom = top;
        top = bottom;
      }
      if ( left == right || (v16 = 0, top == v34.bottom) )
        v16 = 1;
      if ( v16 )
      {
        locked = 1;
        goto LABEL_41;
      }
      v17 = v28[0];
      v18 = *((_DWORD *)v28[0] + 9);
      if ( (v18 & 0xE0) != 0 )
      {
        if ( (v18 & 0x20) != 0 )
        {
          if ( left < *((_DWORD *)v28[0] + 266) )
          {
            *((_DWORD *)v28[0] + 266) = left;
            right = v34.right;
            top = v34.top;
            left = v34.left;
          }
          if ( top < *((_DWORD *)v17 + 267) )
          {
            *((_DWORD *)v17 + 267) = top;
            right = v34.right;
            top = v34.top;
            left = v34.left;
          }
          if ( right > *((_DWORD *)v17 + 268) )
          {
            *((_DWORD *)v17 + 268) = right;
            right = v34.right;
            top = v34.top;
            left = v34.left;
          }
          if ( v34.bottom > *((_DWORD *)v17 + 269) )
          {
            *((_DWORD *)v17 + 269) = v34.bottom;
            right = v34.right;
            top = v34.top;
            left = v34.left;
          }
        }
        v19 = v28[0];
        if ( (*((_DWORD *)v28[0] + 9) & 0x80u) != 0 )
        {
          if ( left < *((_DWORD *)v28[0] + 274) )
          {
            *((_DWORD *)v28[0] + 274) = left;
            right = v34.right;
            top = v34.top;
          }
          if ( top < *((_DWORD *)v19 + 275) )
          {
            *((_DWORD *)v19 + 275) = top;
            right = v34.right;
          }
          if ( right > *((_DWORD *)v19 + 276) )
            *((_DWORD *)v19 + 276) = right;
          if ( v34.bottom > *((_DWORD *)v19 + 277) )
            *((_DWORD *)v19 + 277) = v34.bottom;
        }
      }
      if ( ((gajRop3[BYTE2(a6)] | gajRop3[(unsigned __int64)((BYTE2(a6) << 8) | (unsigned int)BYTE2(a6)) >> 8]) & 0xB2) != 0 )
        bSpDwmValidateSurface((struct XDCOBJ *)v28, a2, a3, a4, a5);
      DLODCOBJ::DLODCOBJ((DLODCOBJ *)v32);
      v30 = 0LL;
      v29 = 0LL;
      v31 = 0;
      v32[0] = 0LL;
      memset(&v32[10], 0, 24);
      v20 = DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v29, (struct XDCOBJ *)v28, 0);
      v21 = v28[0];
      if ( v20 )
      {
        v22 = (struct SURFACE *)*((_QWORD *)v28[0] + 62);
        if ( v22 )
        {
          v23 = *((_QWORD *)v28[0] + 122);
          if ( (*(_DWORD *)(v23 + 152) & 0x1000) != 0 )
          {
            GreDCSelectBrush(v28[0], *(_QWORD *)(v23 + 160));
            v21 = v28[0];
          }
          locked = GrePatBltLockedDC(
                     (struct XDCOBJ *)v28,
                     (struct EXFORMOBJ *)*(unsigned int *)(*((_QWORD *)v21 + 122) + 188LL),
                     &v34,
                     v10,
                     v22,
                     *(_DWORD *)(*((_QWORD *)v21 + 122) + 184LL),
                     *(_DWORD *)(*((_QWORD *)v21 + 122) + 176LL),
                     *(_DWORD *)(*((_QWORD *)v21 + 122) + 188LL),
                     *(_DWORD *)(*((_QWORD *)v21 + 122) + 180LL));
          goto LABEL_40;
        }
      }
      else if ( *((_QWORD *)v28[0] + 62) && !(unsigned int)DC::bInFullScreen(v28[0]) )
      {
        goto LABEL_40;
      }
      locked = 1;
LABEL_40:
      DEVLOCKOBJ::~DEVLOCKOBJ((HDC *)&v29);
    }
  }
LABEL_41:
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v28);
  return locked;
}
