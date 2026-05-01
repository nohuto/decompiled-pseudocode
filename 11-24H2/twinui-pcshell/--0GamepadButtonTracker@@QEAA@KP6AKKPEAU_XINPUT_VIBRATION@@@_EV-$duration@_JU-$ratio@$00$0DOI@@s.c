/*
 * XREFs of ??0GamepadButtonTracker@@QEAA@KP6AKKPEAU_XINPUT_VIBRATION@@@_EV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@22V?$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@4@@Z @ 0x18036A2C0
 * Callers:
 *     ??$?0AEAKAEAP6AKKPEAU_XINPUT_VIBRATION@@@_EAEAV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@AEAV123@AEAV123@AEAV?$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@3@@?$_Ref_count_obj2@UGamepadButtonTracker@@@std@@QEAA@AEAKAEAP6AKKPEAU_XINPUT_VIBRATION@@@_EAEAV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@1@33AEAV?$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@1@@Z @ 0x180369FF0 (--$-0AEAKAEAP6AKKPEAU_XINPUT_VIBRATION@@@_EAEAV-$duration@_JU-$ratio@$00$0DOI@@std@@@chrono@std@.c)
 * Callees:
 *     ??0?$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@std@@QEAA@AEBV01@@Z @ 0x18036A180 (--0-$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GamepadButtonTracker::GamepadButtonTracker(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v10; // rdx
  __int64 v11; // rcx

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = a4;
  *(_QWORD *)(a1 + 40) = a5;
  *(_QWORD *)(a1 + 48) = a6;
  std::function<void (APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind)>::function<void (APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind)>(
    a1 + 56,
    a7);
  *(_BYTE *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_OWORD *)(a1 + 144) = 0LL;
  *(_OWORD *)(a1 + 160) = 0LL;
  *(_DWORD *)(a1 + 176) = a2;
  *(_QWORD *)(a1 + 184) = a3;
  v11 = *(_QWORD *)(a7 + 56);
  if ( v11 )
  {
    LOBYTE(v10) = v11 != a7;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 32LL))(v11, v10);
    *(_QWORD *)(a7 + 56) = 0LL;
  }
  return a1;
}
