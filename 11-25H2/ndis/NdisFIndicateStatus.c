/*
 * XREFs of NdisFIndicateStatus @ 0x14006AE90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x140062190 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ?ndisReferenceRefNoCheck@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x140067320 (-ndisReferenceRefNoCheck@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140097B10 (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     NdisIsStatusIndicationCloneable @ 0x1400A4960 (NdisIsStatusIndicationCloneable.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140160790 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __stdcall NdisFIndicateStatus(NDIS_HANDLE NdisFilterHandle, PNDIS_STATUS_INDICATION StatusIndication)
{
  char v2; // al
  char *v5; // r14
  __int64 i; // rax
  KIRQL v7; // si
  _OWORD *Pool2; // rax
  __int64 v9; // rax
  struct _KEVENT Event; // [rsp+40h] [rbp-58h] BYREF
  _QWORD Parameter[8]; // [rsp+58h] [rbp-40h] BYREF
  unsigned __int8 v12; // [rsp+A0h] [rbp+8h] BYREF

  v2 = *((_BYTE *)NdisFilterHandle + 288);
  Parameter[0] = 0LL;
  Parameter[2] = 0LL;
  Parameter[1] = NdisFilterHandle;
  Parameter[3] = StatusIndication;
  if ( v2
    || KeExpandKernelStackAndCalloutEx(
         (PEXPAND_STACK_CALLOUT)ndisFIndicateStatusWrapper,
         Parameter,
         (unsigned int)Size,
         0,
         0LL) < 0 )
  {
    v12 = 0;
    memset(&Event, 0, sizeof(Event));
    NDIS_ACQUIRE_FILTER_SPIN_LOCK((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle, &v12);
    v5 = (char *)NdisFilterHandle + 248;
    for ( i = *((_QWORD *)NdisFilterHandle + 31); i; i = *(_QWORD *)(i + 80) )
      v5 = (char *)(i + 80);
    v7 = v12;
    if ( v12 < 2u )
    {
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      *(_QWORD *)v5 = StatusIndication;
      StatusIndication->NdisReserved[1] = &Event;
      StatusIndication->NdisReserved[0] = 0LL;
      goto LABEL_10;
    }
    if ( (unsigned __int8)NdisIsStatusIndicationCloneable((unsigned int)StatusIndication->StatusCode) )
    {
      Pool2 = (_OWORD *)ExAllocatePool2(66LL, StatusIndication->StatusBufferSize + 112LL, 538985550);
      *(_QWORD *)v5 = Pool2;
      if ( Pool2 )
      {
        *Pool2 = *(_OWORD *)&StatusIndication->Header.Type;
        Pool2[1] = *(_OWORD *)&StatusIndication->PortNumber;
        Pool2[2] = *(_OWORD *)&StatusIndication->DestinationHandle;
        Pool2[3] = *(_OWORD *)&StatusIndication->StatusBuffer;
        Pool2[4] = *(_OWORD *)&StatusIndication->Guid.Data2;
        Pool2[5] = *(_OWORD *)StatusIndication->NdisReserved;
        Pool2[6] = *(_OWORD *)&StatusIndication->NdisReserved[2];
        *(_QWORD *)(*(_QWORD *)v5 + 48LL) = *(_QWORD *)v5 + 112LL;
        memmove(*(void **)(*(_QWORD *)v5 + 48LL), StatusIndication->StatusBuffer, StatusIndication->StatusBufferSize);
        v9 = *(_QWORD *)v5;
        *(_QWORD *)(v9 + 80) = 0LL;
        *(_QWORD *)(v9 + 88) = 0LL;
        ndisReferenceRefNoCheck((PKSPIN_LOCK)NdisFilterHandle + 39, 1u);
LABEL_10:
        *((_BYTE *)NdisFilterHandle + 288) = 1;
        ndisQueueStackExpansionFallbackWorkItem((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle);
        *((_QWORD *)NdisFilterHandle + 19) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v7);
        if ( v7 < 2u )
          ndisWaitForKernelObject(&Event);
        return;
      }
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x18u,
          0x2Cu,
          (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
          (char)NdisFilterHandle,
          StatusIndication->StatusCode);
      ++*((_DWORD *)NdisFilterHandle + 75);
    }
    else
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x18u,
          0x2Du,
          (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
          (char)NdisFilterHandle,
          StatusIndication->StatusCode);
      ++*((_DWORD *)NdisFilterHandle + 76);
    }
    *((_QWORD *)NdisFilterHandle + 19) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v7);
  }
}
