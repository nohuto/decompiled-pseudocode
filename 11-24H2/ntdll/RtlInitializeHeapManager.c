/*
 * XREFs of RtlInitializeHeapManager @ 0x18011941C
 * Callers:
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlHpGlobalsInitialize @ 0x180097254 (RtlHpGlobalsInitialize.c)
 *     RtlInitializeCriticalSectionEx @ 0x18009BD70 (RtlInitializeCriticalSectionEx.c)
 *     SbSelectProcedure @ 0x1800A9EF0 (SbSelectProcedure.c)
 *     RtlGetSuiteMask @ 0x1800AAA10 (RtlGetSuiteMask.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x1800AC2B0 (RtlpHpOptIntoSegmentHeap.c)
 *     RtlpInitializeLowFragHeapManager @ 0x1800F8148 (RtlpInitializeLowFragHeapManager.c)
 *     RtlpGetModifiedProcessCookie @ 0x1800FBBD4 (RtlpGetModifiedProcessCookie.c)
 *     RtlpHpInitializePerfPolicies @ 0x18010FF68 (RtlpHpInitializePerfPolicies.c)
 *     RtlpHpQueryGCTimerInterval @ 0x18014285C (RtlpHpQueryGCTimerInterval.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

NTSTATUS __fastcall RtlInitializeHeapManager(__int64 a1)
{
  struct _PEB *v2; // rdi
  void (*v3)(void); // rax
  unsigned int GCTimerInterval; // eax
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rax
  __int64 v7; // rtt
  unsigned __int64 v8; // rdx
  int v10; // [rsp+38h] [rbp+10h] BYREF

  RtlHpGlobalsInitialize();
  v2 = NtCurrentPeb();
  v10 = 0;
  if ( (unsigned int)RtlpHpOptIntoSegmentHeap(a1, (unsigned int *)&v10) )
  {
    RtlpHpHeapFeatures |= 1u;
    v3 = (void (*)(void))qword_1801CE6B0;
    if ( qword_1801CE6B0
      || (v3 = (void (*)(void))SbSelectProcedure(2880154539LL, 0, (__int64)"kLsE", 1u),
          (qword_1801CE6B0 = (__int64)v3) != 0) )
    {
      v3();
    }
  }
  RtlpHpInitializePerfPolicies(v10);
  GCTimerInterval = RtlpHpQueryGCTimerInterval(a1);
  qword_1801CE268 = 0LL;
  qword_1801CE278 = 0LL;
  qword_1801CE270 = -10000LL * GCTimerInterval;
  RtlpDisableBreakOnFailureCookie = RtlpGetModifiedProcessCookie();
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x100000) != 0 )
  {
    if ( RtlpHeapErrorHandlerThreshold <= 1 )
      RtlpHeapErrorHandlerThreshold = 2;
    RtlpDisableBreakOnFailureCookie = 0;
  }
  if ( (RtlpDisableHeapLookaside & 1) == 0 )
    RtlpDisableBreakOnFailureCookie = 0;
  v2->NumberOfHeaps = 0;
  v2->ProcessHeaps = (void **)&RtlpPebHeapListStaticBuffer;
  v2->MaximumNumberOfHeaps = 16;
  qword_1801D3F88 = (__int64)&RtlpProcessHeaps;
  RtlpProcessHeaps = (__int64)&RtlpProcessHeaps;
  RtlInitializeCriticalSectionEx((__int64)&RtlpProcessHeapsLock, 0, 0x10000000);
  v5 = ((((qword_1801CDF00 ^ ((unsigned __int64)qword_1801CDF00 >> 12)) << 25) ^ qword_1801CDF00 ^ ((unsigned __int64)qword_1801CDF00 >> 12)) >> 27) ^ ((qword_1801CDF00 ^ ((unsigned __int64)qword_1801CDF00 >> 12)) << 25) ^ qword_1801CDF00 ^ ((unsigned __int64)qword_1801CDF00 >> 12);
  v7 = qword_1801CDF00;
  v6 = _InterlockedCompareExchange64(&qword_1801CDF00, v5, qword_1801CDF00);
  if ( v7 != v6 )
  {
    do
    {
      v8 = v6;
      v5 = ((((v6 ^ (v6 >> 12)) << 25) ^ v6 ^ (v6 >> 12)) >> 27) ^ ((v6 ^ (v6 >> 12)) << 25) ^ v6 ^ (v6 >> 12);
      v6 = _InterlockedCompareExchange64(&qword_1801CDF00, v5, v6);
    }
    while ( v6 != v8 );
  }
  RtlpHeapKey = 0x2545F4914F6CDD1DLL * v5;
  if ( (RtlGetSuiteMask() & 0x10000) != 0 )
  {
    RtlpLowFragHeapGlobalFlags |= 4u;
    RtlpLargestLfhBlock = 1024LL;
  }
  RtlpInitializeLowFragHeapManager();
  return RtlHpInitializeHeapManager();
}
