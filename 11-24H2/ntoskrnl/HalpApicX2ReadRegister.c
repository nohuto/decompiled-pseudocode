/*
 * XREFs of HalpApicX2ReadRegister @ 0x1404B9FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HalpApicX2ReadRegister(int a1)
{
  return __readmsr((a1 >> 4) + 2048);
}
