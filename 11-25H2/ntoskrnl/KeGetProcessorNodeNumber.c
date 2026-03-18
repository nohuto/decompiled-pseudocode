/*
 * XREFs of KeGetProcessorNodeNumber @ 0x14043ACA0
 * Callers:
 *     HvlInitializeProcessor @ 0x140702EEC (HvlInitializeProcessor.c)
 *     PspAllocateThread @ 0x1408F2828 (PspAllocateThread.c)
 *     KiInitializeThreadCycleTable @ 0x140B4672C (KiInitializeThreadCycleTable.c)
 *     MmInitializeProcessor @ 0x140B51F08 (MmInitializeProcessor.c)
 *     VmInitializeProcessor @ 0x140B5F5EC (VmInitializeProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetProcessorNodeNumber(__int64 a1)
{
  return *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 138LL);
}
