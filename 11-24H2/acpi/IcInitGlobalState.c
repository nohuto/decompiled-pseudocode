/*
 * XREFs of IcInitGlobalState @ 0x1400AAD8C
 * Callers:
 *     AcpiIrqLibInitializeGlobalState @ 0x1400C43B4 (AcpiIrqLibInitializeGlobalState.c)
 * Callees:
 *     <none>
 */

__int64 IcInitGlobalState()
{
  qword_140089768 = (__int64)&IcListHead;
  IcListHead = (__int64)&IcListHead;
  return 0LL;
}
