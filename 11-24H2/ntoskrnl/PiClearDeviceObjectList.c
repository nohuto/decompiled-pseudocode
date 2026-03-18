/*
 * XREFs of PiClearDeviceObjectList @ 0x140A0C464
 * Callers:
 *     PipFreeDeviceObjectList @ 0x140A0CAD8 (PipFreeDeviceObjectList.c)
 *     PiAllocateDeviceObjectList @ 0x140A0D820 (PiAllocateDeviceObjectList.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void *__fastcall PiClearDeviceObjectList(_DWORD *a1)
{
  __int64 i; // rdi
  void *result; // rax

  for ( i = 0LL; (unsigned int)i < *a1; i = (unsigned int)(i + 1) )
    ObfDereferenceObjectWithTag(*(PVOID *)&a1[6 * i + 4], 0x4C706E50u);
  result = memset_0(a1 + 4, 0, 24LL * (unsigned int)a1[1]);
  *a1 = 0;
  a1[2] = 0;
  return result;
}
