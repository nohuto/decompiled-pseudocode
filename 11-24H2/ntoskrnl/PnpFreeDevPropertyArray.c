/*
 * XREFs of PnpFreeDevPropertyArray @ 0x1408D3F3C
 * Callers:
 *     PiDqActionDataFree @ 0x1408D3C2C (PiDqActionDataFree.c)
 *     PiSwDeviceFree @ 0x1409F819C (PiSwDeviceFree.c)
 *     PiSwCompleteCreate @ 0x1409F8538 (PiSwCompleteCreate.c)
 *     PiSwInterfaceFree @ 0x1409F8A14 (PiSwInterfaceFree.c)
 *     PiSwIrpStartCreateWorker @ 0x1409F8A64 (PiSwIrpStartCreateWorker.c)
 *     PiSwProcessRemove @ 0x1409FB008 (PiSwProcessRemove.c)
 *     PiSwQueuedCreateInfoFree @ 0x1409FB784 (PiSwQueuedCreateInfoFree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PnpFreeDevPropertyArray(unsigned int a1, PVOID *a2, ULONG a3)
{
  PVOID *v5; // rbx
  __int64 v6; // rsi
  void *v7; // rcx

  if ( a1 )
  {
    v5 = a2 + 5;
    v6 = a1;
    do
    {
      v7 = *(v5 - 2);
      if ( v7 )
        ExFreePoolWithTag(v7, a3);
      if ( *v5 )
        ExFreePoolWithTag(*v5, a3);
      v5 += 6;
      --v6;
    }
    while ( v6 );
  }
  ExFreePoolWithTag(a2, a3);
}
