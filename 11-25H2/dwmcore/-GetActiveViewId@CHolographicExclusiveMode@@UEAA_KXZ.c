/*
 * XREFs of ?GetActiveViewId@CHolographicExclusiveMode@@UEAA_KXZ @ 0x1802DAA60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1802371B4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 */

PVOID __fastcall CHolographicExclusiveMode::GetActiveViewId(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rbx
  PVOID Ptr; // rbx
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = this + 2;
  AcquireSRWLockShared(this + 2);
  v5 = v1;
  Ptr = this[3].Ptr;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v5);
  return Ptr;
}
