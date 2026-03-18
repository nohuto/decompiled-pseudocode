/*
 * XREFs of HalpIsHvRemappingInterrupts @ 0x1406F1BA4
 * Callers:
 *     HalpInitializeInterruptsBspLate @ 0x14053F880 (HalpInitializeInterruptsBspLate.c)
 * Callees:
 *     <none>
 */

bool HalpIsHvRemappingInterrupts()
{
  return qword_140FC0748 != 0;
}
