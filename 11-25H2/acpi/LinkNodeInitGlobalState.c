/*
 * XREFs of LinkNodeInitGlobalState @ 0x1400A8FC8
 * Callers:
 *     AcpiIrqLibInitializeGlobalState @ 0x1400C43B4 (AcpiIrqLibInitializeGlobalState.c)
 * Callees:
 *     <none>
 */

__int64 LinkNodeInitGlobalState()
{
  qword_1400898D8 = (__int64)&LinkNodeListHead;
  LinkNodeListHead = (__int64)&LinkNodeListHead;
  return 0LL;
}
