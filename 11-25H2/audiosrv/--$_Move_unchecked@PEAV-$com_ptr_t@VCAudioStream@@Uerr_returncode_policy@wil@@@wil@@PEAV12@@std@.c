/*
 * XREFs of ??$_Move_unchecked@PEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@PEAV12@@std@@YAPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@PEAV12@00@Z @ 0x180088630
 * Callers:
 *     ?DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z @ 0x1800C2E70 (-DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z.c)
 *     _std::vector_wil::com_ptr_t_CAudioStream_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CAudioStream_wil::err_returncode_policy_____::_Insert_counted_range_wil::com_ptr_t_CAudioStream_wil::err_returncode_policy_____::_1_::catch$2 @ 0x180160B4A (_std--vector_wil--com_ptr_t_CAudioStream_wil--err_returncode_policy__std--allocator_ea_180160B4A.c)
 * Callees:
 *     ??4?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001D92C (--4-$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV0.c)
 */

__int64 *__fastcall std::_Move_unchecked<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *,wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *i; // rdi

  for ( i = a1; i != a2; ++i )
    wil::com_ptr_t<IAudioStreamVolumeCallback,wil::err_returncode_policy>::operator=(a3++, i);
  return a3;
}
