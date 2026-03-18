/*
 * XREFs of ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14000E500
 * Callers:
 *     GreCreateCompatibleDC @ 0x14000E310 (GreCreateCompatibleDC.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140035AC0 (--0DCOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     PushThreadGuardedObject @ 0x140068920 (PushThreadGuardedObject.c)
 */

OPTAPIDCOBJ *__fastcall OPTAPIDCOBJ::OPTAPIDCOBJ(OPTAPIDCOBJ *this, HDC a2)
{
  __int64 SessionState; // rax
  OPTAPIDCOBJ *result; // rax

  SessionState = W32GetSessionState();
  DCOBJ::DCOBJ(this, *(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88));
  *(_OWORD *)((char *)this + 72) = 0LL;
  *(_OWORD *)((char *)this + 88) = 0LL;
  PushThreadGuardedObject(
    (char *)this + 72,
    (unsigned __int64)this & ((unsigned __int128)-(__int128)((unsigned __int64)this + 72) >> 64),
    UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>::OnUnexpectedThreadTerminationStatic);
  *((_QWORD *)this + 13) = a2;
  result = this;
  *((_WORD *)this + 56) = 1;
  return result;
}
