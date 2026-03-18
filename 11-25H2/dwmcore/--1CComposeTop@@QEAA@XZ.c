/*
 * XREFs of ??1CComposeTop@@QEAA@XZ @ 0x18027F84C
 * Callers:
 *     ??R?$default_delete@VCComposeTop@@@std@@QEBAXPEAVCComposeTop@@@Z @ 0x18027FF34 (--R-$default_delete@VCComposeTop@@@std@@QEBAXPEAVCComposeTop@@@Z.c)
 * Callees:
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x180073CD0 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 */

void __fastcall CComposeTop::~CComposeTop(CRectanglesShape **this)
{
  std::unique_ptr<CShape>::~unique_ptr<CShape>(this + 20);
  std::unique_ptr<CShape>::~unique_ptr<CShape>(this + 2);
  wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>(this + 1);
}
