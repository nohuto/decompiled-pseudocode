/*
 * XREFs of NtGdiAddRemoteFontToDC @ 0x140303420
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1400DB6B8 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     ?bCreateFontFileView@@YAHPEBUFONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z @ 0x14011424C (-bCreateFontFileView@@YAHPEBUFONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z.c)
 *     cMapRemoteFonts @ 0x140115278 (cMapRemoteFonts.c)
 *     ?vUnmapRemoteFonts@@YAXPEAUFONTFILEVIEW@@@Z @ 0x14019F718 (-vUnmapRemoteFonts@@YAXPEAUFONTFILEVIEW@@@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x140221180 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEA.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall NtGdiAddRemoteFontToDC(HDC a1, struct tagDOWNLOADFONTHEADER *a2, unsigned int a3, __int64 *a4)
{
  struct FONTFILEVIEW *v8; // r14
  unsigned int FontFileView; // ebx
  int v10; // r15d
  unsigned int v12; // eax
  unsigned int v13; // edi
  struct tagDOWNLOADFONTHEADER *v14; // rdx
  __int64 v15; // rdx
  int v16; // ecx
  __int64 SessionState; // rax
  __int64 v18; // [rsp+40h] [rbp-148h] BYREF
  struct FONTFILEVIEW **v19[2]; // [rsp+48h] [rbp-140h] BYREF
  _BYTE v20[24]; // [rsp+58h] [rbp-130h] BYREF
  _QWORD v21[14]; // [rsp+70h] [rbp-118h] BYREF
  _BYTE v22[128]; // [rsp+E0h] [rbp-A8h] BYREF
  struct tagDOWNLOADFONTHEADER *v23; // [rsp+1A8h] [rbp+20h] BYREF

  memset_0(v22, 0, 0x78uLL);
  v8 = 0LL;
  FontFileView = 0;
  v18 = 0LL;
  v10 = 0;
  if ( a4 )
  {
    GreProbeAndReadFromUntrustedVa(&v18, 8uLL, a4, 8uLL, 1uLL);
    a4 = &v18;
    v19[1] = (struct FONTFILEVIEW **)&v18;
  }
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v21, a1);
  if ( v21[0] )
  {
    v19[0] = 0LL;
    v23 = a2;
    v12 = cMapRemoteFonts((const void **)&v23, a3, (__int64)v22, 1u);
    v13 = v12;
    v14 = v23;
    if ( v23 )
    {
      if ( v12 )
      {
        v8 = (struct FONTFILEVIEW *)v22;
        v10 = 1;
        LODWORD(v23) = 1;
        FontFileView = bCreateFontFileView((const struct FONTFILEVIEW *)v22, v14, a3, v19, v12);
        if ( FontFileView )
        {
          SessionState = W32GetSessionState(v16, v15);
          PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v20, *(struct PFT **)(*(_QWORD *)(SessionState + 96) + 20416LL));
          FontFileView = PUBLIC_PFTOBJ::bLoadRemoteFonts(
                           (PUBLIC_PFTOBJ *)v20,
                           (struct XDCOBJ *)v21,
                           v19[0],
                           v13,
                           0LL,
                           (struct PFF **)a4,
                           (int *)&v23);
          v10 = (int)v23;
        }
      }
    }
    if ( !FontFileView )
    {
      if ( v10 )
        vUnmapRemoteFonts(v8);
    }
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v21);
    return FontFileView;
  }
  else
  {
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v21);
    return 0LL;
  }
}
