/*
 * XREFs of DestroyThreadsHotKeys @ 0x1402896E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x14015902C (-HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall DestroyThreadsHotKeys(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v2; // rax
  struct tagTHREADINFO *v3; // rbx

  v2 = PtiCurrent(a1, a2);
  v3 = v2;
  if ( *((_DWORD *)v2 + 239) )
  {
    HKRemoveMatchingHotkeys((__int64)v2, 0LL, 0, 0);
    if ( *((_DWORD *)v3 + 239) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 847);
  }
}
