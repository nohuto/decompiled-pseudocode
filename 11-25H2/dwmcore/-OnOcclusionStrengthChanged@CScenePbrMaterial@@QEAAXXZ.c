/*
 * XREFs of ?OnOcclusionStrengthChanged@CScenePbrMaterial@@QEAAXXZ @ 0x1802AEED0
 * Callers:
 *     ?SetOcclusionStrength@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJM@Z @ 0x180283B34 (-SetOcclusionStrength@-$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJ.c)
 *     ?SetProperty@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802845E0 (-SetProperty@-$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@MEAAJIW4DCOMPO.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800301EC (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCProjectedSha.c)
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180078FA4 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 *     ?ApplyOcclusionStrengthToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1802AED20 (-ApplyOcclusionStrengthToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z.c)
 */

void __fastcall CScenePbrMaterial::OnOcclusionStrengthChanged(CScenePbrMaterial *this)
{
  __int64 v2; // rax
  struct ISpectreMaterial *v3; // rdx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = **((_QWORD **)this + 10);
  v4 = v2;
  while ( v2 != *((_QWORD *)this + 10) )
  {
    v3 = *(struct ISpectreMaterial **)(v2 + 40);
    if ( v3 )
    {
      CScenePbrMaterial::ApplyOcclusionStrengthToSpectreResource(this, v3);
      CResource::OnPropertyChanged(this);
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++(&v4);
    v2 = v4;
  }
}
