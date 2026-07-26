/*
 * XREFs of ?ndisQueryOpenPacketFilter@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400BDBC0
 * Callers:
 *     ?ndisOidPrePacketFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14003E520 (-ndisOidPrePacketFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qql @ 0x14002BC80 (WPP_RECORDER_SF_qql.c)
 */

__int64 __fastcall ndisQueryOpenPacketFilter(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rbp
  struct _NDIS_OID_REQUEST *v3; // rbx
  unsigned int PacketFilters; // esi
  _NDIS_MEDIUM MediaType; // eax
  char v8; // [rsp+30h] [rbp-28h]
  int v9; // [rsp+38h] [rbp-20h]
  char v10[4]; // [rsp+38h] [rbp-20h]

  MiniportHandle = a1->MiniportHandle;
  v3 = a2;
  PacketFilters = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      49,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)a1,
      v8);
  }
  if ( v3->DATA.QUERY_INFORMATION.InformationBufferLength >= 4 )
  {
    MediaType = MiniportHandle->MediaType;
    if ( MediaType == NdisMedium802_3 || MediaType == NdisMediumNative802_11 )
      PacketFilters = a1->PacketFilters;
    *(_DWORD *)v3->DATA.QUERY_INFORMATION.InformationBuffer = PacketFilters;
    v3->DATA.QUERY_INFORMATION.BytesWritten = 4;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v10 = 0;
      WPP_RECORDER_SF_qql(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x33u,
        (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
        (char)a1,
        (char)v3,
        *(_DWORD *)v10);
    }
    return 0LL;
  }
  else
  {
    v3->DATA.QUERY_INFORMATION.BytesNeeded = 4;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = -1073676268;
      WPP_RECORDER_SF_qql(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x32u,
        (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
        (char)a1,
        (char)v3,
        v9);
    }
    return 3221291028LL;
  }
}
