/*
 * XREFs of ??1_Clear_guard@?$_Hash@V?$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V?$_Uhash_compare@U_GUID@@U?$hash@U_GUID@@@std@@U?$equal_to@U_GUID@@@3@@std@@V?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x18013B968
 * Callers:
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V?$_Uhash_compare@U_GUID@@U?$hash@U_GUID@@@std@@U?$equal_to@U_GUID@@@3@@std@@V?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x18013FC8C (-_Forced_rehash@-$_Hash@V-$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V-$_Uhas.c)
 * Callees:
 *     ??$fill@PEAV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@std@@YAXQEAV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@0@0AEBV10@@Z @ 0x1800846EC (--$fill@PEAV-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@V-$com_ptr_t@UIP.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180088864 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationS.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<_GUID,enum ValidEffectPackConfigurationSettings,std::_Uhash_compare<_GUID,std::hash<_GUID>,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>,0>>::_Clear_guard::~_Clear_guard(
        _QWORD *a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 *v4; // rdx
  unsigned __int64 *v5; // rcx
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)*a1;
  if ( *a1 && v1[2] )
  {
    v2 = (_QWORD *)v1[1];
    if ( v1[7] >> 3 <= v1[2] )
    {
      std::_List_node<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>,void *>>>(
        (__int64)a1,
        (__int64)v2);
      *(_QWORD *)v1[1] = v1[1];
      *(_QWORD *)(v1[1] + 8LL) = v1[1];
      v1[2] = 0LL;
      v4 = (unsigned __int64 *)v1[4];
      v5 = (unsigned __int64 *)v1[3];
      v6 = v1[1];
      return std::fill<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>>,std::_Iterator_base0> *,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>>,std::_Iterator_base0>>(
               v5,
               v4,
               &v6);
    }
    else
    {
      return std::_Hash<std::_Umap_traits<_GUID,enum ValidEffectPackConfigurationSettings,std::_Uhash_compare<_GUID,std::hash<_GUID>,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>,0>>::_Unchecked_erase(
               *a1,
               *v2,
               v1[1]);
    }
  }
  return result;
}
