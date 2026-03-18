/*
 * XREFs of ?SetEmissiveFactor@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJUD2D_VECTOR_3F@@@Z @ 0x18027888C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?SetProperty@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802799BC (-SetProperty@-$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@MEAAJIW4DCOMPO.c)
 * Callees:
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180027994 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800E75B4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCProjectedSha.c)
 *     ?ApplyEmissiveFactorToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1802A50E4 (-ApplyEmissiveFactorToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z.c)
 */

__int64 __fastcall CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::SetEmissiveFactor(
        CResource *this,
        __int64 a2)
{
  int v2; // eax
  __int64 v4; // rax
  struct ISpectreMaterial *v5; // rdx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a2 + 8);
  *((_QWORD *)this + 13) = *(_QWORD *)a2;
  *((_DWORD *)this + 28) = v2;
  v4 = **((_QWORD **)this + 10);
  v7 = v4;
  while ( v4 != *((_QWORD *)this + 10) )
  {
    v5 = *(struct ISpectreMaterial **)(v4 + 40);
    if ( v5 )
    {
      CScenePbrMaterial::ApplyEmissiveFactorToSpectreResource(this, v5);
      CResource::OnPropertyChanged(this);
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++(&v7);
    v4 = v7;
  }
  return 0LL;
}
