/*
 * XREFs of NvmeAdapterProcessControllerQueueRequestSync @ 0x1400E6500
 * Callers:
 *     NvmeAdapterFabricRegisterDeregisterHost @ 0x1400E2A38 (NvmeAdapterFabricRegisterDeregisterHost.c)
 *     NvmeAdapterGetControllerIdentifyData @ 0x1400E2FFC (NvmeAdapterGetControllerIdentifyData.c)
 *     NvmeAdapterGetControllerLogPageSync @ 0x1400E35FC (NvmeAdapterGetControllerLogPageSync.c)
 *     NvmeAdapterGetFabricControllerFeature @ 0x1400E3AC4 (NvmeAdapterGetFabricControllerFeature.c)
 *     NvmeAdapterGetFabricControllerProperty @ 0x1400E3D90 (NvmeAdapterGetFabricControllerProperty.c)
 *     NvmeAdapterNvmeConnectFabricControllerQueue @ 0x1400E40C0 (NvmeAdapterNvmeConnectFabricControllerQueue.c)
 *     NvmeAdapterNvmeDisconnectFabricControllerQueue @ 0x1400E5630 (NvmeAdapterNvmeDisconnectFabricControllerQueue.c)
 *     NvmeAdapterSetFabricControllerFeature @ 0x1400E76C8 (NvmeAdapterSetFabricControllerFeature.c)
 *     NvmeAdapterSetFabricControllerProperty @ 0x1400E7BA0 (NvmeAdapterSetFabricControllerProperty.c)
 *     NvmeAdapterSubmitControllerNvmRequest @ 0x1400E8A7C (NvmeAdapterSubmitControllerNvmRequest.c)
 *     NvmeFabricControllerQueueReceiveAuthChallenge @ 0x1400F794C (NvmeFabricControllerQueueReceiveAuthChallenge.c)
 *     NvmeFabricControllerQueueReceiveAuthResult1 @ 0x1400F7DF8 (NvmeFabricControllerQueueReceiveAuthResult1.c)
 *     NvmeFabricControllerQueueSendAuthFailure @ 0x1400F8248 (NvmeFabricControllerQueueSendAuthFailure.c)
 *     NvmeFabricControllerQueueSendAuthNegogiate @ 0x1400F847C (NvmeFabricControllerQueueSendAuthNegogiate.c)
 *     NvmeFabricControllerQueueSendAuthReply @ 0x1400F86D8 (NvmeFabricControllerQueueSendAuthReply.c)
 *     NvmeFabricControllerQueueSendAuthSuccess @ 0x1400F8960 (NvmeFabricControllerQueueSendAuthSuccess.c)
 * Callees:
 *     NvmeAdapterExecuteXrb @ 0x1400CFAA4 (NvmeAdapterExecuteXrb.c)
 *     NvmeAdapterMapDataBuffer @ 0x1400D41E4 (NvmeAdapterMapDataBuffer.c)
 *     NvmeAdapterRaiseIrqlAndExecuteXrb @ 0x1400D63DC (NvmeAdapterRaiseIrqlAndExecuteXrb.c)
 *     NvmeAdapterAssignControllerQueueSlot @ 0x1400DEB5C (NvmeAdapterAssignControllerQueueSlot.c)
 *     NvmeAdapterCleanupControllerQueueRequest @ 0x1400DEF20 (NvmeAdapterCleanupControllerQueueRequest.c)
 *     NvmeAdapterPrepareControllerQueueRequest @ 0x1400E60E0 (NvmeAdapterPrepareControllerQueueRequest.c)
 *     NvmeControllerQueueDecrementProcessingCount @ 0x1400F38B8 (NvmeControllerQueueDecrementProcessingCount.c)
 */

__int64 __fastcall NvmeAdapterProcessControllerQueueRequestSync(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  __int64 v9; // rsi
  char v11; // r14
  _DWORD *v12; // r15
  int v13; // ebx
  char v14; // bl
  __int64 v16; // r8
  __int64 v17; // r14
  int v18; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-19h] BYREF
  __int64 v20; // [rsp+D8h] [rbp+47h] BYREF
  unsigned __int16 v21; // [rsp+E8h] [rbp+57h] BYREF
  unsigned __int16 v22; // [rsp+F0h] [rbp+5Fh] BYREF

  LOBYTE(v21) = a3;
  v20 = 0LL;
  v22 = -1;
  v9 = *(_QWORD *)(a1 + 88);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v11 = 0;
  v21 = -1;
  v12 = *(_DWORD **)(v9 + 128);
  if ( *(_DWORD *)(v9 + 948) )
  {
    v13 = -2147483631;
    goto LABEL_7;
  }
  _InterlockedAdd((volatile signed __int32 *)(a1 + 128), 1u);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 104), &LockHandle);
  v14 = NvmeAdapterAssignControllerQueueSlot(a1, 0, &v21, &v22);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !v14 )
  {
    v13 = -2147483631;
    goto LABEL_5;
  }
  v11 = 1;
  NvmeAdapterPrepareControllerQueueRequest(
    (__int64)v12,
    v9,
    (_QWORD *)a1,
    a2,
    0,
    a5,
    a6,
    a7,
    a8,
    v21,
    v22,
    0LL,
    0LL,
    &v20);
  v13 = NvmeAdapterMapDataBuffer((__int64)v12, v20);
  if ( v13 < 0 )
  {
LABEL_5:
    _InterlockedAdd((volatile signed __int32 *)(a1 + 128), 0xFFFFFFFF);
    if ( !v11 )
      goto LABEL_7;
    goto LABEL_6;
  }
  _InterlockedAdd((volatile signed __int32 *)(a1 + 128), 0xFFFFFFFF);
  _InterlockedAdd16((volatile signed __int16 *)(a1 + 148), 1u);
  v17 = v20;
  if ( (v12[36] & 0x1000LL) != 0 )
    v18 = NvmeAdapterRaiseIrqlAndExecuteXrb(v12, v20);
  else
    v18 = NvmeAdapterExecuteXrb(v12, v20, v16);
  v13 = v18;
  if ( v18 >= 0 )
  {
    KeWaitForSingleObject((PVOID)(v17 + 664), Executive, 0, 0, 0LL);
    return 0;
  }
  _InterlockedAdd16((volatile signed __int16 *)(a1 + 148), 0xFFFFu);
LABEL_6:
  NvmeAdapterCleanupControllerQueueRequest(a1, v20);
LABEL_7:
  if ( *(_WORD *)(a1 + 136) )
    NvmeControllerQueueDecrementProcessingCount(a1);
  return (unsigned int)v13;
}
