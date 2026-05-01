/*
 * XREFs of Microsoft::WRL::ComPtr_CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9_____::_ComPtr_CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9_____ @ 0x1801BD384
 * Callers:
 *     _CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged_::_1_::dtor$1 @ 0x1802BBDD1 (_CImmersiveApp--CImmersiveWindowCollection--SchedulePresentedWindowChanged_--_1_--dtor$1.c)
 *     _ObservableProperty_Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short_____::AddListener__lambda_f388ba99653cfb86d5d2a92c071f58bb____::_1_::dtor$1 @ 0x1805669E7 (_ObservableProperty_Windows--Internal--NativeString_Windows--Internal--CoTaskMemPol_ea_1805669E7.c)
 *     _ObservableProperty_Microsoft::WRL::ComPtr_IWICBitmap___::AddListener__lambda_2c2119f3dd10f8dbad56a05ca320bbc2____::_1_::dtor$1 @ 0x18057221A (_ObservableProperty_Microsoft--WRL--ComPtr_IWICBitmap___--AddListener__lambda_2c211_ea_18057221A.c)
 *     _ObservableProperty_Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short_____::AddListener__lambda_775801dc926fad4e7766c846adb2ec1f____::_1_::dtor$1 @ 0x18057234E (_ObservableProperty_Windows--Internal--NativeString_Windows--Internal--CoTaskMemPol_ea_18057234E.c)
 *     _ObservableProperty_bool_::AddListener__lambda_2481c7aedd1faa0c0b80517e0ae6abbe____::_1_::dtor$1 @ 0x180580E32 (_ObservableProperty_bool_--AddListener__lambda_2481c7aedd1faa0c0b80517e0ae6abbe____--_1_--dtor$1.c)
 *     _ObservableProperty_HWND_____::AddListener__lambda_3d6638088535fad8bc54773006e1fbb5____::_1_::dtor$1 @ 0x180586336 (_ObservableProperty_HWND_____--AddListener__lambda_3d6638088535fad8bc54773006e1fbb5_ea_180586336.c)
 *     _ItemAnimationCoordinatorBase::BeginAnimation_::_1_::dtor$8 @ 0x180594395 (_ItemAnimationCoordinatorBase--BeginAnimation_--_1_--dtor$8.c)
 *     _CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::s_TimerWndProc_::_1_::dtor$0 @ 0x1805D6273 (_CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___--s_TimerWndProc_--_1_-.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Microsoft::WRL::ComPtr_CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9_____::_ComPtr_CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9_____(
        _QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
