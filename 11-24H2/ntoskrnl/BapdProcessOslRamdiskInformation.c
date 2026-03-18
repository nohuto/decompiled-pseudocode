/*
 * XREFs of BapdProcessOslRamdiskInformation @ 0x140C3EC40
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140BDE52C (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

void *BapdProcessOslRamdiskInformation()
{
  void *result; // rax
  _DWORD *v1; // rbx
  unsigned int v2; // edi

  result = (void *)KeLoaderBlock_0;
  v1 = *(_DWORD **)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 3936LL);
  if ( v1 && *v1 == 1 )
  {
    v2 = 24 * v1[1] + 8;
    result = (void *)ExAllocatePool2(0x40uLL, v2, 0x64506142uLL);
    ExpOslRamdiskInfo = result;
    if ( result )
      return memmove(result, v1, v2);
  }
  return result;
}
