/*
 * XREFs of ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x14002FEF0
 * Callers:
 *     ndisWMIDispatch @ 0x14002EAB0 (ndisWMIDispatch.c)
 *     NdisWdfChangeSingleInstance @ 0x140094980 (NdisWdfChangeSingleInstance.c)
 * Callees:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x14000AD80 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qDq @ 0x140015E00 (WPP_RECORDER_SF_qDq.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisWmiFindInstanceName@@YAJPEAPEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEA_WG@Z @ 0x140031460 (-ndisWmiFindInstanceName@@YAJPEAPEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEA_WG@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140035060 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1400350F0 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z @ 0x140036AF0 (-ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z.c)
 *     ?ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140036C80 (-ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003A730 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisCloseConfiguration @ 0x140045400 (NdisCloseConfiguration.c)
 *     ?ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140049980 (-ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisWriteConfiguration @ 0x1400622A0 (NdisWriteConfiguration.c)
 *     ?ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140065D90 (-ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x140073380 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     NdisOpenConfiguration @ 0x140076B10 (NdisOpenConfiguration.c)
 *     ?ndisWakeUpDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B5E5C (-ndisWakeUpDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWmiSetPMAdminConfig@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ADMIN_CONFIG@@@Z @ 0x1400B5F90 (-ndisWmiSetPMAdminConfig@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ADMIN_CONFIG@@@Z.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1400D05C0 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisNDKHandleWmiChangeRequest@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1401403FC (-ndisNDKHandleWmiChangeRequest@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x140172D30 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 *     ?ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140172FB0 (-ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 */

__int64 __fastcall ndisWmiChangeSingleInstance(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_GUID *pNdisGuidMap,
        struct tagWNODE_SINGLE_INSTANCE *const a3)
{
  int v6; // edx
  struct _NDIS_CO_VC_PTR_BLOCK *v7; // r13
  GUID *p_Guid; // rdx
  int InstanceName; // edi
  _NDIS_BIND_PATHS *BindPaths; // rcx
  struct _NDIS_MINIPORT_BLOCK *v11; // rdi
  unsigned int v12; // ecx
  bool v13; // zf
  int v14; // r9d
  unsigned int Flags; // ecx
  ULONG SizeDataBlock; // r12d
  char *v17; // r15
  unsigned int v18; // ecx
  unsigned int *v19; // r14
  unsigned int v20; // eax
  unsigned int WSyncFlags; // edx
  unsigned int *p_PnPCapabilities; // rbx
  struct _NDIS_MINIPORT_BLOCK *v23; // r15
  _NDIS_IF_BLOCK *IfBlock; // rcx
  unsigned __int8 ifDeviceWakeUpEnable; // r8
  _NDIS_IF_BLOCK *v26; // rcx
  int v27; // edx
  int v28; // eax
  unsigned int PnPFlags; // ecx
  unsigned int v30; // eax
  unsigned int v31; // eax
  NDIS_HANDLE RequestHandle; // rbx
  int v33; // r8d
  ULONG v34; // r12d
  unsigned int Oid; // ecx
  struct _NDIS_MINIPORT_BLOCK *v36; // rcx
  int v37; // edx
  int v38; // ecx
  int v39; // ebx
  int v41; // eax
  char v42[8]; // [rsp+38h] [rbp-D0h]
  struct _NDIS_MINIPORT_BLOCK *v43; // [rsp+58h] [rbp-B0h]
  int Status; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v45; // [rsp+64h] [rbp-A4h]
  __int64 v46; // [rsp+68h] [rbp-A0h]
  struct _NDIS_MINIPORT_BLOCK *v47; // [rsp+70h] [rbp-98h] BYREF
  struct _NDIS_CO_VC_PTR_BLOCK *v48; // [rsp+78h] [rbp-90h] BYREF
  PVOID ConfigurationHandle; // [rsp+80h] [rbp-88h] BYREF
  void *v50; // [rsp+88h] [rbp-80h]
  UNICODE_STRING Keyword; // [rsp+90h] [rbp-78h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+A0h] [rbp-68h] BYREF
  struct _NET_PNP_EVENT_NOTIFICATION v53; // [rsp+B8h] [rbp-50h] BYREF
  struct _NDIS_OID_REQUEST v54; // [rsp+168h] [rbp+60h] BYREF

  Status = 0;
  memset(&v54, 0, 0xF8uLL);
  v48 = 0LL;
  v46 = 0LL;
  Keyword.Buffer = L"PnPCapabilities";
  v7 = 0LL;
  v50 = 0LL;
  v45 = 0;
  v43 = 0LL;
  v47 = 0LL;
  ConfigurationHandle = 0LL;
  memset(&ParameterValue, 0, sizeof(ParameterValue));
  *(_QWORD *)&Keyword.Length = 2097182LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      18,
      49,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1);
  }
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( (a3->WnodeHeader.Flags & 0x80u) == 0 )
  {
    InstanceName = ndisWmiFindInstanceName(
                     &v48,
                     a1,
                     (wchar_t *)((char *)&a3->WnodeHeader.BufferSize + a3->OffsetInstanceName + 2),
                     *(_WORD *)((char *)&a3->WnodeHeader.BufferSize + a3->OffsetInstanceName));
    if ( InstanceName < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(p_Guid) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)p_Guid,
          18,
          50,
          (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
          (char)a1);
      }
      goto LABEL_127;
    }
    v7 = v48;
    if ( v48 )
      goto LABEL_10;
  }
  BindPaths = a1->BindPaths;
  if ( !BindPaths )
  {
LABEL_10:
    v11 = 0LL;
  }
  else
  {
    ndisReferenceMiniportByName(BindPaths->Paths, &v47, 0, MPREF_WMI_CHANGE);
    v11 = v47;
    v43 = v47;
  }
  if ( pNdisGuidMap )
    goto LABEL_27;
  pNdisGuidMap = a1->pNdisGuidMap;
  p_Guid = &a3->WnodeHeader.Guid;
  if ( !pNdisGuidMap || (v12 = 0, !a1->cNdisGuidMap) )
  {
LABEL_23:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 51;
      goto LABEL_25;
    }
LABEL_26:
    InstanceName = -1073741811;
    goto LABEL_122;
  }
  while ( a3 != (struct tagWNODE_SINGLE_INSTANCE *const)-24LL )
  {
    if ( *(_QWORD *)&pNdisGuidMap->Guid.Data1 == *(_QWORD *)&p_Guid->Data1 )
    {
      v13 = *(_QWORD *)pNdisGuidMap->Guid.Data4 == *(_QWORD *)a3->WnodeHeader.Guid.Data4;
      goto LABEL_19;
    }
LABEL_20:
    ++v12;
    ++pNdisGuidMap;
    if ( v12 >= a1->cNdisGuidMap )
      goto LABEL_23;
  }
  if ( (pNdisGuidMap->Flags & 2) == 0 )
    goto LABEL_20;
  v13 = pNdisGuidMap->Oid == 0;
LABEL_19:
  if ( !v13 )
    goto LABEL_20;
  if ( !pNdisGuidMap )
    goto LABEL_23;
LABEL_27:
  Flags = pNdisGuidMap->Flags;
  if ( (Flags & 0x40000000) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(p_Guid) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)p_Guid,
        18,
        52,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        (char)a1);
    }
    InstanceName = -1073741637;
    goto LABEL_122;
  }
  SizeDataBlock = a3->SizeDataBlock;
  v17 = (char *)a3 + a3->DataBlockOffset;
  if ( !SizeDataBlock )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 53;
LABEL_25:
      LOBYTE(p_Guid) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)p_Guid,
        18,
        v14,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        (char)a1);
    }
    goto LABEL_26;
  }
  if ( (Flags & 0x200) != 0 )
  {
    if ( SizeDataBlock < 0x20 )
    {
      InstanceName = -1073741811;
      goto LABEL_122;
    }
    if ( *((_QWORD *)v17 + 1) != a1->NetLuid.Value )
    {
      InstanceName = -1073741811;
      goto LABEL_122;
    }
    LODWORD(v46) = *((_DWORD *)v17 + 1);
    v50 = (void *)*((_QWORD *)v17 + 2);
    v45 = *((_DWORD *)v17 + 6);
    HIDWORD(v46) = 32;
  }
  if ( v7 || (Flags & 0x20000000) == 0 )
  {
    if ( (Flags & 1) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(p_Guid) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)p_Guid,
          18,
          56,
          (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
          (char)a1);
      }
      InstanceName = -1073741808;
LABEL_122:
      if ( v7 )
        ndisDereferenceVcPtr(v7);
LABEL_124:
      v23 = v43;
      goto LABEL_125;
    }
    if ( pNdisGuidMap->Oid == 66076 )
    {
      if ( SizeDataBlock != 4 )
      {
        InstanceName = -1073741808;
        goto LABEL_122;
      }
      if ( (*(_DWORD *)v17 & 0xFFFFF000) != 0 )
      {
        InstanceName = -1073741808;
        goto LABEL_122;
      }
    }
    *(_DWORD *)&v54.NdisReserved[16] |= 8u;
    RequestHandle = &ndisIntReqWmi;
    *(_QWORD *)&v54.NdisReserved[32] = &ndisIntReqWmi;
    EtwActivityIdControl(3u, (LPGUID)&v54.NdisReserved[96]);
    v34 = SizeDataBlock - HIDWORD(v46);
    v54.Header = (NDIS_OBJECT_HEADER)15466902;
    Oid = pNdisGuidMap->Oid;
    v54.PortNumber = v46;
    v54.DATA.QUERY_INFORMATION.InformationBuffer = &v17[HIDWORD(v46)];
    v54.RequestId = v50;
    if ( !v50 )
      RequestHandle = v54.RequestHandle;
    v54.RequestHandle = RequestHandle;
    v54.DATA.QUERY_INFORMATION.Oid = Oid;
    v54.RequestType = NdisRequestSetInformation;
    v54.DATA.QUERY_INFORMATION.InformationBufferLength = v34;
    v54.Timeout = v45;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        v33,
        0x39u,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        (char)&v54,
        Oid,
        a1);
    if ( v7 || (v36 = v11) == 0LL )
      v36 = a1;
    InstanceName = 0;
    Status = ndisQuerySetMiniportEx(v36, v7, &v54, 0, 0LL, 0LL);
    v39 = Status;
    if ( Status == -1071448017 )
    {
      if ( (pNdisGuidMap->Flags & 0x200) == 0 )
        goto LABEL_122;
    }
    else if ( !Status )
    {
      goto LABEL_122;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v37) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v37,
        18,
        58,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        (char)a1);
    }
    if ( (byte_14011B101 & 0x10) != 0 )
      McTemplateK0jqxddq_EtwWriteTransfer(
        v38,
        (unsigned int)&ChangeInformationFailed,
        (_DWORD)a1 + 4008,
        (_DWORD)a1 + 4008,
        a1->IfIndex,
        a1->NetLuid.Value,
        Status,
        1,
        0);
    if ( (pNdisGuidMap->Flags & 0x200) != 0 )
    {
      if ( (Status & 0xC0010000) == 0xC0010000 )
      {
        v39 = (unsigned __int16)Status | 0xC0230000;
        Status = v39;
      }
    }
    else if ( Status != 259 && Status != -2147483643 )
    {
      v41 = -1073741823;
      if ( Status != -1073741823 && Status != -1073741670 && Status != -1073741637 )
      {
        if ( Status == -1073676266 )
        {
          InstanceName = -1073741789;
        }
        else if ( Status == -1073676268 )
        {
          InstanceName = -1073741306;
        }
        else
        {
          if ( Status == -1073676267 )
            v41 = -1073741811;
          InstanceName = v41;
        }
        goto LABEL_122;
      }
    }
    InstanceName = v39;
    goto LABEL_122;
  }
  InstanceName = 0;
  if ( SizeDataBlock == 4 )
  {
    v45 = *(_DWORD *)v17;
    if ( v45 > 1 )
    {
LABEL_44:
      InstanceName = -1073741808;
      goto LABEL_124;
    }
  }
  if ( *(_QWORD *)&pNdisGuidMap->Guid.Data1 == *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1
    && *(_QWORD *)pNdisGuidMap->Guid.Data4 == *(_QWORD *)GUID_NDIS_NDK_STATE.Data4 )
  {
    InstanceName = ndisNDKHandleWmiChangeRequest(a1, *v17);
    goto LABEL_124;
  }
  if ( *(_QWORD *)&pNdisGuidMap->Guid.Data1 != *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1
    || *(_QWORD *)pNdisGuidMap->Guid.Data4 != *(_QWORD *)GUID_POWER_DEVICE_ENABLE.Data4 )
  {
    if ( *(_QWORD *)&pNdisGuidMap->Guid.Data1 == *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1
      && *(_QWORD *)pNdisGuidMap->Guid.Data4 == *(_QWORD *)GUID_POWER_DEVICE_WAKE_ENABLE.Data4 )
    {
      PnPFlags = a1->PnPFlags;
      if ( (PnPFlags & 0x4000001) != 0x4000001 || a1->AoAc )
        goto LABEL_44;
      p_PnPCapabilities = &a1->PnPCapabilities;
      v30 = a1->PnPCapabilities & 0xEFFFFFFF;
      a1->PnPCapabilities = v30;
      if ( *v17 )
      {
        a1->PnPFlags = PnPFlags | 0x40;
        *p_PnPCapabilities = v30 & 0xFFFFFFEF;
      }
      else
      {
        a1->PnPFlags = PnPFlags & 0xFFFFFFBF;
        *p_PnPCapabilities = v30 | 0x10;
        ndisCancelWaitWake(a1);
      }
LABEL_58:
      v23 = v43;
      goto LABEL_59;
    }
    if ( *(_QWORD *)&pNdisGuidMap->Guid.Data1 == *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1
      && *(_QWORD *)pNdisGuidMap->Guid.Data4 == *(_QWORD *)GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data4 )
    {
      if ( (a1->PnPFlags & 0x4000001) != 0x4000001
        || (unsigned int)(a1->PMHardwareCapabilities.MinMagicPacketWakeUp - 2) > 2 )
      {
        goto LABEL_44;
      }
      p_PnPCapabilities = &a1->PnPCapabilities;
      v31 = a1->PnPCapabilities & 0xEFFFFFFF;
      a1->PnPCapabilities = v31;
      v13 = *v17 == 0;
      v23 = v43;
      if ( v13 )
        *p_PnPCapabilities = v31 & 0xFFFFFEFF;
      else
        *p_PnPCapabilities = v31 | 0x100;
      goto LABEL_59;
    }
    if ( *(_QWORD *)&pNdisGuidMap->Guid.Data1 == *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1
      && *(_QWORD *)pNdisGuidMap->Guid.Data4 == *(_QWORD *)GUID_NDIS_PM_ADMIN_CONFIG.Data4 )
    {
      v28 = ndisWmiSetPMAdminConfig(a1, (struct _NDIS_WMI_PM_ADMIN_CONFIG *)v17);
      v23 = v43;
      p_PnPCapabilities = &a1->PnPCapabilities;
      goto LABEL_89;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(p_Guid) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)p_Guid,
        18,
        55,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        (char)a1);
    }
    InstanceName = -1073741808;
    goto LABEL_124;
  }
  v18 = a1->PnPFlags;
  if ( (v18 & 0x8001) != 1 || a1->AoAc )
    goto LABEL_44;
  v19 = &a1->PnPCapabilities;
  v20 = a1->PnPCapabilities & 0xEFFFFFFF;
  a1->PnPCapabilities = v20;
  if ( *v17 )
  {
    WSyncFlags = a1->WSyncFlags;
    if ( (WSyncFlags & 0x10) == 0 )
      a1->PnPFlags = v18 | 0x20;
    p_PnPCapabilities = &a1->PnPCapabilities;
    *v19 = v20 & 0xFFFFFFF7;
    if ( (WSyncFlags & 8) != 0 )
    {
      a1->PMCurrentParameters.WakeUpFlags |= 1u;
      if ( a1->MediaConnectState == MediaConnectStateDisconnected )
        ndisSetMediaDisconnectTimer(a1);
    }
    goto LABEL_58;
  }
  a1->PMCurrentParameters.WakeUpFlags &= ~1u;
  a1->PnPFlags = v18 & 0xFFFFFFDF;
  *v19 = v20 | 0x18;
  ndisCancelMediaDisconnectTimer(a1);
  p_PnPCapabilities = &a1->PnPCapabilities;
  if ( a1->CurrentDevicePowerState == PowerDeviceD0 )
    goto LABEL_58;
  if ( (a1->Flags & 0x20000000) != 0 || (a1->WSyncFlags & 8) == 0 )
  {
    v23 = v47;
    goto LABEL_59;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v27) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v27,
      14,
      54,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1);
  }
  v28 = ndisWakeUpDevice(a1);
  v23 = v47;
LABEL_89:
  InstanceName = v28;
  if ( v28 >= 0 )
  {
LABEL_59:
    ndisUpdateAndIndicatePMCapabilities(a1);
    NdisOpenConfiguration(&Status, &ConfigurationHandle, a1->ConfigurationHandle);
    if ( Status >= 0 )
    {
      ParameterValue.ParameterData.IntegerData = *p_PnPCapabilities;
      NdisWriteConfiguration(&Status, ConfigurationHandle, &Keyword, &ParameterValue);
      NdisCloseConfiguration(ConfigurationHandle);
    }
    *(_QWORD *)&v53.NetPnPEvent.NetEvent = 7LL;
    *(_QWORD *)&v53.Header.Type = 11272832LL;
    v53.NetPnPEvent.Buffer = &a1->PMCapabilities61;
    memset(&v53.NetPnPEvent.BufferLength + 1, 0, 148);
    v53.NetPnPEvent.BufferLength = 4;
    ndisPnPNotifyAllTransports(a1, &v53);
    if ( ndisMReferenceIfBlock(a1, MPIFREF_WMI) )
    {
      IfBlock = a1->IfBlock;
      ifDeviceWakeUpEnable = IfBlock->ifDeviceWakeUpEnable;
      IfBlock->ifDeviceWakeUpEnable = a1->PMCapabilities61.Flags & 1;
      v26 = a1->IfBlock;
      if ( ifDeviceWakeUpEnable != v26->ifDeviceWakeUpEnable )
        ndisNsiScheduleIfBlockRodChangeNotification(v26, &v26->ifDeviceWakeUpEnable, 1u, 0x281u);
      ndisMDereferenceIfBlock(a1, MPIFREF_WMI);
    }
  }
LABEL_125:
  if ( v23 )
    ndisDereferenceMiniport(v23, 0x5Fu);
LABEL_127:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v42 = InstanceName;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x3Bu,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1,
      *(_QWORD *)v42);
  }
  return (unsigned int)InstanceName;
}
