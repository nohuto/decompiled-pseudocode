/*
 * XREFs of ??0CWindowArrangementTransition@@QEAA@PEAVCWindowList@@@Z @ 0x18009B098
 * Callers:
 *     ?EnsureWindowArrangementTransition@CWindowList@@AEAAJXZ @ 0x180068910 (-EnsureWindowArrangementTransition@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

CWindowArrangementTransition *__fastcall CWindowArrangementTransition::CWindowArrangementTransition(
        CWindowArrangementTransition *this,
        struct CWindowList *a2)
{
  CWindowArrangementTransition *result; // rax

  *((_QWORD *)this + 1) = 0LL;
  result = this;
  *(_QWORD *)this = a2;
  *((_BYTE *)this + 16) = 0;
  return result;
}
