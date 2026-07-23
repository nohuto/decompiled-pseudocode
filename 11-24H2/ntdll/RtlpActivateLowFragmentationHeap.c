/*
 * XREFs of RtlpActivateLowFragmentationHeap @ 0x18000BFB0
 * Callers:
 *     RtlpAllocateHeap @ 0x1801159A0 (RtlpAllocateHeap.c)
 *     RtlpSetHeapDebuggingInformation @ 0x180140E90 (RtlpSetHeapDebuggingInformation.c)
 * Callees:
 *     RtlGetSuiteMask @ 0x18000BBA0 (RtlGetSuiteMask.c)
 *     RtlpExtendFrontEndUsageArray @ 0x18000C1A0 (RtlpExtendFrontEndUsageArray.c)
 *     RtlpCreateLowFragHeap @ 0x18000C530 (RtlpCreateLowFragHeap.c)
 *     RtlpExtendListLookup @ 0x18000C7B8 (RtlpExtendListLookup.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall RtlpActivateLowFragmentationHeap(PVOID HeapHandle)
{
  char v2; // al
  __int64 v3; // rax
  int v4; // edi
  __int64 LowFragHeap; // rsi
  char v7; // [rsp+20h] [rbp-18h]
  char v8; // [rsp+21h] [rbp-17h]

  v8 = 0;
  v7 = 0;
  if ( (*((_DWORD *)HeapHandle + 28) & 0x75010F61) != 0
    || (*((_BYTE *)HeapHandle + 112) & 2) == 0
    || (v2 = 1, (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0) )
  {
    v2 = 0;
  }
  if ( v2 )
  {
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
    v7 = 1;
    if ( *((_BYTE *)HeapHandle + 418) == 2 )
      v3 = *((_QWORD *)HeapHandle + 51);
    else
      v3 = 0LL;
    if ( v3 )
    {
      v4 = 0;
    }
    else if ( *((_WORD *)HeapHandle + 208) )
    {
      v4 = -1073741794;
    }
    else
    {
      *((_WORD *)HeapHandle + 208) = 1;
      v8 = 1;
      v4 = RtlpExtendFrontEndUsageArray(HeapHandle);
      if ( v4 >= 0 )
      {
        RtlpExtendListLookup(HeapHandle);
        *((_QWORD *)HeapHandle + 51) = 0LL;
        *((_BYTE *)HeapHandle + 418) = 0;
        RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
        LowFragHeap = RtlpCreateLowFragHeap(HeapHandle);
        RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
        if ( LowFragHeap )
        {
          *((_QWORD *)HeapHandle + 51) = LowFragHeap;
          *((_WORD *)HeapHandle + 209) = 514;
          if ( (RtlGetSuiteMask() & 0x10000) == 0 )
            *((_QWORD *)HeapHandle + 22) = (unsigned __int64)RtlpLargestLfhBlock >> 4;
        }
        else
        {
          v4 = -1073741801;
        }
        --*((_WORD *)HeapHandle + 208);
        v8 = 0;
        v7 = 0;
        RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      }
    }
  }
  else
  {
    v4 = -1073741811;
  }
  if ( v7 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
  if ( v8 )
    --*((_WORD *)HeapHandle + 208);
  return (unsigned int)v4;
}
