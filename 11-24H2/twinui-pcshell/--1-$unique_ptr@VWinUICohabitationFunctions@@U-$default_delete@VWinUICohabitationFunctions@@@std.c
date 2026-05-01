/*
 * XREFs of ??1?$unique_ptr@VWinUICohabitationFunctions@@U?$default_delete@VWinUICohabitationFunctions@@@std@@@std@@QEAA@XZ @ 0x18044EC94
 * Callers:
 *     ?Instance@WinUICohabitationFunctions@@SAPEAV1@XZ @ 0x180289D68 (-Instance@WinUICohabitationFunctions@@SAPEAV1@XZ.c)
 * Callees:
 *     ??R?$default_delete@VWinUICohabitationFunctions@@@std@@QEBAXPEAVWinUICohabitationFunctions@@@Z @ 0x18044EDD8 (--R-$default_delete@VWinUICohabitationFunctions@@@std@@QEBAXPEAVWinUICohabitationFunctions@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<WinUICohabitationFunctions>::~unique_ptr<WinUICohabitationFunctions>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<WinUICohabitationFunctions>::operator()(a1, *a1);
  return result;
}
