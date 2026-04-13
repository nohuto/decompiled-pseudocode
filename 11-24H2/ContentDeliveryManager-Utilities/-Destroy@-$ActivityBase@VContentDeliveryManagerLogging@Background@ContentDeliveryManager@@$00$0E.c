/*
 * XREFs of ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006E534
 * Callers:
 *     ??1ActionInvokedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18006D3A8 (--1ActionInvokedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18002A4B0 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180053D14 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     ?SetStopResult@?$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x180057BEC (-SetStopResult@-$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorTa.c)
 *     ?reset@?$shared_object@V?$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180070BE8 (-reset@-$shared_object@V-$ActivityData@VContentDeliveryManagerLogging@Background@Co_ea_180070BE8.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy(
        _QWORD *a1)
{
  _QWORD *v1; // rdi
  char v3; // si
  _DWORD *v4; // rcx
  int v5; // edx
  RTL_SRWLOCK *v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1 + 35;
  v3 = 1;
  if ( !a1[35] )
    goto LABEL_6;
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &v6);
  if ( !*v1 || *(_DWORD *)*v1 != 1 )
  {
    v3 = 0;
    wil::details::shared_object<wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v1);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v6);
  if ( v3 )
  {
LABEL_6:
    v4 = (_DWORD *)a1[34];
    if ( *v4 == 1 )
    {
      LODWORD(v6) = v4[22];
      v5 = -2147024322;
      if ( (int)v6 < 0 )
        v5 = (int)v6;
      wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        (__int64)v4,
        v5,
        (int *)&v6);
      (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    }
  }
}
