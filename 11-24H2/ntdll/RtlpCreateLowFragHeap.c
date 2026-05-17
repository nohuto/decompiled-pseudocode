/*
 * XREFs of RtlpCreateLowFragHeap @ 0x1800A93BC
 * Callers:
 *     RtlpActivateLowFragmentationHeap @ 0x1800A8DCC (RtlpActivateLowFragmentationHeap.c)
 * Callees:
 *     RtlpLogHeapExtendEvent @ 0x180044228 (RtlpLogHeapExtendEvent.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18008FA40 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpGetHeapProtection @ 0x18009C570 (RtlpGetHeapProtection.c)
 *     RtlpGetLowFragHeapSize @ 0x1800A96D4 (RtlpGetLowFragHeapSize.c)
 *     RtlQueryResourcePolicy @ 0x1800A9730 (RtlQueryResourcePolicy.c)
 *     RtlpInitializeLowFragHeap @ 0x1800AB2B0 (RtlpInitializeLowFragHeap.c)
 *     RtlpInitializeLfhRandomDataArray @ 0x1800ED424 (RtlpInitializeLfhRandomDataArray.c)
 *     RtlpLogHeapCommit @ 0x180114118 (RtlpLogHeapCommit.c)
 *     ZwAllocateVirtualMemory @ 0x180161F90 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall RtlpCreateLowFragHeap(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 LowFragHeapSize; // rax
  int HeapProtection; // eax
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // r14
  int v8; // eax
  __int64 v9; // rcx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned __int64 v14; // [rsp+30h] [rbp-10h] BYREF
  int v15; // [rsp+78h] [rbp+38h] BYREF
  __int64 v16; // [rsp+80h] [rbp+40h] BYREF
  __int64 v17; // [rsp+88h] [rbp+48h] BYREF

  v15 = 0;
  v2 = 0;
  if ( (int)RtlQueryResourcePolicy(0LL, 0LL, &v15, 4LL) >= 0 && v15 <= 10 )
    v2 = 3;
  LowFragHeapSize = RtlpGetLowFragHeapSize(a1, v2);
  v16 = 0LL;
  v17 = LowFragHeapSize;
  HeapProtection = RtlpGetHeapProtection(a1, 1);
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v16, 0LL, &v17, 0x2000, HeapProtection) < 0 )
    return 0LL;
  v5 = RtlpAffinityState[0];
  if ( (v2 & 1) != 0 )
    v5 = 1;
  v6 = (unsigned int)(v5 - 1);
  v7 = (unsigned int)v6;
  v14 = (48 * v6 + 7407) & 0xFFFFFFFFFFFFF000uLL;
  v8 = RtlpGetHeapProtection(a1, 1);
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v16, 0LL, &v14, 4096, v8) < 0 )
  {
    v17 = 0LL;
    RtlpSecMemFreeVirtualMemory(v9, &v16, &v17, 0x8000LL);
    return 0LL;
  }
  v11 = 2147353472LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v12 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v12 = 2147353472LL;
  if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v11 = (__int64)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapExtendEvent(a1, v16, v14, 16LL * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v11);
    RtlpLogHeapCommit(a1, v16, v14, 9LL);
  }
  RtlpInitializeLowFragHeap(a1, v2, v16);
  *(_QWORD *)(*(_QWORD *)(v16 + 24) + 568LL) += v17;
  *(_QWORD *)(*(_QWORD *)(v16 + 24) + 576LL) += v14;
  *(_QWORD *)(v16 + 48) = v16 + v17;
  *(_QWORD *)(v16 + 40) = v16 + v14;
  v13 = v16 + 48 * (v7 + 69);
  *(_QWORD *)(v16 + 32) = v13;
  if ( (RtlpLowFragHeapGlobalFlags & 3) == 0 )
  {
    RtlpLowFragHeapGlobalFlags |= 1u;
    RtlpInitializeLfhRandomDataArray(v13);
  }
  *(_DWORD *)(v16 + 672) = v2;
  return v16;
}
