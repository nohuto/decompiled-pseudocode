/*
 * XREFs of HalpInitializePmuArbiter @ 0x140C0E8C8
 * Callers:
 *     HalpHwPerfCntInitSystem @ 0x140B4C570 (HalpHwPerfCntInitSystem.c)
 * Callees:
 *     <none>
 */

PVOID *HalpInitializePmuArbiter()
{
  PVOID *result; // rax

  HalpPmuArbiter = 0LL;
  result = &qword_140FC1D98;
  qword_140FC1DA0 = (__int64)&qword_140FC1D98;
  qword_140FC1D98 = &qword_140FC1D98;
  dword_140FC1E00 = 300000;
  dword_140FC1D90 = 1;
  return result;
}
