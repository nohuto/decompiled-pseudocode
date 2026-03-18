/*
 * XREFs of PiClearDeviceObjectList @ 0x140A868C0
 * Callers:
 *     PipFreeDeviceObjectList @ 0x14082F11C (PipFreeDeviceObjectList.c)
 *     PiAllocateDeviceObjectList @ 0x14082F418 (PiAllocateDeviceObjectList.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
