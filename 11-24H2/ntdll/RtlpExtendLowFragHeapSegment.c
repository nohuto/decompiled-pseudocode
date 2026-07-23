/*
 * XREFs of RtlpExtendLowFragHeapSegment @ 0x1800E8614
 * Callers:
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x1800E8454 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpInitializeSegmentInfoForBucket @ 0x1800E85B8 (RtlpInitializeSegmentInfoForBucket.c)
 * Callees:
 *     RtlpLogHeapCommit @ 0x1800235BC (RtlpLogHeapCommit.c)
 *     RtlpGetHeapProtection @ 0x1800288C0 (RtlpGetHeapProtection.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     RtlpLogHeapExtendEvent @ 0x1800F2038 (RtlpLogHeapExtendEvent.c)
 *     ZwAllocateVirtualMemory @ 0x180160350 (ZwAllocateVirtualMemory.c)
 */

NTSTATUS __fastcall RtlpExtendLowFragHeapSegment(__int64 *a1, __int64 a2, _QWORD *a3)
{
  PVOID *v3; // rsi
  unsigned __int64 v4; // rbp
  _DWORD *v7; // rcx
  ULONG Protect; // eax
  NTSTATUS result; // eax
  __int64 v10; // rdi
  __int64 v11; // rcx
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF

  v3 = (PVOID *)(a1 + 5);
  v4 = a2 + a1[4];
  if ( v4 > a1[5] )
  {
    v7 = (_DWORD *)a1[3];
    RegionSize = (v4 - (_QWORD)*v3 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    Protect = RtlpGetHeapProtection(v7, 1);
    result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v3, 0LL, &RegionSize, 0x1000u, Protect);
    if ( result < 0 )
    {
      *a3 = 0LL;
      return result;
    }
    *(_QWORD *)(a1[3] + 576) += RegionSize;
    v10 = 2147353472LL;
    if ( RtlGetCurrentServiceSessionId() )
      v11 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v11 = 2147353472LL;
    if ( *(_BYTE *)v11 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v10 = (__int64)NtCurrentPeb()->SharedData + 550;
      RtlpLogHeapExtendEvent(
        a1[3],
        (int)*v3,
        RegionSize,
        16 * *(_QWORD *)(a1[3] + 192),
        (HANDLE)*(unsigned __int8 *)v10);
      RtlpLogHeapCommit(a1[3], (__int64)*v3, RegionSize, 9);
    }
    *v3 = (char *)*v3 + RegionSize;
  }
  *a3 = a1[4];
  result = 0;
  a1[4] = v4;
  return result;
}
