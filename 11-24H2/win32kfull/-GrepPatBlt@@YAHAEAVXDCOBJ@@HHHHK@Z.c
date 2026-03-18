/*
 * XREFs of ?GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z @ 0x1400C4DA4
 * Callers:
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1400C95C8 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400D0DEC (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     DxgkEngColorFillViaGDI @ 0x140325110 (DxgkEngColorFillViaGDI.c)
 * Callees:
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x140017510 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140018F7C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x14001980C (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x14001C920 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x14001D1D8 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x1400C3880 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 *     bCvtPts1 @ 0x1400C5774 (bCvtPts1.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x1400CE708 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall GrepPatBlt(DC **a1, int a2, unsigned int a3, int a4, int a5, unsigned int a6)
{
  unsigned int v6; // ebx
  ROP4 v11; // r14d
  DC *v12; // rsi
  LONG right; // edx
  LONG left; // r8d
  LONG top; // r9d
  LONG bottom; // r10d
  int v17; // eax
  DC *v18; // rax
  int v19; // ecx
  DC *v20; // rcx
  DC *v21; // rcx
  struct SURFACE *v22; // rsi
  __int64 v23; // rdx
  unsigned int locked; // eax
  int v26; // eax
  LONG v27; // eax
  __int64 v28; // [rsp+78h] [rbp-88h] BYREF
  __int128 v29; // [rsp+80h] [rbp-80h] BYREF
  __int64 v30; // [rsp+90h] [rbp-70h]
  int v31; // [rsp+98h] [rbp-68h]
  _QWORD v32[14]; // [rsp+A0h] [rbp-60h] BYREF
  RECTL v33; // [rsp+110h] [rbp+10h] BYREF

  v6 = 0;
  v11 = (BYTE2(a6) << 8) | BYTE2(a6);
  if ( ((BYTE2(a6) ^ (unsigned __int8)(4 * BYTE2(a6))) & 0xCC) == 0 )
  {
    DC::QuickInitXform(*a1, &v28, 516LL);
    if ( (*(_BYTE *)(v28 + 32) & 1) == 0 )
    {
      OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)&v29, 0LL);
      v6 = GrepMaskBlt(a1, a2, a3, a4, a5, (struct Gre::Base::SESSION_GLOBALS **)&v29, 0, 0, 0LL, 0, 0, v11 << 16, 0);
      OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)&v29);
      return v6;
    }
    v33.left = a2;
    v12 = *a1;
    right = a2 + a4;
    v33.bottom = a5 + a3;
    left = a2;
    v33.right = a2 + a4;
    top = a3;
    v33.top = a3;
    if ( (*(_BYTE *)(v28 + 32) & 0x43) == 0x43
      || (v26 = bCvtPts1(v28, &v33, 2LL, a3), right = v33.right, top = v33.top, left = v33.left, v26) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)v12 + 122) + 108LL) & 1) != 0 )
      {
        ++left;
        ++right;
        v33.left = left;
        v33.right = right;
      }
    }
    if ( left > right )
    {
      v27 = left;
      v33.left = right;
      left = right;
      v33.right = v27;
      right = v27;
    }
    bottom = v33.bottom;
    if ( top > v33.bottom )
    {
      v33.top = v33.bottom;
      v33.bottom = top;
      top = bottom;
    }
    if ( left == right || (v17 = 0, top == v33.bottom) )
      v17 = 1;
    if ( v17 )
      return 1;
    v18 = *a1;
    v19 = *((_DWORD *)*a1 + 9);
    if ( (v19 & 0xE0) != 0 )
    {
      if ( (v19 & 0x20) != 0 )
      {
        if ( left < *((_DWORD *)v18 + 266) )
        {
          *((_DWORD *)v18 + 266) = left;
          right = v33.right;
          top = v33.top;
          left = v33.left;
        }
        if ( top < *((_DWORD *)v18 + 267) )
        {
          *((_DWORD *)v18 + 267) = top;
          right = v33.right;
          top = v33.top;
          left = v33.left;
        }
        if ( right > *((_DWORD *)v18 + 268) )
        {
          *((_DWORD *)v18 + 268) = right;
          right = v33.right;
          top = v33.top;
          left = v33.left;
        }
        if ( v33.bottom > *((_DWORD *)v18 + 269) )
        {
          *((_DWORD *)v18 + 269) = v33.bottom;
          right = v33.right;
          top = v33.top;
          left = v33.left;
        }
      }
      v20 = *a1;
      if ( (*((_DWORD *)*a1 + 9) & 0x80u) != 0 )
      {
        if ( left < *((_DWORD *)v20 + 274) )
        {
          *((_DWORD *)v20 + 274) = left;
          right = v33.right;
          top = v33.top;
        }
        if ( top < *((_DWORD *)v20 + 275) )
        {
          *((_DWORD *)v20 + 275) = top;
          right = v33.right;
        }
        if ( right > *((_DWORD *)v20 + 276) )
          *((_DWORD *)v20 + 276) = right;
        if ( v33.bottom > *((_DWORD *)v20 + 277) )
          *((_DWORD *)v20 + 277) = v33.bottom;
      }
    }
    if ( ((gajRop3[BYTE2(a6)] | gajRop3[(unsigned __int64)((BYTE2(a6) << 8) | (unsigned int)BYTE2(a6)) >> 8]) & 0xB2) != 0 )
      bSpDwmValidateSurface((struct XDCOBJ *)a1, a2, a3, a4, a5);
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v32);
    v30 = 0LL;
    v29 = 0LL;
    v31 = 0;
    v32[0] = 0LL;
    memset(&v32[10], 0, 24);
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v29, (struct XDCOBJ *)a1, 0) )
    {
      v21 = *a1;
      v22 = (struct SURFACE *)*((_QWORD *)*a1 + 62);
      if ( !v22 )
      {
        v6 = 1;
        goto LABEL_40;
      }
      v23 = *((_QWORD *)v21 + 122);
      if ( (*(_DWORD *)(v23 + 152) & 0x1000) != 0 )
        GreDCSelectBrush(v21, *(_QWORD *)(v23 + 160));
      locked = GrePatBltLockedDC(
                 (struct XDCOBJ *)a1,
                 *((struct EXFORMOBJ **)*a1 + 122),
                 &v33,
                 v11,
                 v22,
                 *(_DWORD *)(*((_QWORD *)*a1 + 122) + 184LL),
                 *(_DWORD *)(*((_QWORD *)*a1 + 122) + 176LL),
                 *(_DWORD *)(*((_QWORD *)*a1 + 122) + 188LL),
                 *(_DWORD *)(*((_QWORD *)*a1 + 122) + 180LL));
    }
    else
    {
      locked = XDCOBJ::bFullScreen((XDCOBJ *)a1);
    }
    v6 = locked;
LABEL_40:
    DEVLOCKOBJ::~DEVLOCKOBJ((HDC *)&v29);
  }
  return v6;
}
