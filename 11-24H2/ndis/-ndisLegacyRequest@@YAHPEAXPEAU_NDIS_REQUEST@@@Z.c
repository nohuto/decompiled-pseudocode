/*
 * XREFs of ?ndisLegacyRequest@@YAHPEAXPEAU_NDIS_REQUEST@@@Z @ 0x140007950
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140006B10 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1400084F0 (-ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x140008A10 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     ?ndisCompleteOidRequestToRequest@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H@Z @ 0x140062A70 (-ndisCompleteOidRequestToRequest@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H@Z.c)
 */

__int64 __fastcall ndisLegacyRequest(_QWORD *a1, struct _NDIS_REQUEST *a2)
{
  struct _NDIS_REQUEST *v2; // r14
  char v4; // bp
  __int64 Pool2; // rax
  struct _NDIS_OID_REQUEST *v6; // rbx
  struct _NDIS_MINIPORT_BLOCK *v7; // rdx
  _NDIS_REQUEST_TYPE RequestType; // ecx
  unsigned int BytesNeeded; // r10d
  void *InformationBuffer; // rcx
  unsigned int BytesWritten; // r9d
  unsigned int InformationBufferLength; // r8d
  unsigned int v13; // esi

  v2 = a2;
  if ( *(_BYTE *)(a1[3] + 56LL) < 6u )
  {
    LOBYTE(a2) = 6;
    v4 = ndisReferenceOpenByHandle(a1, a2);
    if ( v4 )
    {
      Pool2 = ExAllocatePool2(64LL, 248LL, 1701987406LL);
      v6 = (struct _NDIS_OID_REQUEST *)Pool2;
      if ( Pool2 )
      {
        v7 = (struct _NDIS_MINIPORT_BLOCK *)a1[2];
        RequestType = v2->RequestType;
        *(_DWORD *)(Pool2 + 4) = RequestType;
        *(_DWORD *)Pool2 = 16253334;
        if ( (v7->DriverVerifyFlags & 0x400) == 0 )
          *(_BYTE *)(Pool2 + 232) = 1;
        if ( RequestType == NdisRequestMethod )
        {
          v13 = -1073741811;
        }
        else
        {
          BytesNeeded = v2->DATA.QUERY_INFORMATION.BytesNeeded;
          InformationBuffer = v2->DATA.QUERY_INFORMATION.InformationBuffer;
          BytesWritten = v2->DATA.QUERY_INFORMATION.BytesWritten;
          InformationBufferLength = v2->DATA.QUERY_INFORMATION.InformationBufferLength;
          *(_DWORD *)(Pool2 + 32) = v2->DATA.QUERY_INFORMATION.Oid;
          *(_QWORD *)(Pool2 + 40) = InformationBuffer;
          *(_DWORD *)(Pool2 + 48) = InformationBufferLength;
          *(_DWORD *)(Pool2 + 52) = BytesWritten;
          *(_DWORD *)(Pool2 + 56) = BytesNeeded;
          *(_DWORD *)(Pool2 + 88) |= 0x20u;
          *(_QWORD *)(Pool2 + 96) = v2;
          *(_QWORD *)(Pool2 + 104) = a1;
          v13 = ndisQueueOidRequest((struct _NDIS_OID_REQUEST *)Pool2, v7, 0LL, 0LL);
          if ( v13 == 259 )
            return v13;
        }
        ndisCompleteOidRequestToRequest(a1, v6, v13);
        v13 = 259;
      }
      else
      {
        v13 = -1073741670;
      }
      if ( v4 == 1 )
        ndisMDereferenceOpenUnlocked((__int64)a1, 6u);
      return v13;
    }
    return (unsigned int)-1073676286;
  }
  return 3221291012LL;
}
