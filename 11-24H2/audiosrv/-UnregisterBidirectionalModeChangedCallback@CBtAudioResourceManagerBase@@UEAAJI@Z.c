/*
 * XREFs of ?UnregisterBidirectionalModeChangedCallback@CBtAudioResourceManagerBase@@UEAAJI@Z @ 0x1800E1BC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18006C370 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@_KV?$function@$$A6AXXZ@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$function@$$A6AXXZ@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x1800E24F4 (-erase@-$_Tree@V-$_Tmap_traits@_KV-$function@$$A6AXXZ@std@@U-$less@_K@2@V-$allocator@U-$pair@$$C.c)
 */

__int64 __fastcall CBtAudioResourceManagerBase::UnregisterBidirectionalModeChangedCallback(
        RTL_SRWLOCK *this,
        unsigned int a2)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 v3; // rdi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = this + 24;
  v3 = a2;
  AcquireSRWLockExclusive(this + 24);
  v7 = v2;
  v6 = v3;
  std::_Tree<std::_Tmap_traits<unsigned __int64,std::function<void (void)>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::function<void (void)>>>,0>>::erase(
    &this[29],
    &v6);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v7);
  return 0LL;
}
