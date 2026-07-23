/*
 * XREFs of PfpPartitionGlobalContextInitialize @ 0x140745850
 * Callers:
 *     PfInitializeSuperfetch @ 0x140C2EA3C (PfInitializeSuperfetch.c)
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
