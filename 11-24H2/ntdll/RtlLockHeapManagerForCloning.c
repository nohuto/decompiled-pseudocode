/*
 * XREFs of RtlLockHeapManagerForCloning @ 0x180141950
 * Callers:
 *     RtlCloneUserProcess @ 0x18015F270 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x18015F730 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlpGetNextProcessHeapDescriptor @ 0x1800EA720 (RtlpGetNextProcessHeapDescriptor.c)
 *     RtlpCSparseBitmapLock @ 0x1800F6210 (RtlpCSparseBitmapLock.c)
 *     RtlpGetPreviousProcessHeapDescriptor @ 0x180142674 (RtlpGetPreviousProcessHeapDescriptor.c)
 *     RtlpLockHeapForClone @ 0x180142A28 (RtlpLockHeapForClone.c)
 *     RtlpUnlockHeapForClone @ 0x180142C0C (RtlpUnlockHeapForClone.c)
 *     RtlpFlsClonePrepare @ 0x18014B6AC (RtlpFlsClonePrepare.c)
 *     RtlpHpUnlockHeapManagerForClone @ 0x18014CC94 (RtlpHpUnlockHeapManagerForClone.c)
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

  RtlEnterCriticalSection((__int64)&RtlpProcessHeapsLock);
  RtlpCSparseBitmapLock((__int64)&unk_1801CE930, (volatile signed __int32 **)1, (unsigned __int64)v7);
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
  RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsLock);
  return (unsigned int)v3;
}
