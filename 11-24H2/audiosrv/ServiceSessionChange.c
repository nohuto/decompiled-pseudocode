/*
 * XREFs of ServiceSessionChange @ 0x180066420
 * Callers:
 *     ?ServiceCtrl@@YAKKKPEAX0@Z @ 0x1800663A0 (-ServiceCtrl@@YAKKKPEAX0@Z.c)
 * Callees:
 *     ?PostSessionEvent@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x180066470 (-PostSessionEvent@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 */

__int64 __fastcall ServiceSessionChange(unsigned int a1, struct tagWTSSESSION_NOTIFICATION *a2)
{
  if ( (unsigned int)IsTSServiceSessionChangeSupported() )
  {
    TS_SessionChanged(a1, a2);
    PostSessionEvent(a1, a2);
  }
  return 0LL;
}
