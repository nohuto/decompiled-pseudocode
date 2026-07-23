/*
 * XREFs of KeGetProcessorNodeNumber @ 0x14042ACE0
 * Callers:
 *     HvlInitializeProcessor @ 0x14070C95C (HvlInitializeProcessor.c)
 *     PspAllocateThread @ 0x1408FAFD4 (PspAllocateThread.c)
 *     KiInitializeThreadCycleTable @ 0x140B58720 (KiInitializeThreadCycleTable.c)
 *     MmInitializeProcessor @ 0x140B64108 (MmInitializeProcessor.c)
 *     VmInitializeProcessor @ 0x140B7054C (VmInitializeProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetProcessorNodeNumber(__int64 a1)
{
  return *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 138LL);
}
