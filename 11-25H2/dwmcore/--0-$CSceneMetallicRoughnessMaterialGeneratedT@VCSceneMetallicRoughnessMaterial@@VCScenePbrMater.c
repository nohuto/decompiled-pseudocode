/*
 * XREFs of ??0?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@IEAA@PEAVCComposition@@@Z @ 0x18027EA64
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180110938 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CSceneMaterial@@QEAA@PEAVCComposition@@@Z @ 0x1802AE410 (--0CSceneMaterial@@QEAA@PEAVCComposition@@@Z.c)
 */

__int64 __fastcall CSceneMetallicRoughnessMaterialGeneratedT<CSceneMetallicRoughnessMaterial,CScenePbrMaterial>::CSceneMetallicRoughnessMaterialGeneratedT<CSceneMetallicRoughnessMaterial,CScenePbrMaterial>(
        __int64 a1,
        struct CComposition *a2)
{
  __int64 result; // rax

  CSceneMaterial::CSceneMaterial((CSceneMaterial *)a1, a2);
  *(_QWORD *)(a1 + 96) = 1056964608LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 112) = 0;
  *(_BYTE *)(a1 + 116) = 0;
  *(_QWORD *)a1 = &CScenePbrMaterial::`vftable'{for `CSceneMaterialGeneratedT<CSceneMaterial,CSceneObject>'};
  *(_QWORD *)(a1 + 72) = &CSceneMetallicRoughnessMaterial::`vftable'{for `ISceneNotificationListener'};
  result = a1;
  *(_DWORD *)(a1 + 120) = 1065353216;
  *(_DWORD *)(a1 + 124) = 1065353216;
  *(_DWORD *)(a1 + 152) = 1065353216;
  *(_DWORD *)(a1 + 156) = 1065353216;
  *(_DWORD *)(a1 + 160) = 1065353216;
  *(_DWORD *)(a1 + 164) = 1065353216;
  *(_DWORD *)(a1 + 168) = 1065353216;
  *(_DWORD *)(a1 + 172) = 1065353216;
  return result;
}
