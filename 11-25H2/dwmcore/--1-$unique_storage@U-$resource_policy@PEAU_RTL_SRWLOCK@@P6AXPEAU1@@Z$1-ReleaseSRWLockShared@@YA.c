/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1802371B4
 * Callers:
 *     ?GetActiveViewId@CHolographicExclusiveMode@@UEAA_KXZ @ 0x1802DAA60 (-GetActiveViewId@CHolographicExclusiveMode@@UEAA_KXZ.c)
 *     ?GetOpacity@CHolographicExclusiveMode@@UEAAMXZ @ 0x1802DAAB0 (-GetOpacity@CHolographicExclusiveMode@@UEAAMXZ.c)
 *     ?GetTargetZoneId@CHolographicExclusiveMode@@UEAAHXZ @ 0x1802DAB10 (-GetTargetZoneId@CHolographicExclusiveMode@@UEAAHXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(
        RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v1; // rcx

  v1 = *a1;
  if ( v1 )
    ReleaseSRWLockShared(v1);
}
