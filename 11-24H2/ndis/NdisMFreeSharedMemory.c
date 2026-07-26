/*
 * XREFs of NdisMFreeSharedMemory @ 0x140049A70
 * Callers:
 *     <none>
 * Callees:
 *     ndisFreeSharedMemoryInternal @ 0x140049C20 (ndisFreeSharedMemoryInternal.c)
 *     WPP_RECORDER_SF_qLq @ 0x140049F00 (WPP_RECORDER_SF_qLq.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14004A050 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?Stop@NdisStatisticalStopwatch@@QEAA_KXZ @ 0x14004A120 (-Stop@NdisStatisticalStopwatch@@QEAA_KXZ.c)
 */

void __stdcall NdisMFreeSharedMemory(
        NDIS_HANDLE MiniportAdapterHandle,
        ULONG Length,
        BOOLEAN Cached,
        PVOID VirtualAddress,
        NDIS_PHYSICAL_ADDRESS PhysicalAddress)
{
  unsigned __int64 v6; // rdi
  LARGE_INTEGER PerformanceCounter; // rbx
  int v10; // edx
  int v11; // [rsp+40h] [rbp-28h] BYREF
  LARGE_INTEGER v12; // [rsp+48h] [rbp-20h]

  v6 = Length;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      Length,
      21,
      34,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      (char)MiniportAdapterHandle,
      Length,
      (char)VirtualAddress);
  _InterlockedIncrement64(&qword_14011CFC0);
  v11 = 13;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v12 = PerformanceCounter;
  _InterlockedAdd64(&qword_14011CFD0, v6);
  if ( KeGetCurrentIrql() )
  {
    ndisReferenceMiniportNoCheck((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, MPREF_RES_FREESHM);
    *((NDIS_PHYSICAL_ADDRESS *)VirtualAddress + 8) = PhysicalAddress;
    *((_QWORD *)VirtualAddress + 4) = MiniportAdapterHandle;
    *((_DWORD *)VirtualAddress + 10) = v6;
    *((_BYTE *)VirtualAddress + 44) = Cached;
    *((_QWORD *)VirtualAddress + 6) = VirtualAddress;
    *((_QWORD *)VirtualAddress + 2) = ndisMQueuedFreeSharedHandler;
    *((_QWORD *)VirtualAddress + 3) = VirtualAddress;
    *(_QWORD *)VirtualAddress = 0LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)VirtualAddress, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
  }
  else
  {
    ndisFreeSharedMemoryInternal((ULONG_PTR)MiniportAdapterHandle, PhysicalAddress.QuadPart);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      21,
      35,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      (char)MiniportAdapterHandle,
      v6,
      (char)VirtualAddress);
  if ( PerformanceCounter.QuadPart )
    NdisStatisticalStopwatch::Stop((NdisStatisticalStopwatch *)&v11);
}
