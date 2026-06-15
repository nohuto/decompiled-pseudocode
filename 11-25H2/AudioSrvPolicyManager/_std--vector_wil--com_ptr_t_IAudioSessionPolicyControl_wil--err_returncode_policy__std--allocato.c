/*
 * XREFs of _std::vector_wil::com_ptr_t_IAudioSessionPolicyControl_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IAudioSessionPolicyControl_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_IAudioSessionPolicyControl_wil::err_returncode_policy__const_&__::_1_::catch$0 @ 0x18004D348
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800327C4 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil.c)
 *     ?deallocate@?$allocator@V?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@@std@@QEAAXQEAV?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@_K@Z @ 0x1800382A4 (-deallocate@-$allocator@V-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@w.c)
 *     _CxxThrowException_0 @ 0x18004B3B4 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_IAudioSessionPolicyControl_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IAudioSessionPolicyControl_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_IAudioSessionPolicyControl_wil::err_returncode_policy__const____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::_Destroy_range<std::allocator<wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>>>(
    *(__int64 **)(a2 + 112),
    *(__int64 **)(a2 + 136));
  std::allocator<wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>>::deallocate(
    v3,
    *(void **)(a2 + 32),
    *(_QWORD *)(a2 + 120));
  throw;
}
