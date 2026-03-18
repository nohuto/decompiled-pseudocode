/*
 * XREFs of NtGdiBitBlt @ 0x1400193E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x14001980C (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@AEAVXDCOBJ@@@Z @ 0x14001A56C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@AEAVXDCOBJ@@@Z.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x14001A5E0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 */

__int64 __fastcall NtGdiBitBlt(
        HDC a1,
        int a2,
        int a3,
        int a4,
        int a5,
        HDC a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        int a11)
{
  unsigned int v14; // ebx
  _QWORD v16[14]; // [rsp+60h] [rbp-F8h] BYREF
  _BYTE v17[128]; // [rsp+D0h] [rbp-88h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v16, a1);
  OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v17, a6, (struct XDCOBJ *)v16);
  v14 = 0;
  if ( v16[0] )
    v14 = GrepBitBltImpl(
            (struct XDCOBJ *)v16,
            a2,
            a3,
            a4,
            a5,
            (struct OPTAPIDCOBJ *)v17,
            a7,
            a8,
            a9,
            a10,
            a11 & 0xFFFFFFFD);
  else
    EngSetLastError(6u);
  OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v17);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v16);
  return v14;
}
