/*
 * XREFs of _wil::MakeOrThrow_UwpWindowWrapper_UwpWindowEventDispatcher___Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext___HSTRING_____enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_&_Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId_&_Windows::Internal::ApplicationModel::WindowManagement::IWindow___Windows::Internal::ApplicationModel::WindowManagement::WindowId_&_unsigned_short_const_(&)[53]_enum_WindowCreatedType_&_int__::_1_::dtor$1 @ 0x1806D8A5F
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VUwpWindowWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x180228020 (--1-$ComPtr@VUwpWindowWrapper@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeOrThrow_UwpWindowWrapper_UwpWindowEventDispatcher___Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext___HSTRING_____enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind___Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId___Windows::Internal::ApplicationModel::WindowManagement::IWindow___Windows::Internal::ApplicationModel::WindowManagement::WindowId___unsigned_short_const_____53__enum_WindowCreatedType___int__::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 96) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 96) &= ~2u;
    return Microsoft::WRL::ComPtr<UwpWindowWrapper>::~ComPtr<UwpWindowWrapper>(*(__int64 **)(a2 + 176));
  }
  return result;
}
