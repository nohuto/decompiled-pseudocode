/*
 * XREFs of HalpAcquireDrsPool @ 0x140552A38
 * Callers:
 *     HalpMemoryErrorDeferredRecovery @ 0x140552E18 (HalpMemoryErrorDeferredRecovery.c)
 *     HalpPmemErrorDeferredRecovery @ 0x140553024 (HalpPmemErrorDeferredRecovery.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 HalpAcquireDrsPool()
{
  __int64 result; // rax
  volatile signed __int32 *v1; // rcx
  unsigned int i; // edx

  if ( KeGetCurrentIrql() >= 2u )
  {
    for ( i = 0; i < 0x20; ++i )
    {
      v1 = (volatile signed __int32 *)((char *)&WheapDrsPoolEntries + 6232 * i);
      if ( !_InterlockedCompareExchange(v1, 1, 0) )
        break;
      v1 = 0LL;
    }
  }
  else
  {
    result = ExAllocatePool2(0x100uLL, 0x1858uLL, 0x61656857u);
    v1 = (volatile signed __int32 *)result;
    if ( !result )
      return result;
    *(_OWORD *)(result + 8) = 0LL;
    *(_OWORD *)(result + 24) = 0LL;
    *(_QWORD *)(result + 40) = 0LL;
    *(_QWORD *)(result + 24) = &HalpErrorDeferredHandler;
    *(_BYTE *)(result + 32) = 0;
    *(_DWORD *)result = -1;
  }
  return (__int64)v1;
}
