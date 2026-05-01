/*
 * XREFs of ?_ShutdownChildServices@CMultitaskingViewServiceProvider@@AEAAXXZ @ 0x180142F34
 * Callers:
 *     ?UnsubscribeFromServices@CMultitaskingViewServiceProvider@@UEAAJPEAUIServiceProvider@@@Z @ 0x180142ED0 (-UnsubscribeFromServices@CMultitaskingViewServiceProvider@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CMultitaskingViewServiceProvider::_ShutdownChildServices(CMultitaskingViewServiceProvider *this)
{
  __int64 *v1; // rbx
  _QWORD *v3; // rbx

  v1 = (__int64 *)((char *)this + 184);
  IUnknown_SetSite(*((IUnknown **)this + 23), 0LL);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v1 + 24LL))(*v1, 0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v1);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 24) + 24LL))(*((_QWORD *)this + 24), 0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 24);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 29) + 24LL))(*((_QWORD *)this + 29), 0LL);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 29);
  v3 = (_QWORD *)((char *)this + 176);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 22) + 72LL))(*((_QWORD *)this + 22), 0LL);
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v3 + 24LL))(*v3, 0LL);
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v3 + 32LL))(*v3, 0LL);
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v3 + 40LL))(*v3, 0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 22);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 25);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 26) + 24LL))(*((_QWORD *)this + 26), 0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 26);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 27);
}
