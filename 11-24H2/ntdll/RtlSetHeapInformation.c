/*
 * XREFs of RtlSetHeapInformation @ 0x180096E70
 * Callers:
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     LdrpInitializeTlsHeap @ 0x18008EE94 (LdrpInitializeTlsHeap.c)
 *     RtlHeapTrkInitialize @ 0x1801134A0 (RtlHeapTrkInitialize.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x180142450 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlpEnumProcessHeaps @ 0x1800469B0 (RtlpEnumProcessHeaps.c)
 *     RtlSetHeapDebuggingInformation @ 0x180095C6C (RtlSetHeapDebuggingInformation.c)
 *     RtlpFlushHeap @ 0x180095D3C (RtlpFlushHeap.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x1800970B4 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlpIsProtectedHeap @ 0x180097164 (RtlpIsProtectedHeap.c)
 *     RtlRunOnceExecuteOnce @ 0x180098200 (RtlRunOnceExecuteOnce.c)
 *     RtlpHpStackTraceConfig @ 0x18011E918 (RtlpHpStackTraceConfig.c)
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
        v9 = &qword_1801CDED8;
      }
      v9[1] = *(_QWORD *)(a3 + 16);
      *v9 = v6;
      return 0LL;
    case 3:
      if ( !a3 || a4 < 4 || *(_DWORD *)a3 != 1 || a4 != 8 || *(_DWORD *)(a3 + 4) )
        return 3221225485LL;
      if ( a1 )
      {
        RtlEnterCriticalSection((__int64)&RtlpProcessHeapsLock);
        if ( !(unsigned int)RtlpIsProtectedHeap(a1) )
          RtlpFlushHeap(v8);
        RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsLock);
      }
      else
      {
        RtlpEnumProcessHeaps((__int64 (__fastcall *)(__int64, __int64, __int64 *))RtlpFlushHeapsCallback, 0LL, 4);
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
