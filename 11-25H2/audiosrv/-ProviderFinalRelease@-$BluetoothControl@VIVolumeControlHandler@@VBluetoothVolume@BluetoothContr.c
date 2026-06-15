/*
 * XREFs of ?ProviderFinalRelease@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@UEAAXXZ @ 0x1800D1030
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?close_and_wait@operation_guard@wil@@QEAAXXZ @ 0x1800D2518 (-close_and_wait@operation_guard@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::ProviderFinalRelease(
        __int64 a1)
{
  __int64 v2; // rcx

  if ( *(_BYTE *)(a1 + 148) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 136) + 32LL))(
      *(_QWORD *)(a1 + 136),
      *(unsigned int *)(a1 + 144));
  wil::operation_guard::close_and_wait(*(wil::operation_guard **)(a1 + 152));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 120) + 32LL))(*(_QWORD *)(a1 + 120));
  if ( *(_BYTE *)(a1 + 112) )
  {
    v2 = *(_QWORD *)(a1 + 104);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  }
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)(a1 + 104));
  return wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)(a1 + 128));
}
