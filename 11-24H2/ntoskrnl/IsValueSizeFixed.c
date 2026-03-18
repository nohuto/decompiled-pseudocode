/*
 * XREFs of IsValueSizeFixed @ 0x140860530
 * Callers:
 *     LocalGetConditionForString @ 0x14085FAE0 (LocalGetConditionForString.c)
 *     GetOperandValue @ 0x14086038C (GetOperandValue.c)
 * Callees:
 *     <none>
 */

char __fastcall IsValueSizeFixed(unsigned __int8 a1)
{
  char v1; // r8

  v1 = 0;
  if ( a1 < 0x50u && (a1 == 1 || a1 == 2 || (unsigned int)a1 - 3 < 2) )
    return 1;
  return v1;
}
