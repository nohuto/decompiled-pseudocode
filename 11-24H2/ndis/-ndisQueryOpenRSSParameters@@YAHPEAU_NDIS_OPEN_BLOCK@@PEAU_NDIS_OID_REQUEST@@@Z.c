/*
 * XREFs of ?ndisQueryOpenRSSParameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400BDCF0
 * Callers:
 *     ?ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BBFC0 (-ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisCalculateRssParametersSize@@YAHPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAK@Z @ 0x1400728D0 (-ndisCalculateRssParametersSize@@YAHPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAK@Z.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

__int64 __fastcall ndisQueryOpenRSSParameters(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rbx
  unsigned int v3; // edi
  struct _NDIS_OID_REQUEST *v4; // rsi
  KIRQL v6; // dl
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *NdisRSSParameters; // rcx
  KIRQL v8; // dl
  size_t v9; // rbp
  KIRQL v10; // dl
  __int64 v12; // [rsp+30h] [rbp-48h]
  char v13; // [rsp+30h] [rbp-48h]
  KIRQL NewIrql; // [rsp+80h] [rbp+8h] BYREF
  size_t Size; // [rsp+90h] [rbp+18h] BYREF

  MiniportHandle = a1->MiniportHandle;
  v3 = 0;
  LODWORD(Size) = 0;
  NewIrql = 0;
  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      113,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)MiniportHandle,
      v13);
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(MiniportHandle, &NewIrql);
  if ( MiniportHandle->RecvScaleCapabilities.Header.Size )
  {
    NdisRSSParameters = a1->NdisRSSParameters;
    if ( !NdisRSSParameters || (v3 = ndisCalculateRssParametersSize(NdisRSSParameters, (unsigned int *)&Size)) != 0 )
    {
      v8 = NewIrql;
      v4->DATA.QUERY_INFORMATION.BytesWritten = 0;
      MiniportHandle->MiniportThread = 0LL;
      KeReleaseSpinLock(&MiniportHandle->Lock, v8);
    }
    else
    {
      v9 = (unsigned int)Size;
      v3 = 0;
      if ( v4->DATA.QUERY_INFORMATION.InformationBufferLength < (unsigned int)Size )
      {
        v4->DATA.QUERY_INFORMATION.BytesNeeded = Size;
        v3 = -1073676268;
      }
      if ( !v3 )
      {
        memmove(v4->DATA.QUERY_INFORMATION.InformationBuffer, a1->NdisRSSParameters, v9);
        v4->DATA.QUERY_INFORMATION.BytesWritten = v9;
      }
      v10 = NewIrql;
      MiniportHandle->MiniportThread = 0LL;
      KeReleaseSpinLock(&MiniportHandle->Lock, v10);
    }
  }
  else
  {
    v6 = NewIrql;
    MiniportHandle->MiniportThread = 0LL;
    KeReleaseSpinLock(&MiniportHandle->Lock, v6);
    v3 = -1073741637;
    v4->DATA.QUERY_INFORMATION.BytesWritten = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v12) = v3;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x72u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)MiniportHandle,
      v12);
  }
  return v3;
}
