/*
 * XREFs of KiPristineTriageDumpAllocationWorker @ 0x1405C3C00
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void KiPristineTriageDumpAllocationWorker()
{
  void *Pool2; // rax

  if ( KiPristineTriageDumpSize )
  {
    Pool2 = (void *)ExAllocatePool2(0x40uLL, (unsigned int)KiPristineTriageDumpSize, 0x7263624Bu);
    if ( Pool2 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&KiPristineTriageDump, (signed __int64)Pool2, 0LL) )
        ExFreePoolWithTag(Pool2, 0);
    }
  }
}
