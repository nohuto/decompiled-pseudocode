/*
 * XREFs of EnablePackageRdtResourcePrioritization @ 0x140007310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 EnablePackageRdtResourcePrioritization()
{
  unsigned __int64 result; // rax

  result = __readmsr(0xC89u) | 1;
  __writemsr(0xC89u, result);
  return result;
}
