/*
 * XREFs of NdisCoRequestComplete @ 0x1400D2770
 * Callers:
 *     NdisCmOpenAddressFamilyComplete @ 0x14005F930 (NdisCmOpenAddressFamilyComplete.c)
 *     NdisCmNotifyCloseAddressFamily @ 0x140060510 (NdisCmNotifyCloseAddressFamily.c)
 *     NdisCoRequest @ 0x1400D23A0 (NdisCoRequest.c)
 * Callees:
 *     NdisCoOidRequestComplete @ 0x140006D50 (NdisCoOidRequestComplete.c)
 *     ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x140006DD0 (-ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     NdisClNotifyCloseAddressFamilyComplete @ 0x1400CF5E0 (NdisClNotifyCloseAddressFamilyComplete.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall NdisCoRequestComplete(
        __int64 Status,
        KSPIN_LOCK *P,
        NDIS_HANDLE NdisVcHandle,
        NDIS_HANDLE NdisPartyHandle,
        PVOID Pa)
{
  struct _NDIS_OID_REQUEST *v7; // r9

  if ( *((_DWORD *)Pa + 10) == -33554422 && *((_DWORD *)Pa + 8) == 1 )
  {
    if ( *((_DWORD *)P + 98) < 6u )
    {
      (*((void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, PVOID))Pa + 9))(
        Status,
        *((_QWORD *)Pa + 11),
        *((_QWORD *)Pa + 10),
        *((_QWORD *)Pa + 12),
        Pa);
      ndisDereferenceAf(P);
    }
    else
    {
      NdisClNotifyCloseAddressFamilyComplete(P, Status);
    }
  }
  else
  {
    v7 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)Pa + 1);
    v7->DATA.QUERY_INFORMATION.BytesWritten = *((_DWORD *)Pa + 15);
    v7->DATA.QUERY_INFORMATION.BytesNeeded = *((_DWORD *)Pa + 16);
    NdisCoOidRequestComplete(P, NdisVcHandle, NdisPartyHandle, v7, Status);
    ExFreePoolWithTag(Pa, 0);
  }
}
