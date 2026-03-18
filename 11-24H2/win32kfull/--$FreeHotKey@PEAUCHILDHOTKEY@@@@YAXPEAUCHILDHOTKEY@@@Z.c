/*
 * XREFs of ??$FreeHotKey@PEAUCHILDHOTKEY@@@@YAXPEAUCHILDHOTKEY@@@Z @ 0x140288584
 * Callers:
 *     ?_UnregisterHotKey@@YA_NPEAUtagWND@@H@Z @ 0x140158E6C (-_UnregisterHotKey@@YA_NPEAUtagWND@@H@Z.c)
 *     ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x14015902C (-HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 *     DestroyWindowsHotKeys @ 0x140159234 (DestroyWindowsHotKeys.c)
 *     ?HKRemoveMatchingChildHotkeys@@YA_NPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x140181E7C (-HKRemoveMatchingChildHotkeys@@YA_NPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryT.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall FreeHotKey<CHILDHOTKEY *>(signed __int16 *a1)
{
  if ( *(_QWORD *)a1 )
  {
    if ( !*(_DWORD *)(*(_QWORD *)a1 + 956LL) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 168);
    --*(_DWORD *)(*(_QWORD *)a1 + 956LL);
  }
  else if ( !_bittest16(a1 + 8, 8u) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 175);
  }
  Win32FreePool(a1);
}
