/*
 * XREFs of NdisMCoRequestComplete @ 0x14004B150
 * Callers:
 *     ?ndisMCoOidRequestToRequest@@YAHPEAX0PEAU_NDIS_OID_REQUEST@@@Z @ 0x14004AF10 (-ndisMCoOidRequestToRequest@@YAHPEAX0PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140006B10 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qqD @ 0x1400158F0 (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     NdisMOidRequestComplete @ 0x140087BC0 (NdisMOidRequestComplete.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __stdcall NdisMCoRequestComplete(NDIS_STATUS Status, NDIS_HANDLE MiniportAdapterHandle, PNDIS_REQUEST Request)
{
  _NDIS_REQUEST_TYPE RequestType; // eax
  __int64 v7; // rcx
  int v8; // eax
  int v9; // edx
  __int64 v10; // rbp
  int v11; // eax
  struct _NDIS_OID_REQUEST *v12; // rdx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xAu,
      (struct _GUID *)&WPP_f2e723125d8f3d1097c3ab5c6e889825_Traceguids,
      (char)MiniportAdapterHandle,
      (char)Request,
      Status);
  RequestType = Request->RequestType;
  v7 = *(_QWORD *)&Request->MacReserved[8];
  if ( RequestType == NdisRequestQueryInformation || (unsigned int)(RequestType - 1) < 2 )
  {
    *(_DWORD *)(v7 + 52) = Request->DATA.QUERY_INFORMATION.BytesWritten;
    *(_DWORD *)(v7 + 56) = Request->DATA.QUERY_INFORMATION.BytesNeeded;
  }
  v8 = *(_DWORD *)(v7 + 88);
  if ( (v8 & 0x220) != 0 )
  {
    v10 = *(_QWORD *)(v7 + 104);
    if ( Request->RequestType == NdisRequestQueryInformation
      && Request->DATA.QUERY_INFORMATION.Oid == 65806
      && Request->DATA.QUERY_INFORMATION.InformationBufferLength
      && v10
      && (*(_DWORD *)(v10 + 224) & 4) != 0 )
    {
      *(_DWORD *)Request->DATA.QUERY_INFORMATION.InformationBuffer |= 0xA0u;
    }
    v11 = *(_DWORD *)(v7 + 88);
    if ( (v11 & 0x2000) != 0 )
    {
      v12 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)MiniportAdapterHandle + 276);
      *((_QWORD *)MiniportAdapterHandle + 72) = 0LL;
      NdisMOidRequestComplete(MiniportAdapterHandle, v12, Status);
    }
    else
    {
      if ( (v11 & 0x200) != 0 )
      {
        if ( (v11 & 8) != 0 )
        {
          *(_DWORD *)(v7 + 80) = Status;
          KeSetEvent((PRKEVENT)(v7 + 112), 0, 0);
        }
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, NDIS_STATUS))(v10 + 1160))(
          *(_QWORD *)(v10 + 32),
          *(_QWORD *)(v7 + 128),
          0LL,
          v7,
          Status);
      }
      ndisMDereferenceOpenUnlocked(v10, 6u);
    }
  }
  else if ( (v8 & 8) != 0 )
  {
    *(_DWORD *)(v7 + 80) = Status;
    KeSetEvent((PRKEVENT)(v7 + 112), 0, 0);
  }
  ExFreePoolWithTag(Request, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      11,
      11,
      (struct _GUID *)&WPP_f2e723125d8f3d1097c3ab5c6e889825_Traceguids);
  }
}
