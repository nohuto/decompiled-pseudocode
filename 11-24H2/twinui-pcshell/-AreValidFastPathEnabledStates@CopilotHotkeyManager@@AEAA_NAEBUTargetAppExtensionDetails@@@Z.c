/*
 * XREFs of ?AreValidFastPathEnabledStates@CopilotHotkeyManager@@AEAA_NAEBUTargetAppExtensionDetails@@@Z @ 0x1806226AC
 * Callers:
 *     ?GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA?AUTargetAppExtensionDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180624D18 (-GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA-AUTargetAppExtensionDetails@@V-$basic_s.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??1?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA@XZ @ 0x1802B1768 (--1-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$_Emplace@AEBH@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@HPEAX@std@@_N@1@AEBH@Z @ 0x18061D618 (--$_Emplace@AEBH@-$_Tree@V-$_Tset_traits@HU-$less@H@std@@V-$allocator@H@2@$0A@@std@@@std@@IEAA-A.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PenButtonSettingsModernization@@@details@wil@@QEAA_NXZ @ 0x180636CC4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_PenButtonSettingsModernization@@@.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CopilotHotkeyManager::AreValidFastPathEnabledStates(
        CopilotHotkeyManager *this,
        const struct TargetAppExtensionDetails *a2)
{
  _QWORD *v3; // rax
  int v4; // edi
  __int64 *v5; // rbx
  bool v6; // bl
  int v8; // eax
  void *v9; // [rsp+20h] [rbp-60h] BYREF
  __int64 v10; // [rsp+28h] [rbp-58h]
  _BYTE v11[16]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v12[6]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v13; // [rsp+70h] [rbp-10h] BYREF

  if ( *((_BYTE *)a2 + 136) != *((_BYTE *)a2 + 176) )
    return 0;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_PenButtonSettingsModernization>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_PenButtonSettingsModernization>::GetImpl'::`2'::impl) )
  {
    if ( !*((_BYTE *)a2 + 136) || *((_DWORD *)a2 + 35) != *((_DWORD *)a2 + 45) )
    {
      if ( !*((_BYTE *)a2 + 96) )
        return 1;
      v8 = *((_DWORD *)a2 + 25);
      if ( v8 != *((_DWORD *)a2 + 35) )
        return v8 != *((_DWORD *)a2 + 45);
    }
    return 0;
  }
  v12[0] = (char *)a2 + 64;
  v12[1] = (char *)a2 + 104;
  v12[2] = (char *)a2 + 144;
  v12[3] = (char *)a2 + 184;
  v12[4] = (char *)a2 + 224;
  v12[5] = (char *)a2 + 264;
  v10 = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  v9 = v3;
  v4 = 0;
  v5 = v12;
  do
  {
    if ( *(_BYTE *)(*v5 + 32) )
    {
      std::_Tree<std::_Tset_traits<int,std::less<int>,std::allocator<int>,0>>::_Emplace<int const &>(
        (__int64 *)&v9,
        (__int64)v11,
        (int *)(*v5 + 36));
      ++v4;
    }
    ++v5;
  }
  while ( v5 != &v13 );
  v6 = v10 == v4;
  std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::~_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>(&v9);
  return v6;
}
