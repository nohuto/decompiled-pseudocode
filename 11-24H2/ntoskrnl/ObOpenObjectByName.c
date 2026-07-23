/*
 * XREFs of ObOpenObjectByName @ 0x1408A38B0
 * Callers:
 *     NtOpenIoCompletion @ 0x140712D20 (NtOpenIoCompletion.c)
 *     NtOpenCpuPartition @ 0x140775E40 (NtOpenCpuPartition.c)
 *     NtOpenPartition @ 0x14077A870 (NtOpenPartition.c)
 *     NtOpenKeyedEvent @ 0x1407C5730 (NtOpenKeyedEvent.c)
 *     CmpCreatePredefined @ 0x1407CA5DC (CmpCreatePredefined.c)
 *     NtOpenRegistryTransaction @ 0x1407D0350 (NtOpenRegistryTransaction.c)
 *     CmpDoReOpenTransKey @ 0x1407E74C4 (CmpDoReOpenTransKey.c)
 *     NtOpenEvent @ 0x1409EFCE0 (NtOpenEvent.c)
 *     NtOpenMutant @ 0x1409FFA80 (NtOpenMutant.c)
 *     NtOpenTimer @ 0x140A72F60 (NtOpenTimer.c)
 *     IopUnloadDriver @ 0x140AA4068 (IopUnloadDriver.c)
 *     CmInitSystem1 @ 0x140C47010 (CmInitSystem1.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x1403FCA20 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x1408A41E0 (ObOpenObjectByNameEx.c)
 */

__int64 __fastcall ObOpenObjectByName(int a1, int a2, unsigned __int8 a3, int a4, int a5, __int64 a6, __int64 a7)
{
  struct _LIST_ENTRY *CurrentSilo; // rax

  CurrentSilo = PsGetCurrentSilo();
  return ObOpenObjectByNameEx(a1, a2, a3, a4, a5, a6, (__int64)CurrentSilo, a7);
}
