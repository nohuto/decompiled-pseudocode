/*
 * XREFs of KeGetProcessorNodeNumber @ 0x140438120
 * Callers:
 *     HvlInitializeProcessor @ 0x14070EDCC (HvlInitializeProcessor.c)
 *     PspAllocateThread @ 0x1408A49BC (PspAllocateThread.c)
 *     KiInitializeThreadCycleTable @ 0x140B566D0 (KiInitializeThreadCycleTable.c)
 *     MmInitializeProcessor @ 0x140B62038 (MmInitializeProcessor.c)
 *     VmInitializeProcessor @ 0x140B6E698 (VmInitializeProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetProcessorNodeNumber(__int64 a1)
{
  return *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 138LL);
}
