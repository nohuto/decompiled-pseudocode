/*
 * XREFs of BluetoothControls::_dynamic_initializer_for__s_bluetoothCaptureEndpoints__ @ 0x180008990
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18002A5BC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

int BluetoothControls::_dynamic_initializer_for__s_bluetoothCaptureEndpoints__()
{
  __int64 v0; // rax

  v0 = std::_Allocate<16,std::_Default_allocate_traits,0>(72LL);
  *(_QWORD *)v0 = v0;
  *(_QWORD *)(v0 + 8) = v0;
  *(_QWORD *)(v0 + 16) = v0;
  *(_WORD *)(v0 + 24) = 257;
  qword_1801DB6A0 = v0;
  return atexit((void (__cdecl *)())BluetoothControls::_dynamic_atexit_destructor_for__s_bluetoothCaptureEndpoints__);
}
