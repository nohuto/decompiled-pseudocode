/*
 * XREFs of ApiSetEditionPromotePointer @ 0x1C02075F8
 * Callers:
 *     ?PromotePointerDataToMouse@CTouchProcessor@@QEAAH_KK@Z @ 0x1C01D1B20 (-PromotePointerDataToMouse@CTouchProcessor@@QEAAH_KK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionPromotePointer(unsigned __int16 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( qword_1C02969A0 && (int)qword_1C02969A0() >= 0 && qword_1C02969A8 )
    return (unsigned int)qword_1C02969A8(a1, a2, a3);
  return v3;
}
