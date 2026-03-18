/*
 * XREFs of ??0HANDLELOCK@@QEAA@XZ @ 0x1400CAF14
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x14000D300 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     bDeleteBrush @ 0x140014820 (bDeleteBrush.c)
 * Callees:
 *     <none>
 */

HANDLELOCK *__fastcall HANDLELOCK::HANDLELOCK(HANDLELOCK *this)
{
  __int64 v2; // rdx
  HANDLELOCK *result; // rax

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_WORD *)this + 6) = 0;
  v2 = *(_QWORD *)(W32GetSessionState(this) + 88);
  result = this;
  *((_QWORD *)this + 2) = v2;
  return result;
}
