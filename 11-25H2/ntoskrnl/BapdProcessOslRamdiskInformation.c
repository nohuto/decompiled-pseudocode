/*
 * XREFs of BapdProcessOslRamdiskInformation @ 0x140C2D964
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140BCD52C (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

_QWORD *BapdProcessOslRamdiskInformation()
{
  _QWORD *result; // rax
  _DWORD *v1; // rbx
  unsigned int v2; // edi

  result = *(_QWORD **)&KeNumberProcessorsGroup0[1];
  v1 = *(_DWORD **)(result[30] + 3936LL);
  if ( v1 && *v1 == 1 )
  {
    v2 = 24 * v1[1] + 8;
    result = (_QWORD *)ExAllocatePool2(0x40uLL, v2, 0x64506142uLL);
    ExpOslRamdiskInfo = result;
    if ( result )
      return memmove(result, v1, v2);
  }
  return result;
}
