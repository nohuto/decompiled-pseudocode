/*
 * XREFs of ObOpenObjectByName @ 0x14089B210
 * Callers:
 *     NtOpenIoCompletion @ 0x140715190 (NtOpenIoCompletion.c)
 *     NtOpenCpuPartition @ 0x140775C20 (NtOpenCpuPartition.c)
 *     NtOpenPartition @ 0x14077A9C0 (NtOpenPartition.c)
 *     NtOpenKeyedEvent @ 0x1407C52D0 (NtOpenKeyedEvent.c)
 *     CmpCreatePredefined @ 0x1407CA0EC (CmpCreatePredefined.c)
 *     NtOpenRegistryTransaction @ 0x1407CFE60 (NtOpenRegistryTransaction.c)
 *     CmpDoReOpenTransKey @ 0x1407E6EF4 (CmpDoReOpenTransKey.c)
 *     NtOpenEvent @ 0x1409F7370 (NtOpenEvent.c)
 *     NtOpenMutant @ 0x140A03550 (NtOpenMutant.c)
 *     NtOpenTimer @ 0x140A78C60 (NtOpenTimer.c)
 *     IopUnloadDriver @ 0x140AA8FB8 (IopUnloadDriver.c)
 *     CmInitSystem1 @ 0x140C44EC0 (CmInitSystem1.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x140402420 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x14089BB40 (ObOpenObjectByNameEx.c)
 */

__int64 __fastcall ObOpenObjectByName(int a1, int a2, unsigned __int8 a3, int a4, int a5, __int64 a6, __int64 a7)
{
  struct _LIST_ENTRY *CurrentSilo; // rax

  CurrentSilo = PsGetCurrentSilo();
  return ObOpenObjectByNameEx(a1, a2, a3, a4, a5, a6, (__int64)CurrentSilo, a7);
}
