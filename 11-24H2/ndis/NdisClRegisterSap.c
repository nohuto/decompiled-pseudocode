/*
 * XREFs of NdisClRegisterSap @ 0x140060410
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1400606E0 (-ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     NdisCmRegisterSapComplete @ 0x140060750 (NdisCmRegisterSapComplete.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

NDIS_STATUS __stdcall NdisClRegisterSap(
        NDIS_HANDLE NdisAfHandle,
        NDIS_HANDLE ProtocolSapContext,
        PCO_SAP Sap,
        PNDIS_HANDLE NdisSapHandle)
{
  __int64 Pool2; // rax
  NDIS_HANDLE *v9; // rbx
  bool v10; // cf
  __int64 v11; // rcx
  __int64 v12; // rax
  NDIS_STATUS result; // eax

  *NdisSapHandle = 0LL;
  if ( !ndisReferenceAf((struct _NDIS_CO_AF_BLOCK *)NdisAfHandle) )
    return -1073741823;
  Pool2 = ExAllocatePool2(64LL, 48LL, 1868776526LL);
  v9 = (NDIS_HANDLE *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 32) = 0;
    *(_DWORD *)(Pool2 + 36) = 1;
    KeInitializeSpinLock((PKSPIN_LOCK)(Pool2 + 40));
    v10 = *((_DWORD *)NdisAfHandle + 98) < 6u;
    v11 = *((_QWORD *)NdisAfHandle + 6);
    v9[2] = NdisAfHandle;
    v9[3] = Sap;
    v9[1] = ProtocolSapContext;
    if ( v10 )
      v12 = *((_QWORD *)NdisAfHandle + 3);
    else
      v12 = *((_QWORD *)NdisAfHandle + 4);
    result = (*(__int64 (__fastcall **)(__int64, PCO_SAP, NDIS_HANDLE *, NDIS_HANDLE *))(v12 + 40))(v11, Sap, v9, v9);
    if ( result != 259 )
    {
      NdisCmRegisterSapComplete(result, v9, *v9);
      return 259;
    }
  }
  else
  {
    *NdisSapHandle = 0LL;
    return -1073741670;
  }
  return result;
}
