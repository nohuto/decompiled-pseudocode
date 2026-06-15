/*
 * XREFs of ??0?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@QEAA@$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x1800B70CC
 * Callers:
 *     ??$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@KPEAPEAU?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@01@@Z @ 0x180085250 (--$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAM.c)
 *     ??$make_wnf_array_subscription_state@G@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXPEBG_K@Z@wistd@@KPEAPEAU?$wnf_array_subscription_state@G@01@@Z @ 0x180088680 (--$make_wnf_array_subscription_state@G@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV-$function@$$A.c)
 *     ??$make_wnf_subscription_state@W4_PO_STANDBY_AUDIO_POLICY@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBW4_PO_STANDBY_AUDIO_POLICY@@@Z@wistd@@KPEAPEAU?$wnf_subscription_state@W4_PO_STANDBY_AUDIO_POLICY@@@01@@Z @ 0x1800CBBA8 (--$make_wnf_subscription_state@W4_PO_STANDBY_AUDIO_POLICY@@@details@wil@@YAJAEBU_WNF_STATE_NAME@.c)
 *     ??$make_wnf_subscription_state@W4BluetoothLEAudioSupportedState@Internal@Audio@Bluetooth@Microsoft@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBW4BluetoothLEAudioSupportedState@Internal@Audio@Bluetooth@Microsoft@@@Z@wistd@@KPEAPEAU?$wnf_subscription_state@W4BluetoothLEAudioSupportedState@Internal@Audio@Bluetooth@Microsoft@@@01@@Z @ 0x1800DEBA4 (--$make_wnf_subscription_state@W4BluetoothLEAudioSupportedState@Internal@Audio@Bluetooth@Microso.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::details::wnf_subscription_state<wil::details::empty_wnf_state>::wnf_subscription_state<wil::details::empty_wnf_state>(
        _QWORD *a1,
        __int64 a2)
{
  a1[1] = 0LL;
  *a1 = &wil::details::wnf_subscription_state<enum Microsoft::Bluetooth::Audio::Internal::BluetoothLEAudioSupportedState>::`vftable';
  if ( *(_QWORD *)(a2 + 112) )
  {
    a1[16] = a1 + 3;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 112) + 16LL))(*(_QWORD *)(a2 + 112));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 112) + 24LL))(*(_QWORD *)(a2 + 112));
    *(_QWORD *)(a2 + 112) = 0LL;
  }
  else
  {
    a1[16] = 0LL;
  }
  return a1;
}
