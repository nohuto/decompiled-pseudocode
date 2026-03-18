/*
 * XREFs of HalpAcquireDrsPool @ 0x1405550F8
 * Callers:
 *     HalpMemoryErrorDeferredRecovery @ 0x1405554D8 (HalpMemoryErrorDeferredRecovery.c)
 *     HalpPmemErrorDeferredRecovery @ 0x1405556E4 (HalpPmemErrorDeferredRecovery.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
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
    result = ExAllocatePool2(0x100uLL);
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
