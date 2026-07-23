/*
 * XREFs of RtlpCreateLowFragHeap @ 0x1800381FC
 * Callers:
 *     RtlpActivateLowFragmentationHeap @ 0x180037C0C (RtlpActivateLowFragmentationHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlpGetHeapProtection @ 0x180025250 (RtlpGetHeapProtection.c)
 *     RtlpGetLowFragHeapSize @ 0x180038514 (RtlpGetLowFragHeapSize.c)
 *     RtlQueryResourcePolicy @ 0x180038570 (RtlQueryResourcePolicy.c)
 *     RtlpInitializeLowFragHeap @ 0x18003A0F0 (RtlpInitializeLowFragHeap.c)
 *     RtlpLogHeapExtendEvent @ 0x180097F08 (RtlpLogHeapExtendEvent.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x1800B8DC0 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpInitializeLfhRandomDataArray @ 0x1800EDAA4 (RtlpInitializeLfhRandomDataArray.c)
 *     RtlpLogHeapCommit @ 0x1801170C8 (RtlpLogHeapCommit.c)
 *     ZwAllocateVirtualMemory @ 0x180163520 (ZwAllocateVirtualMemory.c)
 */

PVOID __fastcall RtlpCreateLowFragHeap(_DWORD *BaseAddress)
{
  unsigned int v2; // ebx
  ULONG_PTR LowFragHeapSize; // rax
  ULONG Protect; // eax
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // r14
  ULONG HeapProtection; // eax
  __int64 v9; // rcx
  __int64 v11; // rdi
  __int64 v12; // rcx
  char *v13; // rcx
  ULONG_PTR v14[2]; // [rsp+30h] [rbp-10h] BYREF
  int v15; // [rsp+78h] [rbp+38h] BYREF
  PVOID BaseAddressa; // [rsp+80h] [rbp+40h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp+48h] BYREF

  v15 = 0;
  v2 = 0;
  if ( (int)RtlQueryResourcePolicy(0LL, 0LL, &v15, 4LL) >= 0 && v15 <= 10 )
    v2 = 3;
  LowFragHeapSize = RtlpGetLowFragHeapSize(BaseAddress, v2);
  BaseAddressa = 0LL;
  RegionSize = LowFragHeapSize;
  Protect = RtlpGetHeapProtection(BaseAddress, 1);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x2000u, Protect) < 0 )
    return 0LL;
  v5 = RtlpAffinityState;
  if ( (v2 & 1) != 0 )
    v5 = 1;
  v6 = (unsigned int)(v5 - 1);
  v7 = (unsigned int)v6;
  v14[0] = (48 * v6 + 7407) & 0xFFFFFFFFFFFFF000uLL;
  HeapProtection = RtlpGetHeapProtection(BaseAddress, 1);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, v14, 0x1000u, HeapProtection) < 0 )
  {
    RegionSize = 0LL;
    RtlpSecMemFreeVirtualMemory(v9, &BaseAddressa, &RegionSize, 0x8000LL);
    return 0LL;
  }
  v11 = 2147353472LL;
  if ( RtlGetCurrentServiceSessionId() )
    v12 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v12 = 2147353472LL;
  if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v11 = (__int64)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapExtendEvent(
      (int)BaseAddress,
      (int)BaseAddressa,
      v14[0],
      16 * *((_QWORD *)BaseAddress + 24),
      (HANDLE)*(unsigned __int8 *)v11);
    RtlpLogHeapCommit(BaseAddress, BaseAddressa, v14[0], 9LL);
  }
  RtlpInitializeLowFragHeap(BaseAddress, v2, BaseAddressa);
  *(_QWORD *)(*((_QWORD *)BaseAddressa + 3) + 568LL) += RegionSize;
  *(_QWORD *)(*((_QWORD *)BaseAddressa + 3) + 576LL) += v14[0];
  *((_QWORD *)BaseAddressa + 6) = (char *)BaseAddressa + RegionSize;
  *((_QWORD *)BaseAddressa + 5) = (char *)BaseAddressa + v14[0];
  v13 = (char *)BaseAddressa + 48 * v7 + 3312;
  *((_QWORD *)BaseAddressa + 4) = v13;
  if ( (RtlpLowFragHeapGlobalFlags & 3) == 0 )
  {
    RtlpLowFragHeapGlobalFlags |= 1u;
    RtlpInitializeLfhRandomDataArray(v13);
  }
  *((_DWORD *)BaseAddressa + 168) = v2;
  return BaseAddressa;
}
