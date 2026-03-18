/*
 * XREFs of HUBFDO_PowerSettingCallback @ 0x14000EBE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     Feature_RH1S__private_IsEnabledDeviceUsageNoInline @ 0x14000C860 (Feature_RH1S__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_RH5S__private_IsEnabledDeviceUsageNoInline @ 0x14000C8B4 (Feature_RH5S__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_SF_LL @ 0x14000FB70 (WPP_RECORDER_SF_LL.c)
 *     SleepstudyHelper_ComponentActive @ 0x140044F44 (SleepstudyHelper_ComponentActive.c)
 *     SleepstudyHelper_ComponentInactive @ 0x140044FCC (SleepstudyHelper_ComponentInactive.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBFDO_PowerSettingCallback(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, PVOID Context)
{
  int v4; // ebx
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int v12; // edx
  int v13; // r8d
  int v14; // r9d
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  __int64 v19; // [rsp+28h] [rbp-70h]
  __int64 v20; // [rsp+28h] [rbp-70h]
  _DWORD v21[7]; // [rsp+40h] [rbp-58h] BYREF
  int v22; // [rsp+5Ch] [rbp-3Ch]
  int v23; // [rsp+60h] [rbp-38h]

  v4 = 0;
  if ( (*((_DWORD *)Context + 10) & 0x4000000) == 0 )
    return (unsigned int)-1073741811;
  if ( RtlCompareMemory(SettingGuid, &GUID_USB_SETTING_SELECTIVE_SUSPEND, 0x10uLL) == 16 )
  {
    if ( ValueLength >= 4 && *Value <= 1u )
    {
      v10 = *((_DWORD *)Context + 10) & 0x8000000;
      if ( *Value == 1 )
      {
        if ( v10 )
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
            WdfDriverGlobals,
            *((_QWORD *)Context + 2),
            0LL,
            6229LL,
            "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
          _InterlockedAnd((volatile signed __int32 *)Context + 10, 0xF7FFFFFF);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v11) = 4;
            WPP_RECORDER_SF_(
              *((_QWORD *)Context + 316),
              v11,
              3,
              89,
              (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids);
          }
          if ( *((_QWORD *)Context + 330) )
            SleepstudyHelper_ComponentInactive();
        }
      }
      else if ( !v10 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = 4;
          WPP_RECORDER_SF_(
            *((_QWORD *)Context + 316),
            v9,
            3,
            90,
            (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids);
        }
        v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, _QWORD, int, const char *))(WdfFunctions_01015 + 3504))(
               WdfDriverGlobals,
               *((_QWORD *)Context + 2),
               0LL,
               0LL,
               6246,
               "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
        if ( v4 < 0 )
        {
          v4 = 0;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v20) = 0;
            WPP_RECORDER_SF_d(
              *((_QWORD *)Context + 316),
              3u,
              3u,
              0x5Bu,
              (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids,
              v20);
          }
        }
        else
        {
          _InterlockedOr((volatile signed __int32 *)Context + 10, 0x8000000u);
          if ( *((_QWORD *)Context + 330) )
            SleepstudyHelper_ComponentActive();
        }
      }
      return (unsigned int)v4;
    }
    return (unsigned int)-1073741811;
  }
  if ( RtlCompareMemory(SettingGuid, &GUID_POWER_HUB_SELECTIVE_SUSPEND_TIMEOUT, 0x10uLL) != 16 )
    return (unsigned int)-1073741811;
  if ( *Value != *((_DWORD *)Context + 646) )
  {
    if ( ((unsigned int)Feature_RH1S__private_IsEnabledDeviceUsageNoInline()
       || (unsigned int)Feature_RH5S__private_IsEnabledDeviceUsageNoInline())
      && *Value < *((_DWORD *)Context + 647) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_LL(*((_QWORD *)Context + 316), v12, v13, v14);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *((_QWORD *)Context + 316),
          4u,
          3u,
          0x5Du,
          (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids,
          *Value);
      v22 = 0;
      v15 = *Value;
      v21[0] = 36;
      v21[6] = 2;
      v23 = 2;
      v21[1] = 2;
      v21[3] = v15;
      v21[4] = 2;
      v21[5] = 2;
      v21[2] = 3;
      if ( !*((_BYTE *)Context + 240) || (*((_DWORD *)Context + 11) & 0x20) != 0 )
        v22 = 2;
      v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, PVOID))(WdfFunctions_01015 + 1632))(
              WdfDriverGlobals,
              Context);
      v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 368))(
              WdfDriverGlobals,
              v16,
              v21);
      v4 = v17;
      if ( v17 >= 0 )
      {
        *((_DWORD *)Context + 646) = *Value;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v19) = v17;
          WPP_RECORDER_SF_d(
            *((_QWORD *)Context + 316),
            3u,
            3u,
            0x5Eu,
            (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids,
            v19);
        }
        return 0;
      }
    }
  }
  return (unsigned int)v4;
}
