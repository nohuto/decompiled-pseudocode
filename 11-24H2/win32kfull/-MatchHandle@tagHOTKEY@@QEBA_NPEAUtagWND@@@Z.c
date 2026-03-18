/*
 * XREFs of ?MatchHandle@tagHOTKEY@@QEBA_NPEAUtagWND@@@Z @ 0x140159358
 * Callers:
 *     ?FindHotKey@@YAPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HIIPEAPEAU1@@Z @ 0x140158D28 (-FindHotKey@@YAPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HIIPEAPEAU1@@Z.c)
 *     ?_UnregisterHotKey@@YA_NPEAUtagWND@@H@Z @ 0x140158E6C (-_UnregisterHotKey@@YA_NPEAUtagWND@@H@Z.c)
 *     ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x14015902C (-HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 *     DestroyWindowsHotKeys @ 0x140159234 (DestroyWindowsHotKeys.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagHOTKEY::MatchHandle(tagHOTKEY *this, struct tagWND *a2)
{
  __int64 v2; // rax

  v2 = 0LL;
  if ( a2 )
    v2 = *(_QWORD *)a2;
  return *((_QWORD *)this + 2) == v2;
}
