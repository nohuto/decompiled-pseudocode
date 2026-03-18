/*
 * XREFs of PsAssignThreadId @ 0x14046BB40
 * Callers:
 *     KiAllocateDpcDelegateThread @ 0x1405B1A3C (KiAllocateDpcDelegateThread.c)
 *     KiAllocateSmtIsolationThread @ 0x1405BEA04 (KiAllocateSmtIsolationThread.c)
 *     PspAllocateThread @ 0x1408F2828 (PspAllocateThread.c)
 * Callees:
 *     ExCreateHandle @ 0x140A1B200 (ExCreateHandle.c)
 */

__int64 __fastcall PsAssignThreadId(__int64 a1)
{
  __int64 Handle; // rax

  Handle = ExCreateHandle(PspCidTable, a1);
  *(_QWORD *)(a1 + 1296) = Handle;
  return Handle == 0 ? 0xC000009A : 0;
}
