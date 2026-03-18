/*
 * XREFs of ApiSetEditionIsCompositionInputWindow @ 0x1C0057364
 * Callers:
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C0057334 (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionIsCompositionInputWindow(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_1C02965A0 && (int)qword_1C02965A0() >= 0 && qword_1C02965A8 )
    return (unsigned int)qword_1C02965A8(a1);
  return v1;
}
