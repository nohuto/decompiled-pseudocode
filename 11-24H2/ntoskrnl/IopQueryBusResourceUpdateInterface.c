/*
 * XREFs of IopQueryBusResourceUpdateInterface @ 0x140733BF0
 * Callers:
 *     PiUpdateDeviceResourceLists @ 0x14073646C (PiUpdateDeviceResourceLists.c)
 * Callees:
 *     PnpQueryInterface @ 0x1409C4D84 (PnpQueryInterface.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopQueryBusResourceUpdateInterface(PVOID Object, _QWORD *a2)
{
  void *Pool2; // rax
  void *v5; // rbx
  int Interface; // edi

  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  v5 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  Interface = PnpQueryInterface(Object, 0LL, Pool2);
  if ( Interface >= 0 )
  {
    *a2 = v5;
    return 0LL;
  }
  else
  {
    ExFreePoolWithTag(v5, 0);
    return (unsigned int)Interface;
  }
}
