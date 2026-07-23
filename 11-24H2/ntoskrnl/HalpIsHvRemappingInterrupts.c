/*
 * XREFs of HalpIsHvRemappingInterrupts @ 0x1406FB5D4
 * Callers:
 *     HalpInitializeInterruptsBspLate @ 0x14053FA00 (HalpInitializeInterruptsBspLate.c)
 * Callees:
 *     <none>
 */

bool HalpIsHvRemappingInterrupts()
{
  return qword_140FC1148 != 0;
}
