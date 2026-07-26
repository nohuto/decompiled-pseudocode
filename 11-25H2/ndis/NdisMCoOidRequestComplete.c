/*
 * XREFs of NdisMCoOidRequestComplete @ 0x14005B1F0
 * Callers:
 *     NdisCoOidRequest @ 0x140052810 (NdisCoOidRequest.c)
 * Callees:
 *     NdisMOidRequestComplete @ 0x140027870 (NdisMOidRequestComplete.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14005A6A0 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __stdcall NdisMCoOidRequestComplete(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE NdisMiniportVcHandle,
        PNDIS_OID_REQUEST Request,
        NDIS_STATUS Status)
{
  int v4; // edx
  __int64 v6; // rbx
  int v7; // ecx

  v4 = *(_DWORD *)&Request->NdisReserved[16];
  if ( (v4 & 0x220) != 0 )
  {
    v6 = *(_QWORD *)&Request->NdisReserved[32];
    if ( Request->RequestType == NdisRequestQueryInformation
      && Request->DATA.QUERY_INFORMATION.Oid == 65806
      && Request->DATA.QUERY_INFORMATION.InformationBufferLength
      && v6
      && (*(_DWORD *)(v6 + 224) & 4) != 0 )
    {
      *(_DWORD *)Request->DATA.QUERY_INFORMATION.InformationBuffer |= 0xA0u;
    }
    v7 = *(_DWORD *)&Request->NdisReserved[16];
    if ( (v7 & 0x2000) != 0 )
    {
      NdisMOidRequestComplete(MiniportAdapterHandle, *((PNDIS_OID_REQUEST *)MiniportAdapterHandle + 276), Status);
    }
    else
    {
      if ( (v7 & 0x200) != 0 )
      {
        if ( (v7 & 8) != 0 )
        {
          *(_DWORD *)&Request->NdisReserved[8] = Status;
          KeSetEvent((PRKEVENT)&Request->NdisReserved[40], 0, 0);
        }
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, PNDIS_OID_REQUEST, NDIS_STATUS))(v6 + 1152))(
          *(_QWORD *)(v6 + 32),
          *(_QWORD *)&Request->NdisReserved[56],
          0LL,
          Request,
          Status);
      }
      ndisMDereferenceOpenUnlocked(v6, 6u);
    }
  }
  else if ( (v4 & 8) != 0 )
  {
    *(_DWORD *)&Request->NdisReserved[8] = Status;
    KeSetEvent((PRKEVENT)&Request->NdisReserved[40], 0, 0);
  }
}
