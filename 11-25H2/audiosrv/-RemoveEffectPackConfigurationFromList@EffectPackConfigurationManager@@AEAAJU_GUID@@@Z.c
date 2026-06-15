/*
 * XREFs of ?RemoveEffectPackConfigurationFromList@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z @ 0x1800F8FC0
 * Callers:
 *     ?OnMediaNotification@EffectPackConfigurationManager@@UEAAJPEAUMEDIA_NOTIFICATION_BLOCK@@@Z @ 0x1800F8CB0 (-OnMediaNotification@EffectPackConfigurationManager@@UEAAJPEAUMEDIA_NOTIFICATION_BLOCK@@@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@VEffectPack@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@VEffectPack@@@std@@@0@@Z @ 0x180042554 (--$_Destroy_range@V-$allocator@V-$shared_ptr@VEffectPack@@@std@@@std@@@std@@YAXPEAV-$shared_ptr@.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_EffectPackConfiguration_const__________lambda_e88da4b83d171c6f9230c1d6aaf0e7ce___ @ 0x1800F870C (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--shared_ptr_EffectP.c)
 */

__int64 __fastcall EffectPackConfigurationManager::RemoveEffectPackConfigurationFromList(
        __int64 **this,
        struct _GUID *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 *v5; // rbx
  __int64 *v7; // [rsp+20h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+28h] [rbp-10h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(this + 2);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 2));
  v8 = v4;
  std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_EffectPackConfiguration_const__________lambda_e88da4b83d171c6f9230c1d6aaf0e7ce___(
    &v7,
    this[8],
    this[9],
    a2);
  v5 = v7;
  if ( v7 != this[9] )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<EffectPack>>>((__int64)v7, (__int64)this[9]);
    this[9] = v5;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v8);
  return 0LL;
}
