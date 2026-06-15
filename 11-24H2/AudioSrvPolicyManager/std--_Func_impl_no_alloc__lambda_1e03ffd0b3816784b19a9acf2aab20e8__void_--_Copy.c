/*
 * XREFs of std::_Func_impl_no_alloc__lambda_1e03ffd0b3816784b19a9acf2aab20e8__void_::_Copy @ 0x18002E9D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@UIAudioStreamInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioStreamInfo@@@Z @ 0x180018AC0 (--0-$com_ptr_t@UIAudioStreamInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioStreamInfo@@@.c)
 *     ??0?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18001E7AC (--0-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_1e03ffd0b3816784b19a9acf2aab20e8__void_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rdi

  v3 = a1 + 8;
  *a2 = off_180050978;
  wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(
    a2 + 1,
    (__int64 *)(a1 + 8));
  a2[2] = *(_QWORD *)(v3 + 8);
  wil::com_ptr_t<IAudioStreamInfo,wil::err_returncode_policy>::com_ptr_t<IAudioStreamInfo,wil::err_returncode_policy>(
    a2 + 3,
    *(_QWORD *)(v3 + 16));
  return a2;
}
