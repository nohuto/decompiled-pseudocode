/*
 * XREFs of DrvChangeDisplaySettingsPreValidate @ 0x140138FFC
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400E5504 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     DrvChangeDisplaySettings @ 0x140137250 (DrvChangeDisplaySettings.c)
 * Callees:
 *     DrvGetDeviceFromName @ 0x140017410 (DrvGetDeviceFromName.c)
 *     UserIsWddmConnectedSession @ 0x14004E070 (UserIsWddmConnectedSession.c)
 *     ?DrvIsTemporarySettingChangeDisabled@@YAHXZ @ 0x1401391C4 (-DrvIsTemporarySettingChangeDisabled@@YAHXZ.c)
 *     ?DrvIsPermanentSettingChangesDisabled@@YAHXZ @ 0x140148BCC (-DrvIsPermanentSettingChangesDisabled@@YAHXZ.c)
 */

__int64 __fastcall DrvChangeDisplaySettingsPreValidate(
        PCUNICODE_STRING String1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 *a6,
        int *a7)
{
  int v7; // edi
  __int64 DeviceFromName; // rbx
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 i; // rdx

  v7 = 0;
  DeviceFromName = a3;
  if ( a4 == 1 )
  {
    if ( a5 && a3 && (unsigned int)DrvIsPermanentSettingChangesDisabled() )
    {
      WdLogSingleEntry0(5LL);
      result = 4294967293LL;
      WdLogGlobalForLineNumber = 27036;
      return result;
    }
    if ( (unsigned int)DrvIsTemporarySettingChangeDisabled() )
    {
      WdLogSingleEntry0(5LL);
      result = 0xFFFFFFFFLL;
      WdLogGlobalForLineNumber = 27041;
      return result;
    }
  }
  if ( String1 )
  {
    DeviceFromName = DrvGetDeviceFromName(String1, a2);
    if ( !DeviceFromName )
    {
      WdLogSingleEntry1(5LL, 0LL);
      WdLogGlobalForLineNumber = 27056;
      return 4294967291LL;
    }
  }
  else if ( DeviceFromName )
  {
    if ( !a2 || (DeviceFromName = *(_QWORD *)(a2 + 2568)) == 0 )
    {
      WdLogSingleEntry1(5LL, 1LL);
      WdLogGlobalForLineNumber = 27073;
      return 4294967291LL;
    }
  }
  if ( (unsigned int)UserIsWddmConnectedSession((__int64)String1) )
  {
    if ( DeviceFromName )
    {
      v7 = (*(_DWORD *)(DeviceFromName + 160) >> 23) & 1;
    }
    else
    {
      for ( i = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v13) + 88) + 1096LL); i; i = *(_QWORD *)(i + 128) )
      {
        if ( (*(_DWORD *)(i + 160) & 0x800000) != 0 )
        {
          v7 = 1;
          break;
        }
      }
    }
  }
  if ( a4
    && DeviceFromName
    && !*(_QWORD *)(DeviceFromName + 136)
    && (*(_DWORD *)(DeviceFromName + 160) & 0x6000008) == 0 )
  {
    WdLogSingleEntry1(5LL, 2LL);
    WdLogGlobalForLineNumber = 27155;
    return 4294967291LL;
  }
  *a6 = DeviceFromName;
  *a7 = v7;
  return 0LL;
}
