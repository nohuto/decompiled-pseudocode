/*
 * XREFs of ?ndisSetMiniportRSSParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x14008EE70
 * Callers:
 *     ?ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400C31F0 (-ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x140026CC0 (WPP_RECORDER_SF_qqLd.c)
 *     WPP_RECORDER_SF_qql @ 0x140028490 (WPP_RECORDER_SF_qql.c)
 *     ?ndisCalculateRssParametersSize@@YAHPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAK@Z @ 0x14008E870 (-ndisCalculateRssParametersSize@@YAHPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAK@Z.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x14008EDC0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 */

__int64 __fastcall ndisSetMiniportRSSParameters(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int *a3)
{
  UINT InformationBufferLength; // r11d
  unsigned __int8 v7; // di
  int v8; // esi
  _BYTE *InformationBuffer; // rbp
  unsigned __int8 v10; // cl
  unsigned __int16 v11; // dx
  unsigned __int16 v12; // r9
  UINT v13; // eax
  int v14; // eax
  unsigned int v15; // r11d
  unsigned __int16 v16; // r9
  unsigned __int16 v17; // r9
  int v19; // [rsp+38h] [rbp-40h]
  unsigned int v20; // [rsp+88h] [rbp+10h] BYREF

  v20 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x7Du,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      (char)a1,
      a2);
  InformationBufferLength = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
  v7 = 1;
  a2->DATA.QUERY_INFORMATION.BytesNeeded = 0;
  if ( InformationBufferLength < 0x1C )
  {
    a2->DATA.QUERY_INFORMATION.BytesNeeded = 28;
    v8 = -1073676268;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qql(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x7Eu,
        (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
        (char)a1,
        (char)a2,
        -1073676268);
    goto LABEL_39;
  }
  InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
  v10 = InformationBuffer[1];
  if ( v10 < 2u )
    goto LABEL_21;
  v11 = *((_WORD *)InformationBuffer + 1);
  if ( v11 < 0x28u )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v12 = 127;
LABEL_14:
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        v12,
        (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
        (char)a1,
        a2);
      goto LABEL_15;
    }
    goto LABEL_15;
  }
  v13 = 40;
  if ( v10 >= 3u )
  {
    if ( v11 < 0x2Cu )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v12 = 128;
        goto LABEL_14;
      }
LABEL_15:
      v8 = -1073676268;
      goto LABEL_39;
    }
    v13 = 44;
  }
  if ( InformationBufferLength >= v13 )
  {
LABEL_21:
    v14 = ndisCalculateRssParametersSize(
            (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)a2->DATA.QUERY_INFORMATION.InformationBuffer,
            &v20);
    v8 = v14;
    if ( v14 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_39;
      v16 = 130;
      v19 = v14;
      goto LABEL_24;
    }
    if ( *((_WORD *)InformationBuffer + 6) <= 0x200u )
    {
      if ( *((_WORD *)InformationBuffer + 10) == 40 || (InformationBuffer[4] & 0x10) != 0 || !InformationBuffer[8] )
      {
        v8 = 0;
        if ( v15 >= v20 )
        {
          v7 = 0;
          goto LABEL_39;
        }
        a2->DATA.QUERY_INFORMATION.BytesNeeded = v20;
        v8 = -1073676268;
        if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_39;
        v16 = 133;
        v19 = -1073676268;
LABEL_24:
        WPP_RECORDER_SF_qql(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xBu,
          v16,
          (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
          (char)a1,
          (char)a2,
          v19);
        goto LABEL_39;
      }
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v17 = 132;
        goto LABEL_28;
      }
    }
    else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v17 = 131;
LABEL_28:
      WPP_RECORDER_SF_qql(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        v17,
        (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
        (char)a1,
        (char)a2,
        0);
    }
    v8 = -1073676267;
    goto LABEL_39;
  }
  a2->DATA.QUERY_INFORMATION.BytesNeeded = v13;
  v8 = -1073676268;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xBu,
      0x81u,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      (char)a1,
      (char)a2,
      -1073676268);
LABEL_39:
  *a3 = v8;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x86u,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      (char)a1,
      (char)a2,
      v7,
      v8);
  if ( v8 && (byte_140125104 & 4) != 0 )
    McTemplateK0jqxddq_EtwWriteTransfer(
      a1->IfIndex,
      &SetMiniportRSSCapsFailed,
      &a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      a1->IfIndex,
      a1->NetLuid.Value,
      v8,
      2,
      (char)a2);
  return v7;
}
