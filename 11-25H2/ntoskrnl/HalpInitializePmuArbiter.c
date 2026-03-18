/*
 * XREFs of HalpInitializePmuArbiter @ 0x140BFD8C8
 * Callers:
 *     HalpHwPerfCntInitSystem @ 0x140B3C570 (HalpHwPerfCntInitSystem.c)
 * Callees:
 *     <none>
 */

PVOID *HalpInitializePmuArbiter()
{
  PVOID *result; // rax

  HalpPmuArbiter = 0LL;
  result = &qword_140FC15F8;
  qword_140FC1600 = (__int64)&qword_140FC15F8;
  qword_140FC15F8 = &qword_140FC15F8;
  dword_140FC1660 = 300000;
  dword_140FC15F0 = 1;
  return result;
}
