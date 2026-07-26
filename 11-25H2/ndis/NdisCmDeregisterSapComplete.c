/*
 * XREFs of NdisCmDeregisterSapComplete @ 0x1400845C0
 * Callers:
 *     NdisClDeregisterSap @ 0x140085EE0 (NdisClDeregisterSap.c)
 * Callees:
 *     ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x140053640 (-ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     ?ndisDereferenceSap@@YAXPEAU_NDIS_CO_SAP_BLOCK@@@Z @ 0x140084620 (-ndisDereferenceSap@@YAXPEAU_NDIS_CO_SAP_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __stdcall NdisCmDeregisterSapComplete(NDIS_STATUS Status, NDIS_HANDLE NdisSapHandle)
{
  __int64 v2; // rax
  __int64 v4; // rdx

  v2 = *((_QWORD *)NdisSapHandle + 2);
  v4 = *((_QWORD *)NdisSapHandle + 1);
  if ( *(_DWORD *)(v2 + 396) >= 6u )
    (*(void (__fastcall **)(NDIS_STATUS, __int64))(v2 + 272))(Status, v4);
  else
    (*(void (__fastcall **)(NDIS_STATUS, __int64))(v2 + 120))(Status, v4);
  if ( !Status )
  {
    ndisDereferenceAf(*((KSPIN_LOCK **)NdisSapHandle + 2));
    ndisDereferenceSap(NdisSapHandle);
  }
}
