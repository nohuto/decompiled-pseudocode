/*
 * XREFs of ?ndisLegacyRequest@@YAHPEAXPEAU_NDIS_REQUEST@@@Z @ 0x140077B10
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140012F50 (-ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x140013AB0 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14005A6A0 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisCompleteOidRequestToRequest@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H@Z @ 0x14007EB30 (-ndisCompleteOidRequestToRequest@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H@Z.c)
 */

__int64 __fastcall ndisLegacyRequest(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_REQUEST *a2)
{
  char v4; // bp
  __int64 Pool2; // rax
  struct _NDIS_OID_REQUEST *v6; // rbx
  struct _NDIS_MINIPORT_BLOCK *MiniportHandle; // rdx
  _NDIS_REQUEST_TYPE RequestType; // ecx
  unsigned int BytesNeeded; // r10d
  void *InformationBuffer; // rcx
  unsigned int BytesWritten; // r9d
  unsigned int InformationBufferLength; // r8d
  unsigned int v13; // esi

  if ( a1->ProtocolHandle->MajorNdisVersion < 6u )
  {
    v4 = ndisReferenceOpenByHandle(a1, 6u);
    if ( v4 )
    {
      Pool2 = ExAllocatePool2(64LL, 248LL, 1701987406);
      v6 = (struct _NDIS_OID_REQUEST *)Pool2;
      if ( Pool2 )
      {
        MiniportHandle = a1->MiniportHandle;
        RequestType = a2->RequestType;
        *(_DWORD *)(Pool2 + 4) = RequestType;
        *(_DWORD *)Pool2 = 16253334;
        if ( (MiniportHandle->DriverVerifyFlags & 0x400) == 0 )
          *(_BYTE *)(Pool2 + 232) = 1;
        if ( RequestType == NdisRequestMethod )
        {
          v13 = -1073741811;
        }
        else
        {
          BytesNeeded = a2->DATA.QUERY_INFORMATION.BytesNeeded;
          InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
          BytesWritten = a2->DATA.QUERY_INFORMATION.BytesWritten;
          InformationBufferLength = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
          *(_DWORD *)(Pool2 + 32) = a2->DATA.QUERY_INFORMATION.Oid;
          *(_QWORD *)(Pool2 + 40) = InformationBuffer;
          *(_DWORD *)(Pool2 + 48) = InformationBufferLength;
          *(_DWORD *)(Pool2 + 52) = BytesWritten;
          *(_DWORD *)(Pool2 + 56) = BytesNeeded;
          *(_DWORD *)(Pool2 + 88) |= 0x20u;
          *(_QWORD *)(Pool2 + 96) = a2;
          *(_QWORD *)(Pool2 + 104) = a1;
          v13 = ndisQueueOidRequest((struct _NDIS_OID_REQUEST *)Pool2, MiniportHandle, 0LL, 0LL);
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
