/*
 * XREFs of ?GetProperty@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@MEAAJIPEAVCExpressionValue@@@Z @ 0x180276E58
 * Callers:
 *     ?GetProperty@?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@MEAAJIPEAVCExpressionValue@@@Z @ 0x180276DF0 (-GetProperty@-$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCSce.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::GetProperty(
        __int64 a1,
        int a2,
        __int64 a3)
{
  unsigned int v3; // r9d
  int v4; // xmm0_4
  int v5; // eax

  v3 = 0;
  switch ( a2 )
  {
    case 0:
      v4 = *(_DWORD *)(a1 + 96);
      goto LABEL_10;
    case 3:
      v5 = *(_DWORD *)(a1 + 112);
      *(_QWORD *)a3 = *(_QWORD *)(a1 + 104);
      *(_DWORD *)(a3 + 8) = v5;
      *(_DWORD *)(a3 + 72) = 52;
      return v3;
    case 6:
      v4 = *(_DWORD *)(a1 + 120);
      goto LABEL_10;
    case 8:
      v4 = *(_DWORD *)(a1 + 124);
LABEL_10:
      *(_DWORD *)a3 = v4;
      *(_DWORD *)(a3 + 72) = 18;
      return v3;
  }
  return (unsigned int)-2147024809;
}
