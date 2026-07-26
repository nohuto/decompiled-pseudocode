/*
 * XREFs of ??$ndisAzTelemetryOidDelivered@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x140022280
 * Callers:
 *     ?ndisFDoOidRequestInternal@@YAXPEAX@Z @ 0x1400218B0 (-ndisFDoOidRequestInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ?GetRequestSwitchID@@YAKPEBU_NDIS_OID_REQUEST@@@Z @ 0x140098600 (-GetRequestSwitchID@@YAKPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     ?GetRequestVPortID@@YAKPEBU_NDIS_OID_REQUEST@@@Z @ 0x140098630 (-GetRequestVPortID@@YAKPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     ?GetRequestFlags@@YAKPEBU_NDIS_OID_REQUEST@@@Z @ 0x140098660 (-GetRequestFlags@@YAKPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 */

int __fastcall ndisAzTelemetryOidDelivered<_NDIS_FILTER_BLOCK>(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  char v4; // dl
  int v5; // ecx
  __int64 v6; // r10
  __int16 v7; // r11
  int v8; // edx
  unsigned __int64 i; // rax
  int v10; // ecx
  const struct _NDIS_OID_REQUEST *v11; // rcx
  const struct _NDIS_OID_REQUEST *v12; // rcx
  __int64 v13; // r8
  unsigned __int16 *v14; // rdx
  int v15; // ecx
  __int64 v16; // r9
  __int64 v17; // rax
  int v19; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int RequestFlags; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int RequestVPortID; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int RequestSwitchID; // [rsp+3Ch] [rbp-C4h] BYREF
  int v23; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v24[3]; // [rsp+44h] [rbp-BCh] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B0h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-A0h] BYREF
  void *v27; // [rsp+70h] [rbp-90h]
  int v28; // [rsp+78h] [rbp-88h]
  int v29; // [rsp+7Ch] [rbp-84h]
  __int64 v30; // [rsp+80h] [rbp-80h]
  __int64 v31; // [rsp+88h] [rbp-78h]
  _DWORD *v32; // [rsp+90h] [rbp-70h]
  __int64 v33; // [rsp+98h] [rbp-68h]
  int *v34; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  unsigned int *p_RequestSwitchID; // [rsp+B0h] [rbp-50h]
  __int64 v37; // [rsp+B8h] [rbp-48h]
  unsigned int *p_RequestVPortID; // [rsp+C0h] [rbp-40h]
  __int64 v39; // [rsp+C8h] [rbp-38h]
  unsigned int *p_RequestFlags; // [rsp+D0h] [rbp-30h]
  __int64 v41; // [rsp+D8h] [rbp-28h]
  int *v42; // [rsp+E0h] [rbp-20h]
  __int64 v43; // [rsp+E8h] [rbp-18h]
  _DWORD *v44; // [rsp+F0h] [rbp-10h]
  __int64 v45; // [rsp+F8h] [rbp-8h]
  __int64 v46; // [rsp+100h] [rbp+0h]
  _DWORD v47[2]; // [rsp+108h] [rbp+8h] BYREF

  LODWORD(v2) = dword_1401247B0;
  if ( (unsigned int)dword_1401247B0 <= 4 )
    return v2;
  v7 = qword_1401247C0;
  if ( (qword_1401247C0 & 0x400) == 0 )
    return v2;
  v6 = qword_1401247C8;
  if ( (qword_1401247C8 & 0x400) != qword_1401247C8 )
    return v2;
  v5 = *(_DWORD *)(a2 + 88);
  v8 = v5 & 0x30000000;
  if ( (v5 & 0x30000000) == 0x10000000 )
    return v2;
  if ( v8 )
  {
    if ( v8 != 0x20000000 )
      return v2;
    goto LABEL_9;
  }
  if ( (ndisAzOidTelemetryFilter & 1) != 0 && Ndis::BindEngine::s_NumBindOperationsInProgress )
  {
LABEL_6:
    v4 = 1;
    LODWORD(v2) = *(_DWORD *)(a2 + 88) & 0xCFFFFFFF | 0x20000000;
  }
  else
  {
    if ( (ndisAzOidTelemetryFilter & 2) != 0 )
    {
      for ( i = 0LL; i < 0x40; i += 4LL )
      {
        v10 = *(_DWORD *)((char *)&ndisAzOidTelemetryList + i);
        if ( !v10 )
          break;
        if ( v10 == *(_DWORD *)(a2 + 32) )
          goto LABEL_6;
      }
    }
    v4 = 0;
    LODWORD(v2) = *(_DWORD *)(a2 + 88) & 0xCFFFFFFF | 0x10000000;
  }
  *(_DWORD *)(a2 + 88) = v2;
  v5 = v2;
  if ( v4 )
  {
    v6 = qword_1401247C8;
    v7 = qword_1401247C0;
    LODWORD(v2) = dword_1401247B0;
LABEL_9:
    if ( (unsigned int)v2 > 4 && (v7 & 0x400) != 0 )
    {
      v2 = v6 & 0x400;
      if ( v2 == v6 )
      {
        v19 = v5;
        RequestFlags = GetRequestFlags((const struct _NDIS_OID_REQUEST *)a2);
        RequestVPortID = GetRequestVPortID(v11);
        RequestSwitchID = GetRequestSwitchID(v12);
        v23 = *(_DWORD *)(v13 + 32);
        v24[0] = *(_DWORD *)(v13 + 4);
        v44 = v47;
        v45 = 2LL;
        v15 = *v14;
        v46 = *((_QWORD *)v14 + 1);
        v42 = &v19;
        p_RequestFlags = &RequestFlags;
        p_RequestVPortID = &RequestVPortID;
        p_RequestSwitchID = &RequestSwitchID;
        v34 = &v23;
        v32 = v24;
        v17 = *(_QWORD *)(v16 + 32);
        v47[0] = v15;
        v30 = v17 + 4008;
        UserData.Ptr = (unsigned __int64)off_1401247B8;
        *(_DWORD *)&EventDescriptor.Level = 4;
        v47[1] = 0;
        v43 = 4LL;
        v41 = 4LL;
        v39 = 4LL;
        v37 = 4LL;
        v35 = 4LL;
        v33 = 4LL;
        v31 = 16LL;
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        EventDescriptor.Keyword = 1024LL;
        UserData.Size = *(unsigned __int16 *)off_1401247B8;
        v27 = &unk_14010BB73;
        UserData.Reserved = 2;
        v28 = 98;
        v29 = 1;
        v24[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        LODWORD(v2) = EtwWriteTransfer(qword_1401247D0, &EventDescriptor, (LPCGUID)(v13 + 168), 0LL, 0xBu, &UserData);
      }
    }
  }
  return v2;
}
