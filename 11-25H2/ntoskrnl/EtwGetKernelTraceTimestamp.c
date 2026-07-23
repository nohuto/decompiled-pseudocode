/*
 * XREFs of EtwGetKernelTraceTimestamp @ 0x14031CDD0
 * Callers:
 *     KiInvokeInterruptServiceRoutine @ 0x140206C50 (KiInvokeInterruptServiceRoutine.c)
 *     HvlSendSyntheticClusterIpi @ 0x140267530 (HvlSendSyntheticClusterIpi.c)
 *     HvcallInitiateHypercall @ 0x14026D230 (HvcallInitiateHypercall.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x14027015C (HvlpFastFlushAddressSpaceTb.c)
 *     KiIpiSendRequest @ 0x14032D550 (KiIpiSendRequest.c)
 *     KeDisableTimer2 @ 0x14036F62C (KeDisableTimer2.c)
 *     KiFinalizeTimer2Disablement @ 0x14036FB48 (KiFinalizeTimer2Disablement.c)
 *     KiExpireTimer2 @ 0x140370160 (KiExpireTimer2.c)
 *     KeFlushIoBuffers @ 0x14043D260 (KeFlushIoBuffers.c)
 *     HvlUpdatePerformanceStateCountersForLp @ 0x140448400 (HvlUpdatePerformanceStateCountersForLp.c)
 *     IopTimerDispatch @ 0x1404963F0 (IopTimerDispatch.c)
 *     KiScanInterruptObjectList @ 0x1406A18B0 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1406A19E0 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1406A1A80 (KiInterruptSubDispatchNoLock.c)
 *     KiHvInterruptSubDispatch @ 0x1406A5F60 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1406A6010 (KiVmbusInterruptSubDispatch.c)
 *     CmpReplicateKeyToVirtual @ 0x1407CC44C (CmpReplicateKeyToVirtual.c)
 *     NtEnumerateValueKey @ 0x140840320 (NtEnumerateValueKey.c)
 *     CmpCloseKeyObject @ 0x140845600 (CmpCloseKeyObject.c)
 *     NtQueryKey @ 0x14084D9C0 (NtQueryKey.c)
 *     CmpSecurityMethod @ 0x140856B80 (CmpSecurityMethod.c)
 *     NtSetInformationKey @ 0x140862E30 (NtSetInformationKey.c)
 *     CmKtmNotification @ 0x140865D90 (CmKtmNotification.c)
 *     NtSetValueKey @ 0x140869680 (NtSetValueKey.c)
 *     NtDeleteValueKey @ 0x14086CE00 (NtDeleteValueKey.c)
 *     NtQueryMultipleValueKey @ 0x140995DD0 (NtQueryMultipleValueKey.c)
 *     NtDeleteKey @ 0x140A0A070 (NtDeleteKey.c)
 *     CmOpenKey @ 0x140A31750 (CmOpenKey.c)
 *     NtFlushKey @ 0x140A73170 (NtFlushKey.c)
 *     CmCreateKey @ 0x140AD24C0 (CmCreateKey.c)
 *     NtEnumerateKey @ 0x140AD2D00 (NtEnumerateKey.c)
 *     NtQueryValueKey @ 0x140AD3580 (NtQueryValueKey.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14031AAC0 (RtlGetSystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     EtwpGetHostPerfCounter @ 0x1403F6D7C (EtwpGetHostPerfCounter.c)
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
  if ( qword_140FCED00 )
  {
    v5 = *(_DWORD *)(qword_140FCED00 + 4248);
    for ( i = !_BitScanForward((unsigned int *)&v7, v5); !i; i = !_BitScanForward((unsigned int *)&v7, v5) )
    {
      v5 &= v5 - 1;
      v8 = qword_140FCED00 + 32LL * (unsigned int)v7 + 4284;
      if ( v8 && ((unsigned int)v2 & *(_DWORD *)(v8 + 4 * (v2 >> 29)) & 0x1FFFFFFF) != 0 )
      {
        a1 = (LARGE_INTEGER *)*(unsigned __int8 *)(qword_140FCED00 + 2 * v7 + 4233);
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
