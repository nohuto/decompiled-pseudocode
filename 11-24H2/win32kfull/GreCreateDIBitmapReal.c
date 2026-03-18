/*
 * XREFs of GreCreateDIBitmapReal @ 0x140018E94
 * Callers:
 *     xxxRealDrawMenuItem @ 0x14003B17C (xxxRealDrawMenuItem.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x140077F7C (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     ?GreCreateDIBBrush@@YAPEAUHBRUSH__@@PEAXKIHH0@Z @ 0x1400E40C0 (-GreCreateDIBBrush@@YAPEAUHBRUSH__@@PEAXKIHH0@Z.c)
 *     NtGdiCreateSessionMappedDIBSection @ 0x140162CE0 (NtGdiCreateSessionMappedDIBSection.c)
 *     RecolorDeskPattern @ 0x1402055C0 (RecolorDeskPattern.c)
 *     NtGdiCreateDIBSection @ 0x14025E4E0 (NtGdiCreateDIBSection.c)
 * Callees:
 *     ?GrepCreateDIBitmapReal@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x140018544 (-GrepCreateDIBitmapReal@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140018F7C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x14001980C (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreCreateDIBitmapReal(
        HDC a1,
        int a2,
        __int64 a3,
        unsigned int *a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        void *a8,
        unsigned int a9,
        void *a10,
        char a11,
        unsigned __int64 a12,
        _QWORD *a13)
{
  __int64 DIBitmapReal; // rbx
  __int64 v17[3]; // [rsp+60h] [rbp-A8h] BYREF
  __int16 v18; // [rsp+78h] [rbp-90h]
  _BYTE v19[136]; // [rsp+80h] [rbp-88h] BYREF

  v17[0] = a3;
  v17[2] = 0LL;
  v17[1] = a7;
  v18 = 0;
  OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v19, a1);
  DIBitmapReal = GrepCreateDIBitmapReal((OPTAPIDCOBJ *)v19, a2, v17, a4, a5, a6, a8, a9, a10, a11, a12, a13);
  OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v19);
  return DIBitmapReal;
}
