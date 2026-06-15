/*
 * XREFs of ??$construct@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@AEBV12@@?$_Default_allocator_traits@V?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@SAXAEAV?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@1@QEAV?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@AEBV34@@Z @ 0x1800C225C
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18000BCB8 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@-$vec.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180079700 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@-$vect.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::_Default_allocator_traits<std::allocator<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>>>::construct<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>,wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy> const &>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  return wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::com_ptr_t<IAudioProcess,wil::err_returncode_policy>(
           a2,
           a3);
}
