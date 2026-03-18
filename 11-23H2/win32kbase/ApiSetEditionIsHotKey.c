/*
 * XREFs of ApiSetEditionIsHotKey @ 0x1C0206948
 * Callers:
 *     ?LowLevelHexNumpad@@YAXGEHG@Z @ 0x1C01E9D70 (-LowLevelHexNumpad@@YAXGEHG@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionIsHotKey(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( qword_1C02967F0 && (int)qword_1C02967F0() >= 0 && qword_1C02967F8 )
    return (unsigned int)qword_1C02967F8(a1, a2);
  return v2;
}
