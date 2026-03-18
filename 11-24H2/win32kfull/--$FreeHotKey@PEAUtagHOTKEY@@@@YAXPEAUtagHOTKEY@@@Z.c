/*
 * XREFs of ??$FreeHotKey@PEAUtagHOTKEY@@@@YAXPEAUtagHOTKEY@@@Z @ 0x14028860C
 * Callers:
 *     ?_UnregisterHotKey@@YA_NPEAUtagWND@@H@Z @ 0x140158E6C (-_UnregisterHotKey@@YA_NPEAUtagWND@@H@Z.c)
 *     ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x14015902C (-HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 *     DestroyWindowsHotKeys @ 0x140159234 (DestroyWindowsHotKeys.c)
 *     ?HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z @ 0x140288694 (-HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z.c)
 *     ?_RegisterHotKey@@YA_NPEAUtagWND@@P6A?AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z @ 0x140288B94 (-_RegisterHotKey@@YA_NPEAUtagWND@@P6A-AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall FreeHotKey<tagHOTKEY *>(signed __int16 *a1)
{
  if ( *(_QWORD *)a1 )
  {
    if ( !*(_DWORD *)(*(_QWORD *)a1 + 956LL) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 168);
    --*(_DWORD *)(*(_QWORD *)a1 + 956LL);
  }
  else if ( !_bittest16(a1 + 17, 8u) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 175);
  }
  Win32FreePool(a1);
}
