/*
 * XREFs of ??R?$default_delete@VCMeshCacheManager@@@std@@QEBAXPEAVCMeshCacheManager@@@Z @ 0x1802654D4
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800FC890 (-Initialize@CComposition@@MEAAJXZ.c)
 *     ??1?$unique_ptr@VCMeshCacheManager@@U?$default_delete@VCMeshCacheManager@@@std@@@std@@QEAA@XZ @ 0x180264BC8 (--1-$unique_ptr@VCMeshCacheManager@@U-$default_delete@VCMeshCacheManager@@@std@@@std@@QEAA@XZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180264D94 (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     ??1?$_Tree@V?$_Tmap_traits@URoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@U?$less@URoundedRectangleCacheKey@CMeshCacheManager@@@std@@V?$allocator@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@6@$0A@@std@@@std@@QEAA@XZ @ 0x180264B98 (--1-$_Tree@V-$_Tmap_traits@URoundedRectangleCacheKey@CMeshCacheManager@@V-$com_ptr_t@VVertexAAOf.c)
 */

void __fastcall std::default_delete<CMeshCacheManager>::operator()(__int64 a1, _QWORD **a2)
{
  if ( a2 )
  {
    std::_Tree<std::_Tmap_traits<CMeshCacheManager::RoundedRectangleCacheKey,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>,std::less<CMeshCacheManager::RoundedRectangleCacheKey>,std::allocator<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>,0>>::~_Tree<std::_Tmap_traits<CMeshCacheManager::RoundedRectangleCacheKey,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>,std::less<CMeshCacheManager::RoundedRectangleCacheKey>,std::allocator<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>,0>>(a2);
    operator delete(a2);
  }
}
