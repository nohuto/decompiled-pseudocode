/*
 * XREFs of FirstEntrySList @ 0x1406B4820
 * Callers:
 *     MmCreateKernelStack @ 0x1402207C0 (MmCreateKernelStack.c)
 *     PopMarkComponentsBootPhase @ 0x140B5F714 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall FirstEntrySList(PSLIST_HEADER SListHead)
{
  PSLIST_ENTRY result; // rax

  result = (PSLIST_ENTRY)SListHead->Region;
  LOBYTE(result) = (unsigned __int8)result & 0xF0;
  return result;
}
