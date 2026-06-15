/*
 * XREFs of _std::vector_wil::com_ptr_t_CAudioStream_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CAudioStream_wil::err_returncode_policy_____::_Insert_counted_range_wil::com_ptr_t_CAudioStream_wil::err_returncode_policy_____::_1_::catch$2 @ 0x180160B4A
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800263DC (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18006E098 (--$_Uninitialized_move@PEAV-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V-$allo.c)
 *     ??$_Move_unchecked@PEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@PEAV12@@std@@YAPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@PEAV12@00@Z @ 0x180088630 (--$_Move_unchecked@PEAV-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@PEAV12@@std@.c)
 *     _CxxThrowException_0 @ 0x18015E870 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_CAudioStream_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CAudioStream_wil::err_returncode_policy_____::_Insert_counted_range_wil::com_ptr_t_CAudioStream_wil::err_returncode_policy_____::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 **v5; // rdi
  __int64 *v6; // rbx

  v3 = *(_QWORD *)(a2 + 136);
  v4 = *(_QWORD *)(a2 + 120);
  std::_Uninitialized_move<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>>(
    v4 + 8 * v3,
    v4 + 16 * v3,
    *(__int64 **)(a2 + 120),
    *(_QWORD *)(a2 + 112));
  v5 = *(__int64 ***)(a2 + 32);
  std::_Move_unchecked<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *,wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *>(
    (__int64 *)(v4 + 16 * v3),
    *v5,
    (__int64 *)(v4 + 8 * v3));
  v6 = *(__int64 **)(a2 + 40);
  std::_Destroy_range<std::allocator<wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>(v6, *v5);
  *v5 = v6;
  throw;
}
