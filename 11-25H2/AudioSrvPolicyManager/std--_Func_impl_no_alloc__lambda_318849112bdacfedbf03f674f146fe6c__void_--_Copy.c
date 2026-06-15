/*
 * XREFs of std::_Func_impl_no_alloc__lambda_318849112bdacfedbf03f674f146fe6c__void_::_Copy @ 0x18003D260
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18001895C (--0-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??0?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18001E94C (--0-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

__int64 *__fastcall std::_Func_impl_no_alloc__lambda_318849112bdacfedbf03f674f146fe6c__void_::_Copy(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // rdi

  v3 = a1 + 8;
  *a2 = (__int64)off_1800540A8;
  wil::com_ptr_t<CProcess,wil::err_returncode_policy>::com_ptr_t<CProcess,wil::err_returncode_policy>(
    a2 + 1,
    (__int64 *)(a1 + 8));
  wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(
    a2 + 2,
    (__int64 *)(v3 + 8));
  wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(
    a2 + 3,
    (__int64 *)(v3 + 16));
  return a2;
}
