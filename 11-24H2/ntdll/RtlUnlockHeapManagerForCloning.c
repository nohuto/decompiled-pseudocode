/*
 * XREFs of RtlUnlockHeapManagerForCloning @ 0x180141CA0
 * Callers:
 *     RtlCloneUserProcess @ 0x18015F270 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x18015F580 (RtlCompleteProcessCloning.c)
 * Callees:
 *     RtlpGetNextProcessHeapDescriptor @ 0x1800EA720 (RtlpGetNextProcessHeapDescriptor.c)
 *     RtlpIsHeapAccessibleInClone @ 0x180113A38 (RtlpIsHeapAccessibleInClone.c)
 *     RtlpGetPreviousProcessHeapDescriptor @ 0x180142674 (RtlpGetPreviousProcessHeapDescriptor.c)
 *     RtlpUnlockHeapForClone @ 0x180142C0C (RtlpUnlockHeapForClone.c)
 *     RtlpHpUnlockHeapManagerForClone @ 0x18014CC94 (RtlpHpUnlockHeapManagerForClone.c)
 */

__int64 __fastcall RtlUnlockHeapManagerForCloning(unsigned int a1)
{
  __int64 **i; // rcx
  __int64 PreviousProcessHeapDescriptor; // rbx
  __int64 *v4; // rcx
  __int64 *v5; // rdx
  __int64 **v6; // rax
  __int64 *NextProcessHeapDescriptor; // rax
  void *UniqueThread; // rcx

  if ( a1 )
    qword_1801CE268 = 0LL;
  for ( i = 0LL; ; i = (__int64 **)PreviousProcessHeapDescriptor )
  {
    NextProcessHeapDescriptor = RtlpGetNextProcessHeapDescriptor(i);
    PreviousProcessHeapDescriptor = (__int64)NextProcessHeapDescriptor;
    if ( !NextProcessHeapDescriptor )
      break;
    if ( !a1 || (unsigned int)RtlpIsHeapAccessibleInClone(NextProcessHeapDescriptor[2]) )
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
    qword_1801D3FB8 = 0LL;
    qword_1801D3FB0 = (__int64)UniqueThread;
    dword_1801D3FA8 = -2;
    dword_1801D3FAC = 1;
  }
  RtlpHpUnlockHeapManagerForClone(a1);
  return RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsLock);
}
