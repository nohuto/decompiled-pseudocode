/*
 * XREFs of ??$try_query@UIUnknown@@@?$com_ptr_t@VBluetoothAudioResourceManagerTokenContext@CBluetoothAudioEndpointResourceManagerProvider@@Uerr_returncode_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@1@XZ @ 0x1800F13E8
 * Callers:
 *     ?Context@Token@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@UEAA?AV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800F1F10 (-Context@Token@-$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@UEAA-AV-$com_pt.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::com_ptr_t<CBluetoothAudioEndpointResourceManagerProvider::BluetoothAudioResourceManagerTokenContext,wil::err_returncode_policy>::try_query<IUnknown>(
        void (__fastcall ****a1)(_QWORD, GUID *, _QWORD *),
        _QWORD *a2)
{
  void (__fastcall ***v3)(_QWORD, GUID *, _QWORD *); // rcx

  v3 = *a1;
  *a2 = 0LL;
  (**v3)(v3, &GUID_00000000_0000_0000_c000_000000000046, a2);
  return a2;
}
