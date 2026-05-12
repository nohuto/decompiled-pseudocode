/*
 * XREFs of NvmeControllerInitPhase1 @ 0x1400EF9D4
 * Callers:
 *     NvmeAdapterFinalizeStorMQMiniportControllerStart @ 0x1400CFBBC (NvmeAdapterFinalizeStorMQMiniportControllerStart.c)
 *     NvmeControllerEssentialInitialize @ 0x1400ECE18 (NvmeControllerEssentialInitialize.c)
 *     NvmeControllerPowerUp @ 0x1400F2E00 (NvmeControllerPowerUp.c)
 *     NvmeControllerReinitialize @ 0x1400F3C7C (NvmeControllerReinitialize.c)
 * Callees:
 *     StorpMarkDeviceFailed @ 0x140075234 (StorpMarkDeviceFailed.c)
 *     NvmeNamespaceIdentify @ 0x1400BF954 (NvmeNamespaceIdentify.c)
 *     NvmeControllerBuildIoPollingConfiguration @ 0x1400C84AC (NvmeControllerBuildIoPollingConfiguration.c)
 *     NvmeControllerConfigure @ 0x1400EBC7C (NvmeControllerConfigure.c)
 *     NvmeControllerCreatePendingIoQueueContext @ 0x1400EC5E0 (NvmeControllerCreatePendingIoQueueContext.c)
 *     NvmeControllerEnable @ 0x1400ECCD0 (NvmeControllerEnable.c)
 *     NvmeControllerGetIoCommandSetIdentify @ 0x1400EE0A8 (NvmeControllerGetIoCommandSetIdentify.c)
 *     NvmeControllerIdentify @ 0x1400EF360 (NvmeControllerIdentify.c)
 *     NvmeControllerIdentifyUUIDList @ 0x1400EF538 (NvmeControllerIdentifyUUIDList.c)
 *     NvmeControllerInitializeAdminQueue @ 0x1400F02F4 (NvmeControllerInitializeAdminQueue.c)
 *     NvmeControllerStorMQInitializeAdminQueues @ 0x1400F5234 (NvmeControllerStorMQInitializeAdminQueues.c)
 *     NvmeControllerStoreSubsystemId @ 0x1400F559C (NvmeControllerStoreSubsystemId.c)
 *     NvmeGetNVMSetAttributeList @ 0x1400F8C74 (NvmeGetNVMSetAttributeList.c)
 *     NvmeGetNamespaceDescriptorListIdentify @ 0x1400F8EB4 (NvmeGetNamespaceDescriptorListIdentify.c)
 *     NvmeGetNamespaceIoCommandSetIdentify @ 0x1400F90FC (NvmeGetNamespaceIoCommandSetIdentify.c)
 *     CreateNVMeScatterGatherListBufferPool @ 0x140119A90 (CreateNVMeScatterGatherListBufferPool.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeControllerInitPhase1(_QWORD *DeferredContext, char a2)
{
  char v2; // bp
  int NVMeScatterGatherListBufferPool; // edi
  const wchar_t *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int16 v11; // r9
  __int64 v12; // rax
  signed __int32 v14[8]; // [rsp+0h] [rbp-98h] BYREF
  _QWORD *v15; // [rsp+50h] [rbp-48h]
  __int64 v16; // [rsp+58h] [rbp-40h] BYREF
  __int128 v17; // [rsp+60h] [rbp-38h] BYREF

  v16 = 0LL;
  v2 = *((_BYTE *)DeferredContext + 1728);
  v17 = 0LL;
  if ( a2 )
  {
    NVMeScatterGatherListBufferPool = CreateNVMeScatterGatherListBufferPool();
    if ( NVMeScatterGatherListBufferPool < 0 )
    {
      *((_DWORD *)DeferredContext + 298) = 36;
      v6 = L"Create SGL buffer pool failed";
LABEL_21:
      v11 = *((_WORD *)DeferredContext + 596);
      *(_QWORD *)&v17 = DeferredContext[121];
      DWORD2(v17) = *((_DWORD *)DeferredContext + 298);
      StorpMarkDeviceFailed(DeferredContext[16], 0LL, 0, v11, v6, 8u, &v16, 0x10u, &v17);
      goto LABEL_26;
    }
    NVMeScatterGatherListBufferPool = NvmeControllerInitializeAdminQueue(DeferredContext);
    if ( NVMeScatterGatherListBufferPool < 0 )
    {
      *((_DWORD *)DeferredContext + 298) = 7;
      v6 = L"Admin Queue Initialize failed";
      goto LABEL_21;
    }
  }
  if ( v2 == 1 )
  {
    NvmeControllerStorMQInitializeAdminQueues(DeferredContext);
  }
  else
  {
    *(_DWORD *)(DeferredContext[115] + 36LL) = (*((_WORD *)DeferredContext + 3) - 1) & 0xFFF | (((*((_WORD *)DeferredContext
                                                                                                  + 3)
                                                                                                - 1) & 0xFFF) << 16);
    _InterlockedOr(v14, 0);
    v7 = *(_QWORD *)(DeferredContext[107] + 8LL);
    v15 = (_QWORD *)(DeferredContext[115] + 48LL);
    *v15 = v7;
    _InterlockedOr(v14, 0);
    v8 = *(_QWORD *)(DeferredContext[89] + 8LL);
    v15 = (_QWORD *)(DeferredContext[115] + 40LL);
    *v15 = v8;
    _InterlockedOr(v14, 0);
  }
  NvmeControllerConfigure((__int64)DeferredContext);
  NVMeScatterGatherListBufferPool = NvmeControllerEnable((__int64)DeferredContext);
  if ( NVMeScatterGatherListBufferPool < 0 )
  {
    *((_DWORD *)DeferredContext + 298) = 8;
    v6 = L"Controller enable failed";
    goto LABEL_21;
  }
  if ( !a2 && (DeferredContext[121] & 0x20) == 0 )
    goto LABEL_26;
  DeferredContext[121] &= ~0x20uLL;
  NVMeScatterGatherListBufferPool = NvmeControllerIdentify((__int64)DeferredContext);
  if ( NVMeScatterGatherListBufferPool < 0 )
  {
    *((_DWORD *)DeferredContext + 298) = 30;
    v6 = L"Identify controller failed";
    goto LABEL_21;
  }
  v9 = DeferredContext[74];
  *((_WORD *)DeferredContext + 2) = *(_WORD *)(v9 + 78);
  if ( (*(_DWORD *)(DeferredContext[16] + 144LL) & 0x200LL) == 0 )
  {
    NVMeScatterGatherListBufferPool = NvmeControllerCreatePendingIoQueueContext(DeferredContext, *(_DWORD *)(v9 + 516));
    if ( NVMeScatterGatherListBufferPool < 0 )
    {
      v6 = L"Create pending IO queue context failed";
LABEL_20:
      *((_DWORD *)DeferredContext + 298) = 31;
      goto LABEL_21;
    }
  }
  v10 = DeferredContext[74];
  *((_OWORD *)DeferredContext + 50) = *(_OWORD *)(v10 + 24);
  *((_OWORD *)DeferredContext + 51) = *(_OWORD *)(v10 + 40);
  DeferredContext[104] = *(_QWORD *)(v10 + 56);
  *(_QWORD *)((char *)DeferredContext + 841) = *(_QWORD *)(v10 + 64);
  NVMeScatterGatherListBufferPool = NvmeControllerStoreSubsystemId(DeferredContext);
  if ( NVMeScatterGatherListBufferPool < 0 )
  {
    v6 = L"Storing SubsystemId failed";
    goto LABEL_20;
  }
  NvmeControllerGetIoCommandSetIdentify((__int64)DeferredContext);
  NvmeControllerIdentifyUUIDList((__int64)DeferredContext);
  NvmeControllerBuildIoPollingConfiguration((__int64)DeferredContext);
  if ( a2 )
  {
    NvmeGetNVMSetAttributeList(DeferredContext);
    if ( (*(_DWORD *)(DeferredContext[16] + 144LL) & 0x200LL) == 0 )
      NvmeNamespaceIdentify(DeferredContext);
    NvmeGetNamespaceDescriptorListIdentify(DeferredContext);
    NvmeGetNamespaceIoCommandSetIdentify(DeferredContext);
  }
LABEL_26:
  v12 = DeferredContext[161];
  if ( NVMeScatterGatherListBufferPool < 0 )
    ++*(_DWORD *)(v12 + 12);
  else
    ++*(_DWORD *)(v12 + 8);
  return (unsigned int)NVMeScatterGatherListBufferPool;
}
