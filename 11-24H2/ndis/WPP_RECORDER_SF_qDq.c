/*
 * XREFs of WPP_RECORDER_SF_qDq @ 0x140015E00
 * Callers:
 *     ?ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z @ 0x140009FA0 (-ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z.c)
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x14000AD80 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     ?ndisQueryDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@KPEAXI@Z @ 0x14000B730 (-ndisQueryDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@KPEAXI@Z.c)
 *     ndisFInvokeDirectOidRequest @ 0x14000BBD0 (ndisFInvokeDirectOidRequest.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140016530 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisFDoOidRequestInternal@@YAXPEAX@Z @ 0x1400173A0 (-ndisFDoOidRequestInternal@@YAXPEAX@Z.c)
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x14002FEF0 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ?ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KPEAK@Z @ 0x140030A20 (-ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KP.c)
 *     ndisFInvokeOidRequestComplete @ 0x140047D40 (ndisFInvokeOidRequestComplete.c)
 *     ndisMethodDeviceOid @ 0x1400C5904 (ndisMethodDeviceOid.c)
 *     ndisFInvokeSynchronousOidRequest @ 0x1400C79EC (ndisFInvokeSynchronousOidRequest.c)
 *     ndisMInvokeSynchronousOidRequest @ 0x1400C7BC4 (ndisMInvokeSynchronousOidRequest.c)
 *     ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140152C80 (-ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x14015A1F0 (-ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qDq(
        __int64 a1,
        unsigned __int8 a2,
        int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        char a7,
        ...)
{
  unsigned int v9; // ebx
  int v11; // [rsp+20h] [rbp-48h]
  va_list va; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va, a7);
  v9 = a2;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x400) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= a2 )
    ndisWppFastTraceMessage(a5, a4, &a6, 8LL, &a7, 4LL, va, 8LL, 0LL);
  LOWORD(v11) = a4;
  return WppAutoLogTrace(a1, v9, 11LL, a5, v11, &a6, 8LL, &a7, 4LL, va);
}
