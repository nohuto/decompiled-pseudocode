/*
 * XREFs of ?ApplyInputToSpectreResource@CScenePbrMaterial@@IEAAXPEAUISpectreMaterial@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVCSceneSurfaceMaterialInput@@@Z @ 0x1802AEC5C
 * Callers:
 *     ?PreDrawSceneOnSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@@@Z @ 0x1802AEA90 (-PreDrawSceneOnSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@@@Z.c)
 *     ?PreDrawSceneOnSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@@Z @ 0x1802AEF30 (-PreDrawSceneOnSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@@Z.c)
 * Callees:
 *     ?GetSpectreTexture@CSceneResourceManager@@QEAAJPEAVCResource@@PEAPEAUISpectreTexture@@@Z @ 0x1802694D8 (-GetSpectreTexture@CSceneResourceManager@@QEAAJPEAVCResource@@PEAPEAUISpectreTexture@@@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x1802AEB14 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScenePbrMaterial::ApplyInputToSpectreResource(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct ISpectreTexture *v4; // rdi
  __int64 v8; // rsi
  struct CResource *v9; // rdx
  void (__fastcall *v10)(__int64, __int64, struct ISpectreTexture *, __int64); // rbx
  __int64 v11; // rax
  struct ISpectreTexture *v12; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v13[80]; // [rsp+38h] [rbp-50h] BYREF

  v4 = 0LL;
  v12 = 0LL;
  v8 = 0LL;
  if ( a4 )
  {
    v9 = *(struct CResource **)(a4 + 88);
    if ( v9 )
    {
      CSceneResourceManager::GetSpectreTexture(*(CSceneResourceManager **)(*(_QWORD *)(a1 + 24) + 680LL), v9, &v12);
      v4 = v12;
    }
    v8 = *(_QWORD *)(a4 + 80);
  }
  v10 = *(void (__fastcall **)(__int64, __int64, struct ISpectreTexture *, __int64))(*(_QWORD *)a2 + 96LL);
  v11 = std::string::string((__int64)v13, a3);
  v10(a2, v11, v4, v8);
  std::string::~string(a3);
}
