/*
 * XREFs of BapdProcessFwRamdiskInformation @ 0x140C40D34
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140BE052C (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 BapdProcessFwRamdiskInformation()
{
  __int64 result; // rax
  __int64 v1; // rbx

  result = KeLoaderBlock_0;
  v1 = *(_QWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 3696LL);
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
