/*
 * XREFs of RtlUnlockHeapManagerForCloning @ 0x180143390
 * Callers:
 *     RtlCloneUserProcess @ 0x180160780 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x180160A90 (RtlCompleteProcessCloning.c)
 * Callees:
 *     RtlpGetNextProcessHeapDescriptor @ 0x1800EBB70 (RtlpGetNextProcessHeapDescriptor.c)
 *     RtlpIsHeapAccessibleInClone @ 0x1801169C8 (RtlpIsHeapAccessibleInClone.c)
 *     RtlpGetPreviousProcessHeapDescriptor @ 0x180143D64 (RtlpGetPreviousProcessHeapDescriptor.c)
 *     RtlpUnlockHeapForClone @ 0x1801442FC (RtlpUnlockHeapForClone.c)
 *     RtlpHpUnlockHeapManagerForClone @ 0x18014E244 (RtlpHpUnlockHeapManagerForClone.c)
 */

NTSTATUS __fastcall RtlUnlockHeapManagerForCloning(unsigned int a1)
{
  __int64 **i; // rcx
  __int64 PreviousProcessHeapDescriptor; // rbx
  __int64 *v4; // rcx
  __int64 *v5; // rdx
  __int64 **v6; // rax
  __int64 *NextProcessHeapDescriptor; // rax
  void *UniqueThread; // rcx

  if ( a1 )
    Context = 0LL;
  for ( i = 0LL; ; i = (__int64 **)PreviousProcessHeapDescriptor )
  {
    NextProcessHeapDescriptor = RtlpGetNextProcessHeapDescriptor(i);
    PreviousProcessHeapDescriptor = (__int64)NextProcessHeapDescriptor;
    if ( !NextProcessHeapDescriptor )
      break;
    if ( !a1 || (unsigned int)RtlpIsHeapAccessibleInClone((PVOID)NextProcessHeapDescriptor[2]) )
    {
      RtlpUnlockHeapForClone(*(_QWORD *)(PreviousProcessHeapDescriptor + 16), a1);
    }
    else
    {
      PreviousProcessHeapDescriptor = RtlpGetPreviousProcessHeapDescriptor(PreviousProcessHeapDescriptor);
      v4 = *(__int64 **)PreviousProcessHeapDescriptor;
      v5 = **(__int64 ***)PreviousProcessHeapDescriptor;
      if ( v5[1] != *(_QWORD *)PreviousProcessHeapDescriptor || (v6 = (__int64 **)v4[1], *v6 != v4) )
        __fastfail(3u);
      *v6 = v5;
      v5[1] = (__int64)v6;
    }
  }
  if ( a1 )
  {
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    RtlpProcessHeapsLock.LockSemaphore = 0LL;
    RtlpProcessHeapsLock.OwningThread = UniqueThread;
    RtlpProcessHeapsLock.LockCount = -2;
    RtlpProcessHeapsLock.RecursionCount = 1;
  }
  RtlpHpUnlockHeapManagerForClone(a1);
  return RtlLeaveCriticalSection(&RtlpProcessHeapsLock);
}
