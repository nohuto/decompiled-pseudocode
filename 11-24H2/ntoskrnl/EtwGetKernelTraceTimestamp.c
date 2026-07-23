/*
 * XREFs of EtwGetKernelTraceTimestamp @ 0x1403AEC60
 * Callers:
 *     KiIpiSendRequest @ 0x1402A24D0 (KiIpiSendRequest.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlSendSyntheticClusterIpi @ 0x1403A4B40 (HvlSendSyntheticClusterIpi.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1403AE8E8 (KiInvokeInterruptServiceRoutine.c)
 *     KeDisableTimer2 @ 0x1403AED68 (KeDisableTimer2.c)
 *     KiFinalizeTimer2Disablement @ 0x1403AF288 (KiFinalizeTimer2Disablement.c)
 *     KiExpireTimer2 @ 0x1403AF650 (KiExpireTimer2.c)
 *     KeFlushIoBuffers @ 0x140431710 (KeFlushIoBuffers.c)
 *     HvlUpdatePerformanceStateCountersForLp @ 0x14043DA00 (HvlUpdatePerformanceStateCountersForLp.c)
 *     IopTimerDispatch @ 0x140490110 (IopTimerDispatch.c)
 *     KiScanInterruptObjectList @ 0x1406ADB20 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1406ADC50 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1406ADCF0 (KiInterruptSubDispatchNoLock.c)
 *     KiHvInterruptSubDispatch @ 0x1406B21D0 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1406B2280 (KiVmbusInterruptSubDispatch.c)
 *     CmpReplicateKeyToVirtual @ 0x1407DC15C (CmpReplicateKeyToVirtual.c)
 *     CmpCloseKeyObject @ 0x14083DB50 (CmpCloseKeyObject.c)
 *     NtQueryKey @ 0x140845A20 (NtQueryKey.c)
 *     CmpSecurityMethod @ 0x14084F0D0 (CmpSecurityMethod.c)
 *     NtDeleteKey @ 0x14086DAE0 (NtDeleteKey.c)
 *     NtSetValueKey @ 0x14086EB40 (NtSetValueKey.c)
 *     NtEnumerateValueKey @ 0x1408E39F0 (NtEnumerateValueKey.c)
 *     NtSetInformationKey @ 0x140960DB0 (NtSetInformationKey.c)
 *     NtQueryMultipleValueKey @ 0x1409618D0 (NtQueryMultipleValueKey.c)
 *     NtDeleteValueKey @ 0x1409622A0 (NtDeleteValueKey.c)
 *     CmOpenKey @ 0x1409DE810 (CmOpenKey.c)
 *     CmKtmNotification @ 0x140A00E10 (CmKtmNotification.c)
 *     CmCreateKey @ 0x140A1B2F4 (CmCreateKey.c)
 *     NtFlushKey @ 0x140A6F280 (NtFlushKey.c)
 *     NtEnumerateKey @ 0x140AE5580 (NtEnumerateKey.c)
 *     NtQueryValueKey @ 0x140AE5AA0 (NtQueryValueKey.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14036D060 (RtlGetSystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     EtwpGetHostPerfCounter @ 0x1403F98CC (EtwpGetHostPerfCounter.c)
 */

LARGE_INTEGER __fastcall EtwGetKernelTraceTimestamp(LARGE_INTEGER *a1, unsigned int a2)
{
  unsigned __int64 v2; // r11
  LARGE_INTEGER *v3; // rdi
  int v4; // ebx
  unsigned int v5; // r8d
  bool i; // zf
  __int64 v7; // r10
  __int64 v8; // rdx
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER result; // rax

  v2 = a2;
  v3 = a1;
  v4 = 0;
  if ( qword_140FCFC80 )
  {
    v5 = *(_DWORD *)(qword_140FCFC80 + 4520);
    for ( i = !_BitScanForward((unsigned int *)&v7, v5); !i; i = !_BitScanForward((unsigned int *)&v7, v5) )
    {
      v5 &= v5 - 1;
      v8 = qword_140FCFC80 + 32LL * (unsigned int)v7 + 4556;
      if ( v8 && ((unsigned int)v2 & *(_DWORD *)(v8 + 4 * (v2 >> 29)) & 0x1FFFFFFF) != 0 )
      {
        a1 = (LARGE_INTEGER *)*(unsigned __int8 *)(qword_140FCFC80 + 2 * v7 + 4505);
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
    result.QuadPart = 0LL;
  v3[1] = result;
  if ( (v4 & 8) != 0 )
  {
    result.QuadPart = __rdtsc();
    v3[2] = result;
  }
  else
  {
    v3[2].QuadPart = 0LL;
  }
  if ( (v4 & 0x10) != 0 )
  {
    result.QuadPart = EtwpGetHostPerfCounter(a1);
    v3[3] = result;
  }
  else
  {
    v3[3].QuadPart = 0LL;
  }
  return result;
}
