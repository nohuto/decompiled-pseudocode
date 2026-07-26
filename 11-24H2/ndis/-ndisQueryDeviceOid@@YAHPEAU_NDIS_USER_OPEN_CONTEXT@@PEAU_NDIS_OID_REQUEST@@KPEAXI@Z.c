/*
 * XREFs of ?ndisQueryDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@KPEAXI@Z @ 0x14000B730
 * Callers:
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x14006F210 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 *     ndisQueryStatisticsOids @ 0x140086E40 (ndisQueryStatisticsOids.c)
 *     ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x14015A1F0 (-ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL.c)
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14000AD50 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     WPP_RECORDER_SF_qDq @ 0x140015E00 (WPP_RECORDER_SF_qDq.c)
 */

__int64 __fastcall ndisQueryDeviceOid(
        struct _NDIS_USER_OPEN_CONTEXT *a1,
        struct _NDIS_OID_REQUEST *a2,
        NDIS_OID a3,
        void *a4,
        UINT a5)
{
  struct _NDIS_MINIPORT_BLOCK *v5; // rsi
  int v9; // edx
  int v10; // r8d

  v5 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)a1 + 1);
  *(_OWORD *)&a2->Header.Type = 0LL;
  *(_OWORD *)&a2->RequestId = 0LL;
  *(_OWORD *)&a2->DATA.QUERY_INFORMATION.Oid = 0LL;
  *(_OWORD *)&a2->DATA.METHOD_INFORMATION.InputBufferLength = 0LL;
  *(_OWORD *)&a2->DATA.METHOD_INFORMATION.BytesRead = 0LL;
  *(_OWORD *)&a2->NdisReserved[8] = 0LL;
  *(_QWORD *)&a2->NdisReserved[24] = 0LL;
  *(_OWORD *)&a2->NdisReserved[40] = 0LL;
  *(_OWORD *)&a2->NdisReserved[56] = 0LL;
  *(_OWORD *)&a2->NdisReserved[72] = 0LL;
  *(_OWORD *)&a2->NdisReserved[88] = 0LL;
  *(_OWORD *)&a2->NdisReserved[104] = 0LL;
  *(_OWORD *)&a2->NdisReserved[120] = 0LL;
  *(_OWORD *)&a2->MiniportReserved[8] = 0LL;
  *(_OWORD *)&a2->SourceReserved[8] = 0LL;
  *(_QWORD *)&a2[1].Header.Type = 0LL;
  *(_DWORD *)&a2->NdisReserved[16] |= 8u;
  *(_QWORD *)&a2->NdisReserved[32] = &ndisIntReqIoctl;
  EtwActivityIdControl(3u, (LPGUID)&a2->NdisReserved[96]);
  *(_QWORD *)&a2->DATA.METHOD_INFORMATION.OutputBufferLength = 0LL;
  a2->Header = (NDIS_OBJECT_HEADER)15466902;
  a2->DATA.QUERY_INFORMATION.Oid = a3;
  *(_QWORD *)&a2->RequestType = 2LL;
  a2->DATA.QUERY_INFORMATION.InformationBuffer = a4;
  a2->DATA.QUERY_INFORMATION.InformationBufferLength = a5;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_qDq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      v10,
      23,
      (struct _GUID *)&WPP_cb6db8c6f99e3ae11a098d09772ad370_Traceguids,
      (char)a2,
      a3,
      (char)v5);
  }
  return ndisQuerySetMiniport(v5, 0LL, a2, 0, 0LL);
}
