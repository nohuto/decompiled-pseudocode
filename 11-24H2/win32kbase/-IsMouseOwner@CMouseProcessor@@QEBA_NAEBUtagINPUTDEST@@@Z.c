/*
 * XREFs of ?IsMouseOwner@CMouseProcessor@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1400613F4
 * Callers:
 *     IsCapturedBySystem @ 0x1401559D0 (IsCapturedBySystem.c)
 * Callees:
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1400610DC (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 */

char __fastcall CMouseProcessor::IsMouseOwner(CMouseProcessor *this, const struct tagINPUTDEST *a2)
{
  return CInputDest::operator==((int *)this + 946, (__int64)a2);
}
