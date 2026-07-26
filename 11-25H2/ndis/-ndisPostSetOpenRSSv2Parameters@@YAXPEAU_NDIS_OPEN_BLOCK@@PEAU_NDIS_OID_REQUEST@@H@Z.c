/*
 * XREFs of ?ndisPostSetOpenRSSv2Parameters@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x14009AC70
 * Callers:
 *     ?ndisOidPostRSSv2Parameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B47A0 (-ndisOidPostRSSv2Parameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqD @ 0x140026FA0 (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_qqqL @ 0x14004F5B0 (WPP_RECORDER_SF_qqqL.c)
 *     ?ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1400B4A1C (-ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisShouldCacheRSSv2ParametersInMiniport@@YAEPEBU_NDIS_OID_REQUEST@@@Z @ 0x1400B5ED8 (-ndisShouldCacheRSSv2ParametersInMiniport@@YAEPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisPostSetOpenRSSParametersHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@@Z @ 0x1400C3F38 (-ndisPostSetOpenRSSParametersHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDI.c)
 */

void __fastcall ndisPostSetOpenRSSv2Parameters(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int a3)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rsi
  _NDIS_RECEIVE_SCALE_PARAMETERS *NdisRSSParameters; // rdx

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x2Au,
      (struct _GUID *)&WPP_f192d87a3ca53ebd07debf06252d6703_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  MiniportHandle = a1->MiniportHandle;
  if ( !a3 )
  {
    NdisRSSParameters = a1->NdisRSSParameters;
    if ( NdisRSSParameters )
      NdisRSSParameters->HashInformation = *((_DWORD *)a2->DATA.QUERY_INFORMATION.InformationBuffer + 2);
    ndisPostSetMiniportRSSv2Parameters(MiniportHandle, a2, 0);
    if ( ndisShouldCacheRSSv2ParametersInMiniport(a2) )
      ndisPostSetOpenRSSParametersHelper(MiniportHandle, a1, MiniportHandle->CombinedNdisRSSParameters);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      0xBu,
      0x2Bu,
      (struct _GUID *)&WPP_f192d87a3ca53ebd07debf06252d6703_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      (char)a2,
      a3);
}
