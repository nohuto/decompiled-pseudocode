/*
 * XREFs of ApiSetEditionRawInputRequestedForKeyboard @ 0x1C02076C8
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x1C01EA8C0 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionRawInputRequestedForKeyboard(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_1C02967B0 && (int)qword_1C02967B0() >= 0 && qword_1C02967B8 )
    return (unsigned int)qword_1C02967B8(a1);
  return v1;
}
