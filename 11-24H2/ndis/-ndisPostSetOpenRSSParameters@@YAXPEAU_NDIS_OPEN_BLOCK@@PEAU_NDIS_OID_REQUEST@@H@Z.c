/*
 * XREFs of ?ndisPostSetOpenRSSParameters@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1400BCC08
 * Callers:
 *     ?ndisOidPostRSSParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14003D170 (-ndisOidPostRSSParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqD @ 0x1400158F0 (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_qqqL @ 0x140045670 (WPP_RECORDER_SF_qqqL.c)
 *     ?ndisPostSetOpenRSSParametersHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@@Z @ 0x1400BCD08 (-ndisPostSetOpenRSSParametersHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDI.c)
 */

void __fastcall ndisPostSetOpenRSSParameters(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int a3)
{
  struct _NDIS_MINIPORT_BLOCK *MiniportHandle; // rbp
  UINT v7; // ecx

  MiniportHandle = a1->MiniportHandle;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x8Bu,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  v7 = *(_DWORD *)&a2->NdisReserved[88];
  if ( v7 )
  {
    a2->DATA.QUERY_INFORMATION.InformationBuffer = *(PVOID *)&a2->NdisReserved[80];
    a2->DATA.QUERY_INFORMATION.InformationBufferLength = v7;
    *(_QWORD *)&a2->NdisReserved[80] = 0LL;
    *(_DWORD *)&a2->NdisReserved[88] = 0;
  }
  if ( !a3 )
    ndisPostSetOpenRSSParametersHelper(
      MiniportHandle,
      a1,
      (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)a2->DATA.QUERY_INFORMATION.InformationBuffer);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      0xBu,
      0x8Cu,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      (char)a2,
      a3);
}
