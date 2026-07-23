/*
 * XREFs of MiInitializeWsSwapping @ 0x1407FB97C
 * Callers:
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 * Callees:
 *     <none>
 */

void (__fastcall *__fastcall MiInitializeWsSwapping(_QWORD *a1))(__int64 a1)
{
  void (__fastcall *result)(__int64); // rax

  a1[147] = 0LL;
  result = MiContractWsSwapPageFileWorker;
  a1[142] = 0LL;
  a1[144] = MiContractWsSwapPageFileWorker;
  a1[145] = a1;
  return result;
}
