/*
 * XREFs of ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x14002CA50
 * Callers:
 *     ndisWMIDispatch @ 0x14002BA20 (ndisWMIDispatch.c)
 *     NdisWdfChangeSingleInstance @ 0x14009E5A0 (NdisWdfChangeSingleInstance.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1400130E0 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     ?ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140016A10 (-ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140018100 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qDq @ 0x140024890 (WPP_RECORDER_SF_qDq.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z @ 0x14002D480 (-ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z.c)
 *     ?ndisWmiFindInstanceName@@YAJPEAPEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEA_WG@Z @ 0x14002EDC0 (-ndisWmiFindInstanceName@@YAJPEAPEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEA_WG@Z.c)
 *     NdisOpenConfiguration @ 0x14004F910 (NdisOpenConfiguration.c)
 *     NdisCloseConfiguration @ 0x140051840 (NdisCloseConfiguration.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140059BB0 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140059C40 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z @ 0x14005AAB0 (-ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z.c)
 *     ?ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14005B600 (-ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x1400706B0 (-ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z.c)
 *     NdisWriteConfiguration @ 0x14007D550 (NdisWriteConfiguration.c)
 *     ?ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140081E60 (-ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x14008EDC0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ?ndisWakeUpDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400BDBEC (-ndisWakeUpDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWmiSetPMAdminConfig@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ADMIN_CONFIG@@@Z @ 0x1400BDD20 (-ndisWmiSetPMAdminConfig@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ADMIN_CONFIG@@@Z.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1400D7C00 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisNDKHandleWmiChangeRequest@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14014B2BC (-ndisNDKHandleWmiChangeRequest@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x14017DCF0 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 *     ?ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x14017DF70 (-ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 */

__int64 __fastcall ndisWmiChangeSingleInstance(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_GUID *a2,
        struct tagWNODE_SINGLE_INSTANCE *const a3)
{
  struct _NDIS_GUID *v4; // r15
  int InstanceName; // ebx
  struct _NDIS_CO_VC_PTR_BLOCK *v7; // r14
  struct _NDIS_MINIPORT_BLOCK *v8; // r12
  int v9; // edx
  int v10; // edx
  _NDIS_BIND_PATHS *BindPaths; // rcx
  int v12; // r9d
  unsigned int Flags; // ecx
  char *v14; // r13
  ULONG SizeDataBlock; // edi
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // ecx
  unsigned int *v19; // r14
  unsigned int v20; // eax
  unsigned int WSyncFlags; // edx
  unsigned int *p_PnPCapabilities; // rdi
  _NDIS_IF_BLOCK *IfBlock; // rcx
  unsigned __int8 ifDeviceWakeUpEnable; // r8
  _NDIS_IF_BLOCK *v25; // rcx
  int v26; // edx
  int v27; // eax
  __int64 v28; // rax
  unsigned int PnPFlags; // ecx
  unsigned int v30; // eax
  __int64 v31; // rax
  unsigned int v32; // eax
  __int64 v33; // rax
  NDIS_HANDLE RequestHandle; // rbx
  int v35; // r8d
  ULONG v36; // edi
  unsigned int Oid; // ecx
  struct _NDIS_MINIPORT_BLOCK *v38; // rcx
  int v39; // edx
  int v40; // ecx
  int v41; // edi
  int v43; // eax
  __int64 v44; // [rsp+30h] [rbp-D0h]
  int Status; // [rsp+50h] [rbp-B0h] BYREF
  NDIS_PORT_NUMBER v46; // [rsp+54h] [rbp-ACh]
  unsigned int v47; // [rsp+58h] [rbp-A8h]
  UINT v48; // [rsp+5Ch] [rbp-A4h]
  unsigned int v49; // [rsp+60h] [rbp-A0h]
  struct _NDIS_CO_VC_PTR_BLOCK *v50; // [rsp+68h] [rbp-98h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v51; // [rsp+70h] [rbp-90h] BYREF
  struct _NDIS_GUID *v52; // [rsp+78h] [rbp-88h] BYREF
  PVOID ConfigurationHandle; // [rsp+80h] [rbp-80h] BYREF
  void *v54; // [rsp+88h] [rbp-78h]
  UNICODE_STRING Keyword; // [rsp+90h] [rbp-70h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+A0h] [rbp-60h] BYREF
  struct _NDIS_OID_REQUEST v57; // [rsp+C0h] [rbp-40h] BYREF
  struct _NET_PNP_EVENT_NOTIFICATION v58; // [rsp+1C0h] [rbp+C0h] BYREF

  v52 = a2;
  v4 = a2;
  InstanceName = 0;
  Status = 0;
  memset(&v57, 0, 0xF8uLL);
  v50 = 0LL;
  v46 = 0;
  Keyword.Buffer = L"PnPCapabilities";
  v47 = 0;
  v54 = 0LL;
  v7 = 0LL;
  v48 = 0;
  v8 = 0LL;
  v51 = 0LL;
  ConfigurationHandle = 0LL;
  memset(&ParameterValue, 0, sizeof(ParameterValue));
  *(_QWORD *)&Keyword.Length = 2097182LL;
  memset(&v58, 0, sizeof(v58));
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      18,
      49,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1);
  }
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( (a3->WnodeHeader.Flags & 0x80u) != 0 )
    goto LABEL_8;
  InstanceName = ndisWmiFindInstanceName(
                   &v50,
                   a1,
                   (wchar_t *)((char *)&a3->WnodeHeader.BufferSize + a3->OffsetInstanceName + 2),
                   *(_WORD *)((char *)&a3->WnodeHeader.BufferSize + a3->OffsetInstanceName));
  if ( InstanceName < 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v10,
        18,
        50,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        (char)a1);
    }
    goto LABEL_109;
  }
  v7 = v50;
  InstanceName = 0;
  if ( !v50 )
  {
LABEL_8:
    BindPaths = a1->BindPaths;
    if ( BindPaths )
    {
      ndisReferenceMiniportByName(BindPaths->Paths, &v51, 0, MPREF_WMI_CHANGE);
      v8 = v51;
    }
  }
  if ( !v4 )
  {
    ndisWmiGetGuid(&v52, a1, &a3->WnodeHeader.Guid, 0);
    v4 = v52;
    if ( !v52 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      {
LABEL_15:
        InstanceName = -1073741811;
        goto LABEL_105;
      }
      v12 = 51;
LABEL_14:
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v10,
        18,
        v12,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        (char)a1);
      goto LABEL_15;
    }
  }
  Flags = v4->Flags;
  if ( (Flags & 0x40000000) != 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v10,
        18,
        52,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        (char)a1);
    }
    InstanceName = -1073741637;
    goto LABEL_105;
  }
  v14 = (char *)a3 + a3->DataBlockOffset;
  SizeDataBlock = a3->SizeDataBlock;
  if ( !SizeDataBlock )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_15;
    v12 = 53;
    goto LABEL_14;
  }
  if ( (Flags & 0x200) != 0 )
  {
    if ( SizeDataBlock < 0x20 )
    {
      InstanceName = -1073741811;
      goto LABEL_105;
    }
    if ( *((_QWORD *)v14 + 1) != a1->NetLuid.Value )
    {
      InstanceName = -1073741811;
      goto LABEL_105;
    }
    v46 = *((_DWORD *)v14 + 1);
    v54 = (void *)*((_QWORD *)v14 + 2);
    v48 = *((_DWORD *)v14 + 6);
    v47 = 32;
  }
  if ( v7 || (Flags & 0x20000000) == 0 )
  {
    if ( (Flags & 1) == 0 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v10,
          18,
          56,
          (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
          (char)a1);
      }
      InstanceName = -1073741808;
      goto LABEL_105;
    }
    if ( v4->Oid == 66076 )
    {
      if ( SizeDataBlock != 4 )
      {
        InstanceName = -1073741808;
        goto LABEL_105;
      }
      if ( (*(_DWORD *)v14 & 0xFFFFF000) != 0 )
      {
        InstanceName = -1073741808;
        goto LABEL_105;
      }
    }
    *(_DWORD *)&v57.NdisReserved[16] |= 8u;
    RequestHandle = &ndisIntReqWmi;
    *(_QWORD *)&v57.NdisReserved[32] = &ndisIntReqWmi;
    EtwActivityIdControl(3u, (LPGUID)&v57.NdisReserved[96]);
    v36 = SizeDataBlock - v47;
    v57.Header = (NDIS_OBJECT_HEADER)15466902;
    Oid = v4->Oid;
    v57.PortNumber = v46;
    v57.DATA.QUERY_INFORMATION.InformationBuffer = &v14[v47];
    v57.RequestId = v54;
    if ( !v54 )
      RequestHandle = v57.RequestHandle;
    v57.RequestHandle = RequestHandle;
    v57.DATA.QUERY_INFORMATION.Oid = Oid;
    v57.RequestType = NdisRequestSetInformation;
    v57.DATA.QUERY_INFORMATION.InformationBufferLength = v36;
    v57.Timeout = v48;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        v35,
        0x39u,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        (char)&v57,
        Oid,
        a1);
    if ( v7 || (v38 = v8) == 0LL )
      v38 = a1;
    Status = ndisQuerySetMiniport(v38, v7, &v57, 0, 0LL);
    v41 = Status;
    if ( Status == -1071448017 )
    {
      if ( (v4->Flags & 0x200) == 0 )
      {
LABEL_104:
        InstanceName = 0;
        goto LABEL_105;
      }
    }
    else if ( !Status )
    {
      goto LABEL_104;
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v39) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v39,
        18,
        58,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        (char)a1);
    }
    if ( (byte_140125101 & 0x10) != 0 )
      McTemplateK0jqxddq_EtwWriteTransfer(
        v40,
        (unsigned int)&ChangeInformationFailed,
        (_DWORD)a1 + 4008,
        (_DWORD)a1 + 4008,
        a1->IfIndex,
        a1->NetLuid.Value,
        Status,
        1,
        0);
    if ( (v4->Flags & 0x200) != 0 )
    {
      if ( (Status & 0xC0010000) == 0xC0010000 )
      {
        v41 = (unsigned __int16)Status | 0xC0230000;
        Status = v41;
      }
    }
    else if ( Status != 259 && Status != -2147483643 )
    {
      v43 = -1073741823;
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
            v43 = -1073741811;
          InstanceName = v43;
        }
        goto LABEL_105;
      }
    }
    InstanceName = v41;
LABEL_105:
    if ( v7 )
      ndisDereferenceVcPtr(v7);
    goto LABEL_107;
  }
  if ( SizeDataBlock == 4 )
  {
    v49 = *(_DWORD *)v14;
    if ( v49 > 1 )
      goto LABEL_33;
  }
  v16 = *(_QWORD *)&v4->Guid.Data1 - *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1;
  if ( *(_QWORD *)&v4->Guid.Data1 == *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1 )
    v16 = *(_QWORD *)v4->Guid.Data4 - *(_QWORD *)GUID_NDIS_NDK_STATE.Data4;
  if ( !v16 )
  {
    InstanceName = ndisNDKHandleWmiChangeRequest(a1, *v14);
    goto LABEL_107;
  }
  v17 = *(_QWORD *)&v4->Guid.Data1 - *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1;
  if ( *(_QWORD *)&v4->Guid.Data1 == *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1 )
    v17 = *(_QWORD *)v4->Guid.Data4 - *(_QWORD *)GUID_POWER_DEVICE_ENABLE.Data4;
  if ( v17 )
  {
    v28 = *(_QWORD *)&v4->Guid.Data1 - *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1;
    if ( *(_QWORD *)&v4->Guid.Data1 == *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1 )
      v28 = *(_QWORD *)v4->Guid.Data4 - *(_QWORD *)GUID_POWER_DEVICE_WAKE_ENABLE.Data4;
    if ( v28 )
    {
      v31 = *(_QWORD *)&v4->Guid.Data1 - *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1;
      if ( *(_QWORD *)&v4->Guid.Data1 == *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1 )
        v31 = *(_QWORD *)v4->Guid.Data4 - *(_QWORD *)GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data4;
      if ( v31 )
      {
        v33 = *(_QWORD *)&v4->Guid.Data1 - *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1;
        if ( *(_QWORD *)&v4->Guid.Data1 == *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1 )
          v33 = *(_QWORD *)v4->Guid.Data4 - *(_QWORD *)GUID_NDIS_PM_ADMIN_CONFIG.Data4;
        if ( v33 )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v10) = 2;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v10,
              18,
              55,
              (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
              (char)a1);
          }
          InstanceName = -1073741808;
          goto LABEL_107;
        }
        v27 = ndisWmiSetPMAdminConfig(a1, (struct _NDIS_WMI_PM_ADMIN_CONFIG *)v14);
        p_PnPCapabilities = &a1->PnPCapabilities;
        goto LABEL_81;
      }
      if ( (a1->PnPFlags & 0x4000001) == 0x4000001
        && (unsigned int)(a1->PMHardwareCapabilities.MinMagicPacketWakeUp - 2) <= 2 )
      {
        p_PnPCapabilities = &a1->PnPCapabilities;
        v32 = a1->PnPCapabilities & 0xEFFFFFFF;
        a1->PnPCapabilities = v32;
        if ( *v14 )
          *p_PnPCapabilities = v32 | 0x100;
        else
          *p_PnPCapabilities = v32 & 0xFFFFFEFF;
        goto LABEL_49;
      }
    }
    else
    {
      PnPFlags = a1->PnPFlags;
      if ( (PnPFlags & 0x4000001) == 0x4000001 && !a1->AoAc )
      {
        p_PnPCapabilities = &a1->PnPCapabilities;
        v30 = a1->PnPCapabilities & 0xEFFFFFFF;
        a1->PnPCapabilities = v30;
        if ( *v14 )
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
        goto LABEL_49;
      }
    }
LABEL_33:
    InstanceName = -1073741808;
    goto LABEL_107;
  }
  v18 = a1->PnPFlags;
  if ( (v18 & 0x8001) != 1 || a1->AoAc )
    goto LABEL_33;
  v19 = &a1->PnPCapabilities;
  v20 = a1->PnPCapabilities & 0xEFFFFFFF;
  a1->PnPCapabilities = v20;
  if ( *v14 )
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
    goto LABEL_49;
  }
  a1->PMCurrentParameters.WakeUpFlags &= ~1u;
  a1->PnPFlags = v18 & 0xFFFFFFDF;
  *v19 = v20 | 0x18;
  ndisCancelMediaDisconnectTimer(a1);
  p_PnPCapabilities = &a1->PnPCapabilities;
  if ( a1->CurrentDevicePowerState == PowerDeviceD0 || (a1->Flags & 0x20000000) != 0 || (a1->WSyncFlags & 8) == 0 )
  {
LABEL_49:
    ndisUpdateAndIndicatePMCapabilities(a1);
    NdisOpenConfiguration(&Status, &ConfigurationHandle, a1->ConfigurationHandle);
    if ( Status >= 0 )
    {
      ParameterValue.ParameterData.IntegerData = *p_PnPCapabilities;
      NdisWriteConfiguration(&Status, ConfigurationHandle, &Keyword, &ParameterValue);
      NdisCloseConfiguration(ConfigurationHandle);
    }
    ndisInitializeNetPnPEvent(&v58, 0LL);
    v58.NetPnPEvent.NetEvent = NetEventPnPCapabilities;
    v58.NetPnPEvent.Buffer = &a1->PMCapabilities61;
    v58.NetPnPEvent.BufferLength = 4;
    ndisPnPNotifyAllTransports(a1, &v58);
    if ( ndisMReferenceIfBlock(a1, MPIFREF_WMI) )
    {
      IfBlock = a1->IfBlock;
      ifDeviceWakeUpEnable = IfBlock->ifDeviceWakeUpEnable;
      IfBlock->ifDeviceWakeUpEnable = a1->PMCapabilities61.Flags & 1;
      v25 = a1->IfBlock;
      if ( ifDeviceWakeUpEnable != v25->ifDeviceWakeUpEnable )
        ndisNsiScheduleIfBlockRodChangeNotification(v25, &v25->ifDeviceWakeUpEnable, 1u, 0x281u);
      ndisMDereferenceIfBlock(a1, MPIFREF_WMI);
    }
    goto LABEL_107;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v26) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v26,
      14,
      54,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1);
  }
  v27 = ndisWakeUpDevice(a1);
LABEL_81:
  InstanceName = v27;
  if ( v27 >= 0 )
    goto LABEL_49;
LABEL_107:
  if ( v8 )
    ndisDereferenceMiniport(v8, 0x5Fu);
LABEL_109:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v44) = InstanceName;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x3Bu,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1,
      v44);
  }
  return (unsigned int)InstanceName;
}
