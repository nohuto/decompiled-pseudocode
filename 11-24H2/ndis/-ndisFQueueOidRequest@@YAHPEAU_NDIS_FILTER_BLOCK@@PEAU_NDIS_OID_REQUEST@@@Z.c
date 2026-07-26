/*
 * XREFs of ?ndisFQueueOidRequest@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400468A0
 * Callers:
 *     ?ndisQueueRestoreRequestsOnTop@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@IE@Z @ 0x1400BDE90 (-ndisQueueRestoreRequestsOnTop@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@IE@Z.c)
 * Callees:
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x14008DD00 (--$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOC.c)
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x14008DF60 (--$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK.c)
 */

__int64 __fastcall ndisFQueueOidRequest(struct _NDIS_FILTER_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  UCHAR *NdisReserved; // rdi
  unsigned int v4; // ecx
  _LIST_ENTRY *p_OidRequestList; // rbx
  _LIST_ENTRY *i; // rax
  _LIST_ENTRY **p_Flink; // rax
  char v9; // cl
  unsigned int v10; // eax
  int v11; // eax
  unsigned __int64 j; // rax
  int v13; // ecx

  NdisReserved = a2->NdisReserved;
  *(_QWORD *)a2->NdisReserved = 0LL;
  *(_QWORD *)&a2->NdisReserved[8] = 0LL;
  v4 = -1073741823;
  if ( (a1->Miniport->PnPFlags & 0x100) != 0 )
    return v4;
  p_OidRequestList = &a1->OidRequestList;
  for ( i = a1->OidRequestList.Flink; i != p_OidRequestList; i = i->Flink )
  {
    if ( i == (_LIST_ENTRY *)NdisReserved )
      return v4;
  }
  if ( (unsigned int)dword_14011A7B0 > 4
    && (qword_14011A7C0 & 0x400) != 0
    && (qword_14011A7C8 & 0x400) == qword_14011A7C8 )
  {
    v11 = *(_DWORD *)&a2->NdisReserved[16] & 0x30000000;
    if ( v11 != 0x10000000 )
    {
      if ( !v11 )
      {
        if ( (ndisAzOidTelemetryFilter & 1) != 0 && Ndis::BindEngine::s_NumBindOperationsInProgress )
        {
LABEL_14:
          v9 = 1;
          v10 = *(_DWORD *)&a2->NdisReserved[16] & 0xCFFFFFFF | 0x20000000;
        }
        else
        {
          if ( (ndisAzOidTelemetryFilter & 2) != 0 )
          {
            for ( j = 0LL; j < 0x40; j += 4LL )
            {
              v13 = *(_DWORD *)((char *)&ndisAzOidTelemetryList + j);
              if ( !v13 )
                break;
              if ( v13 == a2->DATA.QUERY_INFORMATION.Oid )
                goto LABEL_14;
            }
          }
          v9 = 0;
          v10 = *(_DWORD *)&a2->NdisReserved[16] & 0xCFFFFFFF | 0x10000000;
        }
        *(_DWORD *)&a2->NdisReserved[16] = v10;
        if ( !v9 )
          goto LABEL_5;
        goto LABEL_16;
      }
      if ( v11 == 0x20000000 )
      {
LABEL_16:
        if ( *(_QWORD *)&a2->NdisReserved[24] )
          TraceLoggingWriteOidRequestQueuedActivity<0,_NDIS_FILTER_BLOCK>(a1, a2);
        else
          TraceLoggingWriteOidRequestQueuedActivity<1,_NDIS_FILTER_BLOCK>(a1, a2);
      }
    }
  }
LABEL_5:
  p_Flink = &p_OidRequestList->Blink->Flink;
  v4 = 0;
  if ( *p_Flink != p_OidRequestList )
    __fastfail(3u);
  *(_QWORD *)NdisReserved = p_OidRequestList;
  *((_QWORD *)NdisReserved + 1) = p_Flink;
  *p_Flink = (_LIST_ENTRY *)NdisReserved;
  p_OidRequestList->Blink = (_LIST_ENTRY *)NdisReserved;
  return v4;
}
