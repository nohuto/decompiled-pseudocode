/*
 * XREFs of RtlSetHeapInformation @ 0x1800024D0
 * Callers:
 *     LdrpInitializeTlsHeap @ 0x1800B8054 (LdrpInitializeTlsHeap.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 *     RtlHeapTrkInitialize @ 0x180116430 (RtlHeapTrkInitialize.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x180143B40 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     RtlSetHeapDebuggingInformation @ 0x18000116C (RtlSetHeapDebuggingInformation.c)
 *     RtlpFlushHeap @ 0x18000123C (RtlpFlushHeap.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x180002714 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlpIsProtectedHeap @ 0x1800027C4 (RtlpIsProtectedHeap.c)
 *     RtlRunOnceExecuteOnce @ 0x180003870 (RtlRunOnceExecuteOnce.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlpEnumProcessHeaps @ 0x18009A690 (RtlpEnumProcessHeaps.c)
 *     RtlpHpStackTraceConfig @ 0x1801201E8 (RtlpHpStackTraceConfig.c)
 */

__int64 __fastcall RtlSetHeapInformation(_DWORD *a1, int a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 *v9; // rax

  switch ( a2 )
  {
    case -2147483646:
      if ( a3 && a4 == 48 )
      {
        result = RtlSetHeapDebuggingInformation((__int64)a1, a3);
        goto LABEL_14;
      }
      return 3221225473LL;
    case 0:
      if ( a4 < 4 )
        return 3221225507LL;
      if ( *(_DWORD *)a3 == 2 )
      {
        if ( a1[4] != -571548178 )
        {
          if ( (a1[28] & 0x75010F63) != 2 || (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
            return 3221225485LL;
          result = RtlpSetRequestedFrontEndHeap();
          goto LABEL_14;
        }
        return 0LL;
      }
      return 3221225473LL;
    case 1:
      RtlpDisableBreakOnFailureCookie = 0;
      return 0LL;
    case 4:
      if ( (RtlpHpHeapFeatures & 1) == 0 )
        return 3221225485LL;
      result = RtlRunOnceExecuteOnce(&RtlpHpTagInitVar, RtlpHpTagRunOnceInit, &RtlpHpTagContext, 0LL);
      if ( (int)result < 0 )
        return result;
      RtlpHpHeapFeatures |= 2u;
      return 0LL;
    case 6:
      if ( a4 < 0x28 )
        return 3221225485LL;
      if ( *(_DWORD *)a3 != 1 )
        return 3221225485LL;
      v6 = *(_QWORD *)(a3 + 8);
      if ( ((v6 + 4095) & 0xFFFFFFFFFFFFF000uLL) != v6 )
        return 3221225485LL;
      if ( a1 )
      {
        if ( a1[4] == -571548178 )
        {
          v7 = 8LL;
        }
        else
        {
          if ( (a1[29] & 0x1000000) != 0 )
            return 0LL;
          v7 = 94LL;
        }
        v9 = (__int64 *)&a1[v7];
      }
      else
      {
        v9 = &qword_1801CFED8;
      }
      v9[1] = *(_QWORD *)(a3 + 16);
      *v9 = v6;
      return 0LL;
    case 3:
      if ( !a3 || a4 < 4 || *(_DWORD *)a3 != 1 || a4 != 8 || *(_DWORD *)(a3 + 4) )
        return 3221225485LL;
      if ( a1 )
      {
        RtlEnterCriticalSection(&RtlpProcessHeapsLock);
        if ( !(unsigned int)RtlpIsProtectedHeap(a1) )
          RtlpFlushHeap(v8);
        RtlLeaveCriticalSection(&RtlpProcessHeapsLock);
      }
      else
      {
        RtlpEnumProcessHeaps(RtlpFlushHeapsCallback, 0LL, 4LL);
      }
      return 0LL;
  }
  if ( a2 != 5 )
  {
    if ( a2 == 7 )
      return RtlpHpSetHeapTag(a1, a3, a4);
    return 0LL;
  }
  if ( !a3 || a4 < 0x10 || *(_WORD *)a3 != 1 || (*(_WORD *)(a3 + 2) & 0xFFFE) != 0 )
    return 3221225485LL;
  result = RtlpHpStackTraceConfig(a3);
LABEL_14:
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
