/*
 * XREFs of ??R?$default_delete@VCSuperWetInkManager@@@std@@QEBAXPEAVCSuperWetInkManager@@@Z @ 0x180265530
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800FC890 (-Initialize@CComposition@@MEAAJXZ.c)
 *     ??1?$unique_ptr@VCSuperWetInkManager@@U?$default_delete@VCSuperWetInkManager@@@std@@@std@@QEAA@XZ @ 0x180264C08 (--1-$unique_ptr@VCSuperWetInkManager@@U-$default_delete@VCSuperWetInkManager@@@std@@@std@@QEAA@X.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     ??1CSuperWetInkManager@@QEAA@XZ @ 0x180265368 (--1CSuperWetInkManager@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<CSuperWetInkManager>::operator()(__int64 a1, CSuperWetInkManager *a2)
{
  if ( a2 )
  {
    CSuperWetInkManager::~CSuperWetInkManager(a2);
    operator delete(a2);
  }
}
