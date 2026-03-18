/*
 * XREFs of ?IsOfType@?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180282160
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1802821B0 (-IsOfType@-$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@UEBA_NW4MIL_RESOU.c)
 */

char __fastcall CSceneMetallicRoughnessMaterialGeneratedT<CSceneMetallicRoughnessMaterial,CScenePbrMaterial>::IsOfType(
        __int64 a1,
        int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 146 )
    return 1;
  v2 = CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::IsOfType();
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
