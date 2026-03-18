/*
 * XREFs of ?IntializeSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@@PEA_N@Z @ 0x1802A4E40
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyBaseColorFactorToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1802A4DC0 (-ApplyBaseColorFactorToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectreMateria.c)
 *     ?ApplyMetallicRoughnessFactorToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1802A4E10 (-ApplyMetallicRoughnessFactorToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectr.c)
 *     ?IntializeSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@PEA_N@Z @ 0x1802A521C (-IntializeSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@PEA_N@Z.c)
 */

void __fastcall CSceneMetallicRoughnessMaterial::IntializeSpectreResource(
        CSceneMetallicRoughnessMaterial *this,
        struct ISpectreMaterial *a2,
        bool *a3)
{
  CScenePbrMaterial::IntializeSpectreResource(this, a2, a3);
  CSceneMetallicRoughnessMaterial::ApplyBaseColorFactorToSpectreResource(this, a2);
  CSceneMetallicRoughnessMaterial::ApplyMetallicRoughnessFactorToSpectreResource(this, a2);
  *a3 = 1;
}
