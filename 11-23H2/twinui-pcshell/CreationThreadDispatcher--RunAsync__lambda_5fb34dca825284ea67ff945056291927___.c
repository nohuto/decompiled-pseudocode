/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_5fb34dca825284ea67ff945056291927___ @ 0x1805B2464
 * Callers:
 *     wistd::__function::__func__lambda_9749c4e18566b8d242b244bea4bcaf57__void___cdecl(bool_const_&)_::operator() @ 0x1805B2BF0 (wistd--__function--__func__lambda_9749c4e18566b8d242b244bea4bcaf57__void___cdecl(bool_const_-)_-.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180098014 (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180142264 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fd0439dc359abe078b4c08f0b3a8cea0___::CTaskWrapper__lambda_fd0439dc359abe078b4c08f0b3a8cea0_____lambda_fd0439dc359abe078b4c08f0b3a8cea0___ @ 0x1805B1FCC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fd0439dc359abe078b4c08f0b3a8cea0___--CTaskW.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_5fb34dca825284ea67ff945056291927___(
        __int64 a1,
        volatile int *a2)
{
  volatile int *v2; // r9
  __int64 v3; // r8
  Microsoft::WRL::Details *v4; // rcx
  __int64 *v5; // rdi
  __int64 v6; // rax
  void *v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // esi
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+38h] [rbp-20h] BYREF
  char v13; // [rsp+40h] [rbp-18h]
  __int64 v14; // [rsp+48h] [rbp-10h] BYREF
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  v2 = a2;
  v3 = a1;
  v15 = a1;
  v4 = (Microsoft::WRL::Details *)(a1 + 44);
  if ( v3 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference(v4, a2);
  v11 = *(_QWORD *)v2;
  v5 = (__int64 *)(v2 + 2);
  v6 = *((_QWORD *)v2 + 1);
  *((_QWORD *)v2 + 1) = 0LL;
  v12 = v6;
  v13 = *((_BYTE *)v2 + 16);
  v14 = v3;
  if ( v3 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference(v4, a2);
  v7 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v8 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fd0439dc359abe078b4c08f0b3a8cea0___::CTaskWrapper__lambda_fd0439dc359abe078b4c08f0b3a8cea0_____lambda_fd0439dc359abe078b4c08f0b3a8cea0___(
           (__int64)v7,
           (__int64)&v11);
  else
    v8 = 0LL;
  v9 = SHTaskPoolQueueTask(3LL, 0LL, 0LL);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v14);
  wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(&v12);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v15);
  wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(v5);
  return v9;
}
