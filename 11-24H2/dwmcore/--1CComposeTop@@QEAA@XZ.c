/*
 * XREFs of ??1CComposeTop@@QEAA@XZ @ 0x1802750A0
 * Callers:
 *     ??R?$default_delete@VCComposeTop@@@std@@QEBAXPEAVCComposeTop@@@Z @ 0x1802754B4 (--R-$default_delete@VCComposeTop@@@std@@QEBAXPEAVCComposeTop@@@Z.c)
 * Callees:
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18006DC10 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 */

void __fastcall CComposeTop::~CComposeTop(CRectanglesShape **this)
{
  std::unique_ptr<CShape>::~unique_ptr<CShape>(this + 20);
  std::unique_ptr<CShape>::~unique_ptr<CShape>(this + 2);
  wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>(this + 1);
}
