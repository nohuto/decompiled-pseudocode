/*
 * XREFs of ??0CThreadWaitTick@@QEAA@PEC_K@Z @ 0x180266D30
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800E6E20 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

CThreadWaitTick *__fastcall CThreadWaitTick::CThreadWaitTick(CThreadWaitTick *this, volatile unsigned __int64 *a2)
{
  CThreadWaitTick *result; // rax

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = qword_180406D90;
  *(_QWORD *)this = &qword_180406D90;
  result = this;
  qword_180406D90 = 0LL;
  return result;
}
