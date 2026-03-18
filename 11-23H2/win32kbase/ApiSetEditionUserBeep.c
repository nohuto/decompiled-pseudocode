/*
 * XREFs of ApiSetEditionUserBeep @ 0x1C0207A90
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x1C01EA8C0 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 ApiSetEditionUserBeep()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( qword_1C02967C0 && (int)qword_1C02967C0() >= 0 && qword_1C02967C8 )
    return (unsigned int)qword_1C02967C8(440LL, 125LL);
  return v0;
}
