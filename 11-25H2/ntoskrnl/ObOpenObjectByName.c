/*
 * XREFs of ObOpenObjectByName @ 0x14085AA70
 * Callers:
 *     NtOpenIoCompletion @ 0x140709090 (NtOpenIoCompletion.c)
 *     NtOpenCpuPartition @ 0x140766250 (NtOpenCpuPartition.c)
 *     NtOpenPartition @ 0x14076AE20 (NtOpenPartition.c)
 *     NtOpenKeyedEvent @ 0x1407B2B50 (NtOpenKeyedEvent.c)
 *     CmpCreatePredefined @ 0x1407BA8EC (CmpCreatePredefined.c)
 *     NtOpenRegistryTransaction @ 0x1407C0760 (NtOpenRegistryTransaction.c)
 *     CmpDoReOpenTransKey @ 0x1407D7070 (CmpDoReOpenTransKey.c)
 *     NtOpenEvent @ 0x1409FCB90 (NtOpenEvent.c)
 *     NtOpenMutant @ 0x140A040F0 (NtOpenMutant.c)
 *     NtOpenTimer @ 0x140A76FD0 (NtOpenTimer.c)
 *     IopUnloadDriver @ 0x140AA3F28 (IopUnloadDriver.c)
 *     CmInitSystem1 @ 0x140C33C44 (CmInitSystem1.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x1403FA570 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x14085B430 (ObOpenObjectByNameEx.c)
 */

__int64 __fastcall ObOpenObjectByName(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7)
{
  struct _LIST_ENTRY *CurrentSilo; // rax

  CurrentSilo = PsGetCurrentSilo();
  return ObOpenObjectByNameEx(a1, a2, a3, a4, a5, a6, CurrentSilo, a7);
}
