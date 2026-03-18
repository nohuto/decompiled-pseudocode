/*
 * XREFs of ??1?$unique_ptr@VCComposeTop@@U?$default_delete@VCComposeTop@@@std@@@std@@QEAA@XZ @ 0x180275080
 * Callers:
 *     ?AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1801B0E64 (-AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 *     ??1CDesktopTree@@UEAA@XZ @ 0x18028AD60 (--1CDesktopTree@@UEAA@XZ.c)
 * Callees:
 *     ??R?$default_delete@VCComposeTop@@@std@@QEBAXPEAVCComposeTop@@@Z @ 0x1802754B4 (--R-$default_delete@VCComposeTop@@@std@@QEBAXPEAVCComposeTop@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<CComposeTop>::~unique_ptr<CComposeTop>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<CComposeTop>::operator()();
  return result;
}
