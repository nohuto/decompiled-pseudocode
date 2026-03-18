/*
 * XREFs of ??0CThreadWaitTick@@QEAA@PEC_K@Z @ 0x18025CDC0
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800817A0 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

CThreadWaitTick *__fastcall CThreadWaitTick::CThreadWaitTick(CThreadWaitTick *this, volatile unsigned __int64 *a2)
{
  CThreadWaitTick *result; // rax

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = qword_1803FAD80;
  *(_QWORD *)this = &qword_1803FAD80;
  result = this;
  qword_1803FAD80 = 0LL;
  return result;
}
