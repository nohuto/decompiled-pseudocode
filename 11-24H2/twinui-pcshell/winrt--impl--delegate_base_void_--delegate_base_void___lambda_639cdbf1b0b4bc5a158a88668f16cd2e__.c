/*
 * XREFs of winrt::impl::delegate_base_void_::delegate_base_void___lambda_639cdbf1b0b4bc5a158a88668f16cd2e___ @ 0x1805ED238
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$1 @ 0x1805EFF00 (RequestNotificationPinConsentAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x180293110 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     _lambda_639cdbf1b0b4bc5a158a88668f16cd2e_::__lambda_639cdbf1b0b4bc5a158a88668f16cd2e_ @ 0x1805EDB20 (_lambda_639cdbf1b0b4bc5a158a88668f16cd2e_--__lambda_639cdbf1b0b4bc5a158a88668f16cd2e_.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::delegate_base_void_::delegate_base_void___lambda_639cdbf1b0b4bc5a158a88668f16cd2e___(
        _QWORD *a1,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // r8
  __int64 v6; // rdx
  char *v8; // [rsp+28h] [rbp-20h]

  v8 = (char *)operator new(0x20uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v8 + 8));
  v4 = *(_QWORD *)a2;
  *(_QWORD *)a2 = 0LL;
  v5[2] = v4;
  v6 = *((_QWORD *)a2 + 1);
  *((_QWORD *)a2 + 1) = 0LL;
  v5[3] = v6;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *v5 = off_1807579B0;
  *a1 = v5;
  lambda_639cdbf1b0b4bc5a158a88668f16cd2e_::__lambda_639cdbf1b0b4bc5a158a88668f16cd2e_(a2);
  return a1;
}
