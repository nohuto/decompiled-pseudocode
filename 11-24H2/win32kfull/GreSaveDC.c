/*
 * XREFs of GreSaveDC @ 0x140036E78
 * Callers:
 *     ?UT_InvertCaret@@YAXXZ @ 0x140036838 (-UT_InvertCaret@@YAXXZ.c)
 *     xxxClientExtTextOutW @ 0x14003C3AC (xxxClientExtTextOutW.c)
 *     xxxClientLpkDrawTextEx @ 0x14007C3CC (xxxClientLpkDrawTextEx.c)
 *     xxxClientGetTextExtentPointW @ 0x14007CAC8 (xxxClientGetTextExtentPointW.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1401C4F1C (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxClientPSMTextOut @ 0x1402BC690 (xxxClientPSMTextOut.c)
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepSaveDC@@YAHAEAVXDCOBJ@@H@Z @ 0x14003871C (-GrepSaveDC@@YAHAEAVXDCOBJ@@H@Z.c)
 */

__int64 __fastcall GreSaveDC(HDC a1)
{
  unsigned int v1; // ebx
  _QWORD v3[15]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v3, a1);
  v1 = 0;
  if ( v3[0] )
    v1 = GrepSaveDC((struct XDCOBJ *)v3, 1);
  else
    EngSetLastError(6u);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v3);
  return v1;
}
