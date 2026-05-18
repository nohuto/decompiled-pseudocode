/*
 * XREFs of sub_18000DC80 @ 0x18000DC80
 * Callers:
 *     sub_18000D68C @ 0x18000D68C (sub_18000D68C.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall sub_18000DC80(void *a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  return HeapFree(ProcessHeap, 0, a1);
}
