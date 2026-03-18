/*
 * XREFs of ??R?$default_delete@VCComposeTop@@@std@@QEBAXPEAVCComposeTop@@@Z @ 0x18027FF34
 * Callers:
 *     ?AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180075EAC (-AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 *     ?SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x180130214 (-SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 *     ??1?$unique_ptr@VCComposeTop@@U?$default_delete@VCComposeTop@@@std@@@std@@QEAA@XZ @ 0x18027F808 (--1-$unique_ptr@VCComposeTop@@U-$default_delete@VCComposeTop@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     ??1CComposeTop@@QEAA@XZ @ 0x18027F84C (--1CComposeTop@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<CComposeTop>::operator()(__int64 a1, CRectanglesShape **a2)
{
  if ( a2 )
  {
    CComposeTop::~CComposeTop(a2);
    operator delete(a2);
  }
}
