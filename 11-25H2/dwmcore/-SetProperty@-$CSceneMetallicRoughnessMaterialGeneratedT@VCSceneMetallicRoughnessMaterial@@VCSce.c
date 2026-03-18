/*
 * XREFs of ?SetProperty@?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802844D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetBaseColorFactor@?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@QEAAJUD2D_VECTOR_4F@@@Z @ 0x180283058 (-SetBaseColorFactor@-$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial.c)
 *     ?SetMetallicFactor@?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@QEAAJM@Z @ 0x1802838A4 (-SetMetallicFactor@-$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@.c)
 *     ?SetProperty@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802845E0 (-SetProperty@-$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@MEAAJIW4DCOMPO.c)
 *     ?SetRoughnessFactor@?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@QEAAJM@Z @ 0x180284A7C (-SetRoughnessFactor@-$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial.c)
 */

__int64 __fastcall CSceneMetallicRoughnessMaterialGeneratedT<CSceneMetallicRoughnessMaterial,CScenePbrMaterial>::SetProperty(
        float *a1,
        int a2,
        int a3,
        float *a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF

  if ( a3 == 18 )
  {
    if ( a2 == 11 )
    {
      v10 = CSceneMetallicRoughnessMaterialGeneratedT<CSceneMetallicRoughnessMaterial,CScenePbrMaterial>::SetMetallicFactor(
              a1,
              *a4);
      v5 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x1301u, 0LL);
    }
    else if ( a2 == 13 )
    {
      v9 = CSceneMetallicRoughnessMaterialGeneratedT<CSceneMetallicRoughnessMaterial,CScenePbrMaterial>::SetRoughnessFactor();
      v5 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x1305u, 0LL);
    }
    else
    {
      v8 = CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::SetProperty();
      v5 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x1309u, 0LL);
    }
  }
  else if ( a3 == 69 )
  {
    if ( a2 == 10 )
    {
      v12 = *(_OWORD *)a4;
      v7 = CSceneMetallicRoughnessMaterialGeneratedT<CSceneMetallicRoughnessMaterial,CScenePbrMaterial>::SetBaseColorFactor(
             (CResource *)a1,
             &v12);
      v5 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x1311u, 0LL);
    }
    else
    {
      v6 = CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::SetProperty();
      v5 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x1315u, 0LL);
    }
  }
  else
  {
    v4 = CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::SetProperty();
    v5 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x131Au, 0LL);
  }
  return v5;
}
