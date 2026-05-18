/*
 * XREFs of sub_18000DD60 @ 0x18000DD60
 * Callers:
 *     sub_18000D76C @ 0x18000D76C (sub_18000D76C.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall sub_18000DD60(void *a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  return HeapFree(ProcessHeap, 0, a1);
}
