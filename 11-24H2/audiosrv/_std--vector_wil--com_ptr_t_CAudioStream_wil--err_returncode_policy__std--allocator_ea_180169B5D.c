/*
 * XREFs of _std::vector_wil::com_ptr_t_CAudioStream_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CAudioStream_wil::err_returncode_policy_____::_Insert_counted_range_wil::com_ptr_t_CAudioStream_wil::err_returncode_policy_____::_1_::catch$4 @ 0x180169B5D
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180019110 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18005FDB8 (--$_Uninitialized_move@PEAV-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V-$allo.c)
 *     _CxxThrowException_0 @ 0x180167F30 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_CAudioStream_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CAudioStream_wil::err_returncode_policy_____::_Insert_counted_range_wil::com_ptr_t_CAudioStream_wil::err_returncode_policy_____::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  __int64 *v3; // rbx

  v3 = *(__int64 **)(a2 + 32);
  std::_Uninitialized_move<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>>(
    *(_QWORD *)(a2 + 136),
    *v3,
    *(__int64 **)(a2 + 120),
    *(_QWORD *)(a2 + 112));
  std::_Destroy_range<std::allocator<wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>(
    *(__int64 **)(a2 + 136),
    (__int64 *)*v3);
  *v3 = *(_QWORD *)(a2 + 40);
  throw;
}
