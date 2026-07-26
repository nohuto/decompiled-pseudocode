/*
 * XREFs of NdisMAllocateSharedMemoryAsync @ 0x140093630
 * Callers:
 *     NdisMAllocateSharedMemoryAsyncEx @ 0x140093800 (NdisMAllocateSharedMemoryAsyncEx.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140011280 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 */

NDIS_STATUS __stdcall NdisMAllocateSharedMemoryAsync(
        NDIS_HANDLE MiniportAdapterHandle,
        ULONG Length,
        BOOLEAN Cached,
        PVOID Context)
{
  int v8; // edx
  struct _WORK_QUEUE_ITEM *Pool2; // rsi
  NDIS_STATUS v10; // ebx
  NDIS_HANDLE v11; // rdi
  struct _NDIS_MINIPORT_BLOCK *v12; // rcx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0x20u,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      (char)MiniportAdapterHandle,
      Length);
  Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 72LL, 1935754318LL);
  if ( !Pool2 )
  {
    v10 = -1073741670;
    goto LABEL_13;
  }
  if ( *(_BYTE *)MiniportAdapterHandle == 17 )
  {
    v11 = (NDIS_HANDLE)*((_QWORD *)MiniportAdapterHandle + 63);
    v12 = (struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle;
    if ( !v11 || !*((_QWORD *)v11 + 5) )
      goto LABEL_11;
    if ( *((_BYTE *)MiniportAdapterHandle + 32) >= 6u
       ? *((_QWORD *)v11 + 7) == 0LL
       : *(_QWORD *)(*((_QWORD *)MiniportAdapterHandle + 470) + 240LL) == 0LL )
    {
      goto LABEL_11;
    }
  }
  else if ( *(_BYTE *)MiniportAdapterHandle != 15
         || (v11 = MiniportAdapterHandle,
             v12 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)MiniportAdapterHandle + 1),
             !*((_QWORD *)MiniportAdapterHandle + 5))
         || !*((_QWORD *)MiniportAdapterHandle + 7) )
  {
LABEL_11:
    v10 = -1073741823;
LABEL_12:
    ExFreePoolWithTag(Pool2, 0);
    goto LABEL_13;
  }
  if ( !(unsigned __int8)ndisReferenceMiniport(v12, 0x41u) )
  {
    v10 = -1073741670;
    goto LABEL_12;
  }
  _InterlockedIncrement((volatile signed __int32 *)v11 + 22);
  Pool2[1].List.Flink = (_LIST_ENTRY *)MiniportAdapterHandle;
  LODWORD(Pool2[1].List.Blink) = Length;
  BYTE4(Pool2[1].List.Blink) = Cached;
  Pool2[1].Parameter = Context;
  Pool2->List.Flink = 0LL;
  Pool2->WorkerRoutine = (void (__fastcall *)(void *))ndisMQueuedAllocateSharedHandler;
  Pool2->Parameter = Pool2;
  ExQueueWorkItem(Pool2, (WORK_QUEUE_TYPE)40);
  v10 = 259;
LABEL_13:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      21,
      33,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      v10);
  }
  return v10;
}
