/*
 * XREFs of ApiSetEditionIsCompositeAppOrSelfDisabled @ 0x1C02068F8
 * Callers:
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C01CC178 (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionIsCompositeAppOrSelfDisabled(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_1C0296448 && (int)qword_1C0296448() >= 0 && qword_1C0296450 )
    return (unsigned int)qword_1C0296450(a1);
  return v1;
}
