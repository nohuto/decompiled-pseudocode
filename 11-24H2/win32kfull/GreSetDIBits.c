/*
 * XREFs of GreSetDIBits @ 0x140311DBC
 * Callers:
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1402B2304 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 * Callees:
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140018F7C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x14001980C (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepSetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@IIPEAX@Z @ 0x1401B8EE8 (-GrepSetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@IIPEAX@.c)
 *     ?pbmiConvertInfo@@YAPEAUtagBITMAPINFO@@PEBU1@K@Z @ 0x140336C14 (-pbmiConvertInfo@@YAPEAUtagBITMAPINFO@@PEBU1@K@Z.c)
 */

__int64 __fastcall GreSetDIBits(
        HDC a1,
        struct HOBJ__ *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        struct tagBITMAPINFO *a6)
{
  struct tagBITMAPINFO *v9; // rdi
  __int64 v11; // r8
  unsigned int v12; // esi
  _QWORD v13[3]; // [rsp+50h] [rbp-A8h] BYREF
  __int16 v14; // [rsp+68h] [rbp-90h]
  _BYTE v15[128]; // [rsp+70h] [rbp-88h] BYREF

  v9 = a6;
  if ( !a6 )
    goto LABEL_7;
  if ( a6->bmiHeader.biSize == 12 )
    v9 = pbmiConvertInfo(a6, (unsigned int)a2);
  if ( a6->bmiHeader.biSize >= 0x28 && a6->bmiHeader.biCompression - 4 <= 1 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
LABEL_7:
    v13[2] = 0LL;
    v13[1] = -1LL;
    v14 = 0;
    v13[0] = a5;
    OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v15, a1);
    v12 = GrepSetDIBits((Gre::Base *)v15, a2, v11, a4, v13, &v9->bmiHeader.biSize, 0, -1, 0LL);
    if ( v9 )
    {
      if ( v9 != a6 )
        Win32FreePool(v9);
    }
    OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v15);
    return v12;
  }
}
