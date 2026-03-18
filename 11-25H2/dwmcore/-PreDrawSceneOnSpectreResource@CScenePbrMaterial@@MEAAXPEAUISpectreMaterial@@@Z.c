/*
 * XREFs of ?PreDrawSceneOnSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@@Z @ 0x1802AEF30
 * Callers:
 *     ?PreDrawSceneOnSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@@@Z @ 0x1802AEA90 (-PreDrawSceneOnSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@@@Z.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180252C48 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?ApplyInputToSpectreResource@CScenePbrMaterial@@IEAAXPEAUISpectreMaterial@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVCSceneSurfaceMaterialInput@@@Z @ 0x1802AEC5C (-ApplyInputToSpectreResource@CScenePbrMaterial@@IEAAXPEAUISpectreMaterial@@V-$basic_string@DU-$c.c)
 */

void __fastcall CScenePbrMaterial::PreDrawSceneOnSpectreResource(CScenePbrMaterial *this, struct ISpectreMaterial *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_QWORD *)this + 16);
  v5 = std::string::string((__int64)v10, (__int64)"Material/EmissiveTexture");
  CScenePbrMaterial::ApplyInputToSpectreResource((__int64)this, (__int64)a2, v5, v2);
  v6 = *((_QWORD *)this + 17);
  v7 = std::string::string((__int64)v10, (__int64)"Material/NormalTexture");
  CScenePbrMaterial::ApplyInputToSpectreResource((__int64)this, (__int64)a2, v7, v6);
  v8 = *((_QWORD *)this + 18);
  v9 = std::string::string((__int64)v10, (__int64)"Material/OcclusionTexture");
  CScenePbrMaterial::ApplyInputToSpectreResource((__int64)this, (__int64)a2, v9, v8);
}
