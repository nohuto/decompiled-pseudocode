/*
 * XREFs of ?ApplyOcclusionStrengthToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1802AED20
 * Callers:
 *     ?IntializeSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@PEA_N@Z @ 0x1802AED40 (-IntializeSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@PEA_N@Z.c)
 *     ?OnOcclusionStrengthChanged@CScenePbrMaterial@@QEAAXXZ @ 0x1802AEED0 (-OnOcclusionStrengthChanged@CScenePbrMaterial@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CScenePbrMaterial::ApplyOcclusionStrengthToSpectreResource(
        CScenePbrMaterial *this,
        struct ISpectreMaterial *a2)
{
  (*(void (__fastcall **)(struct ISpectreMaterial *))(*(_QWORD *)a2 + 80LL))(a2);
}
