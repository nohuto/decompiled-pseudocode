/*
 * XREFs of ??1CSceneMaterial@@MEAA@XZ @ 0x1802A49AC
 * Callers:
 *     ??1?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@MEAA@XZ @ 0x180274FE4 (--1-$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@MEAA@XZ.c)
 *     ??_GCSceneMaterial@@MEAAPEAXI@Z @ 0x1802A4A10 (--_GCSceneMaterial@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$_Tree@V?$_Tmap_traits@PEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x18024B734 (--1-$_Tree@V-$_Tmap_traits@PEAVCResource@@V-$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@.c)
 *     ?UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x18025F910 (-UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 */

void __fastcall CSceneMaterial::~CSceneMaterial(CSceneMaterial *this)
{
  *(_QWORD *)this = &CSceneMaterial::`vftable'{for `CSceneMaterialGeneratedT<CSceneMaterial,CSceneObject>'};
  *((_QWORD *)this + 9) = &CSceneMetallicRoughnessMaterial::`vftable'{for `ISceneNotificationListener'};
  CSceneResourceManager::UnregisterSceneListener(
    *(const __m128i ***)(*((_QWORD *)this + 3) + 680LL),
    (struct ISceneNotificationListener *)(((unsigned __int64)this + 72) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  std::_Tree<std::_Tmap_traits<CResource *,wil::com_ptr_t<ISpectreTexture,wil::err_returncode_policy>,std::less<CResource *>,std::allocator<std::pair<CResource * const,wil::com_ptr_t<ISpectreTexture,wil::err_returncode_policy>>>,0>>::~_Tree<std::_Tmap_traits<CResource *,wil::com_ptr_t<ISpectreTexture,wil::err_returncode_policy>,std::less<CResource *>,std::allocator<std::pair<CResource * const,wil::com_ptr_t<ISpectreTexture,wil::err_returncode_policy>>>,0>>((_QWORD **)this + 10);
  CResource::~CResource(this);
}
