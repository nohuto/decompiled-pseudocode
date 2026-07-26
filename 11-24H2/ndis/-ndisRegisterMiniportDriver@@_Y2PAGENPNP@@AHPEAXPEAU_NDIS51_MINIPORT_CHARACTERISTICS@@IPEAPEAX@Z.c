/*
 * XREFs of ?ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z @ 0x140170298
 * Callers:
 *     NdisIMRegisterLayeredMiniport @ 0x140093060 (NdisIMRegisterLayeredMiniport.c)
 *     NdisMRegisterMiniport @ 0x1400940A0 (NdisMRegisterMiniport.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14004B9E0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisQueryDriverImageName@@YAXPEAU_UNICODE_STRING@@0@Z @ 0x14004C490 (-ndisQueryDriverImageName@@YAXPEAU_UNICODE_STRING@@0@Z.c)
 *     ?ndisGetServiceNameFromRegPath@@YAXPEAU_UNICODE_STRING@@0@Z @ 0x14006CD40 (-ndisGetServiceNameFromRegPath@@YAXPEAU_UNICODE_STRING@@0@Z.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x140167330 (-ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 */

__int64 __fastcall ndisRegisterMiniportDriver(
        char *a1,
        struct _NDIS51_MINIPORT_CHARACTERISTICS *a2,
        unsigned int a3,
        void **a4)
{
  unsigned int v4; // edi
  struct _NDIS51_MINIPORT_CHARACTERISTICS *v7; // rbx
  unsigned __int8 MinorNdisVersion; // dl
  __int64 v10; // r15
  unsigned __int8 MajorNdisVersion; // al
  size_t v12; // rsi
  unsigned int v13; // ecx
  struct _NDIS_M_DRIVER_BLOCK *v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  KIRQL v18; // bl
  PVOID v19; // rcx
  PVOID DriverObjectExtension; // [rsp+60h] [rbp+30h] BYREF

  v4 = 0;
  DriverObjectExtension = 0LL;
  v7 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      1,
      14,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      (char)a1);
  }
  if ( !a1 )
  {
    v4 = -1073741823;
    goto LABEL_38;
  }
  MinorNdisVersion = v7->Ndis50Chars.MinorNdisVersion;
  v10 = 112LL;
  if ( MinorNdisVersion )
  {
    if ( MinorNdisVersion == 1 )
    {
      MajorNdisVersion = v7->Ndis50Chars.MajorNdisVersion;
      if ( v7->Ndis50Chars.MajorNdisVersion == 5 )
      {
        v12 = 240LL;
        goto LABEL_15;
      }
    }
    goto LABEL_37;
  }
  MajorNdisVersion = v7->Ndis50Chars.MajorNdisVersion;
  if ( v7->Ndis50Chars.MajorNdisVersion != 3 )
  {
    if ( MajorNdisVersion == 4 )
    {
      v12 = 136LL;
LABEL_15:
      v13 = v12;
      goto LABEL_16;
    }
    if ( MajorNdisVersion == 5 )
    {
      v12 = 184LL;
      goto LABEL_15;
    }
LABEL_37:
    v4 = -1073676284;
    goto LABEL_38;
  }
  v12 = 112LL;
  v13 = 112;
LABEL_16:
  if ( a3 < v13
    || MajorNdisVersion == 5
    && (v7->Ndis50Chars.CoSendPacketsHandler && !v7->Ndis50Chars.CoRequestHandler
     || MinorNdisVersion && !v7->AdapterShutdownHandler) )
  {
    v4 = -1073676283;
  }
  else if ( IoAllocateDriverObjectExtension(*(PDRIVER_OBJECT *)a1, (PVOID)0x4E4D4944, 0x4A8u, &DriverObjectExtension) >= 0 )
  {
    memset(DriverObjectExtension, 0, 0x4A8uLL);
    *((_BYTE *)DriverObjectExtension + 24) = v7->Ndis50Chars.MajorNdisVersion;
    *((_BYTE *)DriverObjectExtension + 25) = v7->Ndis50Chars.MinorNdisVersion;
    memmove((char *)DriverObjectExtension + 112, v7, v12);
    if ( v7->Ndis50Chars.MajorNdisVersion == 5 )
    {
      *((_QWORD *)DriverObjectExtension + 63) = v7->Ndis50Chars.CoCreateVcHandler;
      *((_QWORD *)DriverObjectExtension + 64) = v7->Ndis50Chars.CoDeleteVcHandler;
      *((_QWORD *)DriverObjectExtension + 65) = v7->Ndis50Chars.CoActivateVcHandler;
      *((_QWORD *)DriverObjectExtension + 66) = v7->Ndis50Chars.CoDeactivateVcHandler;
      *((_QWORD *)DriverObjectExtension + 68) = v7->Ndis50Chars.CoRequestHandler;
    }
    if ( MmIsDriverVerifying(*(struct _DRIVER_OBJECT **)a1)
      && (*((_WORD *)DriverObjectExtension + 13) |= 2u, (ndisFlags & 0x400) != 0) )
    {
      v14 = 0LL;
      v15 = DriverObjectExtension;
      if ( !ndisDriverTrackAlloc )
        v14 = (struct _NDIS_M_DRIVER_BLOCK *)DriverObjectExtension;
      ndisDriverTrackAlloc = v14;
    }
    else
    {
      v15 = DriverObjectExtension;
    }
    v15[2] = 0LL;
    v16 = 28LL;
    do
    {
      *(_QWORD *)(v10 + *(_QWORD *)a1) = ndisDummyIrpHandler;
      v10 += 8LL;
      --v16;
    }
    while ( v16 );
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 8LL) = ndisWdmPnPAddDevice;
    *(_QWORD *)(*(_QWORD *)a1 + 104LL) = ndisMUnload;
    *(_QWORD *)(*(_QWORD *)a1 + 112LL) = ndisCreateIrpHandler;
    *(_QWORD *)(*(_QWORD *)a1 + 224LL) = ndisDeviceControlIrpHandler;
    *(_QWORD *)(*(_QWORD *)a1 + 232LL) = ndisDeviceInternalIrpDispatch;
    *(_QWORD *)(*(_QWORD *)a1 + 128LL) = ndisCloseIrpHandler;
    *(_QWORD *)(*(_QWORD *)a1 + 328LL) = ndisPnPDispatch;
    *(_QWORD *)(*(_QWORD *)a1 + 288LL) = ndisPowerDispatch;
    *(_QWORD *)(*(_QWORD *)a1 + 296LL) = ndisWMIIrpDispatch;
    KeInitializeEvent((PRKEVENT)((char *)DriverObjectExtension + 368), NotificationEvent, 0);
    *((_QWORD *)DriverObjectExtension + 4) = a1;
    *((_QWORD *)DriverObjectExtension + 5) = *(_QWORD *)a1;
    v17 = (char *)DriverObjectExtension + 80;
    *((_QWORD *)DriverObjectExtension + 11) = (char *)DriverObjectExtension + 80;
    *v17 = v17;
    ndisInitializeRef((struct _REFERENCE_EX *)((char *)DriverObjectExtension + 392), 0xDu);
    *(_BYTE *)DriverObjectExtension = 2;
    *((_WORD *)DriverObjectExtension + 1) = 1192;
    *((_BYTE *)DriverObjectExtension + 1) = 1;
    ndisGetServiceNameFromRegPath(
      (struct _UNICODE_STRING *)(a1 + 8),
      (struct _UNICODE_STRING *)((char *)DriverObjectExtension + 488));
    ndisQueryDriverImageName(
      (struct _UNICODE_STRING *)((char *)DriverObjectExtension + 488),
      (struct _UNICODE_STRING *)((char *)DriverObjectExtension + 872));
    ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
    v18 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v19 = ndisDriverObject;
    *((_QWORD *)DriverObjectExtension + 1) = ndisMiniDriverList;
    ndisMiniDriverList = (struct _NDIS_M_DRIVER_BLOCK *)DriverObjectExtension;
    ObfReferenceObject(v19);
    KeReleaseSpinLock(&ndisMiniDriverListLock, v18);
    ndisDereferencePackage((PVOID *)&ndisPkgs);
    *a4 = DriverObjectExtension;
  }
  else
  {
    v4 = -1073741670;
  }
LABEL_38:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      1,
      15,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      (char)DriverObjectExtension);
  }
  return v4;
}
