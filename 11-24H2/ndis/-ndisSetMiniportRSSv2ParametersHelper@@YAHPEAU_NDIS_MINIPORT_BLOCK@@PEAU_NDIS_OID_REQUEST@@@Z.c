/*
 * XREFs of ?ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400AD81C
 * Callers:
 *     ?ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400AD5FC (-ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400ADA24 (-ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqD @ 0x1400158F0 (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_qql @ 0x14002BC80 (WPP_RECORDER_SF_qql.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x140073380 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 */

__int64 __fastcall ndisSetMiniportRSSv2ParametersHelper(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  struct _NDIS_OID_REQUEST *v2; // rdi
  unsigned int InformationBufferLength; // ecx
  unsigned int v5; // r9d
  unsigned int v6; // ebx
  _DWORD *InformationBuffer; // rdx
  unsigned int v8; // eax
  int v9; // r8d
  unsigned int v10; // r10d
  int v11; // eax
  char v13; // [rsp+30h] [rbp-38h]
  __int64 v14; // [rsp+38h] [rbp-30h]
  int v15; // [rsp+38h] [rbp-30h]
  char v16[4]; // [rsp+38h] [rbp-30h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      26,
      (struct _GUID *)&WPP_f192d87a3ca53ebd07debf06252d6703_Traceguids,
      (char)a1,
      v13);
  }
  InformationBufferLength = v2->DATA.QUERY_INFORMATION.InformationBufferLength;
  v5 = 28;
  if ( InformationBufferLength < 0x1C )
  {
    v2->DATA.QUERY_INFORMATION.BytesNeeded = 28;
    v6 = -1073676268;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOWORD(v5) = 27;
LABEL_6:
      v15 = -1073676268;
LABEL_21:
      WPP_RECORDER_SF_qql(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        v5,
        (struct _GUID *)&WPP_f192d87a3ca53ebd07debf06252d6703_Traceguids,
        (char)a1,
        (char)v2,
        v15);
      goto LABEL_22;
    }
    goto LABEL_25;
  }
  InformationBuffer = v2->DATA.QUERY_INFORMATION.InformationBuffer;
  v8 = InformationBuffer[4];
  v9 = InformationBuffer[3];
  v10 = v9 + v8;
  if ( v9 + v8 < v8 )
  {
    v6 = -1073676267;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = -1073676267;
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
    v2->DATA.QUERY_INFORMATION.BytesNeeded = v5;
    v6 = -1073676268;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOWORD(v5) = 30;
      goto LABEL_6;
    }
LABEL_25:
    if ( (byte_14011B104 & 4) != 0 )
      McTemplateK0jqxddq_EtwWriteTransfer(
        a1->IfIndex,
        &SetMiniportRSSCapsFailed,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        v6,
        1,
        (char)v2);
    return v6;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v16 = 0;
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xBu,
      0x1Du,
      (struct _GUID *)&WPP_f192d87a3ca53ebd07debf06252d6703_Traceguids,
      (char)a1,
      (char)v2,
      *(_DWORD *)v16);
  }
  v6 = -1073676267;
LABEL_22:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v14) = v6;
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Fu,
      (struct _GUID *)&WPP_f192d87a3ca53ebd07debf06252d6703_Traceguids,
      (char)a1,
      (char)v2,
      v14);
  }
  if ( v6 )
    goto LABEL_25;
  return v6;
}
