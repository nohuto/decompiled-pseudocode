/*
 * XREFs of NdisMRegisterInterruptEx @ 0x140184F80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14005A650 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x140068440 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     GetMsgDpc @ 0x140068C40 (GetMsgDpc.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x14008EDC0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     NdisMDeregisterInterruptEx @ 0x14017C8C0 (NdisMDeregisterInterruptEx.c)
 */

NDIS_STATUS __stdcall NdisMRegisterInterruptEx(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE MiniportInterruptContext,
        PNDIS_MINIPORT_INTERRUPT_CHARACTERISTICS MiniportInterruptCharacteristics,
        PNDIS_HANDLE NdisInterruptHandle)
{
  __int64 v5; // rcx
  __int64 v6; // rdi
  NDIS_STATUS v7; // r14d
  unsigned __int64 v8; // r13
  __int64 v10; // r12
  unsigned __int64 v12; // rcx
  const struct _GUID *v13; // rdx
  KIRQL v14; // dl
  unsigned __int8 (__fastcall *MessageInterruptHandler)(void *, unsigned int, unsigned __int8 *, unsigned int *); // rax
  unsigned __int64 v16; // rcx
  ULONG v17; // r13d
  bool v18; // zf
  struct _KDPC *v19; // rcx
  unsigned __int64 v20; // rax
  unsigned int v21; // r13d
  unsigned __int64 v22; // rcx
  unsigned int i; // r12d
  struct _KDPC *MsgDpc; // rax
  struct _KDPC *v25; // rax
  struct _KDPC *v26; // rax
  struct _KDPC *v27; // rax
  struct _KDPC *v28; // rax
  unsigned int v29; // r13d
  __int64 v30; // rax
  _QWORD *v31; // rcx
  NTSTATUS v32; // eax
  __int64 v33; // r12
  __int64 v34; // rax
  _IO_INTERRUPT_MESSAGE_INFO *v35; // r13
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  unsigned int v38; // eax
  __int64 *j; // rcx
  __int64 v40; // rax
  KIRQL v41; // dl
  __int64 v42; // rcx
  __int64 v44; // [rsp+30h] [rbp-79h]
  unsigned __int64 v45; // [rsp+50h] [rbp-59h]
  unsigned __int64 v46; // [rsp+50h] [rbp-59h]
  unsigned int v47; // [rsp+50h] [rbp-59h]
  __int64 Pool2; // [rsp+58h] [rbp-51h]
  unsigned __int64 v49; // [rsp+60h] [rbp-49h]
  unsigned __int64 v50; // [rsp+68h] [rbp-41h]
  struct _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+70h] [rbp-39h] BYREF
  unsigned __int8 v52; // [rsp+110h] [rbp+67h] BYREF
  NDIS_HANDLE v53; // [rsp+118h] [rbp+6Fh]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+120h] [rbp+77h] BYREF
  _PROCESSOR_NUMBER v55; // [rsp+128h] [rbp+7Fh] BYREF

  v53 = MiniportInterruptContext;
  v5 = *((unsigned int *)MiniportAdapterHandle + 853);
  v6 = 0LL;
  v7 = 0;
  v8 = (unsigned __int64)ndisMaxNumberOfProcessors << 6;
  v52 = 0;
  memset(&Parameters, 0, 48);
  v10 = (v5 * (ndisMaxNumberOfProcessors + 1)) << 6;
  if ( !(_DWORD)v5 )
    LODWORD(v5) = 1;
  memset(&Parameters.MessageBased.SynchronizeIrql, 0, 32);
  v12 = 80 * ndisMaxNumberOfProcessors * (unsigned __int64)(unsigned int)v5;
  v50 = v12;
  v13 = &WPP_ad107ce1d5553708f9afef3ea157b65d_Traceguids;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v13,
      1,
      10,
      (struct _GUID *)&WPP_ad107ce1d5553708f9afef3ea157b65d_Traceguids,
      (char)MiniportAdapterHandle);
    v12 = v50;
  }
  *NdisInterruptHandle = 0LL;
  MiniportInterruptCharacteristics->InterruptType = NDIS_CONNECT_LINE_BASED;
  MiniportInterruptCharacteristics->MessageInfoTable = 0LL;
  if ( (*((_DWORD *)MiniportAdapterHandle + 922) & 2) != 0 )
  {
    v7 = -1073741670;
    goto LABEL_46;
  }
  Pool2 = ExAllocatePool2(64LL, v8 + v12 + v10 + 232, 1835091022);
  v6 = Pool2;
  if ( !Pool2 )
  {
    v7 = -1073741670;
    goto LABEL_46;
  }
  *(_QWORD *)(Pool2 + 8) = v53;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, &v52);
  v14 = v52;
  *(_QWORD *)(Pool2 + 160) = *((_QWORD *)MiniportAdapterHandle + 98);
  *((_QWORD *)MiniportAdapterHandle + 98) = Pool2;
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v14);
  _InterlockedIncrement((volatile signed __int32 *)MiniportAdapterHandle + 476);
  *(_QWORD *)(Pool2 + 16) = MiniportInterruptCharacteristics->InterruptHandler;
  *(_QWORD *)(Pool2 + 24) = MiniportInterruptCharacteristics->InterruptDpcHandler;
  MessageInterruptHandler = MiniportInterruptCharacteristics->MessageInterruptHandler;
  *(_DWORD *)(Pool2 + 104) = 0;
  *(_DWORD *)Pool2 = 15204614;
  *(_BYTE *)(Pool2 + 4) = 0;
  *(_QWORD *)(Pool2 + 96) = MiniportAdapterHandle;
  *(_WORD *)(Pool2 + 152) = 257;
  if ( MessageInterruptHandler )
  {
    *(_QWORD *)(Pool2 + 176) = MessageInterruptHandler;
    *(_QWORD *)(Pool2 + 184) = MiniportInterruptCharacteristics->MessageInterruptDpcHandler;
    *(_BYTE *)(Pool2 + 192) = 1;
  }
  KeInitializeEvent((PRKEVENT)(Pool2 + 128), SynchronizationEvent, 0);
  KeInitializeDpc((PRKDPC)(Pool2 + 32), (PKDEFERRED_ROUTINE)ndisInterruptDpc, (PVOID)Pool2);
  KeSetImportanceDpc((PRKDPC)(Pool2 + 32), MediumImportance);
  v16 = v8 + 232;
  v17 = 0;
  v18 = ndisMaxNumberOfProcessors == 0;
  *(_QWORD *)(Pool2 + 112) = Pool2 + 232;
  v45 = v16;
  if ( !v18 )
  {
    do
    {
      v49 = (unsigned __int64)v17 << 6;
      v19 = (struct _KDPC *)(*(_QWORD *)(Pool2 + 112) + v49);
      ProcNumber = 0;
      KeInitializeDpc(v19, (PKDEFERRED_ROUTINE)ndisInterruptDpc, (PVOID)Pool2);
      KeSetImportanceDpc((PRKDPC)(*(_QWORD *)(Pool2 + 112) + v49), MediumHighImportance);
      if ( KeGetProcessorNumberFromIndex(v17, &ProcNumber) >= 0 )
        KeSetTargetProcessorDpcEx((PKDPC)(*(_QWORD *)(Pool2 + 112) + v49), &ProcNumber);
      ++v17;
    }
    while ( v17 < ndisMaxNumberOfProcessors );
    v16 = v45;
  }
  v20 = v16 + Pool2;
  v21 = 0;
  v22 = v10 + v16;
  *(_QWORD *)(Pool2 + 224) = v20;
  v46 = v22;
  if ( *((_DWORD *)MiniportAdapterHandle + 853) )
  {
    do
    {
      for ( i = 0; i < ndisMaxNumberOfProcessors; ++i )
      {
        v55 = 0;
        MsgDpc = (struct _KDPC *)GetMsgDpc(Pool2, v21, i);
        KeInitializeDpc(MsgDpc, (PKDEFERRED_ROUTINE)ndisInterruptDpc, (PVOID)Pool2);
        v25 = (struct _KDPC *)GetMsgDpc(Pool2, v21, i);
        KeSetImportanceDpc(v25, MediumHighImportance);
        if ( KeGetProcessorNumberFromIndex(i, &v55) >= 0 )
        {
          v26 = (struct _KDPC *)GetMsgDpc(Pool2, v21, i);
          KeSetTargetProcessorDpcEx(v26, &v55);
        }
      }
      v27 = (struct _KDPC *)GetMsgDpc(Pool2, v21, i);
      KeInitializeDpc(v27, (PKDEFERRED_ROUTINE)ndisInterruptDpc, (PVOID)Pool2);
      v28 = (struct _KDPC *)GetMsgDpc(Pool2, v21, i);
      KeSetImportanceDpc(v28, MediumHighImportance);
      ++v21;
    }
    while ( v21 < *((_DWORD *)MiniportAdapterHandle + 853) );
    v22 = v46;
  }
  v29 = 0;
  *(_QWORD *)(Pool2 + 216) = v22 + Pool2;
  if ( v50 / 0x50 )
  {
    v30 = 0LL;
    do
    {
      v31 = (_QWORD *)(80 * v30 + *(_QWORD *)(Pool2 + 216));
      v31[2] = ndisQueuedMiniportDpcWorkItem;
      v31[3] = v31;
      *v31 = 0LL;
      KeInitializeSpinLock((PKSPIN_LOCK)(80 * v30 + *(_QWORD *)(Pool2 + 216) + 72LL));
      v30 = ++v29;
    }
    while ( v29 < v50 / 0x50 );
    v7 = 0;
  }
  *((_DWORD *)MiniportAdapterHandle + 30) &= ~0x20u;
  v18 = *(_BYTE *)(Pool2 + 192) == 0;
  Parameters.FullySpecified.PhysicalDeviceObject = (PDEVICE_OBJECT)*((_QWORD *)MiniportAdapterHandle + 479);
  Parameters.FullySpecified.InterruptObject = (PKINTERRUPT *)(Pool2 + 120);
  Parameters.FullySpecified.ServiceContext = (PVOID)Pool2;
  if ( v18 )
  {
    Parameters.Version = 2;
    Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)ndisMiniportIsr;
    Parameters.FullySpecified.SpinLock = 0LL;
  }
  else
  {
    v18 = MiniportInterruptCharacteristics->MsiSyncWithAllMessages == 0;
    Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)ndisMiniportMessageIsr;
    Parameters.MessageBased.FallBackServiceRoutine = (PKSERVICE_ROUTINE)ndisMiniportIsr;
    Parameters.Version = 3;
    if ( !v18 )
    {
      KeInitializeSpinLock((PKSPIN_LOCK)(Pool2 + 200));
      Parameters.FullySpecified.SpinLock = (PKSPIN_LOCK)(Pool2 + 200);
      v6 = Pool2;
    }
  }
  *(_WORD *)&Parameters.MessageBased.SynchronizeIrql = 0;
  v32 = IoConnectInterruptEx(&Parameters);
  if ( v32 >= 0 )
  {
    if ( Parameters.Version == 3 )
    {
      v33 = *(_QWORD *)(Pool2 + 120);
      v47 = *(_DWORD *)(v33 + 4);
      *(_BYTE *)(v6 + 193) = 1;
      *(_DWORD *)(v6 + 168) = 1;
      v34 = ExAllocatePool2(66LL, 48 * (v47 - 1) + 56, 1835091022);
      v35 = (_IO_INTERRUPT_MESSAGE_INFO *)v34;
      if ( !v34 )
      {
        v7 = -1073741670;
        NdisMDeregisterInterruptEx((NDIS_HANDLE)v6);
        goto LABEL_46;
      }
      v36 = *(_OWORD *)(v33 + 16);
      *(_OWORD *)v34 = *(_OWORD *)v33;
      v37 = *(_OWORD *)(v33 + 32);
      *(_OWORD *)(v34 + 16) = v36;
      *(_QWORD *)&v36 = *(_QWORD *)(v33 + 48);
      *(_OWORD *)(v34 + 32) = v37;
      *(_QWORD *)(v34 + 48) = v36;
      v38 = v47;
      if ( v47 )
      {
        memmove(v35->MessageInfo, (const void *)(v33 + 8), 48LL * v47);
        v38 = v47;
      }
      MiniportInterruptCharacteristics->InterruptType = NDIS_CONNECT_MESSAGE_BASED;
      MiniportInterruptCharacteristics->MessageInfoTable = v35;
      *(_QWORD *)(v6 + 208) = v35;
      *(_DWORD *)(v6 + 168) = 1;
      if ( v38 > 1 )
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
    *NdisInterruptHandle = (PVOID)v6;
    goto LABEL_53;
  }
  v7 = -1073741823;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      1u,
      0xBu,
      (struct _GUID *)&WPP_ad107ce1d5553708f9afef3ea157b65d_Traceguids,
      (char)MiniportAdapterHandle,
      v32);
  *(_QWORD *)(v6 + 120) = 0LL;
LABEL_46:
  _InterlockedDecrement((volatile signed __int32 *)MiniportAdapterHandle + 476);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, &v52);
  for ( j = (__int64 *)((char *)MiniportAdapterHandle + 784); ; j = (__int64 *)(v40 + 160) )
  {
    v40 = *j;
    if ( !*j )
      break;
    if ( v40 == v6 )
    {
      *j = *(_QWORD *)(v6 + 160);
      break;
    }
  }
  v41 = v52;
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v41);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( (byte_140125101 & 1) != 0 )
    McTemplateK0jqxddq_EtwWriteTransfer(
      v42,
      &RegisterInterruptFailed,
      (const GUID *)((char *)MiniportAdapterHandle + 4008),
      (__int64)MiniportAdapterHandle + 4008,
      *((_DWORD *)MiniportAdapterHandle + 1014),
      *((_QWORD *)MiniportAdapterHandle + 503),
      v7,
      3,
      0);
LABEL_53:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v44) = v7;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xCu,
      (struct _GUID *)&WPP_ad107ce1d5553708f9afef3ea157b65d_Traceguids,
      (char)MiniportAdapterHandle,
      v44);
  }
  return v7;
}
