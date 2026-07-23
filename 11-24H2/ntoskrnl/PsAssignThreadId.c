/*
 * XREFs of PsAssignThreadId @ 0x140463114
 * Callers:
 *     KiAllocateDpcDelegateThread @ 0x1405B2BD0 (KiAllocateDpcDelegateThread.c)
 *     KiAllocateSmtIsolationThread @ 0x1405C00B4 (KiAllocateSmtIsolationThread.c)
 *     PspAllocateThread @ 0x1408FAFD4 (PspAllocateThread.c)
 * Callees:
 *     ExCreateHandle @ 0x140A1AF74 (ExCreateHandle.c)
 */

__int64 __fastcall PsAssignThreadId(__int64 a1)
{
  __int64 Handle; // rax

  Handle = ExCreateHandle(PspCidTable, a1);
  *(_QWORD *)(a1 + 1296) = Handle;
  return Handle == 0 ? 0xC000009A : 0;
}
