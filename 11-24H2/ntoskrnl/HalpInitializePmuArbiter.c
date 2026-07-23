/*
 * XREFs of HalpInitializePmuArbiter @ 0x140C108C8
 * Callers:
 *     HalpHwPerfCntInitSystem @ 0x140B4E5B0 (HalpHwPerfCntInitSystem.c)
 * Callees:
 *     <none>
 */

PVOID *HalpInitializePmuArbiter()
{
  PVOID *result; // rax

  HalpPmuArbiter = 0LL;
  result = &qword_140FC1FF8;
  qword_140FC2000 = (__int64)&qword_140FC1FF8;
  qword_140FC1FF8 = &qword_140FC1FF8;
  dword_140FC2060 = 300000;
  dword_140FC1FF0 = 1;
  return result;
}
