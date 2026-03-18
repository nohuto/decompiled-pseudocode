/*
 * XREFs of GreGetDIBitsInternal @ 0x140180F68
 * Callers:
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x14021D99C (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?GetCursorColorPixels@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@IPEAK@Z @ 0x1402D9F3C (-GetCursorColorPixels@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@IPEAK@Z.c)
 * Callees:
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140018F7C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x14001980C (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x14001EB5C (-GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV-$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z.c)
 */

__int64 __fastcall GreGetDIBitsInternal(
        HDC a1,
        HSURF a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int *a6,
        int a7,
        unsigned int a8,
        unsigned int a9)
{
  unsigned int DIBits; // ebx
  __int64 v13[3]; // [rsp+50h] [rbp-A8h] BYREF
  __int16 v14; // [rsp+68h] [rbp-90h]
  _BYTE v15[128]; // [rsp+70h] [rbp-88h] BYREF

  v13[2] = 0LL;
  v14 = 0;
  v13[0] = a5;
  v13[1] = a8;
  OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v15, a1);
  DIBits = GrepGetDIBits((OPTAPIDCOBJ *)v15, a2, 0, a4, (__int64)v13, a6, 0, a8, a9);
  OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v15);
  return DIBits;
}
