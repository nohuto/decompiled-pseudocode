/*
 * XREFs of ??0?$com_ptr_t@VBluetoothAudioResourceManagerTokenContext@CBluetoothAudioEndpointResourceManagerProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800EC464
 * Callers:
 *     ??$AcquireToken@PEAUIBtAudioResourceManager@@@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@AEAAJAEBQEAUIBtAudioResourceManager@@_NPEAPEAUIUnknown@@PEA_N@Z @ 0x1800EB4CC (--$AcquireToken@PEAUIBtAudioResourceManager@@@-$TokenManager@VCBluetoothAudioEndpointResourceMan.c)
 *     ??$ForEachActiveToken_no_lock@AEAV_lambda_16d7fa4f7751c846da917dbc52748634_@@@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@AEAAXAEAV_lambda_16d7fa4f7751c846da917dbc52748634_@@@Z @ 0x1800EBADC (--$ForEachActiveToken_no_lock@AEAV_lambda_16d7fa4f7751c846da917dbc52748634_@@@-$TokenManager@VCB.c)
 *     ??$ForEachActiveToken_no_lock@AEAV_lambda_3720d3886a248492bbf7204fca5313c6_@@@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@AEAAXAEAV_lambda_3720d3886a248492bbf7204fca5313c6_@@@Z @ 0x1800EBB78 (--$ForEachActiveToken_no_lock@AEAV_lambda_3720d3886a248492bbf7204fca5313c6_@@@-$TokenManager@VCB.c)
 *     ??$ForEachActiveToken_no_lock@AEAV_lambda_7e14a330c860f44adc21b4f588a4bc9b_@@@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@AEAAXAEAV_lambda_7e14a330c860f44adc21b4f588a4bc9b_@@@Z @ 0x1800EBC30 (--$ForEachActiveToken_no_lock@AEAV_lambda_7e14a330c860f44adc21b4f588a4bc9b_@@@-$TokenManager@VCB.c)
 *     ??$construct@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@AEBV12@@?$_Default_allocator_traits@V?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@SAXAEAV?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@1@QEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@AEBV34@@Z @ 0x1800EC418 (--$construct@V-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@AEBV12@@-$_Default_.c)
 *     ?RuntimeClassInitialize@CExclusiveModeListener@@QEAAJPEBU_tlgProvider_t@@_N@Z @ 0x1801442E0 (-RuntimeClassInitialize@CExclusiveModeListener@@QEAAJPEBU_tlgProvider_t@@_N@Z.c)
 *     wistd::__function::__func__lambda_9fc267f27b766c721346ddc97f848132__void___cdecl(unsigned_char_const___unsigned___int64)_::__clone @ 0x180144C80 (wistd--__function--__func__lambda_9fc267f27b766c721346ddc97f848132__void___cdecl(un_ea_180144C80.c)
 *     wistd::__function::__func__lambda_c92775e2c8766fb845a39d8dc79764fd__void___cdecl(enum_Windows::Internal::Shell::Holographic::ShellState_const_&)_::__clone @ 0x180144CD0 (wistd--__function--__func__lambda_c92775e2c8766fb845a39d8dc79764fd__void___cdecl(en_ea_180144CD0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::com_ptr_t<CBluetoothAudioEndpointResourceManagerProvider::BluetoothAudioResourceManagerTokenContext,wil::err_returncode_policy>::com_ptr_t<CBluetoothAudioEndpointResourceManagerProvider::BluetoothAudioResourceManagerTokenContext,wil::err_returncode_policy>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // rcx

  v3 = *a2;
  *a1 = *a2;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a1;
}
