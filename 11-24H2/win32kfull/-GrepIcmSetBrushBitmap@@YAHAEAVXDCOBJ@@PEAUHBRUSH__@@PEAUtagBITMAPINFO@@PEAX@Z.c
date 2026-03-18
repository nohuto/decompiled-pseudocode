/*
 * XREFs of ?GrepIcmSetBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x14033B578
 * Callers:
 *     NtGdiIcmBrushInfo @ 0x14033C040 (NtGdiIcmBrushInfo.c)
 * Callees:
 *     ?GrepCreateDIBitmapReal@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x140018544 (-GrepCreateDIBitmapReal@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x14001980C (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1400DF75C (--0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1400E3FF0 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1400E4080 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GrepIcmSetBrushBitmap(
        struct Gre::Base::SESSION_GLOBALS **a1,
        HBRUSH a2,
        struct tagBITMAPINFO *a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  BRUSH *v8; // rdi
  HBITMAP DIBitmapReal; // r8
  __int64 v11[3]; // [rsp+68h] [rbp-A0h] BYREF
  __int16 v12; // [rsp+80h] [rbp-88h]
  _QWORD v13[6]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v14[128]; // [rsp+B8h] [rbp-50h] BYREF

  v4 = 0;
  if ( (*((_DWORD *)*a1 + 30) & 1) != 0 )
  {
    BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v13, a2);
    v8 = (BRUSH *)v13[0];
    if ( v13[0] && (*(_DWORD *)(v13[0] + 40LL) & 0x80u) != 0 )
    {
      v11[0] = a4;
      v12 = 0;
      v11[1] = 0x7FFFFFLL;
      v11[2] = 0LL;
      OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v14, a1);
      DIBitmapReal = (HBITMAP)GrepCreateDIBitmapReal(
                                (OPTAPIDCOBJ *)v14,
                                6,
                                v11,
                                &a3->bmiHeader.biSize,
                                0,
                                0x428u,
                                0LL,
                                0,
                                0LL,
                                1,
                                0LL,
                                0LL);
      if ( DIBitmapReal )
        v4 = BRUSH::bAddIcmDIB(v8, *(void **)(*((_QWORD *)*a1 + 122) + 248LL), DIBitmapReal);
      OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v14);
    }
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v13);
  }
  return v4;
}
