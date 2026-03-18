/*
 * XREFs of PnpFreeDevPropertyArray @ 0x1408392C0
 * Callers:
 *     PiDqActionDataFree @ 0x140838F48 (PiDqActionDataFree.c)
 *     PiSwProcessRemove @ 0x1409A35FC (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x1409A38F4 (PiSwDeviceFree.c)
 *     PiSwCompleteCreate @ 0x1409A3A80 (PiSwCompleteCreate.c)
 *     PiSwInterfaceFree @ 0x1409A3F4C (PiSwInterfaceFree.c)
 *     PiSwIrpStartCreateWorker @ 0x1409A4180 (PiSwIrpStartCreateWorker.c)
 *     PiSwQueuedCreateInfoFree @ 0x1409A4BA4 (PiSwQueuedCreateInfoFree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
