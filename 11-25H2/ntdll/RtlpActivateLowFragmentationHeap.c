/*
 * XREFs of RtlpActivateLowFragmentationHeap @ 0x180037C0C
 * Callers:
 *     RtlpPerformHeapMaintenance @ 0x180028880 (RtlpPerformHeapMaintenance.c)
 *     RtlpSetHeapDebuggingInformation @ 0x1801441D0 (RtlpSetHeapDebuggingInformation.c)
 * Callees:
 *     RtlpExtendFrontEndUsageArray @ 0x180037DFC (RtlpExtendFrontEndUsageArray.c)
 *     RtlpCreateLowFragHeap @ 0x1800381FC (RtlpCreateLowFragHeap.c)
 *     RtlpExtendListLookup @ 0x180038450 (RtlpExtendListLookup.c)
 *     RtlGetSuiteMask @ 0x180039850 (RtlGetSuiteMask.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall RtlpActivateLowFragmentationHeap(__int64 a1)
{
  char v2; // al
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  int v5; // edi
  __int64 LowFragHeap; // rsi
  __int64 v7; // rcx
  char v9; // [rsp+20h] [rbp-18h]
  char v10; // [rsp+21h] [rbp-17h]

  v10 = 0;
  v9 = 0;
  if ( (*(_DWORD *)(a1 + 112) & 0x75010F61) != 0
    || (*(_BYTE *)(a1 + 112) & 2) == 0
    || (v2 = 1, (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0) )
  {
    v2 = 0;
  }
  if ( v2 )
  {
    RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
    v9 = 1;
    if ( *(_BYTE *)(a1 + 418) == 2 )
      v3 = *(_QWORD *)(a1 + 408);
    else
      v3 = 0LL;
    if ( v3 )
    {
      v5 = 0;
    }
    else if ( *(_WORD *)(a1 + 416) )
    {
      v5 = -1073741794;
    }
    else
    {
      *(_WORD *)(a1 + 416) = 1;
      v10 = 1;
      v4 = (unsigned __int64)RtlpLargestLfhBlock >> 4;
      LOWORD(v4) = ((unsigned __int64)RtlpLargestLfhBlock >> 4) + 2;
      v5 = RtlpExtendFrontEndUsageArray(a1, v4);
      if ( v5 >= 0 )
      {
        RtlpExtendListLookup(a1, *(_QWORD *)(a1 + 312));
        *(_QWORD *)(a1 + 408) = 0LL;
        *(_BYTE *)(a1 + 418) = 0;
        RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
        LowFragHeap = RtlpCreateLowFragHeap(a1);
        RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
        if ( LowFragHeap )
        {
          *(_QWORD *)(a1 + 408) = LowFragHeap;
          *(_WORD *)(a1 + 418) = 514;
          if ( (RtlGetSuiteMask(v7) & 0x10000) == 0 )
            *(_QWORD *)(a1 + 176) = (unsigned __int64)RtlpLargestLfhBlock >> 4;
        }
        else
        {
          v5 = -1073741801;
        }
        --*(_WORD *)(a1 + 416);
        v10 = 0;
        v9 = 0;
        RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
      }
    }
  }
  else
  {
    v5 = -1073741811;
  }
  if ( v9 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  if ( v10 )
    --*(_WORD *)(a1 + 416);
  return (unsigned int)v5;
}
