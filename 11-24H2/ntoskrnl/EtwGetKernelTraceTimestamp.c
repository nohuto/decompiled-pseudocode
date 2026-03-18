/*
 * XREFs of EtwGetKernelTraceTimestamp @ 0x1403C00A0
 * Callers:
 *     KiIpiSendRequest @ 0x1402928D0 (KiIpiSendRequest.c)
 *     HvcallInitiateHypercall @ 0x1403AF710 (HvcallInitiateHypercall.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1403BFD28 (KiInvokeInterruptServiceRoutine.c)
 *     KeDisableTimer2 @ 0x1403C01A8 (KeDisableTimer2.c)
 *     KiFinalizeTimer2Disablement @ 0x1403C06C8 (KiFinalizeTimer2Disablement.c)
 *     KiExpireTimer2 @ 0x1403C0A90 (KiExpireTimer2.c)
 *     HvlSendSyntheticClusterIpi @ 0x1403C8710 (HvlSendSyntheticClusterIpi.c)
 *     KeFlushIoBuffers @ 0x14043D470 (KeFlushIoBuffers.c)
 *     HvlUpdatePerformanceStateCountersForLp @ 0x140445850 (HvlUpdatePerformanceStateCountersForLp.c)
 *     IopTimerDispatch @ 0x140495850 (IopTimerDispatch.c)
 *     KiScanInterruptObjectList @ 0x1406ACB80 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1406ACCB0 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1406ACD50 (KiInterruptSubDispatchNoLock.c)
 *     KiHvInterruptSubDispatch @ 0x1406B1230 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1406B12E0 (KiVmbusInterruptSubDispatch.c)
 *     CmpReplicateKeyToVirtual @ 0x1407DBC0C (CmpReplicateKeyToVirtual.c)
 *     CmpCloseKeyObject @ 0x140841890 (CmpCloseKeyObject.c)
 *     NtQueryKey @ 0x140849760 (NtQueryKey.c)
 *     CmpSecurityMethod @ 0x140852E10 (CmpSecurityMethod.c)
 *     NtDeleteKey @ 0x1408697B0 (NtDeleteKey.c)
 *     NtSetValueKey @ 0x14086A810 (NtSetValueKey.c)
 *     NtEnumerateValueKey @ 0x14090C2D0 (NtEnumerateValueKey.c)
 *     NtSetInformationKey @ 0x1409785A0 (NtSetInformationKey.c)
 *     NtQueryMultipleValueKey @ 0x1409790C0 (NtQueryMultipleValueKey.c)
 *     NtDeleteValueKey @ 0x140979A90 (NtDeleteValueKey.c)
 *     CmOpenKey @ 0x1409E3DB0 (CmOpenKey.c)
 *     CmKtmNotification @ 0x140A048E0 (CmKtmNotification.c)
 *     CmCreateKey @ 0x140A26874 (CmCreateKey.c)
 *     NtFlushKey @ 0x140A74F60 (NtFlushKey.c)
 *     NtEnumerateKey @ 0x140AE3CA0 (NtEnumerateKey.c)
 *     NtQueryValueKey @ 0x140AE41C0 (NtQueryValueKey.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14034EB80 (RtlGetSystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     EtwpGetHostPerfCounter @ 0x1403FF27C (EtwpGetHostPerfCounter.c)
 */

__int64 __fastcall EtwGetKernelTraceTimestamp(LARGE_INTEGER *a1, unsigned int a2)
{
  unsigned __int64 v2; // r11
  LARGE_INTEGER *v3; // rdi
  int v4; // ebx
  unsigned int v5; // r8d
  bool i; // zf
  __int64 v7; // r10
  __int64 v8; // rdx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 result; // rax

  v2 = a2;
  v3 = a1;
  v4 = 0;
  if ( qword_140FCEC80 )
  {
    v5 = *(_DWORD *)(qword_140FCEC80 + 4520);
    for ( i = !_BitScanForward((unsigned int *)&v7, v5); !i; i = !_BitScanForward((unsigned int *)&v7, v5) )
    {
      v5 &= v5 - 1;
      v8 = qword_140FCEC80 + 32LL * (unsigned int)v7 + 4556;
      if ( v8 && ((unsigned int)v2 & *(_DWORD *)(v8 + 4 * (v2 >> 29)) & 0x1FFFFFFF) != 0 )
      {
        a1 = (LARGE_INTEGER *)*(unsigned __int8 *)(qword_140FCEC80 + 2 * v7 + 4505);
        v4 |= 1 << (char)a1;
      }
    }
    if ( (v4 & 2) == 0 )
    {
      PerformanceCounter.QuadPart = 0LL;
      goto LABEL_9;
    }
  }
  else
  {
    LOBYTE(v4) = 30;
  }
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
LABEL_9:
  *v3 = PerformanceCounter;
  if ( (v4 & 4) != 0 )
    result = RtlGetSystemTimePrecise();
  else
    result = 0LL;
  v3[1].QuadPart = result;
  if ( (v4 & 8) != 0 )
  {
    result = __rdtsc();
    v3[2].QuadPart = result;
  }
  else
  {
    v3[2].QuadPart = 0LL;
  }
  if ( (v4 & 0x10) != 0 )
  {
    result = EtwpGetHostPerfCounter(a1);
    v3[3].QuadPart = result;
  }
  else
  {
    v3[3].QuadPart = 0LL;
  }
  return result;
}
