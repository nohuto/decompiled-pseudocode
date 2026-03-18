/*
 * XREFs of ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C0013F68
 * Callers:
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00310B0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0109880 (xxxRealDefWindowProc.c)
 *     EditionChangeForegroundQueueForMouseInput @ 0x1C01AB5C0 (EditionChangeForegroundQueueForMouseInput.c)
 *     _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x1C01ADB4C (_anonymous_namespace_--xxxSetForegroundCheckNoActivate.c)
 *     NtUserNavigateFocus @ 0x1C01D72E0 (NtUserNavigateFocus.c)
 * Callees:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00AC0AC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 */

bool __fastcall xxxForceForegroundWindowNoRestoreFocus(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  __int64 v5; // rbx

  v3 = a2;
  v5 = 0LL;
  if ( !(unsigned __int8)IsInputThread(a1, a2, a3) && gptiRit != gptiCurrent )
    v5 = gptiCurrent;
  return (unsigned int)xxxSetForegroundWindow2(a1, v5, v3 | 0x40u) != 0;
}
