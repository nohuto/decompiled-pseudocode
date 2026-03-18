/*
 * XREFs of ??0CSceneMaterial@@QEAA@PEAVCComposition@@@Z @ 0x1802AE410
 * Callers:
 *     ??0?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@IEAA@PEAVCComposition@@@Z @ 0x18027EA64 (--0-$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMater.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x1802697EC (-RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 */

CSceneMaterial *__fastcall CSceneMaterial::CSceneMaterial(CSceneMaterial *this, struct CComposition *a2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax

  *((_DWORD *)this + 2) = 0;
  v3 = (unsigned __int64)this + 72;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CSceneMaterial::`vftable'{for `CSceneMaterialGeneratedT<CSceneMaterial,CSceneObject>'};
  *((_QWORD *)this + 9) = &CSceneMetallicRoughnessMaterial::`vftable'{for `ISceneNotificationListener'};
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *(_QWORD *)v4 = v4;
  *(_QWORD *)(v4 + 8) = v4;
  *(_QWORD *)(v4 + 16) = v4;
  *(_WORD *)(v4 + 24) = 257;
  *((_QWORD *)this + 10) = v4;
  CSceneResourceManager::RegisterSceneListener(
    *(CSceneResourceManager **)(*((_QWORD *)this + 3) + 680LL),
    (struct ISceneNotificationListener *)(v3 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  return this;
}
