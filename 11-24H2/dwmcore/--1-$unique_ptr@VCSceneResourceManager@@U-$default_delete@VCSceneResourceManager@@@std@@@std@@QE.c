/*
 * XREFs of ??1?$unique_ptr@VCSceneResourceManager@@U?$default_delete@VCSceneResourceManager@@@std@@@std@@QEAA@XZ @ 0x180259CA8
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x180259E9C (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ??R?$default_delete@VCSceneResourceManager@@@std@@QEBAXPEAVCSceneResourceManager@@@Z @ 0x18025A584 (--R-$default_delete@VCSceneResourceManager@@@std@@QEBAXPEAVCSceneResourceManager@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<CSceneResourceManager>::~unique_ptr<CSceneResourceManager>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<CSceneResourceManager>::operator()();
  return result;
}
