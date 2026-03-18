/*
 * XREFs of ??1?$unique_ptr@VCSuperWetInkManager@@U?$default_delete@VCSuperWetInkManager@@@std@@@std@@QEAA@XZ @ 0x180259CC8
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x180259E9C (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ??R?$default_delete@VCSuperWetInkManager@@@std@@QEBAXPEAVCSuperWetInkManager@@@Z @ 0x18025A5B0 (--R-$default_delete@VCSuperWetInkManager@@@std@@QEBAXPEAVCSuperWetInkManager@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<CSuperWetInkManager>::~unique_ptr<CSuperWetInkManager>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<CSuperWetInkManager>::operator()();
  return result;
}
