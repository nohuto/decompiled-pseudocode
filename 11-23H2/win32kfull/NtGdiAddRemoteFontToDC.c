/*
 * XREFs of NtGdiAddRemoteFontToDC @ 0x1C028B070
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C013DE94 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C026A6C4 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z @ 0x1C028A84C (-bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z.c)
 *     cMapRemoteFonts @ 0x1C028B310 (cMapRemoteFonts.c)
 *     vUnmapRemoteFonts @ 0x1C028B7F0 (vUnmapRemoteFonts.c)
 */

__int64 __fastcall NtGdiAddRemoteFontToDC(HDC a1, struct tagDOWNLOADFONTHEADER *a2, unsigned int a3, struct PFF **a4)
{
  _BYTE *v8; // r14
  unsigned int FontFileView; // ebx
  int v10; // r15d
  unsigned int v12; // eax
  unsigned int v13; // esi
  struct tagDOWNLOADFONTHEADER *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  struct PFF *v17; // [rsp+40h] [rbp-108h] BYREF
  struct _FONTFILEVIEW **v18[2]; // [rsp+48h] [rbp-100h] BYREF
  _BYTE v19[16]; // [rsp+58h] [rbp-F0h] BYREF
  _QWORD v20[7]; // [rsp+68h] [rbp-E0h] BYREF
  _BYTE v21[128]; // [rsp+A0h] [rbp-A8h] BYREF
  struct tagDOWNLOADFONTHEADER *v22; // [rsp+168h] [rbp+20h] BYREF

  memset_0(v21, 0, 0x78uLL);
  v8 = 0LL;
  FontFileView = 0;
  v17 = 0LL;
  v10 = 0;
  if ( a4 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (struct PFF **)MmUserProbeAddress;
    v17 = *a4;
    a4 = &v17;
    v18[1] = &v17;
  }
  DCOBJ::DCOBJ((DCOBJ *)v20, a1);
  if ( v20[0] )
  {
    v18[0] = 0LL;
    v22 = a2;
    v12 = cMapRemoteFonts(&v22, a3, v21, 1LL);
    v13 = v12;
    v14 = v22;
    if ( v22 )
    {
      if ( v12 )
      {
        v8 = v21;
        v10 = 1;
        LODWORD(v22) = 1;
        FontFileView = bCreateFontFileView((const struct _FONTFILEVIEW *)v21, v14, a3, v18, v12);
        if ( FontFileView )
        {
          v16 = SGDGetSessionState(v15);
          PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v19, *(struct PFT **)(*(_QWORD *)(v16 + 32) + 20272LL));
          FontFileView = PUBLIC_PFTOBJ::bLoadRemoteFonts(
                           (PUBLIC_PFTOBJ *)v19,
                           (struct XDCOBJ *)v20,
                           v18[0],
                           v13,
                           0LL,
                           a4,
                           (int *)&v22);
          v10 = (int)v22;
        }
      }
    }
    if ( !FontFileView )
    {
      if ( v10 )
        vUnmapRemoteFonts(v8);
    }
    DCOBJ::~DCOBJ((DCOBJ *)v20);
    return FontFileView;
  }
  else
  {
    DCOBJ::~DCOBJ((DCOBJ *)v20);
    return 0LL;
  }
}
