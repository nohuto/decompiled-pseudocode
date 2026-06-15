/*
 * XREFs of ??$_Construct_in_place@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@AEBV12@@std@@YAXAEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@AEBV12@@Z @ 0x18009F2E0
 * Callers:
 *     ?InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18000B3A0 (-InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?InitializeAPOs@CBaseStreamGroupProxy@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180079C00 (-InitializeAPOs@CBaseStreamGroupProxy@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?GetOwningProcesses@CAudioSession@@QEAAJAEAV?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800A3F94 (-GetOwningProcesses@CAudioSession@@QEAAJAEAV-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncod.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 *__fastcall std::_Construct_in_place<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>,wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> const &>(
        __int64 *a1,
        __int64 *a2)
{
  return wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::com_ptr_t<IAudioProcess,wil::err_returncode_policy>(
           a1,
           a2);
}
