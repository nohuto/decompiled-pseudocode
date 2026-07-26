/*
 * XREFs of NdisMAllocateSharedMemoryAsync @ 0x14009D250
 * Callers:
 *     NdisMAllocateSharedMemoryAsyncEx @ 0x14009D420 (NdisMAllocateSharedMemoryAsyncEx.c)
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000E960 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 */

NDIS_STATUS __stdcall NdisMAllocateSharedMemoryAsync(
        NDIS_HANDLE MiniportAdapterHandle,
        ULONG Length,
        BOOLEAN Cached,
        PVOID Context)
{
  struct _WORK_QUEUE_ITEM *Pool2; // rsi
  NDIS_STATUS v9; // ebx
  NDIS_HANDLE v10; // rdi
  struct _NDIS_MINIPORT_BLOCK *v11; // rcx
  __int64 v14; // [rsp+28h] [rbp-30h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0x20u,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      (char)MiniportAdapterHandle,
      Length);
  Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 72LL, 1935754318);
  if ( !Pool2 )
  {
    v9 = -1073741670;
    goto LABEL_13;
  }
  if ( *(_BYTE *)MiniportAdapterHandle == 17 )
  {
    v10 = (NDIS_HANDLE)*((_QWORD *)MiniportAdapterHandle + 63);
    v11 = (struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle;
    if ( !v10 || !*((_QWORD *)v10 + 5) )
      goto LABEL_11;
    if ( *((_BYTE *)MiniportAdapterHandle + 32) >= 6u
       ? *((_QWORD *)v10 + 7) == 0LL
       : *(_QWORD *)(*((_QWORD *)MiniportAdapterHandle + 470) + 240LL) == 0LL )
    {
      goto LABEL_11;
    }
  }
  else if ( *(_BYTE *)MiniportAdapterHandle != 15
         || (v10 = MiniportAdapterHandle,
             v11 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)MiniportAdapterHandle + 1),
             !*((_QWORD *)MiniportAdapterHandle + 5))
         || !*((_QWORD *)MiniportAdapterHandle + 7) )
  {
LABEL_11:
    v9 = -1073741823;
LABEL_12:
    ExFreePoolWithTag(Pool2, 0);
    goto LABEL_13;
  }
  if ( !(unsigned __int8)ndisReferenceMiniport(v11, 0x41u) )
  {
    v9 = -1073741670;
    goto LABEL_12;
  }
  _InterlockedIncrement((volatile signed __int32 *)v10 + 22);
  Pool2[1].List.Flink = (_LIST_ENTRY *)MiniportAdapterHandle;
  LODWORD(Pool2[1].List.Blink) = Length;
  BYTE4(Pool2[1].List.Blink) = Cached;
  Pool2[1].Parameter = Context;
  Pool2->List.Flink = 0LL;
  Pool2->WorkerRoutine = (void (__fastcall *)(void *))ndisMQueuedAllocateSharedHandler;
  Pool2->Parameter = Pool2;
  ExQueueWorkItem(Pool2, (WORK_QUEUE_TYPE)40);
  v9 = 259;
LABEL_13:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v14) = v9;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0x21u,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      v14);
  }
  return v9;
}
