/*
 * XREFs of ?MemoryAlloc@@YAPEAX_K@Z @ 0x18006FFE4
 * Callers:
 *     ?CdplIsSupportedInl@@YAJPEAH@Z @ 0x180047498 (-CdplIsSupportedInl@@YAJPEAH@Z.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall MemoryAlloc(SIZE_T a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  return HeapAlloc(ProcessHeap, 0, a1);
}
