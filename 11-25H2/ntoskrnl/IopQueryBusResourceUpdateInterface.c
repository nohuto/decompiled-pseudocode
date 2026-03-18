/*
 * XREFs of IopQueryBusResourceUpdateInterface @ 0x140727958
 * Callers:
 *     PiUpdateDeviceResourceLists @ 0x14072A1DC (PiUpdateDeviceResourceLists.c)
 * Callees:
 *     PnpQueryInterface @ 0x14082CC7C (PnpQueryInterface.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
