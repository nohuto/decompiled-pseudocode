/*
 * XREFs of ?RemoveMPCTargetForWindowId@MPCInputRouter@@UEAAX_K@Z @ 0x1800FCB20
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Erase@_K@?$_Hash@V?$_Umap_traits@_KPEAUIMPCTarget@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@3@$0A@@std@@@std@@AEAA_KAEB_K@Z @ 0x1800FA614 (--$_Erase@_K@-$_Hash@V-$_Umap_traits@_KPEAUIMPCTarget@@V-$_Uhash_compare@_KU-$hash@_K@std@@U-$eq.c)
 */

void __fastcall MPCInputRouter::RemoveMPCTargetForWindowId(MPCInputRouter *this, __int64 a2)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  std::_Hash<std::_Umap_traits<unsigned __int64,IMPCTarget *,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,IMPCTarget *>>,0>>::_Erase<unsigned __int64>(
    (_QWORD *)this + 17,
    (__int64)&v2);
}
