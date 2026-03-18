/*
 * XREFs of KiPristineTriageDumpAllocationWorker @ 0x1405C64D0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void KiPristineTriageDumpAllocationWorker()
{
  void *Pool2; // rax

  if ( KiPristineTriageDumpSize )
  {
    Pool2 = (void *)ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&KiPristineTriageDump, (signed __int64)Pool2, 0LL) )
        ExFreePoolWithTag(Pool2, 0);
    }
  }
}
