/*
 * XREFs of ?GetTargetZoneId@CHolographicExclusiveMode@@UEAAHXZ @ 0x1802D1870
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18022B3B4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 */

__int64 __fastcall CHolographicExclusiveMode::GetTargetZoneId(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rbx
  RTL_SRWLOCK *v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = this + 2;
  AcquireSRWLockShared(this + 2);
  v4 = v1;
  LODWORD(v1) = this[4].Ptr;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v4);
  return (unsigned int)v1;
}
