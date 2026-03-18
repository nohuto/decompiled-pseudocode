/*
 * XREFs of ?SetProperty@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802799BC
 * Callers:
 *     ?SetProperty@?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802798B0 (-SetProperty@-$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCSce.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetEmissiveFactor@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJUD2D_VECTOR_3F@@@Z @ 0x18027888C (-SetEmissiveFactor@-$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJUD2.c)
 *     ?OnAlphaCutoffChanged@CScenePbrMaterial@@QEAAXXZ @ 0x1802A5290 (-OnAlphaCutoffChanged@CScenePbrMaterial@@QEAAXXZ.c)
 *     ?OnNormalScaleChanged@CScenePbrMaterial@@QEAAXXZ @ 0x1802A5350 (-OnNormalScaleChanged@CScenePbrMaterial@@QEAAXXZ.c)
 *     ?OnOcclusionStrengthChanged@CScenePbrMaterial@@QEAAXXZ @ 0x1802A53A4 (-OnOcclusionStrengthChanged@CScenePbrMaterial@@QEAAXXZ.c)
 */

__int64 __fastcall CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::SetProperty(
        CScenePbrMaterial *a1,
        int a2,
        int a3,
        _DWORD *a4)
{
  int v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+38h] [rbp-10h]

  if ( a3 == 18 )
  {
    if ( a2 )
    {
      if ( a2 == 6 )
      {
        if ( *(float *)a4 != *((float *)a1 + 30) )
        {
          *((_DWORD *)a1 + 30) = *a4;
          CScenePbrMaterial::OnNormalScaleChanged(a1);
        }
      }
      else
      {
        if ( a2 != 8 )
        {
          v8 = 4581;
          goto LABEL_12;
        }
        if ( *(float *)a4 != *((float *)a1 + 31) )
        {
          *((_DWORD *)a1 + 31) = *a4;
          CScenePbrMaterial::OnOcclusionStrengthChanged(a1);
        }
      }
    }
    else if ( *(float *)a4 != *((float *)a1 + 24) )
    {
      *((_DWORD *)a1 + 24) = *a4;
      CScenePbrMaterial::OnAlphaCutoffChanged(a1);
    }
    return 0;
  }
  else
  {
    if ( a3 != 52 )
    {
      v8 = 4598;
LABEL_12:
      v6 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, v8, 0LL);
      return v6;
    }
    if ( a2 != 3 )
    {
      v8 = 4593;
      goto LABEL_12;
    }
    v4 = a4[2];
    v9 = *(_QWORD *)a4;
    v10 = v4;
    v5 = CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::SetEmissiveFactor(a1, (__int64)&v9);
    v6 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x11EDu, 0LL);
  }
  return v6;
}
