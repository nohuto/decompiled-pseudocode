/*
 * XREFs of _dynamic_initializer_for__s_validSettingsForSchema__ @ 0x180008540
 * Callers:
 *     <none>
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@std@@@std@@@2@@Z @ 0x180021288 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_180021288.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18002203C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x18009F300 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     atexit @ 0x1800A7F5C (atexit.c)
 *     ??$emplace@AEBU?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@?$_Hash@V?$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V?$_Uhash_compare@U_GUID@@U?$hash@U_GUID@@@std@@U?$equal_to@U_GUID@@@3@@std@@V?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@1@@Z @ 0x18013AAD0 (--$emplace@AEBU-$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@-$_Hash@V-$_Uma.c)
 */

// Hidden C++ exception states: #wind=3
int dynamic_initializer_for__s_validSettingsForSchema__()
{
  __int64 size_of; // rax
  _QWORD *v1; // rax
  __int64 v2; // rcx
  __int128 *v3; // rbx
  _BYTE v5[16]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v6; // [rsp+30h] [rbp-38h] BYREF
  int v7; // [rsp+40h] [rbp-28h]
  __int128 v8; // [rsp+44h] [rbp-24h]
  int v9; // [rsp+54h] [rbp-14h]
  __int64 v10; // [rsp+58h] [rbp-10h] BYREF

  v6 = PKEY_FX_EffectPack_Schema_V1;
  v7 = 62127;
  v8 = PKEY_FX_EffectPack_Schema_Internal_V1;
  v9 = 162495;
  size_of = std::_Get_size_of_n<40>(1LL);
  v1 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v1 = v1;
  v1[1] = v1;
  qword_1801D0DA8 = (__int64)v1;
  qword_1801D0DB8 = 0LL;
  xmmword_1801D0DC0 = 0LL;
  qword_1801D0DD0 = 7LL;
  qword_1801D0DD8 = 8LL;
  dword_1801D0DA0 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>>>>>::_Assign_grow(
    &qword_1801D0DB8,
    16LL,
    v1);
  v3 = &v6;
  do
  {
    std::_Hash<std::_Umap_traits<_GUID,enum ValidEffectPackConfigurationSettings,std::_Uhash_compare<_GUID,std::hash<_GUID>,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>,0>>::emplace<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings> const &>(
      v2,
      v5,
      v3);
    v3 = (__int128 *)((char *)v3 + 20);
  }
  while ( v3 != (__int128 *)&v10 );
  return atexit(dynamic_atexit_destructor_for__s_validSettingsForSchema__);
}
