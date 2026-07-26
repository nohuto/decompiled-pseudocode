/*
 * XREFs of ?ShouldEnableOidTracing@@YA_NPEBU_NDIS_OID_REQUEST@@@Z @ 0x14000B880
 * Callers:
 *     ?ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z @ 0x140009FA0 (-ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140016530 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ShouldEnableOidTracing(const struct _NDIS_OID_REQUEST *a1)
{
  bool result; // al
  int v2; // eax
  unsigned int v3; // edx
  unsigned __int64 i; // rax
  int v5; // edx

  if ( (unsigned int)dword_14011A7B0 <= 4 )
    return 0;
  if ( (qword_14011A7C0 & 0x400) == 0 )
    return 0;
  if ( (qword_14011A7C8 & 0x400) != qword_14011A7C8 )
    return 0;
  v2 = *(_DWORD *)&a1->NdisReserved[16] & 0x30000000;
  if ( v2 == 0x10000000 )
    return 0;
  if ( v2 )
    return v2 == 0x20000000;
  if ( (ndisAzOidTelemetryFilter & 1) != 0 && Ndis::BindEngine::s_NumBindOperationsInProgress )
  {
LABEL_7:
    result = 1;
    v3 = *(_DWORD *)&a1->NdisReserved[16] & 0xCFFFFFFF | 0x20000000;
  }
  else
  {
    if ( (ndisAzOidTelemetryFilter & 2) != 0 )
    {
      for ( i = 0LL; i < 0x40; i += 4LL )
      {
        v5 = *(_DWORD *)((char *)&ndisAzOidTelemetryList + i);
        if ( !v5 )
          break;
        if ( v5 == a1->DATA.QUERY_INFORMATION.Oid )
          goto LABEL_7;
      }
    }
    result = 0;
    v3 = *(_DWORD *)&a1->NdisReserved[16] & 0xCFFFFFFF | 0x10000000;
  }
  *(_DWORD *)&a1->NdisReserved[16] = v3;
  return result;
}
