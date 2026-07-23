/*
 * XREFs of RtlpCreateLowFragHeap @ 0x18000C530
 * Callers:
 *     RtlpActivateLowFragmentationHeap @ 0x18000BFB0 (RtlpActivateLowFragmentationHeap.c)
 * Callees:
 *     RtlpLogHeapCommit @ 0x1800235BC (RtlpLogHeapCommit.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180028580 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpGetHeapProtection @ 0x1800288C0 (RtlpGetHeapProtection.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     RtlpInitializeLowFragHeap @ 0x1800E5D10 (RtlpInitializeLowFragHeap.c)
 *     RtlpInitializeLfhRandomDataArray @ 0x1800E83F4 (RtlpInitializeLfhRandomDataArray.c)
 *     RtlpLogHeapExtendEvent @ 0x1800F2038 (RtlpLogHeapExtendEvent.c)
 *     RtlpQueryPhysicalMemoryPolicy @ 0x1801191A8 (RtlpQueryPhysicalMemoryPolicy.c)
 *     ZwAllocateVirtualMemory @ 0x180160350 (ZwAllocateVirtualMemory.c)
 */

PVOID __fastcall RtlpCreateLowFragHeap(_DWORD *BaseAddress)
{
  unsigned int v2; // ebx
  int v3; // ecx
  int v4; // esi
  ULONG_PTR v5; // rcx
  ULONG Protect; // eax
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // r15
  ULONG HeapProtection; // eax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rcx
  int v15; // [rsp+70h] [rbp+40h] BYREF
  PVOID BaseAddressa; // [rsp+78h] [rbp+48h] BYREF
  ULONG_PTR RegionSize; // [rsp+80h] [rbp+50h] BYREF
  ULONG_PTR v18; // [rsp+88h] [rbp+58h] BYREF

  v15 = 0;
  v2 = 0;
  if ( (int)RtlpQueryPhysicalMemoryPolicy(&v15) >= 0 && v15 <= 10 )
    v2 = 3;
  if ( (BaseAddress[28] & 0x75010F63) != 2 || (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
  {
    v5 = 0LL;
    v4 = v2 & 1;
  }
  else
  {
    v3 = RtlpAffinityState;
    v4 = v2 & 1;
    if ( (v2 & 1) != 0 )
      v3 = 1;
    v5 = 48 * ((unsigned int)(v3 - 1) + 69LL + 4LL * (unsigned int)(129 * v3));
  }
  BaseAddressa = 0LL;
  RegionSize = v5;
  Protect = RtlpGetHeapProtection(BaseAddress);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x2000u, Protect) < 0 )
    return 0LL;
  v8 = RtlpAffinityState;
  if ( v4 )
    v8 = 1;
  v9 = (unsigned int)(v8 - 1);
  v10 = (unsigned int)v9;
  v18 = (48 * v9 + 7407) & 0xFFFFFFFFFFFFF000uLL;
  HeapProtection = RtlpGetHeapProtection(BaseAddress);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &v18, 0x1000u, HeapProtection) < 0 )
  {
    RegionSize = 0LL;
    RtlpSecMemFreeVirtualMemory(v12, &BaseAddressa, &RegionSize, 0x8000LL);
    return 0LL;
  }
  v13 = 2147353472LL;
  if ( RtlGetCurrentServiceSessionId() )
    v14 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v14 = 2147353472LL;
  if ( *(_BYTE *)v14 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v13 = (__int64)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapExtendEvent(
      (int)BaseAddress,
      (int)BaseAddressa,
      v18,
      16 * *((_QWORD *)BaseAddress + 24),
      (HANDLE)*(unsigned __int8 *)v13);
    RtlpLogHeapCommit(BaseAddress, BaseAddressa, v18, 9LL);
  }
  RtlpInitializeLowFragHeap(BaseAddress, v2, BaseAddressa);
  *(_QWORD *)(*((_QWORD *)BaseAddressa + 3) + 568LL) += RegionSize;
  *(_QWORD *)(*((_QWORD *)BaseAddressa + 3) + 576LL) += v18;
  *((_QWORD *)BaseAddressa + 6) = (char *)BaseAddressa + RegionSize;
  *((_QWORD *)BaseAddressa + 5) = (char *)BaseAddressa + v18;
  *((_QWORD *)BaseAddressa + 4) = (char *)BaseAddressa + 48 * v10 + 3312;
  if ( (RtlpLowFragHeapGlobalFlags & 3) == 0 )
  {
    RtlpLowFragHeapGlobalFlags |= 1u;
    RtlpInitializeLfhRandomDataArray();
  }
  *((_DWORD *)BaseAddressa + 168) = v2;
  return BaseAddressa;
}
