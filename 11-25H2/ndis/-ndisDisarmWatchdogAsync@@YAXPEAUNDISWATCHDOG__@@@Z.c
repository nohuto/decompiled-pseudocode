/*
 * XREFs of ?ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1400256F0
 * Callers:
 *     ?ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1400255B0 (-ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     NdisMOidRequestComplete @ 0x140027870 (NdisMOidRequestComplete.c)
 *     ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140165EE0 (-ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x14016C060 (-ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisDisarmWatchdogAsync(struct NDISWATCHDOG__ *a1)
{
  if ( a1 != (struct NDISWATCHDOG__ *)-1LL )
  {
    if ( KeCancelTimer((PKTIMER)a1 + 1) )
    {
      KeSetEvent((PRKEVENT)a1 + 7, 0, 0);
      *((_DWORD *)a1 + 40) = 0;
    }
    else
    {
      _InterlockedAnd((volatile signed __int32 *)a1 + 40, 0);
    }
  }
}
