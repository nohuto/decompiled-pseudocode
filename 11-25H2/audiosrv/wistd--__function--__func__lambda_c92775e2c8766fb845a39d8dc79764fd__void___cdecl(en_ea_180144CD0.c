/*
 * XREFs of wistd::__function::__func__lambda_c92775e2c8766fb845a39d8dc79764fd__void___cdecl(enum_Windows::Internal::Shell::Holographic::ShellState_const_&)_::__clone @ 0x180144CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@VBluetoothAudioResourceManagerTokenContext@CBluetoothAudioEndpointResourceManagerProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800EC464 (--0-$com_ptr_t@VBluetoothAudioResourceManagerTokenContext@CBluetoothAudioEndpointResourceManager.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_c92775e2c8766fb845a39d8dc79764fd__void___cdecl_enum_Windows::Internal::Shell::Holographic::ShellState_const____::__clone(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rdi
  _QWORD *v3; // rbx
  __int64 result; // rax

  v2 = a1 + 8;
  v3 = a2 + 1;
  *a2 = &off_180175060;
  wil::com_ptr_t<CBluetoothAudioEndpointResourceManagerProvider::BluetoothAudioResourceManagerTokenContext,wil::err_returncode_policy>::com_ptr_t<CBluetoothAudioEndpointResourceManagerProvider::BluetoothAudioResourceManagerTokenContext,wil::err_returncode_policy>(
    a2 + 1,
    (__int64 *)(a1 + 8));
  result = *(_QWORD *)(v2 + 8);
  v3[1] = result;
  return result;
}
