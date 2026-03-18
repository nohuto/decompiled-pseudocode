/*
 * XREFs of HUBFDO_IdleResiliencyCallback @ 0x14000E320
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBFDO_IdleResiliencyCallback(LPCGUID SettingGuid, int *Value, ULONG ValueLength, _DWORD *Context)
{
  int v5; // eax

  if ( Context )
  {
    v5 = *Value;
    if ( Context[664] != *Value )
    {
      Context[664] = v5;
      if ( v5 == 1 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(Value) = 4;
          WPP_RECORDER_SF_(
            *((_QWORD *)Context + 316),
            (_DWORD)Value,
            3,
            114,
            (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids);
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, POWER_SETTING_CALLBACK *, __int64, const char *))(WdfFunctions_01015 + 3512))(
          WdfDriverGlobals,
          *((_QWORD *)Context + 2),
          HUBFDO_IdleResiliencyCallback,
          7291LL,
          "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
      }
      else if ( !v5 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(Value) = 4;
          WPP_RECORDER_SF_(
            *((_QWORD *)Context + 316),
            (_DWORD)Value,
            3,
            115,
            (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids);
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, POWER_SETTING_CALLBACK *, int, const char *))(WdfFunctions_01015 + 3504))(
          WdfDriverGlobals,
          *((_QWORD *)Context + 2),
          0LL,
          HUBFDO_IdleResiliencyCallback,
          7297,
          "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
      }
    }
  }
  return 0LL;
}
