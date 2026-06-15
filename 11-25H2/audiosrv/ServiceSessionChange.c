/*
 * XREFs of ServiceSessionChange @ 0x1800764A8
 * Callers:
 *     ?ServiceCtrl@@YAKKKPEAX0@Z @ 0x1800762F0 (-ServiceCtrl@@YAKKKPEAX0@Z.c)
 * Callees:
 *     ?PostSessionEvent@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x1800764F8 (-PostSessionEvent@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
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
