/*
 * XREFs of ?GetProperty@?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@MEAAJIPEAVCExpressionValue@@@Z @ 0x180281AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProperty@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@MEAAJIPEAVCExpressionValue@@@Z @ 0x180281B30 (-GetProperty@-$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@MEAAJIPEAVCExp.c)
 */

__int64 __fastcall CSceneMetallicRoughnessMaterialGeneratedT<CSceneMetallicRoughnessMaterial,CScenePbrMaterial>::GetProperty(
        __int64 a1,
        __int64 a2,
        __m128i *a3)
{
  unsigned int v3; // r9d
  __int32 v4; // xmm0_4
  __m128i v5; // xmm0

  v3 = 0;
  switch ( (_DWORD)a2 )
  {
    case 0xA:
      v5 = _mm_loadu_si128((const __m128i *)(a1 + 152));
      a3[4].m128i_i32[2] = 69;
      *a3 = v5;
      return v3;
    case 0xB:
      v4 = *(_DWORD *)(a1 + 168);
      goto LABEL_7;
    case 0xD:
      v4 = *(_DWORD *)(a1 + 172);
LABEL_7:
      a3->m128i_i32[0] = v4;
      a3[4].m128i_i32[2] = 18;
      return v3;
  }
  return (unsigned int)CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::GetProperty(a1, a2, a3, 0LL);
}
