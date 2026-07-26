/*
 * XREFs of NdisMAllocateSharedMemory @ 0x140026600
 * Callers:
 *     ?ndisMQueuedAllocateSharedHandler@@YAXPEAX@Z @ 0x14009C740 (-ndisMQueuedAllocateSharedHandler@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     ?Stop@NdisStatisticalStopwatch@@QEAA_KXZ @ 0x140017350 (-Stop@NdisStatisticalStopwatch@@QEAA_KXZ.c)
 *     WPP_RECORDER_SF_qLq @ 0x140026A00 (WPP_RECORDER_SF_qLq.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __stdcall NdisMAllocateSharedMemory(
        NDIS_HANDLE MiniportAdapterHandle,
        ULONG Length,
        BOOLEAN Cached,
        PVOID *VirtualAddress,
        PNDIS_PHYSICAL_ADDRESS PhysicalAddress)
{
  ULONG_PTR BugCheckParameter4; // rdi
  ULONG_PTR v8; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  PNDIS_PHYSICAL_ADDRESS v11; // r14
  LARGE_INTEGER v12; // r15
  __int64 v13; // r13
  KIRQL CurrentIrql; // al
  ULONG_PTR v15; // rbp
  unsigned int v16; // ecx
  unsigned int v17; // ebx
  unsigned int *v18; // r15
  __int64 v19; // rax
  __int64 v20; // rbp
  __int64 v21; // rcx
  ULONG_PTR v22; // rbp
  PVOID *v23; // rbp
  volatile signed __int64 *v24; // rcx
  int v25; // edx
  LARGE_INTEGER v26; // rax
  __int64 v27; // rax
  __int64 v28; // [rsp+30h] [rbp-58h]
  int v29; // [rsp+40h] [rbp-48h] BYREF
  LARGE_INTEGER v30; // [rsp+48h] [rbp-40h]

  BugCheckParameter4 = *((_QWORD *)MiniportAdapterHandle + 63);
  v8 = Length;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0x1Cu,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      (char)MiniportAdapterHandle,
      Length);
  _InterlockedIncrement64(&qword_140127050);
  v29 = 9;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v11 = PhysicalAddress;
  v12 = PerformanceCounter;
  v30 = PerformanceCounter;
  PhysicalAddress->QuadPart = 0LL;
  if ( (*((_DWORD *)MiniportAdapterHandle + 922) & 4) != 0 )
  {
    *VirtualAddress = 0LL;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v28) = v8;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x15u,
        0x1Du,
        (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
        (char)MiniportAdapterHandle,
        v28);
    }
  }
  else if ( BugCheckParameter4 )
  {
    v13 = *(_QWORD *)(BugCheckParameter4 + 40);
    CurrentIrql = KeGetCurrentIrql();
    v15 = CurrentIrql;
    if ( CurrentIrql >= 2u )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        *((_QWORD *)MiniportAdapterHandle + 482),
        "Allocating Shared Memory at raised IRQL");
      KeBugCheckEx(0x7Cu, 1uLL, (ULONG_PTR)MiniportAdapterHandle, v8, v15);
    }
    v16 = 72;
    if ( (unsigned int)v8 >= 0x48 )
      v16 = v8;
    if ( v16 + ndisDmaAlignment + 8 >= v16 )
    {
      v17 = (v16 + ndisDmaAlignment - 1) & ~(ndisDmaAlignment - 1);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(&SharedMemoryResource, 1u);
      v18 = (unsigned int *)(BugCheckParameter4 + 4 * ((Cached != 0) + 30LL));
      if ( *v18 >= v17 )
      {
        v20 = (Cached != 0) + 13LL;
        v21 = (Cached != 0) + 16LL;
      }
      else
      {
        if ( (unsigned __int64)v17 + 8 >= 0x1000 )
        {
          v23 = VirtualAddress;
          *VirtualAddress = (PVOID)(*(__int64 (__fastcall **)(__int64, _QWORD, PNDIS_PHYSICAL_ADDRESS, _QWORD))(*(_QWORD *)(v13 + 8) + 16LL))(
                                     v13,
                                     v17,
                                     v11,
                                     Cached);
          goto LABEL_16;
        }
        v19 = (*(__int64 (__fastcall **)(__int64, __int64, ULONG_PTR, _QWORD))(*(_QWORD *)(v13 + 8) + 16LL))(
                v13,
                4096LL,
                BugCheckParameter4 + 8 * ((Cached != 0) + 16LL),
                Cached);
        v20 = (Cached != 0) + 13LL;
        *(_QWORD *)(BugCheckParameter4 + 8 * v20) = v19;
        if ( !v19 )
        {
          v23 = VirtualAddress;
          *v18 = 0;
          *VirtualAddress = 0LL;
          goto LABEL_23;
        }
        v21 = (Cached != 0) + 16LL;
        *(_QWORD *)(v19 + 4088) = 1752384590LL;
        *v18 = 4088;
      }
      v22 = *(_QWORD *)(BugCheckParameter4 + 8 * v20);
      if ( *(_DWORD *)(v22 + 4088) != 1752384590 )
      {
        DbgPrintEx(
          0x78u,
          0,
          " ***NDIS*** : Miniport %Z - %s\n",
          *((_QWORD *)MiniportAdapterHandle + 482),
          "Overwrote past allocated shared memory");
        KeBugCheckEx(0x7Cu, 2uLL, (ULONG_PTR)MiniportAdapterHandle, v22, BugCheckParameter4);
      }
      ++*(_DWORD *)(v22 + 4092);
      v27 = v22 - *v18 + 4088;
      v23 = VirtualAddress;
      *VirtualAddress = (PVOID)v27;
      v11->QuadPart = *(_QWORD *)(BugCheckParameter4 + 8 * v21) + (v27 & 0xFFF);
      *v18 -= v17;
LABEL_16:
      if ( *v23 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter4 + 88));
        v24 = (volatile signed __int64 *)&unk_140127060;
LABEL_18:
        _InterlockedAdd64(v24, v17);
        ExReleaseResourceLite(&SharedMemoryResource);
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qLq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v25,
            21,
            31,
            (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
            (char)MiniportAdapterHandle,
            v17,
            (char)*v23);
        KeLeaveCriticalRegion();
        if ( v30.QuadPart )
        {
          PhysicalAddress = 0LL;
          v26 = KeQueryPerformanceCounter((PLARGE_INTEGER)&PhysicalAddress);
          _InterlockedAdd64(
            &qword_140127058,
            1000000 * (v26.QuadPart - v30.QuadPart) / (unsigned __int64)PhysicalAddress);
        }
        return;
      }
LABEL_23:
      v24 = (volatile signed __int64 *)&unk_140127068;
      goto LABEL_18;
    }
    *VirtualAddress = 0LL;
  }
  else
  {
    *VirtualAddress = 0LL;
  }
  if ( v12.QuadPart )
    NdisStatisticalStopwatch::Stop((NdisStatisticalStopwatch *)&v29);
}
