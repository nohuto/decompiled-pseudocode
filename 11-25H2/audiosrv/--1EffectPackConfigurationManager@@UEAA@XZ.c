/*
 * XREFs of ??1EffectPackConfigurationManager@@UEAA@XZ @ 0x1800F87F4
 * Callers:
 *     ??_EEffectPackConfigurationManager@@UEAAPEAXI@Z @ 0x1800CC840 (--_EEffectPackConfigurationManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@VEffectPack@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@VEffectPack@@@std@@@0@@Z @ 0x180042554 (--$_Destroy_range@V-$allocator@V-$shared_ptr@VEffectPack@@@std@@@std@@@std@@YAXPEAV-$shared_ptr@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800CC274 (--1-$unique_storage@U-$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadPoolW.c)
 *     ?Shutdown@EffectPackConfigurationManager@@QEAAXXZ @ 0x1800F93F4 (-Shutdown@EffectPackConfigurationManager@@QEAAXXZ.c)
 */

void __fastcall EffectPackConfigurationManager::~EffectPackConfigurationManager(EffectPackConfigurationManager *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &EffectPackConfigurationManager::`vftable';
  EffectPackConfigurationManager::Shutdown(this);
  wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<0>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<0>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>((_QWORD *)this + 11);
  v2 = *((_QWORD *)this + 8);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<EffectPack>>>(v2, *((_QWORD *)this + 9));
    std::_Deallocate<16,0>(
      *((char **)this + 8),
      (const struct std::nothrow_t *)((*((_QWORD *)this + 10) - *((_QWORD *)this + 8)) & 0xFFFFFFFFFFFFFFF0uLL));
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *((_DWORD *)this + 3) = -1073741823;
}
