/*
 * XREFs of KiInitializeCoreControlBlock @ 0x1405B8DB4
 * Callers:
 *     KiInitializeKernel @ 0x140B5A930 (KiInitializeKernel.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void *__fastcall KiInitializeCoreControlBlock(__int64 a1, _QWORD *a2)
{
  void *result; // rax

  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = a2;
  result = memset_0(a2, 0, 0x40uLL);
  a2[2] = 1LL;
  return result;
}
