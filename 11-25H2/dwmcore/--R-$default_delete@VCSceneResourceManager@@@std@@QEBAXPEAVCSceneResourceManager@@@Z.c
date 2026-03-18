/*
 * XREFs of ??R?$default_delete@VCSceneResourceManager@@@std@@QEBAXPEAVCSceneResourceManager@@@Z @ 0x180265504
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800FC890 (-Initialize@CComposition@@MEAAJXZ.c)
 *     ??1?$unique_ptr@VCSceneResourceManager@@U?$default_delete@VCSceneResourceManager@@@std@@@std@@QEAA@XZ @ 0x180264BE8 (--1-$unique_ptr@VCSceneResourceManager@@U-$default_delete@VCSceneResourceManager@@@std@@@std@@QE.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180264D94 (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??1CSceneResourceManager@@QEAA@XZ @ 0x180269434 (--1CSceneResourceManager@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<CSceneResourceManager>::operator()(__int64 a1, CSceneResourceManager *a2)
{
  if ( a2 )
  {
    CSceneResourceManager::~CSceneResourceManager(a2);
    operator delete(a2);
  }
}
