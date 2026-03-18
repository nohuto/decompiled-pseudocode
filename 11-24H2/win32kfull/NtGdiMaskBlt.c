/*
 * XREFs of NtGdiMaskBlt @ 0x1400C3730
 * Callers:
 *     <none>
 * Callees:
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x14001980C (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@AEAVXDCOBJ@@@Z @ 0x14001A56C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@AEAVXDCOBJ@@@Z.c)
 *     ??1MAPIDCOBJ@@QEAA@XZ @ 0x1400C3704 (--1MAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x1400C3880 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 */

__int64 __fastcall NtGdiMaskBlt(
        HDC a1,
        int a2,
        int a3,
        int a4,
        int a5,
        HDC a6,
        int a7,
        int a8,
        HBITMAP a9,
        int a10,
        int a11,
        unsigned int a12,
        unsigned int a13)
{
  unsigned int v17; // ebx
  struct Gre::Base::SESSION_GLOBALS *v18[14]; // [rsp+70h] [rbp-F8h] BYREF
  _BYTE v19[128]; // [rsp+E0h] [rbp-88h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v18, a1);
  OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v19, a6, v18);
  if ( v18[0] )
  {
    v17 = GrepMaskBlt((struct XDCOBJ *)v18, a2, a3, a4, a5, (struct OPTAPIDCOBJ *)v19, a7, a8, a9, a10, a11, a12, a13);
    OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v19);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v18);
    return v17;
  }
  else
  {
    EngSetLastError(0x57u);
    MAPIDCOBJ::~MAPIDCOBJ((MAPIDCOBJ *)v18);
    return 0LL;
  }
}
