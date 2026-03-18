/*
 * XREFs of PsAssignThreadId @ 0x14046A77C
 * Callers:
 *     KiAllocateDpcDelegateThread @ 0x1405B5908 (KiAllocateDpcDelegateThread.c)
 *     KiAllocateSmtIsolationThread @ 0x1405C2AE4 (KiAllocateSmtIsolationThread.c)
 *     PspAllocateThread @ 0x1408A49BC (PspAllocateThread.c)
 * Callees:
 *     ExCreateHandle @ 0x140A264F4 (ExCreateHandle.c)
 */

__int64 __fastcall PsAssignThreadId(__int64 a1)
{
  __int64 Handle; // rax

  Handle = ExCreateHandle(PspCidTable, a1);
  *(_QWORD *)(a1 + 1296) = Handle;
  return Handle == 0 ? 0xC000009A : 0;
}
