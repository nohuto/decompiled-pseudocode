/*
 * XREFs of ExpInitializeSvm @ 0x140C32038
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140C2F788 (ExpInitSystemPhase1.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

PVOID *ExpInitializeSvm()
{
  unsigned int v0; // r9d
  __int64 v1; // rax
  __int64 v2; // rcx
  _QWORD *v3; // rax
  PVOID *result; // rax

  guard_dispatch_icall_no_overrides(0LL);
  if ( ExpSvmWorkQueues )
  {
    ExpSvmNumberOfWorkQueues = 0;
  }
  else
  {
    ExpSvmWorkQueues = (__int64)&ExpSvmStaticWorkQueue;
    v0 = 0;
    ExpSvmNumberOfWorkQueues = 1;
    do
    {
      v1 = v0;
      v2 = 104LL * v0++;
      *(_QWORD *)((char *)&ExpSvmStaticWorkQueue + v2 + 16) = ExpSvmWorkerThread;
      *(_QWORD *)((char *)&ExpSvmStaticWorkQueue + v2 + 24) = v1;
      *(_QWORD *)((char *)&ExpSvmStaticWorkQueue + v2) = 0LL;
      *(_QWORD *)((char *)&ExpSvmStaticWorkQueue + v2 + 56) = ExpSvmDpcRoutine;
      *(_DWORD *)((char *)&ExpSvmStaticWorkQueue + v2 + 32) = 275;
      *(_QWORD *)((char *)&ExpSvmStaticWorkQueue + v2 + 64) = v1;
      *(_QWORD *)((char *)&ExpSvmStaticWorkQueue + v2 + 88) = 0LL;
      *(_QWORD *)((char *)&ExpSvmStaticWorkQueue + v2 + 48) = 0LL;
      *(_DWORD *)((char *)&ExpSvmStaticWorkQueue + v2 + 96) = 0;
    }
    while ( !v0 );
  }
  v3 = (_QWORD *)HalIommuDispatch;
  *(_QWORD *)(HalIommuDispatch + 96) = ExpSvmFaultRoutine;
  v3[13] = ExpSvmReferenceAsid;
  v3[14] = ExpSvmDereferenceAsid;
  v3[15] = ExpSvmServicePageFault;
  result = &ExpAtsSvmDevices;
  qword_140EFA118 = (__int64)&ExpAtsSvmDevices;
  ExpAtsSvmDevices = &ExpAtsSvmDevices;
  qword_140EFA078 = 0LL;
  ExpAtsSvmDeviceListLock = 0LL;
  return result;
}
