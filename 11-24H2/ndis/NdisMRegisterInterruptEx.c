/*
 * XREFs of NdisMRegisterInterruptEx @ 0x14017A320
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14004B9E0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     GetMsgDpc @ 0x14004D820 (GetMsgDpc.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x140073380 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ?ndisWaitForDpcCompletion@@YAXPECJPECEPEAU_KEVENT@@@Z @ 0x1400C4C2C (-ndisWaitForDpcCompletion@@YAXPECJPECEPEAU_KEVENT@@@Z.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

NDIS_STATUS __stdcall NdisMRegisterInterruptEx(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE MiniportInterruptContext,
        PNDIS_MINIPORT_INTERRUPT_CHARACTERISTICS MiniportInterruptCharacteristics,
        PNDIS_HANDLE NdisInterruptHandle)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  NDIS_STATUS v7; // r12d
  unsigned __int64 v8; // rsi
  int v10; // edx
  __int64 v12; // r15
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  KIRQL v15; // al
  unsigned __int8 (__fastcall *MessageInterruptHandler)(void *, unsigned int, unsigned __int8 *, unsigned int *); // rax
  ULONG v17; // edi
  bool v18; // zf
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rsi
  struct _KDPC *v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned int v24; // esi
  unsigned int i; // edi
  struct _KDPC *MsgDpc; // rax
  struct _KDPC *v27; // rax
  struct _KDPC *v28; // rax
  struct _KDPC *v29; // rax
  struct _KDPC *v30; // rax
  unsigned int v31; // edi
  unsigned __int64 v32; // rsi
  __int64 v33; // rax
  _QWORD *v34; // rcx
  NTSTATUS v35; // eax
  __int64 v36; // rsi
  __int64 v37; // r15
  __int64 Pool2; // rax
  int v39; // edx
  _IO_INTERRUPT_MESSAGE_INFO *v40; // rdi
  __int64 v41; // rdi
  void *v42; // rcx
  KIRQL v43; // al
  _QWORD *v44; // rdx
  __int64 v45; // rcx
  int v46; // edx
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  KIRQL v49; // al
  _QWORD *v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rcx
  char v54[8]; // [rsp+30h] [rbp-69h]
  unsigned __int64 v55; // [rsp+50h] [rbp-49h]
  unsigned __int64 v56; // [rsp+50h] [rbp-49h]
  struct _IO_DISCONNECT_INTERRUPT_PARAMETERS v57; // [rsp+58h] [rbp-41h] BYREF
  struct _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+70h] [rbp-29h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+100h] [rbp+67h] BYREF
  _PROCESSOR_NUMBER v60; // [rsp+110h] [rbp+77h] BYREF
  PNDIS_HANDLE v61; // [rsp+118h] [rbp+7Fh]

  v61 = NdisInterruptHandle;
  v5 = *((unsigned int *)MiniportAdapterHandle + 853);
  v6 = 0LL;
  v7 = 0;
  v8 = (unsigned __int64)ndisMaxNumberOfProcessors << 6;
  memset(&Parameters, 0, 48);
  v10 = 1;
  v12 = (v5 * (ndisMaxNumberOfProcessors + 1)) << 6;
  if ( !(_DWORD)v5 )
    LODWORD(v5) = 1;
  memset(&Parameters.MessageBased.SynchronizeIrql, 0, 32);
  v13 = 80 * ndisMaxNumberOfProcessors * (unsigned __int64)(unsigned int)v5;
  *(_QWORD *)&v57.Version = v13;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      1,
      10,
      (struct _GUID *)&WPP_ad107ce1d5553708f9afef3ea157b65d_Traceguids,
      (char)MiniportAdapterHandle);
    v13 = *(_QWORD *)&v57.Version;
  }
  *v61 = 0LL;
  MiniportInterruptCharacteristics->InterruptType = NDIS_CONNECT_LINE_BASED;
  MiniportInterruptCharacteristics->MessageInfoTable = 0LL;
  if ( (*((_DWORD *)MiniportAdapterHandle + 922) & 2) != 0
    || (v14 = ExAllocatePool2(64LL, v8 + v13 + v12 + 232, 1835091022LL), (v6 = v14) == 0) )
  {
    v7 = -1073741670;
  }
  else
  {
    *(_QWORD *)(v14 + 8) = MiniportInterruptContext;
    v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
    *(_QWORD *)(v6 + 160) = *((_QWORD *)MiniportAdapterHandle + 98);
    *((_QWORD *)MiniportAdapterHandle + 98) = v6;
    *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v15);
    _InterlockedIncrement((volatile signed __int32 *)MiniportAdapterHandle + 476);
    *(_QWORD *)(v6 + 16) = MiniportInterruptCharacteristics->InterruptHandler;
    *(_QWORD *)(v6 + 24) = MiniportInterruptCharacteristics->InterruptDpcHandler;
    MessageInterruptHandler = MiniportInterruptCharacteristics->MessageInterruptHandler;
    *(_DWORD *)(v6 + 104) = 0;
    *(_DWORD *)v6 = 15204614;
    *(_BYTE *)(v6 + 4) = 0;
    *(_QWORD *)(v6 + 96) = MiniportAdapterHandle;
    *(_WORD *)(v6 + 152) = 257;
    if ( MessageInterruptHandler )
    {
      *(_QWORD *)(v6 + 176) = MessageInterruptHandler;
      *(_QWORD *)(v6 + 184) = MiniportInterruptCharacteristics->MessageInterruptDpcHandler;
      *(_BYTE *)(v6 + 192) = 1;
    }
    KeInitializeEvent((PRKEVENT)(v6 + 128), SynchronizationEvent, 0);
    KeInitializeDpc((PRKDPC)(v6 + 32), (PKDEFERRED_ROUTINE)ndisInterruptDpc, (PVOID)v6);
    KeSetImportanceDpc((PRKDPC)(v6 + 32), MediumImportance);
    v17 = 0;
    v18 = ndisMaxNumberOfProcessors == 0;
    v19 = v8 + 232;
    *(_QWORD *)(v6 + 112) = v6 + 232;
    v55 = v8 + 232;
    if ( !v18 )
    {
      do
      {
        v20 = (unsigned __int64)v17 << 6;
        v21 = (struct _KDPC *)(v20 + *(_QWORD *)(v6 + 112));
        ProcNumber = 0;
        KeInitializeDpc(v21, (PKDEFERRED_ROUTINE)ndisInterruptDpc, (PVOID)v6);
        KeSetImportanceDpc((PRKDPC)(v20 + *(_QWORD *)(v6 + 112)), MediumHighImportance);
        if ( KeGetProcessorNumberFromIndex(v17, &ProcNumber) >= 0 )
          KeSetTargetProcessorDpcEx((PKDPC)(v20 + *(_QWORD *)(v6 + 112)), &ProcNumber);
        ++v17;
      }
      while ( v17 < ndisMaxNumberOfProcessors );
      v19 = v55;
    }
    v22 = v19 + v6;
    v23 = v12 + v19;
    *(_QWORD *)(v6 + 224) = v22;
    v24 = 0;
    v56 = v23;
    if ( *((_DWORD *)MiniportAdapterHandle + 853) )
    {
      do
      {
        for ( i = 0; i < ndisMaxNumberOfProcessors; ++i )
        {
          v60 = 0;
          MsgDpc = (struct _KDPC *)GetMsgDpc(v6, v24, i);
          KeInitializeDpc(MsgDpc, (PKDEFERRED_ROUTINE)ndisInterruptDpc, (PVOID)v6);
          v27 = (struct _KDPC *)GetMsgDpc(v6, v24, i);
          KeSetImportanceDpc(v27, MediumHighImportance);
          if ( KeGetProcessorNumberFromIndex(i, &v60) >= 0 )
          {
            v28 = (struct _KDPC *)GetMsgDpc(v6, v24, i);
            KeSetTargetProcessorDpcEx(v28, &v60);
          }
        }
        v29 = (struct _KDPC *)GetMsgDpc(v6, v24, i);
        KeInitializeDpc(v29, (PKDEFERRED_ROUTINE)ndisInterruptDpc, (PVOID)v6);
        v30 = (struct _KDPC *)GetMsgDpc(v6, v24, i);
        KeSetImportanceDpc(v30, MediumHighImportance);
        ++v24;
      }
      while ( v24 < *((_DWORD *)MiniportAdapterHandle + 853) );
      v23 = v56;
    }
    v31 = 0;
    *(_QWORD *)(v6 + 216) = v23 + v6;
    v32 = *(_QWORD *)&v57.Version / 0x50uLL;
    if ( *(_QWORD *)&v57.Version / 0x50uLL )
    {
      v33 = 0LL;
      do
      {
        v34 = (_QWORD *)(80 * v33 + *(_QWORD *)(v6 + 216));
        v34[2] = ndisQueuedMiniportDpcWorkItem;
        v34[3] = v34;
        *v34 = 0LL;
        KeInitializeSpinLock((PKSPIN_LOCK)(80 * v33 + 72 + *(_QWORD *)(v6 + 216)));
        v33 = ++v31;
      }
      while ( v31 < v32 );
      v7 = 0;
    }
    _InterlockedAnd((volatile signed __int32 *)MiniportAdapterHandle + 30, 0xFFFFFFDF);
    Parameters.FullySpecified.PhysicalDeviceObject = (PDEVICE_OBJECT)*((_QWORD *)MiniportAdapterHandle + 479);
    Parameters.FullySpecified.InterruptObject = (PKINTERRUPT *)(v6 + 120);
    Parameters.FullySpecified.ServiceContext = (PVOID)v6;
    if ( *(_BYTE *)(v6 + 192) )
    {
      Parameters.Version = 3;
      Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)ndisMiniportMessageIsr;
      Parameters.MessageBased.FallBackServiceRoutine = (PKSERVICE_ROUTINE)ndisMiniportIsr;
      if ( MiniportInterruptCharacteristics->MsiSyncWithAllMessages )
      {
        KeInitializeSpinLock((PKSPIN_LOCK)(v6 + 200));
        Parameters.FullySpecified.SpinLock = (PKSPIN_LOCK)(v6 + 200);
      }
    }
    else
    {
      Parameters.Version = 2;
      Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)ndisMiniportIsr;
      Parameters.FullySpecified.SpinLock = 0LL;
    }
    *(_WORD *)&Parameters.MessageBased.SynchronizeIrql = 0;
    v35 = IoConnectInterruptEx(&Parameters);
    if ( v35 >= 0 )
    {
      if ( Parameters.Version == 3 )
      {
        v36 = *(_QWORD *)(v6 + 120);
        v37 = *(unsigned int *)(v36 + 4);
        *(_BYTE *)(v6 + 193) = 1;
        *(_DWORD *)(v6 + 168) = 1;
        Pool2 = ExAllocatePool2(66LL, (unsigned int)(48 * (v37 - 1) + 56), 1835091022LL);
        v40 = (_IO_INTERRUPT_MESSAGE_INFO *)Pool2;
        if ( !Pool2 )
        {
          v41 = *(_QWORD *)(v6 + 96);
          v7 = -1073741670;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v39) = 4;
            WPP_RECORDER_SF_qq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v39,
              1,
              13,
              (struct _GUID *)&WPP_ad107ce1d5553708f9afef3ea157b65d_Traceguids,
              v41,
              v6);
          }
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v41 + 1904), 0xFFFFFFFF) == 1 )
            _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v6 + 96) + 120LL), 0x20u);
          v18 = *(_BYTE *)(v6 + 193) == 0;
          *(&v57.Version + 1) = 0;
          v57.Version = !v18 + 2;
          v57.ConnectionContext.Generic = *(PVOID *)(v6 + 120);
          IoDisconnectInterruptEx(&v57);
          v42 = *(void **)(v6 + 208);
          if ( v42 )
          {
            ExFreePoolWithTag(v42, 0);
            *(_QWORD *)(v6 + 208) = 0LL;
          }
          ndisWaitForDpcCompletion(
            (volatile int *)(v6 + 104),
            (volatile unsigned __int8 *)(v6 + 4),
            (struct _KEVENT *)(v6 + 128));
          ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
          v43 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v41 + 96));
          v44 = (_QWORD *)(v41 + 784);
          *(_QWORD *)(v41 + 520) = KeGetCurrentThread();
          v45 = *(_QWORD *)(v41 + 784);
          if ( v45 )
          {
            while ( v45 != v6 )
            {
              v44 = (_QWORD *)(v45 + 160);
              v45 = *(_QWORD *)(v45 + 160);
              if ( !v45 )
                goto LABEL_44;
            }
            *v44 = *(_QWORD *)(v6 + 160);
          }
LABEL_44:
          *(_QWORD *)(v41 + 520) = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)(v41 + 96), v43);
          ndisDereferencePackage((PVOID *)&ndisPkgs);
          ExFreePoolWithTag((PVOID)v6, 0);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v46) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v46,
              1,
              14,
              (struct _GUID *)&WPP_ad107ce1d5553708f9afef3ea157b65d_Traceguids,
              v41);
          }
          goto LABEL_57;
        }
        v47 = *(_OWORD *)(v36 + 16);
        *(_OWORD *)Pool2 = *(_OWORD *)v36;
        v48 = *(_OWORD *)(v36 + 32);
        *(_OWORD *)(Pool2 + 16) = v47;
        *(_QWORD *)&v47 = *(_QWORD *)(v36 + 48);
        *(_OWORD *)(Pool2 + 32) = v48;
        *(_QWORD *)(Pool2 + 48) = v47;
        if ( (_DWORD)v37 )
          memmove((void *)(Pool2 + 8), (const void *)(v36 + 8), 48 * v37);
        MiniportInterruptCharacteristics->InterruptType = NDIS_CONNECT_MESSAGE_BASED;
        MiniportInterruptCharacteristics->MessageInfoTable = v40;
        *(_QWORD *)(v6 + 208) = v40;
        *(_DWORD *)(v6 + 168) = 1;
        if ( (unsigned int)v37 > 1 )
        {
          v18 = *((_WORD *)MiniportAdapterHandle + 1347) == 0;
          *((_BYTE *)MiniportAdapterHandle + 1992) = 1;
          if ( !v18 )
          {
            *((_DWORD *)MiniportAdapterHandle + 674) |= 0x8000000u;
            *((_DWORD *)MiniportAdapterHandle + 777) |= 0x8000000u;
          }
        }
      }
      if ( Parameters.Version == 2 )
      {
        MiniportInterruptCharacteristics->InterruptType = NDIS_CONNECT_LINE_BASED;
        MiniportInterruptCharacteristics->MessageInfoTable = 0LL;
        *(_DWORD *)(v6 + 168) = 0;
      }
      *v61 = (PVOID)v6;
      goto LABEL_64;
    }
    v7 = -1073741823;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xBu,
        (struct _GUID *)&WPP_ad107ce1d5553708f9afef3ea157b65d_Traceguids,
        (char)MiniportAdapterHandle,
        v35);
    *(_QWORD *)(v6 + 120) = 0LL;
  }
LABEL_57:
  _InterlockedDecrement((volatile signed __int32 *)MiniportAdapterHandle + 476);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v49 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
  v50 = (char *)MiniportAdapterHandle + 784;
  *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
  v51 = *((_QWORD *)MiniportAdapterHandle + 98);
  if ( v51 )
  {
    while ( v51 != v6 )
    {
      v50 = (_QWORD *)(v51 + 160);
      v51 = *(_QWORD *)(v51 + 160);
      if ( !v51 )
        goto LABEL_62;
    }
    *v50 = *(_QWORD *)(v6 + 160);
  }
LABEL_62:
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v49);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( (byte_14011B101 & 1) != 0 )
    McTemplateK0jqxddq_EtwWriteTransfer(
      v52,
      &RegisterInterruptFailed,
      (const GUID *)((char *)MiniportAdapterHandle + 4008),
      (__int64)MiniportAdapterHandle + 4008,
      *((_DWORD *)MiniportAdapterHandle + 1014),
      *((_QWORD *)MiniportAdapterHandle + 503),
      v7,
      3,
      0);
LABEL_64:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v54 = v7;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xCu,
      (struct _GUID *)&WPP_ad107ce1d5553708f9afef3ea157b65d_Traceguids,
      (char)MiniportAdapterHandle,
      *(_QWORD *)v54);
  }
  return v7;
}
