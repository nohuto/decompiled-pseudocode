/*
 * XREFs of ??0CSceneMetallicRoughnessMaterial@@QEAA@PEAVCComposition@@@Z @ 0x180274CE8
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800DB07C (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CSceneMaterial@@QEAA@PEAVCComposition@@@Z @ 0x1802A48F0 (--0CSceneMaterial@@QEAA@PEAVCComposition@@@Z.c)
 */

CSceneMetallicRoughnessMaterial *__fastcall CSceneMetallicRoughnessMaterial::CSceneMetallicRoughnessMaterial(
        CSceneMetallicRoughnessMaterial *this,
        struct CComposition *a2)
{
  CSceneMaterial::CSceneMaterial(this, a2);
  *((_QWORD *)this + 12) = 1056964608LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_BYTE *)this + 116) = 0;
  *((_DWORD *)this + 30) = 1065353216;
  *((_DWORD *)this + 31) = 1065353216;
  *((_DWORD *)this + 38) = 1065353216;
  *((_DWORD *)this + 39) = 1065353216;
  *((_DWORD *)this + 40) = 1065353216;
  *((_DWORD *)this + 41) = 1065353216;
  *((_DWORD *)this + 42) = 1065353216;
  *((_DWORD *)this + 43) = 1065353216;
  *(_QWORD *)this = &CSceneMetallicRoughnessMaterial::`vftable'{for `CSceneMaterialGeneratedT<CSceneMaterial,CSceneObject>'};
  *((_QWORD *)this + 9) = &CSceneMetallicRoughnessMaterial::`vftable'{for `ISceneNotificationListener'};
  return this;
}
