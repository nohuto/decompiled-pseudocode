/*
 * XREFs of NvmeNamespacePnpIrp @ 0x140105C68
 * Callers:
 *     RaDriverPnpIrp @ 0x140015600 (RaDriverPnpIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pddp_EtwWriteTransfer @ 0x140056914 (McTemplateK0pddp_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeNamespaceAcquireRemoveLock @ 0x1400FB9D8 (NvmeNamespaceAcquireRemoveLock.c)
 *     NvmeNamespaceDeviceUsageNotificationIrp @ 0x1400FDD98 (NvmeNamespaceDeviceUsageNotificationIrp.c)
 *     NvmeNamespaceQueryInterfaceIrp @ 0x140109DDC (NvmeNamespaceQueryInterfaceIrp.c)
 *     NvmeNamespaceRemoveDeviceIrp @ 0x14010C0D0 (NvmeNamespaceRemoveDeviceIrp.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     RaUnitIgnorePnpIrp @ 0x14018597C (RaUnitIgnorePnpIrp.c)
 *     RaUnitSucceedPnpIrp @ 0x14018ADB4 (RaUnitSucceedPnpIrp.c)
 *     NvmeNamespaceCancelStopDeviceIrp @ 0x1401A1294 (NvmeNamespaceCancelStopDeviceIrp.c)
 *     NvmeNamespaceDeviceEnumeratedIrp @ 0x1401A35F4 (NvmeNamespaceDeviceEnumeratedIrp.c)
 *     NvmeNamespaceQueryCapabilitiesIrp @ 0x1401A5E28 (NvmeNamespaceQueryCapabilitiesIrp.c)
 *     NvmeNamespaceQueryDeviceRelationsIrp @ 0x1401A651C (NvmeNamespaceQueryDeviceRelationsIrp.c)
 *     NvmeNamespaceQueryDeviceTextIrp @ 0x1401A68F0 (NvmeNamespaceQueryDeviceTextIrp.c)
 *     NvmeNamespaceQueryIdIrp @ 0x1401A7394 (NvmeNamespaceQueryIdIrp.c)
 *     NvmeNamespaceQueryPnpDeviceStateIrp @ 0x1401A7790 (NvmeNamespaceQueryPnpDeviceStateIrp.c)
 *     NvmeNamespaceQueryRemoveDeviceIrp @ 0x1401A7B0C (NvmeNamespaceQueryRemoveDeviceIrp.c)
 *     NvmeNamespaceQueryStopDeviceIrp @ 0x1401A7EA4 (NvmeNamespaceQueryStopDeviceIrp.c)
 *     NvmeNamespaceStartDeviceIrp @ 0x1401A97E8 (NvmeNamespaceStartDeviceIrp.c)
 *     NvmeNamespaceStopDeviceIrp @ 0x1401A9D68 (NvmeNamespaceStopDeviceIrp.c)
 *     NvmeNamespaceSurpriseRemovalIrp @ 0x1401B1928 (NvmeNamespaceSurpriseRemovalIrp.c)
 */

__int64 __fastcall NvmeNamespacePnpIrp(PEX_RUNDOWN_REF_CACHE_AWARE *StartContext, PIRP Irp)
{
  int v2; // esi
  __int64 v5; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  unsigned int MinorFunction; // ebx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // ecx
  bool v11; // zf
  unsigned __int64 v12; // rcx
  _IO_STACK_LOCATION *v13; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v15; // rdx
  unsigned __int64 ProviderId; // rdx
  char v17; // r15
  _BYTE *v18; // r9
  unsigned __int8 v19; // r10
  char v20; // bl
  char v21; // r11
  char v22; // r13
  char *v23; // r11
  unsigned int v24; // eax
  unsigned int v25; // r8d
  unsigned int *v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // r14
  char v29; // cl
  char v30; // r8
  _BYTE *v31; // rax
  unsigned int v32; // eax
  char v33; // al
  char v35; // r12
  unsigned int v36; // ebx
  unsigned int v37; // ebx
  unsigned int v38; // ebx
  unsigned int v39; // ebx
  unsigned int DeviceTextIrp; // eax
  unsigned int v41; // ebx
  __int64 v42; // [rsp+20h] [rbp-59h]
  __int64 v43; // [rsp+28h] [rbp-51h]
  __int64 v44; // [rsp+30h] [rbp-49h]
  char v45; // [rsp+60h] [rbp-19h] BYREF
  char v46; // [rsp+61h] [rbp-18h]
  unsigned int v47; // [rsp+64h] [rbp-15h]
  unsigned int v48; // [rsp+68h] [rbp-11h]
  int v49; // [rsp+6Ch] [rbp-Dh]
  unsigned __int64 v50; // [rsp+70h] [rbp-9h]
  GUID v51; // [rsp+78h] [rbp-1h] BYREF
  GUID v52; // [rsp+88h] [rbp+Fh] BYREF

  v2 = 0;
  v52 = 0LL;
  v45 = 0;
  v47 = NvmeNamespaceAcquireRemoveLock((__int64)StartContext, (__int64)Irp);
  if ( v47 == -1073741738 && *((_DWORD *)StartContext + 24) == 7 )
  {
    ExReInitializeRundownProtectionCacheAware(StartContext[15]);
    v47 = NvmeNamespaceAcquireRemoveLock((__int64)StartContext, (__int64)Irp);
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(Irp, &v52);
    if ( MinorFunction > 0x16 || (v9 = 4718720, !_bittest(&v9, MinorFunction)) )
    {
      if ( (byte_140171462 & 0x20) != 0 )
        McTemplateK0pddp_EtwWriteTransfer(v8, v5, &v52, Irp, MinorFunction, 0, StartContext[1]);
    }
  }
  v10 = v47;
  if ( (v47 & 0x80000000) == 0 )
  {
    v35 = 1;
    v45 = 1;
    if ( MinorFunction <= 0xC )
    {
      if ( MinorFunction == 12 )
      {
        DeviceTextIrp = NvmeNamespaceQueryDeviceTextIrp(StartContext, Irp);
        goto LABEL_127;
      }
      if ( MinorFunction > 6 )
      {
        switch ( MinorFunction )
        {
          case 7u:
            if ( StorEtwLoggingEnabled && (byte_140171462 & 0x20) != 0 )
            {
              LODWORD(v43) = CurrentStackLocation->Parameters.Read.Length;
              LODWORD(v42) = 7;
              McTemplateK0pddp_EtwWriteTransfer(v47, v5, &v52, Irp, v42, v43, StartContext[1]);
            }
            DeviceTextIrp = NvmeNamespaceQueryDeviceRelationsIrp(StartContext, Irp);
            goto LABEL_127;
          case 8u:
            DeviceTextIrp = NvmeNamespaceQueryInterfaceIrp(StartContext, Irp);
            goto LABEL_127;
          case 9u:
            DeviceTextIrp = NvmeNamespaceQueryCapabilitiesIrp(StartContext, Irp);
            goto LABEL_127;
        }
        if ( MinorFunction - 10 <= 1 )
        {
          DeviceTextIrp = RaUnitSucceedPnpIrp(v47, Irp);
          goto LABEL_127;
        }
      }
      else
      {
        if ( MinorFunction == 6 )
          goto LABEL_91;
        if ( !MinorFunction )
        {
          DeviceTextIrp = NvmeNamespaceStartDeviceIrp(StartContext, Irp);
          goto LABEL_127;
        }
        v36 = MinorFunction - 1;
        if ( !v36 )
        {
          DeviceTextIrp = NvmeNamespaceQueryRemoveDeviceIrp(StartContext, Irp);
          goto LABEL_127;
        }
        v37 = v36 - 1;
        if ( !v37 )
        {
LABEL_92:
          DeviceTextIrp = NvmeNamespaceRemoveDeviceIrp(StartContext, Irp, &v45);
          v35 = v45;
          goto LABEL_127;
        }
        v38 = v37 - 1;
        if ( !v38 )
        {
LABEL_91:
          DeviceTextIrp = NvmeNamespaceCancelStopDeviceIrp(StartContext, Irp);
          goto LABEL_127;
        }
        v39 = v38 - 1;
        if ( !v39 )
        {
          DeviceTextIrp = NvmeNamespaceStopDeviceIrp(StartContext, Irp);
          goto LABEL_127;
        }
        if ( v39 == 1 )
        {
          DeviceTextIrp = NvmeNamespaceQueryStopDeviceIrp(StartContext, Irp);
          goto LABEL_127;
        }
      }
      goto LABEL_110;
    }
    if ( MinorFunction <= 0x13 )
    {
      if ( MinorFunction == 19 )
      {
        if ( StorEtwLoggingEnabled && (byte_140171462 & 0x20) != 0 )
        {
          LODWORD(v43) = CurrentStackLocation->Parameters.Read.Length;
          LODWORD(v42) = 19;
          McTemplateK0pddp_EtwWriteTransfer(v47, v5, &v52, Irp, v42, v43, StartContext[1]);
        }
        DeviceTextIrp = NvmeNamespaceQueryIdIrp(StartContext, Irp);
        goto LABEL_127;
      }
      goto LABEL_110;
    }
    switch ( MinorFunction )
    {
      case 0x14u:
        DeviceTextIrp = NvmeNamespaceQueryPnpDeviceStateIrp(StartContext, Irp);
        break;
      case 0x15u:
        goto LABEL_110;
      case 0x16u:
        if ( StorEtwLoggingEnabled && (byte_140171462 & 0x20) != 0 )
        {
          LODWORD(v43) = CurrentStackLocation->Parameters.Create.Options;
          LODWORD(v42) = MinorFunction;
          McTemplateK0pddp_EtwWriteTransfer(v47, v5, &v52, Irp, v42, v43, StartContext[1]);
        }
        DeviceTextIrp = NvmeNamespaceDeviceUsageNotificationIrp((__int64)StartContext, (__int64)Irp);
        break;
      case 0x17u:
        return (unsigned int)NvmeNamespaceSurpriseRemovalIrp(StartContext, Irp);
      case 0x19u:
        DeviceTextIrp = NvmeNamespaceDeviceEnumeratedIrp(StartContext, Irp);
        break;
      default:
LABEL_110:
        DeviceTextIrp = RaUnitIgnorePnpIrp(v47, Irp);
        break;
    }
LABEL_127:
    v41 = DeviceTextIrp;
    if ( v35 )
      ExReleaseRundownProtectionCacheAware(StartContext[15]);
    return v41;
  }
  if ( MinorFunction == 2 && ((*((_DWORD *)StartContext + 24) - 5) & 0xFFFFFFFD) == 0 )
    goto LABEL_92;
  v11 = StorEtwLoggingEnabled == 0;
  Irp->IoStatus.Information = 0LL;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = v10;
  if ( v11 )
    goto LABEL_78;
  v51 = 0LL;
  IoGetActivityIdIrp(Irp, &v51);
  v13 = Irp->Tail.Overlay.CurrentStackLocation;
  if ( v13->MajorFunction == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_78;
    v15 = &EventNonReadWriteRequestComplete;
    goto LABEL_77;
  }
  if ( v13->MajorFunction != 15 )
  {
    if ( v13->MajorFunction != 27 )
      goto LABEL_78;
    if ( v13->MinorFunction == 7 && !v13->Parameters.Read.Length )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        Information = (int *)Irp->IoStatus.Information;
        if ( Information )
          v2 = *Information;
        LODWORD(v43) = Irp->IoStatus.Status;
        LODWORD(v42) = v2;
        McTemplateK0pqd_EtwWriteTransfer(v12, (__int64)v13, &v51, Irp, v42, v43);
      }
      goto LABEL_78;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_78;
    v15 = &EventPnpRequestComplete;
LABEL_77:
    LODWORD(v42) = Irp->IoStatus.Status;
    McTemplateK0pd_EtwWriteTransfer(v12, v15, &v51, Irp, v42);
    goto LABEL_78;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_78;
  ProviderId = v13->Parameters.WMI.ProviderId;
  v17 = 0;
  v18 = 0LL;
  v45 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  if ( *(_BYTE *)(ProviderId + 2) != 40 )
  {
    v29 = *(_BYTE *)(ProviderId + 72);
    v18 = *(_BYTE **)(ProviderId + 32);
    v19 = *(_BYTE *)(ProviderId + 11);
    v17 = *(_BYTE *)(ProviderId + 4);
    if ( !*(_BYTE *)(ProviderId + 2) )
      goto LABEL_54;
    goto LABEL_78;
  }
  v23 = 0LL;
  v46 = 0;
  if ( *(_DWORD *)(ProviderId + 20) )
    goto LABEL_78;
  v24 = *(_DWORD *)(ProviderId + 56);
  v12 = 0LL;
  v49 = 0;
  v48 = v24;
  if ( !v24 )
    goto LABEL_51;
  v25 = v48;
  v26 = (unsigned int *)(ProviderId + 120);
  v50 = ProviderId + 120;
  while ( 1 )
  {
    v27 = *v26;
    if ( (unsigned int)v27 >= 0x80 )
    {
      v28 = *(unsigned int *)(ProviderId + 16);
      if ( (unsigned int)v27 < (unsigned int)v28 )
        break;
    }
LABEL_45:
    v12 = (unsigned int)(v12 + 1);
    v26 = (unsigned int *)(v50 + 4);
    v49 = v12;
    v50 += 4LL;
    if ( (unsigned int)v12 >= v25 )
      goto LABEL_51;
  }
  if ( *(_DWORD *)(v27 + ProviderId) != 64 )
  {
    v12 = (unsigned int)(*(_DWORD *)(v27 + ProviderId) - 65);
    if ( *(_DWORD *)(v27 + ProviderId) == 65 )
    {
      v12 = v27 + 56;
      if ( v27 + 56 <= v28 )
      {
        v46 = 1;
        if ( *(_BYTE *)(v27 + ProviderId + 10) )
          v23 = (char *)(v27 + ProviderId + 24);
        v17 = *(_BYTE *)(v27 + ProviderId + 8);
        v18 = *(_BYTE **)(v27 + ProviderId + 16);
        v19 = *(_BYTE *)(v27 + ProviderId + 9);
      }
    }
    else if ( *(_DWORD *)(v27 + ProviderId) == 66 )
    {
      v12 = v27 + 40;
      if ( v27 + 40 <= v28 )
      {
        if ( *(_DWORD *)(v27 + ProviderId + 12) )
          v23 = (char *)(v27 + ProviderId + 32);
        v18 = *(_BYTE **)(v27 + ProviderId + 24);
        goto LABEL_50;
      }
    }
    goto LABEL_43;
  }
  v12 = v27 + 40;
  if ( v27 + 40 > v28 )
  {
LABEL_43:
    if ( v46 )
      goto LABEL_51;
    LODWORD(v12) = v49;
    v25 = v48;
    goto LABEL_45;
  }
  if ( *(_BYTE *)(v27 + ProviderId + 10) )
    v23 = (char *)(v27 + ProviderId + 24);
  v18 = *(_BYTE **)(v27 + ProviderId + 16);
LABEL_50:
  v19 = *(_BYTE *)(v27 + ProviderId + 9);
  v17 = *(_BYTE *)(v27 + ProviderId + 8);
LABEL_51:
  if ( v23 )
  {
    v29 = *v23;
    v21 = 0;
LABEL_54:
    LOBYTE(v12) = v29 - 8;
    if ( (v12 & 0x5D) == 0 )
    {
      v30 = *(_BYTE *)(ProviderId + 3);
      if ( v30 == 1 || !v18 || !v19 )
        goto LABEL_73;
      LOBYTE(ProviderId) = 0;
      v12 = (unsigned __int64)&v18[v19];
      v31 = v18 + 8;
      if ( (unsigned __int8)((*v18 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v31 <= v12 )
        {
          LOBYTE(ProviderId) = 1;
          v21 = v18[2];
          v20 = v18[1] & 0xF;
          v22 = v18[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v31 <= v12 )
        {
          v20 = v18[2] & 0xF;
          v32 = v19;
          if ( (unsigned int)(unsigned __int8)v18[7] + 8 <= v19 )
            v32 = (unsigned __int8)v18[7] + 8;
          v12 = (unsigned __int64)(v18 + 13);
          ProviderId = (unsigned __int64)&v18[v32];
          if ( (unsigned __int64)(v18 + 13) > ProviderId )
            v45 = 0;
          else
            v45 = v18[12];
          if ( (unsigned __int64)(v18 + 14) <= ProviderId )
            v22 = *(_BYTE *)v12;
          LOBYTE(ProviderId) = 1;
        }
        v21 = v45;
      }
      if ( (_BYTE)ProviderId )
      {
        LOBYTE(v2) = v21;
        v33 = v22;
      }
      else
      {
LABEL_73:
        v20 = 0;
        v33 = 0;
      }
      LOBYTE(v44) = v17;
      LOBYTE(v43) = v30;
      LODWORD(v42) = Irp->IoStatus.Status;
      McTemplateK0pduuuuup_EtwWriteTransfer(v12, ProviderId, &v51, Irp, v42, v43, v44, v20, v2, v33, Irp);
    }
  }
LABEL_78:
  IofCompleteRequest(Irp, 0);
  return v47;
}
