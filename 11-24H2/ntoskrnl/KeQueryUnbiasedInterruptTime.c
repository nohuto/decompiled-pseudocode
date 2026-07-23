/*
 * XREFs of KeQueryUnbiasedInterruptTime @ 0x140425150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONGLONG KeQueryUnbiasedInterruptTime(void)
{
  return MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
}
