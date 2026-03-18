/*
 * XREFs of ??0CInputManager@@QEAA@XZ @ 0x140239F40
 * Callers:
 *     ?CreateSessionGlobal@CInputManager@@SAJXZ @ 0x1401486E0 (-CreateSessionGlobal@CInputManager@@SAJXZ.c)
 * Callees:
 *     <none>
 */

CInputManager *__fastcall CInputManager::CInputManager(CInputManager *this)
{
  *(_QWORD *)this = &CIgnoreInputQueue::`vftable';
  *((_QWORD *)this + 1) = &CDiscardInputQueue::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  return this;
}
