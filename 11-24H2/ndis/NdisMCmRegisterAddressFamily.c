/*
 * XREFs of NdisMCmRegisterAddressFamily @ 0x1401728F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140011280 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14004B9E0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x14004CDA0 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 */

NDIS_STATUS __stdcall NdisMCmRegisterAddressFamily(
        NDIS_HANDLE MiniportAdapterHandle,
        PCO_ADDRESS_FAMILY AddressFamily,
        PNDIS_CALL_MANAGER_CHARACTERISTICS CmCharacteristics,
        UINT SizeOfCmCharacteristics)
{
  NDIS_STATUS v8; // ebx
  __int64 *i; // rcx
  __int64 Pool2; // rax
  __int64 v11; // r8
  void (__fastcall *CmRequestCompleteHandler)(int, void *, void *, void *, _NDIS_REQUEST *); // rax
  KIRQL v13; // dl
  KIRQL NewIrql; // [rsp+40h] [rbp+8h] BYREF

  NewIrql = 0;
  v8 = -1073676286;
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, &NewIrql);
  if ( (mem::ReadNoFence<unsigned long,void>((unsigned int *)MiniportAdapterHandle + 30) & 0x20000) != 0
    && CmCharacteristics->MajorVersion >= 5u
    && SizeOfCmCharacteristics >= 0x88 )
  {
    for ( i = (__int64 *)*((_QWORD *)MiniportAdapterHandle + 64); i; i = (__int64 *)*i )
    {
      if ( i[2] == *(_QWORD *)&AddressFamily->AddressFamily && *((_DWORD *)i + 6) == AddressFamily->MinorVersion )
      {
        v8 = -1073741823;
        goto LABEL_16;
      }
    }
    if ( (unsigned __int8)ndisReferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, 0x4Fu) )
    {
      Pool2 = ExAllocatePool2(64LL, 320LL, 1868776526LL);
      v11 = Pool2;
      if ( Pool2 )
      {
        *(_QWORD *)(Pool2 + 16) = *(_QWORD *)&AddressFamily->AddressFamily;
        *(_DWORD *)(Pool2 + 24) = AddressFamily->MinorVersion;
        *(_OWORD *)(Pool2 + 32) = *(_OWORD *)&CmCharacteristics->MajorVersion;
        *(_OWORD *)(Pool2 + 48) = *(_OWORD *)&CmCharacteristics->CmDeleteVcHandler;
        *(_OWORD *)(Pool2 + 64) = *(_OWORD *)&CmCharacteristics->CmCloseAfHandler;
        *(_OWORD *)(Pool2 + 80) = *(_OWORD *)&CmCharacteristics->CmDeregisterSapHandler;
        *(_OWORD *)(Pool2 + 96) = *(_OWORD *)&CmCharacteristics->CmCloseCallHandler;
        *(_OWORD *)(Pool2 + 112) = *(_OWORD *)&CmCharacteristics->CmAddPartyHandler;
        *(_OWORD *)(Pool2 + 128) = *(_OWORD *)&CmCharacteristics->CmActivateVcCompleteHandler;
        *(_OWORD *)(Pool2 + 144) = *(_OWORD *)&CmCharacteristics->CmModifyCallQoSHandler;
        CmRequestCompleteHandler = CmCharacteristics->CmRequestCompleteHandler;
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_QWORD *)(v11 + 160) = CmRequestCompleteHandler;
        *(_QWORD *)v11 = *((_QWORD *)MiniportAdapterHandle + 64);
        *(_DWORD *)(v11 + 312) = 5;
        *((_QWORD *)MiniportAdapterHandle + 64) = v11;
        ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, 0x4Fu);
        v8 = 0;
      }
      else
      {
        ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, 0x4Fu);
        v8 = -1073741670;
      }
    }
  }
  else
  {
    v8 = -1073741823;
  }
LABEL_16:
  v13 = NewIrql;
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v13);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  return v8;
}
