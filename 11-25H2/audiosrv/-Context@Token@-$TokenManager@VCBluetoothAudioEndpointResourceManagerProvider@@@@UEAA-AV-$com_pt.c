/*
 * XREFs of ?Context@Token@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@UEAA?AV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800ECEB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$try_query@UIUnknown@@@?$com_ptr_t@VBluetoothAudioResourceManagerTokenContext@CBluetoothAudioEndpointResourceManagerProvider@@Uerr_returncode_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@1@XZ @ 0x1800EC42C (--$try_query@UIUnknown@@@-$com_ptr_t@VBluetoothAudioResourceManagerTokenContext@CBluetoothAudioE.c)
 */

_QWORD *__fastcall TokenManager<CBluetoothAudioEndpointResourceManagerProvider>::Token::Context(__int64 a1, _QWORD *a2)
{
  wil::com_ptr_t<CBluetoothAudioEndpointResourceManagerProvider::BluetoothAudioResourceManagerTokenContext,wil::err_returncode_policy>::try_query<IUnknown>(
    (void (__fastcall ****)(_QWORD, GUID *, _QWORD *))(a1 + 40),
    a2);
  return a2;
}
