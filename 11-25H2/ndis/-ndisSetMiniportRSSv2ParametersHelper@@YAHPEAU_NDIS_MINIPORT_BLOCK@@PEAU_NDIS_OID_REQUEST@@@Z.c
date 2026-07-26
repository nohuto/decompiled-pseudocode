/*
 * XREFs of ?ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400B598C
 * Callers:
 *     ?ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400B576C (-ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400B5B94 (-ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqD @ 0x140026FA0 (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_qql @ 0x140028490 (WPP_RECORDER_SF_qql.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x14008EDC0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 */

__int64 __fastcall ndisSetMiniportRSSv2ParametersHelper(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  UINT InformationBufferLength; // ecx
  UINT v5; // r9d
  unsigned int v6; // ebx
  _DWORD *InformationBuffer; // rdx
  unsigned int v8; // eax
  int v9; // r8d
  unsigned int v10; // r10d
  int v11; // eax
  __int64 v13; // [rsp+38h] [rbp-30h]
  int v14; // [rsp+38h] [rbp-30h]
  char v15[4]; // [rsp+38h] [rbp-30h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Au,
      (struct _GUID *)&WPP_f192d87a3ca53ebd07debf06252d6703_Traceguids,
      (char)a1,
      a2);
  InformationBufferLength = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
  v5 = 28;
  if ( InformationBufferLength < 0x1C )
  {
    a2->DATA.QUERY_INFORMATION.BytesNeeded = 28;
    v6 = -1073676268;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOWORD(v5) = 27;
LABEL_6:
      v14 = -1073676268;
LABEL_21:
      WPP_RECORDER_SF_qql(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        v5,
        (struct _GUID *)&WPP_f192d87a3ca53ebd07debf06252d6703_Traceguids,
        (char)a1,
        (char)a2,
        v14);
      goto LABEL_22;
    }
    goto LABEL_25;
  }
  InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
  v8 = InformationBuffer[4];
  v9 = InformationBuffer[3];
  v10 = v9 + v8;
  if ( v9 + v8 < v8 )
  {
    v6 = -1073676267;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v14 = -1073676267;
      goto LABEL_21;
    }
    goto LABEL_25;
  }
  v11 = InformationBuffer[1];
  if ( v10 > 0x1C )
    v5 = v10;
  if ( (v11 & 1) == 0 || (v11 & 4) == 0 || v9 == 40 )
  {
    v6 = 0;
    if ( InformationBufferLength >= v5 )
      goto LABEL_22;
    a2->DATA.QUERY_INFORMATION.BytesNeeded = v5;
    v6 = -1073676268;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOWORD(v5) = 30;
      goto LABEL_6;
    }
LABEL_25:
    if ( (byte_140125104 & 4) != 0 )
      McTemplateK0jqxddq_EtwWriteTransfer(
        a1->IfIndex,
        &SetMiniportRSSCapsFailed,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        v6,
        1,
        (char)a2);
    return v6;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v15 = 0;
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xBu,
      0x1Du,
      (struct _GUID *)&WPP_f192d87a3ca53ebd07debf06252d6703_Traceguids,
      (char)a1,
      (char)a2,
      *(_DWORD *)v15);
  }
  v6 = -1073676267;
LABEL_22:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v13) = v6;
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Fu,
      (struct _GUID *)&WPP_f192d87a3ca53ebd07debf06252d6703_Traceguids,
      (char)a1,
      (char)a2,
      v13);
  }
  if ( v6 )
    goto LABEL_25;
  return v6;
}
