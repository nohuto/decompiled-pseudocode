/*
 * XREFs of ?MemoryAlloc@@YAPEAX_K@Z @ 0x18005B7BC
 * Callers:
 *     ?SLGetHelper@@YA_NPEBG@Z @ 0x18005ADCC (-SLGetHelper@@YA_NPEBG@Z.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall MemoryAlloc(SIZE_T a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  return HeapAlloc(ProcessHeap, 0, a1);
}
