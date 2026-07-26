/*
 * XREFs of ?GetRequestVPortID@@YAKPEBU_NDIS_OID_REQUEST@@@Z @ 0x14008CD00
 * Callers:
 *     ??$ndisAzTelemetryOidDelivered@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x140016EF0 (--$ndisAzTelemetryOidDelivered@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_R.c)
 *     ??$TraceLoggingWriteOidRequestCompletedActivity@$01@@YAXPEBU_NDIS_REQ_TRACKER@@@Z @ 0x14004AC50 (--$TraceLoggingWriteOidRequestCompletedActivity@$01@@YAXPEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ??$TraceLoggingWriteOidRequestCompletedActivity@$0A@@@YAXPEBU_NDIS_REQ_TRACKER@@@Z @ 0x14004ADB0 (--$TraceLoggingWriteOidRequestCompletedActivity@$0A@@@YAXPEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ??$ndisAzTelemetryOidDelivered@U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x14004CB10 (--$ndisAzTelemetryOidDelivered@U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_O.c)
 *     ??$TraceLoggingWriteOidRequestReturnedActivity@$0A@U_NDIS_OPEN_BLOCK@@@@YAXPEBU_NDIS_OPEN_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x14008D080 (--$TraceLoggingWriteOidRequestReturnedActivity@$0A@U_NDIS_OPEN_BLOCK@@@@YAXPEBU_NDIS_OPEN_BLOCK@.c)
 *     ??$TraceLoggingWriteOidRequestReturnedActivity@$01U_NDIS_OPEN_BLOCK@@@@YAXPEBU_NDIS_OPEN_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x14008D210 (--$TraceLoggingWriteOidRequestReturnedActivity@$01U_NDIS_OPEN_BLOCK@@@@YAXPEBU_NDIS_OPEN_BLOCK@@.c)
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x14008DBD0 (--$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_B.c)
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x14008DD00 (--$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOC.c)
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x14008DE30 (--$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_.c)
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x14008DF60 (--$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK.c)
 *     ??$TraceLoggingWriteOidRequestReturnedActivity@$01U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1400DCFD0 (--$TraceLoggingWriteOidRequestReturnedActivity@$01U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLO.c)
 *     ??$TraceLoggingWriteOidRequestReturnedActivity@$0A@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1400DD0BC (--$TraceLoggingWriteOidRequestReturnedActivity@$0A@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BL.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetRequestVPortID(const struct _NDIS_OID_REQUEST *a1)
{
  if ( a1->Header.Revision >= 2u || a1->Header.Size >= 0xF8u )
    return (unsigned int)a1[1].Header;
  else
    return 0LL;
}
