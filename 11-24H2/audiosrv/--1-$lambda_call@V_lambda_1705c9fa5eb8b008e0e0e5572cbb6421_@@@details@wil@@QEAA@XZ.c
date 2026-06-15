/*
 * XREFs of ??1?$lambda_call@V_lambda_1705c9fa5eb8b008e0e0e5572cbb6421_@@@details@wil@@QEAA@XZ @ 0x1800D25C4
 * Callers:
 *     _BluetoothControls::BluetoothControl_IVolumeControlHandler_BluetoothControls::BluetoothVolume_::RuntimeClassInitialize_::_1_::dtor$7 @ 0x18016E402 (_BluetoothControls--BluetoothControl_IVolumeControlHandler_BluetoothControls--Bluet_ea_18016E402.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call<_lambda_1705c9fa5eb8b008e0e0e5572cbb6421_>::~lambda_call<_lambda_1705c9fa5eb8b008e0e0e5572cbb6421_>(
        _BYTE *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    v2 = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
    return wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)(*(_QWORD *)a1 + 104LL));
  }
  return result;
}
