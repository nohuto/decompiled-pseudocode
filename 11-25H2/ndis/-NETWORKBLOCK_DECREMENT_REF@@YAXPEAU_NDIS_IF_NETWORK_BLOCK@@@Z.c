/*
 * XREFs of ?NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x140088E90
 * Callers:
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x14004B900 (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1400D52C0 (-ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1400D55E0 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1400D5B70 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NETWORKBLOCK_DECREMENT_REF(struct _NDIS_IF_NETWORK_BLOCK *a1)
{
  struct _KEVENT *v2; // rcx

  if ( (*((_DWORD *)a1 + 19))-- == 1 )
  {
    v2 = (struct _KEVENT *)*((_QWORD *)a1 + 76);
    if ( v2 )
      KeSetEvent(v2, 0, 0);
  }
}
