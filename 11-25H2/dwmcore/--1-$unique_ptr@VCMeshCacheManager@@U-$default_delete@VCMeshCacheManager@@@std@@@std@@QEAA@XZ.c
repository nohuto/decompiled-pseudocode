/*
 * XREFs of ??1?$unique_ptr@VCMeshCacheManager@@U?$default_delete@VCMeshCacheManager@@@std@@@std@@QEAA@XZ @ 0x180264BC8
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x180264D94 (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ??R?$default_delete@VCMeshCacheManager@@@std@@QEBAXPEAVCMeshCacheManager@@@Z @ 0x1802654D4 (--R-$default_delete@VCMeshCacheManager@@@std@@QEBAXPEAVCMeshCacheManager@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<CMeshCacheManager>::~unique_ptr<CMeshCacheManager>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<CMeshCacheManager>::operator()();
  return result;
}
