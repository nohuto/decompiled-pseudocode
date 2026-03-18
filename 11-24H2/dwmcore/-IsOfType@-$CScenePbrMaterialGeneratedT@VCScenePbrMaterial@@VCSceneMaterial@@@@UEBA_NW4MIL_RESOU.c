/*
 * XREFs of ?IsOfType@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18027753C
 * Callers:
 *     ?IsOfType@?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1802774F0 (-IsOfType@-$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCSceneP.c)
 * Callees:
 *     <none>
 */

bool __fastcall CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::IsOfType(__int64 a1, int a2)
{
  char v2; // cl

  v2 = 1;
  if ( a2 != 143 )
    return (unsigned int)(a2 - 150) <= 1;
  return v2;
}
