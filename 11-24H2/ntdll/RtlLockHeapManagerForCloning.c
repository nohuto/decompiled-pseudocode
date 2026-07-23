/*
 * XREFs of RtlLockHeapManagerForCloning @ 0x18013FB40
 * Callers:
 *     RtlCloneUserProcess @ 0x18015D630 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x18015DAF0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlpReleaseHeapListLock @ 0x18002AA6C (RtlpReleaseHeapListLock.c)
 *     RtlpAcquireHeapListLock @ 0x18002AAB4 (RtlpAcquireHeapListLock.c)
 *     RtlpGetNextProcessHeapDescriptor @ 0x1800E5F90 (RtlpGetNextProcessHeapDescriptor.c)
 *     RtlpCSparseBitmapLock @ 0x1800F0770 (RtlpCSparseBitmapLock.c)
 *     RtlpGetPreviousProcessHeapDescriptor @ 0x180140824 (RtlpGetPreviousProcessHeapDescriptor.c)
 *     RtlpLockHeapForClone @ 0x180140BD8 (RtlpLockHeapForClone.c)
 *     RtlpUnlockHeapForClone @ 0x180140FBC (RtlpUnlockHeapForClone.c)
 *     RtlpFlsClonePrepare @ 0x180149A5C (RtlpFlsClonePrepare.c)
 *     RtlpHpUnlockHeapManagerForClone @ 0x18014B05C (RtlpHpUnlockHeapManagerForClone.c)
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

  RtlpAcquireHeapListLock();
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
  RtlpReleaseHeapListLock(0);
  return (unsigned int)v3;
}
