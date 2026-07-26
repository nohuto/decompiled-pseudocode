/*
 * XREFs of WPP_RECORDER_SF_qqD @ 0x140026FA0
 * Callers:
 *     NdisFOidRequest @ 0x140013740 (NdisFOidRequest.c)
 *     ?ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x140022040 (-ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z.c)
 *     ?ndisMOidRequestToRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140024320 (-ndisMOidRequestToRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     NdisFOidRequestComplete @ 0x140025CF0 (NdisFOidRequestComplete.c)
 *     ndisFInvokeDirectOidRequest @ 0x1400263A0 (ndisFInvokeDirectOidRequest.c)
 *     ?ndisMCoOidRequestToRequest@@YAHPEAX0PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400276F0 (-ndisMCoOidRequestToRequest@@YAHPEAX0PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     NdisMCoRequestComplete @ 0x140027AB0 (NdisMCoRequestComplete.c)
 *     ndisMInvokeDirectOidRequest @ 0x140028310 (ndisMInvokeDirectOidRequest.c)
 *     ?ndisMDirectOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x14005B6B0 (-ndisMDirectOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x140077570 (-ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@.c)
 *     ?ndisMRestoreFilterSettings@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@E@Z @ 0x140079080 (-ndisMRestoreFilterSettings@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@E@Z.c)
 *     ?ndisOidPostRSSParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400843F0 (-ndisOidPostRSSParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPMAddRemoveAsync@@YAXPEAX@Z @ 0x14008EC90 (-ndisPMAddRemoveAsync@@YAXPEAX@Z.c)
 *     ?ndisPostSetOpenRSSv2Parameters@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x14009AC70 (-ndisPostSetOpenRSSv2Parameters@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     NdisIMVBusDeviceAdd @ 0x1400A2D10 (NdisIMVBusDeviceAdd.c)
 *     NdisIMVBusDeviceRemove @ 0x1400A2E30 (NdisIMVBusDeviceRemove.c)
 *     ?ndisMInvokeAddDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A6028 (-ndisMInvokeAddDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisDriverSystemDispatch @ 0x1400AAFD8 (ndisDriverSystemDispatch.c)
 *     NdisPDStartup @ 0x1400AD180 (NdisPDStartup.c)
 *     ?ndisGenericWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1400B03C0 (-ndisGenericWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@.c)
 *     ?ndisOidPostRSSv2Parameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B47A0 (-ndisOidPostRSSv2Parameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1400B4A1C (-ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400B598C (-ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisPostRemoveMiniportWakeUpPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1400BBBDC (-ndisPostRemoveMiniportWakeUpPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisPreRemoveOpenWakeUpPattern@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400BC33C (-ndisPreRemoveOpenWakeUpPattern@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisRemoveOpenWakeUpPattern@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1400BCCDC (-ndisRemoveOpenWakeUpPattern@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisOidPostOffloadEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400C1670 (-ndisOidPostOffloadEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPostSetMiniportRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1400C3C34 (-ndisPostSetMiniportRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisPostSetOpenRSSParameters@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1400C3E38 (-ndisPostSetOpenRSSParameters@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisFDirectOidRequestCompleteInternal@@YAXPEAX@Z @ 0x1400CE770 (-ndisFDirectOidRequestCompleteInternal@@YAXPEAX@Z.c)
 *     NdisSynchronousOidRequest @ 0x1400CEFB0 (NdisSynchronousOidRequest.c)
 *     ?NdisPDAddProviderToBMGroup@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@PEAUNDIS_PD_PROVIDER_HANDLE__@@@Z @ 0x1401447D0 (-NdisPDAddProviderToBMGroup@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@PEAUNDIS_PD_PROVIDER_HA.c)
 *     ?NdisPDCreateBMGroup@@YAJPEAUPD_CLIENT_HANDLE__@@PEAPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@@Z @ 0x1401452B0 (-NdisPDCreateBMGroup@@YAJPEAUPD_CLIENT_HANDLE__@@PEAPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@@Z.c)
 *     ?NdisPDCreateQueue@@YAJPEAUPD_CLIENT_HANDLE__@@KEPEAU_KEVENT@@1PEAPEAUPD_QUEUE_HANDLE__@@@Z @ 0x140145400 (-NdisPDCreateQueue@@YAJPEAUPD_CLIENT_HANDLE__@@KEPEAU_KEVENT@@1PEAPEAUPD_QUEUE_HANDLE__@@@Z.c)
 *     ?NdisPDPIAllocateCounter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_COUNTER_PARAMETERS@@PEAPEAUNDIS_PD_COUNTER_HANDLE__@@@Z @ 0x140145DC0 (-NdisPDPIAllocateCounter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_COUNTER_PARAMETERS@@PEA.c)
 *     ?NdisPDPIAllocateQueue@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@@Z @ 0x140146020 (-NdisPDPIAllocateQueue@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAPEAU.c)
 *     ?NdisPDPISetReceiveFilter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_FILTER_PARAMETERS@@PEAPEAUNDIS_PD_FILTER_HANDLE__@@@Z @ 0x140146C50 (-NdisPDPISetReceiveFilter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_FILTER_PARAMETERS@@PEA.c)
 *     ?ndisInvokeOpenAdapterComplete@@_Y2PAGE@@AXPEAU_NDIS_OPEN_BLOCK@@H@Z @ 0x14014AFB4 (-ndisInvokeOpenAdapterComplete@@_Y2PAGE@@AXPEAU_NDIS_OPEN_BLOCK@@H@Z.c)
 *     ndisMiniportQueryDeviceProperty @ 0x140170C40 (ndisMiniportQueryDeviceProperty.c)
 *     ?ndisInvokeUnbindAdapter@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_BIND_CONTEXT@@@Z @ 0x140171010 (-ndisInvokeUnbindAdapter@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_BIND_CONT.c)
 *     ?ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z @ 0x140171750 (-ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z.c)
 *     ?ndisMiniportQueryDevicePropertyData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@AEBU_DEVPROPKEY@@PEAPEA_W@Z @ 0x140172460 (-ndisMiniportQueryDevicePropertyData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@AEBU_DEVPROPKEY@@PEAPEA_W@Z.c)
 *     ?ndisClearReceiveFiltersForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1401742C0 (-ndisClearReceiveFiltersForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisCreateNotifyQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAUCO_ADDRESS_FAMILY@@PEAPEAU_NDIS_AF_NOTIFY@@@Z @ 0x140182A70 (-ndisCreateNotifyQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAUCO_ADDRESS_FAMILY.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x140189A40 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400270E0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qqD(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        char a7,
        ...)
{
  unsigned __int64 v9; // rax
  unsigned int v10; // edi
  int v12; // ecx
  int v14; // [rsp+20h] [rbp-58h]
  va_list va; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va, a7);
  v9 = (unsigned __int64)a3 >> 16;
  v10 = a2;
  v12 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v9 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v12, (a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v9 + 41) >= a2 )
    ndisWppFastTraceMessage(a5, a4, &a6, 8LL, &a7, 8LL, va, 4LL, 0LL);
  LOWORD(v14) = a4;
  return WppAutoLogTrace(a1, v10, a3, a5, v14, &a6, 8LL, &a7);
}
