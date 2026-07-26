/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEA_K$$A6AXAEBUkspin_lock_saved_irql@details@wil@@@Z$1?Release@123@SAX0@ZU?$integral_constant@_K$01@wistd@@U123@PEA_K$0A@$$T@details@wil@@@details@wil@@QEAAXUkspin_lock_saved_irql@23@@Z @ 0x1400C8D44
 * Callers:
 *     ndisIfUpdateExternalInterface @ 0x1400C8890 (ndisIfUpdateExternalInterface.c)
 *     NdisIfUpdateInterface @ 0x1400C8E60 (NdisIfUpdateInterface.c)
 * Callees:
 *     ??$invoke@P6AXAEBUkspin_lock_saved_irql@details@wil@@@ZAEAU123@@wistd@@YAX$$QEAP6AXAEBUkspin_lock_saved_irql@details@wil@@@ZAEAU123@@Z @ 0x1400C87C4 (--$invoke@P6AXAEBUkspin_lock_saved_irql@details@wil@@@ZAEAU123@@wistd@@YAX$$QEAP6AXAEBUkspin_loc.c)
 */

__int64 __fastcall wil::details::unique_storage<wil::details::resource_policy<unsigned __int64 *,void (wil::details::kspin_lock_saved_irql const &),&public: static void wil::details::kspin_lock_saved_irql::Release(wil::details::kspin_lock_saved_irql const &),wistd::integral_constant<unsigned __int64,2>,wil::details::kspin_lock_saved_irql,unsigned __int64 *,0,std::nullptr_t>>::reset(
        __int128 *a1,
        __int128 *a2)
{
  __int128 v4; // xmm0
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  void (__fastcall *v7)(const struct wil::details::kspin_lock_saved_irql *); // [rsp+40h] [rbp+8h] BYREF

  if ( *(_QWORD *)a1 )
  {
    v4 = *a1;
    v7 = wil::details::kspin_lock_saved_irql::Release;
    v6 = v4;
    result = wistd::invoke<void (*)(wil::details::kspin_lock_saved_irql const &),wil::details::kspin_lock_saved_irql &>(
               (__int64 (__fastcall **)(__int64))&v7,
               (__int64)&v6);
  }
  *a1 = *a2;
  return result;
}
