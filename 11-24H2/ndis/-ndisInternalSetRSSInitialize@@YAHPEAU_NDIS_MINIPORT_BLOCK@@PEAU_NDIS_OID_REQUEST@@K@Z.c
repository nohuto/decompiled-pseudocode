/*
 * XREFs of ?ndisInternalSetRSSInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z @ 0x1400ABECC
 * Callers:
 *     ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400AD1B0 (-ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 * Callees:
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisMInvokeBlockingOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140138028 (-ndisMInvokeBlockingOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

__int64 __fastcall ndisInternalSetRSSInitialize(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  NDIS_PORT_NUMBER PortNumber; // eax
  _BYTE v6[248]; // [rsp+20h] [rbp-E0h] BYREF

  if ( (a1->Flags & 0x80u) == 0 )
    return 0LL;
  memset(v6, 0, sizeof(v6));
  *(_DWORD *)&v6[88] |= 8u;
  *(_QWORD *)&v6[104] = &ndisIntReqGeneric;
  EtwActivityIdControl(3u, (LPGUID)&v6[168]);
  PortNumber = a2->PortNumber;
  *(_QWORD *)&v6[40] = 0LL;
  *(_DWORD *)&v6[48] = 0;
  *(_DWORD *)&v6[8] = PortNumber;
  *(_DWORD *)&v6[244] = a2[1].RequestType;
  *(_DWORD *)&v6[236] = *(_DWORD *)(&a2->Reserved2 + 1);
  *(NDIS_OBJECT_HEADER *)&v6[240] = a2[1].Header;
  *(_DWORD *)v6 = 16253590;
  *(_DWORD *)&v6[32] = 66241;
  *(_DWORD *)&v6[4] = 1;
  return ndisMInvokeBlockingOidRequest(a1, (struct _NDIS_OID_REQUEST *)v6);
}
