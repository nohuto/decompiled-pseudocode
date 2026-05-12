/*
 * XREFs of RaidCreateBusEnumerator @ 0x14004023C
 * Callers:
 *     StorAdapterNVMeEnumerateZNS @ 0x1401B8B44 (StorAdapterNVMeEnumerateZNS.c)
 * Callees:
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

_QWORD *__fastcall RaidCreateBusEnumerator(_QWORD *a1)
{
  _QWORD *result; // rax

  memset_0(a1, 0, 0x88uLL);
  result = a1 + 15;
  a1[16] = a1 + 15;
  a1[15] = a1 + 15;
  return result;
}
