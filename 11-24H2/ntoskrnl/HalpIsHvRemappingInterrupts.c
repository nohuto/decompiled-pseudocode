/*
 * XREFs of HalpIsHvRemappingInterrupts @ 0x1406FD994
 * Callers:
 *     HalpInitializeInterruptsBspLate @ 0x1405420B0 (HalpInitializeInterruptsBspLate.c)
 * Callees:
 *     <none>
 */

bool HalpIsHvRemappingInterrupts()
{
  return qword_140FC0EE8 != 0;
}
