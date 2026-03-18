/*
 * XREFs of HUBFDO_LowPowerEpochCallback @ 0x14000E9B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     SleepstudyHelper_ComponentActive @ 0x140044F44 (SleepstudyHelper_ComponentActive.c)
 *     SleepstudyHelper_ComponentInactive @ 0x140044FCC (SleepstudyHelper_ComponentInactive.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue @ 0x140088CEC (HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue.c)
 */

__int64 __fastcall HUBFDO_LowPowerEpochCallback(LPCGUID SettingGuid, int *Value, __int64 ValueLength, char *Context)
{
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int v9; // [rsp+58h] [rbp+10h] BYREF

  if ( Context )
  {
    v5 = *Value;
    if ( *((_DWORD *)Context + 696) != *Value )
    {
      *((_DWORD *)Context + 696) = v5;
      if ( v5 == 1 )
      {
        if ( (*((_DWORD *)Context + 10) & 0x8000000) != 0
          && ((*((_DWORD *)Context + 11) & 0x100) != 0 || *((char **)Context + 299) == Context + 2392) )
        {
          v9 = 0;
          v6 = HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue(&v9, Value, ValueLength);
          if ( v6 >= 0 )
          {
            if ( v9 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v7) = 4;
                WPP_RECORDER_SF_(
                  *((_QWORD *)Context + 316),
                  v7,
                  3,
                  118,
                  (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids);
              }
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, POWER_SETTING_CALLBACK *, __int64, const char *))(WdfFunctions_01015 + 3512))(
                WdfDriverGlobals,
                *((_QWORD *)Context + 2),
                HUBFDO_LowPowerEpochCallback,
                7369LL,
                "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
              if ( *((_QWORD *)Context + 330) )
                SleepstudyHelper_ComponentInactive();
              Context[2788] = 1;
            }
            else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v7) = 3;
              WPP_RECORDER_SF_(
                *((_QWORD *)Context + 316),
                v7,
                3,
                117,
                (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids);
            }
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_d(
              *((_QWORD *)Context + 316),
              3u,
              3u,
              0x74u,
              (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids,
              v6);
          }
        }
      }
      else if ( !v5 && Context[2788] == 1 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(Value) = 4;
          WPP_RECORDER_SF_(
            *((_QWORD *)Context + 316),
            (_DWORD)Value,
            3,
            119,
            (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids);
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, POWER_SETTING_CALLBACK *, int, const char *))(WdfFunctions_01015 + 3504))(
          WdfDriverGlobals,
          *((_QWORD *)Context + 2),
          0LL,
          HUBFDO_LowPowerEpochCallback,
          7386,
          "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
        if ( *((_QWORD *)Context + 330) )
          SleepstudyHelper_ComponentActive();
        Context[2788] = 0;
      }
    }
  }
  return 0LL;
}
