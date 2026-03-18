/*
 * XREFs of ?SetProperty@CHolographicExclusiveMode@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802DAC40
 * Callers:
 *     ?ProcessSetExclusiveOpacity@CHolographicExclusiveMode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICEXCLUSIVEMODE_SETEXCLUSIVEOPACITY@@@Z @ 0x1802DAC24 (-ProcessSetExclusiveOpacity@CHolographicExclusiveMode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HO.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180211C0C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 */

__int64 __fastcall CHolographicExclusiveMode::SetProperty(__int64 a1, int a2, int a3, int *a4)
{
  int v5; // xmm6_4
  RTL_SRWLOCK *v6; // rbx
  RTL_SRWLOCK *v8; // [rsp+20h] [rbp-28h] BYREF

  if ( a3 == 18 )
  {
    v5 = *a4;
    if ( a2 == 1 )
    {
      v6 = (RTL_SRWLOCK *)(a1 + 88);
      AcquireSRWLockExclusive((PSRWLOCK)(a1 + 88));
      *(_DWORD *)(a1 + 108) = v5;
      v8 = v6;
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v8);
    }
  }
  return 0LL;
}
