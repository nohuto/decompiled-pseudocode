/*
 * XREFs of RtlLockHeapManagerForCloning @ 0x180143040
 * Callers:
 *     RtlCloneUserProcess @ 0x180160780 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x180160C40 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlpGetNextProcessHeapDescriptor @ 0x1800EBB70 (RtlpGetNextProcessHeapDescriptor.c)
 *     RtlpCSparseBitmapLock @ 0x1800F7D90 (RtlpCSparseBitmapLock.c)
 *     RtlpGetPreviousProcessHeapDescriptor @ 0x180143D64 (RtlpGetPreviousProcessHeapDescriptor.c)
 *     RtlpLockHeapForClone @ 0x180144118 (RtlpLockHeapForClone.c)
 *     RtlpUnlockHeapForClone @ 0x1801442FC (RtlpUnlockHeapForClone.c)
 *     RtlpFlsClonePrepare @ 0x18014CC5C (RtlpFlsClonePrepare.c)
 *     RtlpHpUnlockHeapManagerForClone @ 0x18014E244 (RtlpHpUnlockHeapManagerForClone.c)
 */

__int64 RtlLockHeapManagerForCloning()
{
  __int64 **v0; // rcx
  __int64 *NextProcessHeapDescriptor; // rax
  __int64 *v2; // rbx
  int v3; // edi
  __int64 PreviousProcessHeapDescriptor; // rax
  __int64 **v5; // rbx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  RtlEnterCriticalSection(&RtlpProcessHeapsLock);
  RtlpCSparseBitmapLock((_RTL_SRWLOCK *)BaseAddress, 1, (__int64)v7);
  RtlpFlsClonePrepare(&RtlpHpEnvFlsContext);
  v0 = 0LL;
  do
  {
    NextProcessHeapDescriptor = RtlpGetNextProcessHeapDescriptor(v0);
    v2 = NextProcessHeapDescriptor;
    if ( !NextProcessHeapDescriptor )
      return 0;
    v3 = RtlpLockHeapForClone(NextProcessHeapDescriptor[2]);
    v0 = (__int64 **)v2;
  }
  while ( v3 >= 0 );
  while ( 1 )
  {
    PreviousProcessHeapDescriptor = RtlpGetPreviousProcessHeapDescriptor(v0);
    v5 = (__int64 **)PreviousProcessHeapDescriptor;
    if ( !PreviousProcessHeapDescriptor )
      break;
    RtlpUnlockHeapForClone(*(_QWORD *)(PreviousProcessHeapDescriptor + 16), 0LL);
    v0 = v5;
  }
  RtlpHpUnlockHeapManagerForClone(0LL);
  RtlLeaveCriticalSection(&RtlpProcessHeapsLock);
  return (unsigned int)v3;
}
