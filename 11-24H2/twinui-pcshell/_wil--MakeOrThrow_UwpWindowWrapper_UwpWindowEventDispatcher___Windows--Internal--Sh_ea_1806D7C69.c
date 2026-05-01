/*
 * XREFs of _wil::MakeOrThrow_UwpWindowWrapper_UwpWindowEventDispatcher___Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext___HSTRING_____enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_const_&_Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId_&_Windows::Internal::ApplicationModel::WindowManagement::IWindow___Windows::Internal::ApplicationModel::WindowManagement::WindowId_&_unsigned_short_const___enum_WindowCreatedType_unsigned___int64_&__::_1_::dtor$1 @ 0x1806D7C69
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VUwpWindowWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x180228020 (--1-$ComPtr@VUwpWindowWrapper@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeOrThrow_UwpWindowWrapper_UwpWindowEventDispatcher___Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext___HSTRING_____enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_const___Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId___Windows::Internal::ApplicationModel::WindowManagement::IWindow___Windows::Internal::ApplicationModel::WindowManagement::WindowId___unsigned_short_const___enum_WindowCreatedType_unsigned___int64____::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 96) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 96) &= ~2u;
    return Microsoft::WRL::ComPtr<UwpWindowWrapper>::~ComPtr<UwpWindowWrapper>(*(__int64 **)(a2 + 192));
  }
  return result;
}
