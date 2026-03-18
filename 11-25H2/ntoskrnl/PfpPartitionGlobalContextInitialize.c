/*
 * XREFs of PfpPartitionGlobalContextInitialize @ 0x14073B540
 * Callers:
 *     PfInitializeSuperfetch @ 0x140C1B81C (PfInitializeSuperfetch.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PfpPartitionGlobalContextInitialize(_QWORD *a1)
{
  _QWORD *result; // rax

  a1[2] = 0LL;
  result = a1 + 1;
  a1[2] = a1 + 1;
  a1[1] = a1 + 1;
  *a1 = 0LL;
  return result;
}
