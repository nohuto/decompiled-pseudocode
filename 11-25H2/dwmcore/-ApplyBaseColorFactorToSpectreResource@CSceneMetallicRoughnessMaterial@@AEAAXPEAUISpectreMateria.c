/*
 * XREFs of ?ApplyBaseColorFactorToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1802AE8E0
 * Callers:
 *     ?SetBaseColorFactor@?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@QEAAJUD2D_VECTOR_4F@@@Z @ 0x180283058 (-SetBaseColorFactor@-$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial.c)
 *     ?IntializeSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@@PEA_N@Z @ 0x1802AE960 (-IntializeSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@@PEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSceneMetallicRoughnessMaterial::ApplyBaseColorFactorToSpectreResource(
        CSceneMetallicRoughnessMaterial *this,
        struct ISpectreMaterial *a2)
{
  void (__fastcall *v2)(struct ISpectreMaterial *, __int128 *); // rax
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(void (__fastcall **)(struct ISpectreMaterial *, __int128 *))(*(_QWORD *)a2 + 40LL);
  v3 = *(_OWORD *)((char *)this + 152);
  v2(a2, &v3);
}
