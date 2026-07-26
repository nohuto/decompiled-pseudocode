/*
 * XREFs of NdisMAllocateSharedMemory @ 0x140077540
 * Callers:
 *     ?ndisMQueuedAllocateSharedHandler@@YAXPEAX@Z @ 0x140092560 (-ndisMQueuedAllocateSharedHandler@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qLq @ 0x140049F00 (WPP_RECORDER_SF_qLq.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __stdcall NdisMAllocateSharedMemory(
        NDIS_HANDLE MiniportAdapterHandle,
        ULONG Length,
        BOOLEAN Cached,
        PVOID *VirtualAddress,
        PNDIS_PHYSICAL_ADDRESS PhysicalAddress)
{
  ULONG_PTR v5; // r14
  ULONG_PTR v7; // rbp
  LARGE_INTEGER PerformanceCounter; // rax
  PNDIS_PHYSICAL_ADDRESS v10; // r12
  LARGE_INTEGER v11; // rbx
  KIRQL CurrentIrql; // al
  ULONG_PTR BugCheckParameter4; // r15
  unsigned int v14; // ecx
  unsigned int v15; // r15d
  __int64 (__fastcall *v16)(__int64, __int64, PNDIS_PHYSICAL_ADDRESS, _QWORD); // r11
  unsigned int *v17; // r13
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rbp
  volatile signed __int64 *v21; // rcx
  int v22; // edx
  LARGE_INTEGER v23; // rax
  ULONG_PTR v24; // rbp
  PNDIS_PHYSICAL_ADDRESS v25; // rcx
  ULONG_PTR v26; // rbp
  __int64 v27; // [rsp+30h] [rbp-48h]
  __int64 v28; // [rsp+80h] [rbp+8h]

  v5 = *((_QWORD *)MiniportAdapterHandle + 63);
  v7 = Length;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0x1Cu,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      (char)MiniportAdapterHandle,
      Length);
  _InterlockedIncrement64(&qword_14011CFA0);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v10 = PhysicalAddress;
  v11 = PerformanceCounter;
  PhysicalAddress->QuadPart = 0LL;
  if ( (*((_DWORD *)MiniportAdapterHandle + 922) & 4) != 0 )
  {
    *VirtualAddress = 0LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v27) = v7;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x15u,
        0x1Du,
        (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
        (char)MiniportAdapterHandle,
        v27);
    }
    if ( v11.QuadPart )
    {
      PhysicalAddress = 0LL;
LABEL_26:
      v23 = KeQueryPerformanceCounter((PLARGE_INTEGER)&PhysicalAddress);
      _InterlockedAdd64(&qword_14011CFA8, 1000000 * (v23.QuadPart - v11.QuadPart) / (unsigned __int64)PhysicalAddress);
      return;
    }
    return;
  }
  if ( !v5 )
    goto LABEL_9;
  v28 = *(_QWORD *)(v5 + 40);
  CurrentIrql = KeGetCurrentIrql();
  BugCheckParameter4 = CurrentIrql;
  if ( CurrentIrql >= 2u )
  {
    DbgPrintEx(
      0x78u,
      0,
      " ***NDIS*** : Miniport %Z - %s\n",
      *((_QWORD *)MiniportAdapterHandle + 482),
      "Allocating Shared Memory at raised IRQL");
    KeBugCheckEx(0x7Cu, 1uLL, (ULONG_PTR)MiniportAdapterHandle, v7, BugCheckParameter4);
  }
  v14 = 72;
  if ( (unsigned int)v7 >= 0x48 )
    v14 = v7;
  if ( v14 + ndisDmaAlignment + 8 < v14 )
  {
LABEL_9:
    *VirtualAddress = 0LL;
    if ( !v11.QuadPart )
      return;
    PhysicalAddress = 0LL;
    goto LABEL_26;
  }
  v15 = (v14 + ndisDmaAlignment - 1) & ~(ndisDmaAlignment - 1);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(&SharedMemoryResource, 1u);
  v16 = *(__int64 (__fastcall **)(__int64, __int64, PNDIS_PHYSICAL_ADDRESS, _QWORD))(*(_QWORD *)(v28 + 8) + 16LL);
  v17 = (unsigned int *)(v5 + 4 * ((Cached != 0) + 30LL));
  if ( *v17 >= v15 )
  {
    v20 = (Cached != 0) + 13LL;
    v18 = (Cached != 0) + 16LL;
  }
  else
  {
    if ( (unsigned __int64)v15 + 8 >= 0x1000 )
    {
      *VirtualAddress = (PVOID)v16(v28, v15, v10, Cached);
      goto LABEL_33;
    }
    v18 = (Cached != 0) + 16LL;
    v19 = v16(v28, 4096LL, (PNDIS_PHYSICAL_ADDRESS)(v5 + 8 * v18), Cached);
    v20 = (Cached != 0) + 13LL;
    *(_QWORD *)(v5 + 8 * v20) = v19;
    if ( !v19 )
    {
      *v17 = 0;
      *VirtualAddress = 0LL;
LABEL_21:
      v21 = (volatile signed __int64 *)&unk_14011CFB8;
      goto LABEL_22;
    }
    *(_QWORD *)(v19 + 4088) = 1752384590LL;
    *v17 = 4088;
  }
  v24 = *(_QWORD *)(v5 + 8 * v20);
  if ( *(_DWORD *)(v24 + 4088) != 1752384590 )
  {
    DbgPrintEx(
      0x78u,
      0,
      " ***NDIS*** : Miniport %Z - %s\n",
      *((_QWORD *)MiniportAdapterHandle + 482),
      "Overwrote past allocated shared memory");
    KeBugCheckEx(0x7Cu, 2uLL, (ULONG_PTR)MiniportAdapterHandle, v24, v5);
  }
  ++*(_DWORD *)(v24 + 4092);
  v25 = PhysicalAddress;
  v26 = v24 - *v17;
  *VirtualAddress = (PVOID)(v26 + 4088);
  v25->QuadPart = *(_QWORD *)(v5 + 8 * v18) + (((_DWORD)v26 + 4088) & 0xFFF);
  *v17 -= v15;
LABEL_33:
  if ( !*VirtualAddress )
    goto LABEL_21;
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 88));
  v21 = (volatile signed __int64 *)&unk_14011CFB0;
LABEL_22:
  _InterlockedAdd64(v21, v15);
  ExReleaseResourceLite(&SharedMemoryResource);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v22,
      0x15u,
      0x1Fu,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      (char)MiniportAdapterHandle,
      v15,
      *VirtualAddress);
  KeLeaveCriticalRegion();
  if ( v11.QuadPart )
  {
    PhysicalAddress = 0LL;
    goto LABEL_26;
  }
}
