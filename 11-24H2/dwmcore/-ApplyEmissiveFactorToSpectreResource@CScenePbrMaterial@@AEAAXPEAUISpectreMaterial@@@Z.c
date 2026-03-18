/*
 * XREFs of ?ApplyEmissiveFactorToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1802A50E4
 * Callers:
 *     ?SetEmissiveFactor@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJUD2D_VECTOR_3F@@@Z @ 0x18027888C (-SetEmissiveFactor@-$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJUD2.c)
 *     ?IntializeSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@PEA_N@Z @ 0x1802A521C (-IntializeSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@PEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScenePbrMaterial::ApplyEmissiveFactorToSpectreResource(
        CScenePbrMaterial *this,
        struct ISpectreMaterial *a2)
{
  __int64 v2; // xmm0_8
  __int64 v3; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+28h] [rbp-20h]

  v2 = *((_QWORD *)this + 13);
  v5 = *((_DWORD *)this + 28);
  v3 = *(_QWORD *)a2;
  v4 = v2;
  (*(void (__fastcall **)(struct ISpectreMaterial *, __int64 *))(v3 + 48))(a2, &v4);
}
