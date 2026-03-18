/*
 * XREFs of ?HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z @ 0x140288694
 * Callers:
 *     ?_UnregisterHotKey@@YA_NPEAUtagWND@@H@Z @ 0x140158E6C (-_UnregisterHotKey@@YA_NPEAUtagWND@@H@Z.c)
 *     ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x14015902C (-HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 *     DestroyWindowsHotKeys @ 0x140159234 (DestroyWindowsHotKeys.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$FreeHotKey@PEAUtagHOTKEY@@@@YAXPEAUtagHOTKEY@@@Z @ 0x14028860C (--$FreeHotKey@PEAUtagHOTKEY@@@@YAXPEAUtagHOTKEY@@@Z.c)
 *     ?RemoveSasKey@@YA_NII@Z @ 0x140288774 (-RemoveSasKey@@YA_NII@Z.c)
 */

char __fastcall HKRemoveHotkeyOrMakePlaceholder(struct tagHOTKEY **a1)
{
  _WORD *v1; // rbx
  __int16 v3; // ax
  _QWORD *v4; // rdi
  __int64 v5; // rax

  v1 = *a1;
  v3 = *((_WORD *)*a1 + 17);
  if ( (v3 & 0x100) != 0 )
    return 0;
  v4 = v1 + 28;
  *((_QWORD *)v1 + 2) = 0LL;
  if ( v3 < 0 )
  {
    if ( (_QWORD *)*v4 != v4 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 463);
    RemoveSasKey(*((_DWORD *)v1 + 9), (unsigned __int16)v1[16]);
  }
  if ( (_QWORD *)*v4 != v4 )
  {
    if ( !_bittest16(v1 + 17, 9u) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 469);
    v5 = *(_QWORD *)v1;
    v1[17] |= 0x100u;
    --*(_DWORD *)(v5 + 956);
    *(_QWORD *)v1 = 0LL;
    *((_DWORD *)v1 + 10) = 0;
    return 0;
  }
  *a1 = (struct tagHOTKEY *)*((_QWORD *)v1 + 6);
  FreeHotKey<tagHOTKEY *>(v1);
  return 1;
}
