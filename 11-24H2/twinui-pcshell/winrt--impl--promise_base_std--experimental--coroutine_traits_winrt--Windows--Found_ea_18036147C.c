/*
 * XREFs of winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_da9f5ee43db59325462f58bbda1cfc4c__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_void_::unhandled_exception @ 0x18036147C
 * Callers:
 *     __lambda_da9f5ee43db59325462f58bbda1cfc4c_$_ResumeCoro$1::operator()_::_1_::catch$4 @ 0x1806E272D (__lambda_da9f5ee43db59325462f58bbda1cfc4c_$_ResumeCoro$1--operator()_--_1_--catch$4.c)
 * Callees:
 *     ??0slim_lock_guard@winrt@@QEAA@AEAUslim_mutex@1@@Z @ 0x1801B1784 (--0slim_lock_guard@winrt@@QEAA@AEAUslim_mutex@1@@Z.c)
 *     ??1exception_ptr@std@@QEAA@XZ @ 0x1802288C4 (--1exception_ptr@std@@QEAA@XZ.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x1802968EC (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x1802CB410 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ??4exception_ptr@std@@QEAAAEAV01@AEBV01@@Z @ 0x18032D5BC (--4exception_ptr@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?current_exception@std@@YA?AVexception_ptr@1@XZ @ 0x180336030 (-current_exception@std@@YA-AVexception_ptr@1@XZ.c)
 */

void __fastcall winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_da9f5ee43db59325462f58bbda1cfc4c__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_void_::unhandled_exception(
        RTL_SRWLOCK *a1)
{
  _QWORD *v2; // rax
  std::exception_ptr *v3; // rax
  _QWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v5[24]; // [rsp+30h] [rbp-18h] BYREF
  PSRWLOCK SRWLock; // [rsp+58h] [rbp+10h] BYREF

  winrt::slim_lock_guard::slim_lock_guard((winrt::slim_lock_guard *)&SRWLock, a1 + 9);
  v2 = std::current_exception(v4);
  std::exception_ptr::operator=(&a1[7], v2);
  std::exception_ptr::~exception_ptr((std::exception_ptr *)v4);
  v3 = std::exception_ptr::exception_ptr((std::exception_ptr *)v5, (const struct std::exception_ptr *)&a1[7]);
  std::rethrow_exception(v3);
  ReleaseSRWLockExclusive_0(SRWLock);
}
