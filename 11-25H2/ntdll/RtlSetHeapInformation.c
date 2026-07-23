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

NTSTATUS __cdecl RtlSetHeapInformation(
        PVOID HeapHandle,
        HEAP_INFORMATION_CLASS HeapInformationClass,
        PVOID HeapInformation,
        SIZE_T HeapInformationLength)
{
  NTSTATUS result; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 *v9; // rax

  switch ( HeapInformationClass )
  {
    case -2147483646:
      if ( HeapInformation && HeapInformationLength == 48 )
      {
        result = RtlSetHeapDebuggingInformation((__int64)HeapHandle, (__int64)HeapInformation);
        goto LABEL_14;
      }
      return -1073741823;
    case 0:
      if ( HeapInformationLength < 4 )
        return -1073741789;
      if ( *(_DWORD *)HeapInformation == 2 )
      {
        if ( *((_DWORD *)HeapHandle + 4) != -571548178 )
        {
          if ( (*((_DWORD *)HeapHandle + 28) & 0x75010F63) != 2 || (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
            return -1073741811;
          result = RtlpSetRequestedFrontEndHeap();
          goto LABEL_14;
        }
        return 0;
      }
      return -1073741823;
    case 1:
      RtlpDisableBreakOnFailureCookie = 0;
      return 0;
    case 4:
      if ( (RtlpHpHeapFeatures & 1) == 0 )
        return -1073741811;
      result = RtlRunOnceExecuteOnce(&RtlpHpTagInitVar, RtlpHpTagRunOnceInit, &RtlpHpTagContext, 0LL);
      if ( result < 0 )
        return result;
      RtlpHpHeapFeatures |= 2u;
      return 0;
    case 6:
      if ( HeapInformationLength < 0x28 )
        return -1073741811;
      if ( *(_DWORD *)HeapInformation != 1 )
        return -1073741811;
      v6 = *((_QWORD *)HeapInformation + 1);
      if ( ((v6 + 4095) & 0xFFFFFFFFFFFFF000uLL) != v6 )
        return -1073741811;
      if ( HeapHandle )
      {
        if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
        {
          v7 = 32LL;
        }
        else
        {
          if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
            return 0;
          v7 = 376LL;
        }
        v9 = (__int64 *)((char *)HeapHandle + v7);
      }
      else
      {
        v9 = &qword_1801CFED8;
      }
      v9[1] = *((_QWORD *)HeapInformation + 2);
      *v9 = v6;
      return 0;
    case 3:
      if ( !HeapInformation
        || HeapInformationLength < 4
        || *(_DWORD *)HeapInformation != 1
        || HeapInformationLength != 8
        || *((_DWORD *)HeapInformation + 1) )
      {
        return -1073741811;
      }
      if ( HeapHandle )
      {
        RtlEnterCriticalSection(&RtlpProcessHeapsLock);
        if ( !(unsigned int)RtlpIsProtectedHeap(HeapHandle) )
          RtlpFlushHeap(v8);
        RtlLeaveCriticalSection(&RtlpProcessHeapsLock);
      }
      else
      {
        RtlpEnumProcessHeaps(RtlpFlushHeapsCallback, 0LL, 4LL);
      }
      return 0;
  }
  if ( HeapInformationClass != 5 )
  {
    if ( HeapInformationClass == HeapTag )
      return RtlpHpSetHeapTag(HeapHandle, HeapInformation, HeapInformationLength);
    return 0;
  }
  if ( !HeapInformation
    || HeapInformationLength < 0x10
    || *(_WORD *)HeapInformation != 1
    || (*((_WORD *)HeapInformation + 1) & 0xFFFE) != 0 )
  {
    return -1073741811;
  }
  result = RtlpHpStackTraceConfig(HeapInformation);
LABEL_14:
  if ( result >= 0 )
    return 0;
  return result;
}
