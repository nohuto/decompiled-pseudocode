/*
 * XREFs of wistd::__function::__func__lambda_9fc267f27b766c721346ddc97f848132__void___cdecl(unsigned_char_const___unsigned___int64)_::__clone @ 0x180144C80
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@VBluetoothAudioResourceManagerTokenContext@CBluetoothAudioEndpointResourceManagerProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800EC464 (--0-$com_ptr_t@VBluetoothAudioResourceManagerTokenContext@CBluetoothAudioEndpointResourceManager.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_9fc267f27b766c721346ddc97f848132__void___cdecl_unsigned_char_const___unsigned___int64__::__clone(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rdi
  _QWORD *v3; // rbx
  __int64 result; // rax

  v2 = a1 + 8;
  v3 = a2 + 1;
  *a2 = &off_180175038;
  wil::com_ptr_t<CBluetoothAudioEndpointResourceManagerProvider::BluetoothAudioResourceManagerTokenContext,wil::err_returncode_policy>::com_ptr_t<CBluetoothAudioEndpointResourceManagerProvider::BluetoothAudioResourceManagerTokenContext,wil::err_returncode_policy>(
    a2 + 1,
    (__int64 *)(a1 + 8));
  v3[1] = *(_QWORD *)(v2 + 8);
  result = *(unsigned int *)(v2 + 16);
  *((_DWORD *)v3 + 4) = result;
  return result;
}
