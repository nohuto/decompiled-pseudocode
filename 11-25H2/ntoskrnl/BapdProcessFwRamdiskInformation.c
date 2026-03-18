/*
 * XREFs of BapdProcessFwRamdiskInformation @ 0x140C2D908
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140BCD52C (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

ULONG_PTR BapdProcessFwRamdiskInformation()
{
  ULONG_PTR result; // rax
  __int64 v1; // rbx

  result = *(_QWORD *)&KeNumberProcessorsGroup0[1];
  v1 = *(_QWORD *)(*(_QWORD *)(result + 240) + 3696LL);
  if ( v1 )
  {
    result = ExAllocatePool2(0x40uLL, 0x18uLL, 0x64506142uLL);
    ExpFwRamdiskInfo = result;
    if ( result )
    {
      *(_OWORD *)result = *(_OWORD *)v1;
      *(_QWORD *)(result + 16) = *(_QWORD *)(v1 + 16);
    }
  }
  return result;
}
